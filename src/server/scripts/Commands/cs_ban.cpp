/*
 * This file is part of the TrinityCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

/* ScriptData
Name: ban_commandscript
%Complete: 100
Comment: All ban related commands
Category: commandscripts
EndScriptData */

#include "ScriptMgr.h"
#include "AccountMgr.h"
#include "CharacterCache.h"
#include "Chat.h"
#include "ChatCommand.h"
#include "DatabaseEnv.h"
#include "GameTime.h"
#include "IpAddress.h"
#include "Language.h"
#include "ObjectAccessor.h"
#include "ObjectMgr.h"
#include "Player.h"
#include "World.h"
#include "WorldSession.h"

#if TRINITY_COMPILER == TRINITY_COMPILER_GNU
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

using namespace Trinity::ChatCommands;

class ban_commandscript : public CommandScript
{
public:
    ban_commandscript() : CommandScript("ban_commandscript") { }

    ChatCommandTable GetCommands() const override
    {
        static ChatCommandTable unbanCommandTable =
        {
            { "account",        HandleUnBanAccountCommand,              rbac::RBAC_PERM_COMMAND_UNBAN_ACCOUNT,          Console::Yes },
            { "character",      HandleUnBanCharacterCommand,            rbac::RBAC_PERM_COMMAND_UNBAN_CHARACTER,        Console::Yes },
            { "playeraccount",  HandleUnBanAccountByCharCommand,        rbac::RBAC_PERM_COMMAND_UNBAN_PLAYERACCOUNT,    Console::Yes },
            { "ip",             HandleUnBanIPCommand,                   rbac::RBAC_PERM_COMMAND_UNBAN_IP,               Console::Yes },
        };
        static ChatCommandTable banlistCommandTable =
        {
            { "account",        HandleBanListAccountCommand,            rbac::RBAC_PERM_COMMAND_BANLIST_ACCOUNT,        Console::Yes },
            { "character",      HandleBanListCharacterCommand,          rbac::RBAC_PERM_COMMAND_BANLIST_CHARACTER,      Console::Yes },
            { "ip",             HandleBanListIPCommand,                 rbac::RBAC_PERM_COMMAND_BANLIST_IP,             Console::Yes },
        };
        static ChatCommandTable baninfoCommandTable =
        {
            { "account",        HandleBanInfoAccountCommand,            rbac::RBAC_PERM_COMMAND_BANINFO_ACCOUNT,        Console::Yes },
            { "character",      HandleBanInfoCharacterCommand,          rbac::RBAC_PERM_COMMAND_BANINFO_CHARACTER,      Console::Yes },
            { "ip",             HandleBanInfoIPCommand,                 rbac::RBAC_PERM_COMMAND_BANINFO_IP,             Console::Yes },
        };
        static ChatCommandTable banCommandTable =
        {
            { "account",        HandleBanAccountCommand,                rbac::RBAC_PERM_COMMAND_BAN_ACCOUNT,            Console::Yes },
            { "character",      HandleBanCharacterCommand,              rbac::RBAC_PERM_COMMAND_BAN_CHARACTER,          Console::Yes },
            { "playeraccount",  HandleBanAccountByCharCommand,          rbac::RBAC_PERM_COMMAND_BAN_PLAYERACCOUNT,      Console::Yes },
            { "ip",             HandleBanIPCommand,                     rbac::RBAC_PERM_COMMAND_BAN_IP,                 Console::Yes },
        };
        static ChatCommandTable commandTable =
        {
            { "ban",        banCommandTable },
            { "baninfo",    baninfoCommandTable },
            { "banlist",    banlistCommandTable },
            { "unban",      unbanCommandTable },
        };
        return commandTable;
    }

    static bool HandleBanAccountCommand(ChatHandler* handler, char const* args)
    {
        return HandleBanHelper(BAN_ACCOUNT, args, handler);
    }

    static bool HandleBanCharacterCommand(ChatHandler* handler, char const* args)
    {
        if (!*args)
            return false;

        char* nameStr = strtok((char*)args, " ");
        if (!nameStr)
            return false;

        std::string name = nameStr;

        char* durationStr = strtok(nullptr, " ");
        if (!durationStr || !atoi(durationStr))
            return false;

        char* reasonStr = strtok(nullptr, "");
        if (!reasonStr)
            return false;

        if (!normalizePlayerName(name))
        {
            handler->SendSysMessage(LANG_PLAYER_NOT_FOUND);
            handler->SetSentErrorMessage(true);
            return false;
        }

        std::string author = handler->GetSession() ? handler->GetSession()->GetPlayerName() : "Server";

        switch (sWorld->BanCharacter(name, durationStr, reasonStr, author))
        {
            case BAN_SUCCESS:
            {
                if (atoi(durationStr) > 0)
                {
                    if (sWorld->getBoolConfig(CONFIG_SHOW_BAN_IN_WORLD))
                        sWorld->SendWorldText(LANG_BAN_CHARACTER_YOUBANNEDMESSAGE_WORLD, author.c_str(), name.c_str(), secsToTimeString(TimeStringToSecs(durationStr), TimeFormat::ShortText).c_str(), reasonStr);
                    else
                        handler->PSendSysMessage(LANG_BAN_YOUBANNED, name.c_str(), secsToTimeString(TimeStringToSecs(durationStr), TimeFormat::ShortText).c_str(), reasonStr);
                }
                else
                {
                    if (sWorld->getBoolConfig(CONFIG_SHOW_BAN_IN_WORLD))
                        sWorld->SendWorldText(LANG_BAN_CHARACTER_YOUPERMBANNEDMESSAGE_WORLD, author.c_str(), name.c_str(), reasonStr);
                    else
                        handler->PSendSysMessage(LANG_BAN_YOUPERMBANNED, name.c_str(), reasonStr);
                }
                break;
            }
            case BAN_NOTFOUND:
            {
                handler->PSendSysMessage(LANG_BAN_NOTFOUND, "character", name.c_str());
                handler->SetSentErrorMessage(true);
                return false;
            }
            default:
                break;
        }

        return true;
    }

    static bool HandleBanAccountByCharCommand(ChatHandler* handler, char const* args)
    {
        return HandleBanHelper(BAN_CHARACTER, args, handler);
    }

    static bool HandleBanIPCommand(ChatHandler* handler, char const* args)
    {
        return HandleBanHelper(BAN_IP, args, handler);
    }

    static bool IsIPAddress(std::string const& text)
    {
        boost::system::error_code error;
        Trinity::Net::make_address(text, error);
        return !error;
    }

    static bool HandleBanHelper(BanMode mode, char const* args, ChatHandler* handler)
    {
        if (!*args)
            return false;

        char* cnameOrIP = strtok((char*)args, " ");
        if (!cnameOrIP)
            return false;

        std::string nameOrIP = cnameOrIP;

        char* durationStr = strtok(nullptr, " ");
        if (!durationStr || !atoi(durationStr))
            return false;

        char* reasonStr = strtok(nullptr, "");
        if (!reasonStr)
            return false;

        switch (mode)
        {
            case BAN_ACCOUNT:
                if (!Utf8ToUpperOnlyLatin(nameOrIP))
                {
                    handler->PSendSysMessage(LANG_ACCOUNT_NOT_EXIST, nameOrIP.c_str());
                    handler->SetSentErrorMessage(true);
                    return false;
                }
                break;
            case BAN_CHARACTER:
                if (!normalizePlayerName(nameOrIP))
                {
                    handler->SendSysMessage(LANG_PLAYER_NOT_FOUND);
                    handler->SetSentErrorMessage(true);
                    return false;
                }
                break;
            case BAN_IP:
                if (!IsIPAddress(nameOrIP))
                    return false;
                break;
        }

        std::string author = handler->GetSession() ? handler->GetSession()->GetPlayerName() : "Server";

        switch (sWorld->BanAccount(mode, nameOrIP, durationStr, reasonStr, author))
        {
            case BAN_SUCCESS:
                if (atoi(durationStr) > 0)
                {
                    if (sWorld->getBoolConfig(CONFIG_SHOW_BAN_IN_WORLD))
                        sWorld->SendWorldText(LANG_BAN_ACCOUNT_YOUBANNEDMESSAGE_WORLD, author.c_str(), nameOrIP.c_str(), secsToTimeString(TimeStringToSecs(durationStr), TimeFormat::ShortText).c_str(), reasonStr);
                    else
                        handler->PSendSysMessage(LANG_BAN_YOUBANNED, nameOrIP.c_str(), secsToTimeString(TimeStringToSecs(durationStr), TimeFormat::ShortText).c_str(), reasonStr);
                }
                else
                {
                    if (sWorld->getBoolConfig(CONFIG_SHOW_BAN_IN_WORLD))
                        sWorld->SendWorldText(LANG_BAN_ACCOUNT_YOUPERMBANNEDMESSAGE_WORLD, author.c_str(), nameOrIP.c_str(), reasonStr);
                    else
                        handler->PSendSysMessage(LANG_BAN_YOUPERMBANNED, nameOrIP.c_str(), reasonStr);
                }
                break;
            case BAN_SYNTAX_ERROR:
                return false;
            case BAN_NOTFOUND:
                switch (mode)
                {
                    default:
                        handler->PSendSysMessage(LANG_BAN_NOTFOUND, "account", nameOrIP.c_str());
                        break;
                    case BAN_CHARACTER:
                        handler->PSendSysMessage(LANG_BAN_NOTFOUND, "character", nameOrIP.c_str());
                        break;
                    case BAN_IP:
                        handler->PSendSysMessage(LANG_BAN_NOTFOUND, "ip", nameOrIP.c_str());
                        break;
                }
                handler->SetSentErrorMessage(true);
                return false;
            case BAN_EXISTS:
                handler->PSendSysMessage(LANG_BAN_EXISTS);
                break;
        }

        return true;
    }

    static bool HandleBanInfoAccountCommand(ChatHandler* handler, char const* args)
    {
        if (!*args)
            return false;

        char* nameStr = strtok((char*)args, "");
        if (!nameStr)
            return false;

        std::string accountName = nameStr;
        if (!Utf8ToUpperOnlyLatin(accountName))
        {
            handler->PSendSysMessage(LANG_ACCOUNT_NOT_EXIST, accountName.c_str());
            handler->SetSentErrorMessage(true);
            return false;
        }

        uint32 accountId = AccountMgr::GetId(accountName);
        if (!accountId)
        {
            handler->PSendSysMessage(LANG_ACCOUNT_NOT_EXIST, accountName.c_str());
            return true;
        }

        return HandleBanInfoHelper(accountId, accountName.c_str(), handler);
    }

    static bool HandleBanInfoHelper(uint32 accountId, char const* accountName, ChatHandler* handler)
    {
        QueryResult result = LoginDatabase.PQuery("SELECT FROM_UNIXTIME(bandate), unbandate-bandate, active, unbandate, banreason, bannedby FROM account_banned WHERE id = '{}' ORDER BY bandate ASC", accountId);
        if (!result)
        {
            handler->PSendSysMessage(LANG_BANINFO_NOACCOUNTBAN, accountName);
            return true;
        }

        handler->PSendSysMessage(LANG_BANINFO_BANHISTORY, accountName);
        do
        {
            Field* fields = result->Fetch();

            time_t unbanDate = time_t(fields[3].GetUInt32());
            bool active = false;
            if (fields[2].GetBool() && (fields[1].GetUInt64() == uint64(0) || unbanDate >= GameTime::GetGameTime()))
                active = true;
            bool permanent = (fields[1].GetUInt64() == uint64(0));
            std::string banTime = permanent ? handler->GetTrinityString(LANG_BANINFO_INFINITE) : secsToTimeString(fields[1].GetUInt64(), TimeFormat::ShortText);
            handler->PSendSysMessage(LANG_BANINFO_HISTORYENTRY,
                fields[0].GetCString(), banTime.c_str(), active ? handler->GetTrinityString(LANG_YES) : handler->GetTrinityString(LANG_NO), fields[4].GetCString(), fields[5].GetCString());
        }
        while (result->NextRow());

        return true;
    }

    static bool HandleBanInfoCharacterCommand(ChatHandler* handler, char const* args)
    {
        if (!*args)
            return false;

        std::string name(args);
        if (!normalizePlayerName(name))
        {
            handler->SendSysMessage(LANG_BANINFO_NOCHARACTER);
            handler->SetSentErrorMessage(true);
            return false;
        }

        Player* target = ObjectAccessor::FindPlayerByName(name);
        ObjectGuid targetGuid;

        if (!target)
        {
            targetGuid = sCharacterCache->GetCharacterGuidByName(name);
            if (targetGuid.IsEmpty())
            {
                handler->SendSysMessage(LANG_BANINFO_NOCHARACTER);
                handler->SetSentErrorMessage(true);
                return false;
            }
        }
        else
            targetGuid = target->GetGUID();

        CharacterDatabasePreparedStatement* stmt = CharacterDatabase.GetPreparedStatement(CHAR_SEL_BANINFO);
        stmt->setUInt64(0, targetGuid.GetCounter());
        PreparedQueryResult result = CharacterDatabase.Query(stmt);
        if (!result)
        {
            handler->PSendSysMessage(LANG_CHAR_NOT_BANNED, name.c_str());
            return true;
        }

        handler->PSendSysMessage(LANG_BANINFO_BANHISTORY, name.c_str());
        do
        {
            Field* fields = result->Fetch();
            time_t unbanDate = fields[3].GetInt64();
            bool active = false;
            if (fields[2].GetUInt8() && (!fields[1].GetInt64() || unbanDate >= GameTime::GetGameTime()))
                active = true;
            bool permanent = (fields[1].GetInt64() == SI64LIT(0));
            std::string banTime = permanent ? handler->GetTrinityString(LANG_BANINFO_INFINITE) : secsToTimeString(fields[1].GetInt64(), TimeFormat::ShortText);
            handler->PSendSysMessage(LANG_BANINFO_HISTORYENTRY,
                TimeToTimestampStr(fields[0].GetInt64()).c_str(), banTime.c_str(), active ? handler->GetTrinityString(LANG_YES) : handler->GetTrinityString(LANG_NO), fields[4].GetCString(), fields[5].GetCString());
        }
        while (result->NextRow());

        return true;
    }

    static bool HandleBanInfoIPCommand(ChatHandler* handler, std::string& ip)
    {
        if (!IsIPAddress(ip))
            return false;

        LoginDatabase.EscapeString(ip);
        QueryResult result = LoginDatabase.PQuery("SELECT ip, FROM_UNIXTIME(bandate), FROM_UNIXTIME(unbandate), unbandate-UNIX_TIMESTAMP(), banreason, bannedby, unbandate-bandate FROM ip_banned WHERE ip = '{}'", ip);
        if (!result)
        {
            handler->PSendSysMessage(LANG_BANINFO_NOIP);
            return true;
        }

        Field* fields = result->Fetch();
        bool permanent = !fields[6].GetUInt64();
        handler->PSendSysMessage(LANG_BANINFO_IPENTRY,
            fields[0].GetCString(), fields[1].GetCString(), permanent ? handler->GetTrinityString(LANG_BANINFO_NEVER) : fields[2].GetCString(),
            permanent ? handler->GetTrinityString(LANG_BANINFO_INFINITE) : secsToTimeString(fields[3].GetUInt64(), TimeFormat::ShortText).c_str(), fields[4].GetCString(), fields[5].GetCString());

        return true;
    }

    static bool HandleBanListAccountCommand(ChatHandler* handler, char const* args)
    {
        LoginDatabasePreparedStatement* stmt = nullptr;

        stmt = LoginDatabase.GetPreparedStatement(LOGIN_DEL_EXPIRED_IP_BANS);
        LoginDatabase.Execute(stmt);

        char* filterStr = strtok((char*)args, " ");
        std::string filter = filterStr ? filterStr : "";

        PreparedQueryResult result;

        if (filter.empty())
        {
            stmt = LoginDatabase.GetPreparedStatement(LOGIN_SEL_ACCOUNT_BANNED_ALL);
            result = LoginDatabase.Query(stmt);
        }
        else
        {
            stmt = LoginDatabase.GetPreparedStatement(LOGIN_SEL_ACCOUNT_BANNED_BY_FILTER);
            stmt->setString(0, filter);
            result = LoginDatabase.Query(stmt);
        }

        if (!result)
        {
            handler->PSendSysMessage(LANG_BANLIST_NOACCOUNT);
            return true;
        }

        return HandleBanListHelper(result, handler);
    }

    static bool HandleBanListHelper(PreparedQueryResult result, ChatHandler* handler)
    {
        handler->PSendSysMessage(LANG_BANLIST_MATCHINGACCOUNT);

        // Chat short output
        if (handler->GetSession())
        {
            do
            {
                Field* fields = result->Fetch();
                uint32 accountid = fields[0].GetUInt32();

                QueryResult banResult = LoginDatabase.PQuery("SELECT account.username FROM account, account_banned WHERE account_banned.id='{}' AND account_banned.id = account.id", accountid);
                if (banResult)
                {
                    Field* fields2 = banResult->Fetch();
                    handler->PSendSysMessage("%s", fields2[0].GetCString());
                }
            }
            while (result->NextRow());
        }
        // Console wide output
        else
        {
            handler->SendSysMessage(LANG_BANLIST_ACCOUNTS);
            handler->SendSysMessage(" ===============================================================================");
            handler->SendSysMessage(LANG_BANLIST_ACCOUNTS_HEADER);
            do
            {
                handler->SendSysMessage("-------------------------------------------------------------------------------");
                Field* fields = result->Fetch();
                uint32 accountId = fields[0].GetUInt32();

                std::string accountName;

                // "account" case, name can be get in same query
                if (result->GetFieldCount() > 1)
                    accountName = fields[1].GetString();
                // "character" case, name need extract from another DB
                else
                    AccountMgr::GetName(accountId, accountName);

                // No SQL injection. id is uint32.
                QueryResult banInfo = LoginDatabase.PQuery("SELECT bandate, unbandate, bannedby, banreason FROM account_banned WHERE id = {} ORDER BY unbandate", accountId);
                if (banInfo)
                {
                    Field* fields2 = banInfo->Fetch();
                    do
                    {
                        time_t timeBan = time_t(fields2[0].GetUInt32());
                        tm tmBan;
                        localtime_r(&timeBan, &tmBan);

                        if (fields2[0].GetUInt32() == fields2[1].GetUInt32())
                        {
                            handler->PSendSysMessage("|%-15.15s|%02d-%02d-%02d %02d:%02d|   permanent  |%-15.15s|%-15.15s|",
                                accountName.c_str(), tmBan.tm_year%100, tmBan.tm_mon+1, tmBan.tm_mday, tmBan.tm_hour, tmBan.tm_min,
                                fields2[2].GetCString(), fields2[3].GetCString());
                        }
                        else
                        {
                            time_t timeUnban = time_t(fields2[1].GetUInt32());
                            tm tmUnban;
                            localtime_r(&timeUnban, &tmUnban);
                            handler->PSendSysMessage("|%-15.15s|%02d-%02d-%02d %02d:%02d|%02d-%02d-%02d %02d:%02d|%-15.15s|%-15.15s|",
                                accountName.c_str(), tmBan.tm_year%100, tmBan.tm_mon+1, tmBan.tm_mday, tmBan.tm_hour, tmBan.tm_min,
                                tmUnban.tm_year%100, tmUnban.tm_mon+1, tmUnban.tm_mday, tmUnban.tm_hour, tmUnban.tm_min,
                                fields2[2].GetCString(), fields2[3].GetCString());
                        }
                    }
                    while (banInfo->NextRow());
                }
            }
            while (result->NextRow());

            handler->SendSysMessage(" ===============================================================================");
        }

        return true;
    }

    static bool HandleBanListCharacterCommand(ChatHandler* handler, char const* args)
    {
        if (!*args)
            return false;

        char* filterStr = strtok((char*)args, " ");
        if (!filterStr)
            return false;

        std::string filter(filterStr);
        CharacterDatabasePreparedStatement* stmt = CharacterDatabase.GetPreparedStatement(CHAR_SEL_GUID_BY_NAME_FILTER);
        stmt->setString(0, filter);
        PreparedQueryResult result = CharacterDatabase.Query(stmt);
        if (!result)
        {
            handler->PSendSysMessage(LANG_BANLIST_NOCHARACTER);
            return true;
        }

        handler->PSendSysMessage(LANG_BANLIST_MATCHINGCHARACTER);

        // Chat short output
        if (handler->GetSession())
        {
            do
            {
                Field* fields = result->Fetch();
                CharacterDatabasePreparedStatement* stmt2 = CharacterDatabase.GetPreparedStatement(CHAR_SEL_BANNED_NAME);
                stmt2->setUInt64(0, fields[0].GetUInt64());
                PreparedQueryResult banResult = CharacterDatabase.Query(stmt2);
                if (banResult)
                    handler->PSendSysMessage("%s", (*banResult)[0].GetCString());
            }
            while (result->NextRow());
        }
        // Console wide output
        else
        {
            handler->SendSysMessage(LANG_BANLIST_CHARACTERS);
            handler->SendSysMessage(" =============================================================================== ");
            handler->SendSysMessage(LANG_BANLIST_CHARACTERS_HEADER);
            do
            {
                handler->SendSysMessage("-------------------------------------------------------------------------------");

                Field* fields = result->Fetch();

                std::string char_name = fields[1].GetString();

                CharacterDatabasePreparedStatement* stmt2 = CharacterDatabase.GetPreparedStatement(CHAR_SEL_BANINFO_LIST);
                stmt2->setUInt64(0, fields[0].GetUInt64());
                PreparedQueryResult banInfo = CharacterDatabase.Query(stmt2);
                if (banInfo)
                {
                    Field* banFields = banInfo->Fetch();
                    do
                    {
                        time_t timeBan = banFields[0].GetInt64();
                        tm tmBan;
                        localtime_r(&timeBan, &tmBan);

                        if (banFields[0].GetInt64() == banFields[1].GetInt64())
                        {
                            handler->PSendSysMessage("|%-15.15s|%02d-%02d-%02d %02d:%02d|   permanent  |%-15.15s|%-15.15s|",
                                char_name.c_str(), tmBan.tm_year%100, tmBan.tm_mon+1, tmBan.tm_mday, tmBan.tm_hour, tmBan.tm_min,
                                banFields[2].GetCString(), banFields[3].GetCString());
                        }
                        else
                        {
                            time_t timeUnban = banFields[1].GetInt64();
                            tm tmUnban;
                            localtime_r(&timeUnban, &tmUnban);
                            handler->PSendSysMessage("|%-15.15s|%02d-%02d-%02d %02d:%02d|%02d-%02d-%02d %02d:%02d|%-15.15s|%-15.15s|",
                                char_name.c_str(), tmBan.tm_year%100, tmBan.tm_mon+1, tmBan.tm_mday, tmBan.tm_hour, tmBan.tm_min,
                                tmUnban.tm_year%100, tmUnban.tm_mon+1, tmUnban.tm_mday, tmUnban.tm_hour, tmUnban.tm_min,
                                banFields[2].GetCString(), banFields[3].GetCString());
                        }
                    }
                    while (banInfo->NextRow());
                }
            }
            while (result->NextRow());
            handler->SendSysMessage(" =============================================================================== ");
        }

        return true;
    }

    static bool HandleBanListIPCommand(ChatHandler* handler, char const* args)
    {
        LoginDatabasePreparedStatement* stmt = LoginDatabase.GetPreparedStatement(LOGIN_DEL_EXPIRED_IP_BANS);
        LoginDatabase.Execute(stmt);

        char* filterStr = strtok((char*)args, " ");
        std::string filter = filterStr ? filterStr : "";
        LoginDatabase.EscapeString(filter);

        PreparedQueryResult result;

        if (filter.empty())
        {
            stmt = LoginDatabase.GetPreparedStatement(LOGIN_SEL_IP_BANNED_ALL);
            result = LoginDatabase.Query(stmt);
        }
        else
        {
            stmt = LoginDatabase.GetPreparedStatement(LOGIN_SEL_IP_BANNED_BY_IP);
            stmt->setString(0, filter);
            result = LoginDatabase.Query(stmt);
        }

        if (!result)
        {
            handler->PSendSysMessage(LANG_BANLIST_NOIP);
            return true;
        }

        handler->PSendSysMessage(LANG_BANLIST_MATCHINGIP);
        // Chat short output
        if (handler->GetSession())
        {
            do
            {
                Field* fields = result->Fetch();
                handler->PSendSysMessage("%s", fields[0].GetCString());
            }
            while (result->NextRow());
        }
        // Console wide output
        else
        {
            handler->SendSysMessage(LANG_BANLIST_IPS);
            handler->SendSysMessage(" ===============================================================================");
            handler->SendSysMessage(LANG_BANLIST_IPS_HEADER);
            do
            {
                handler->SendSysMessage("-------------------------------------------------------------------------------");
                Field* fields = result->Fetch();
                time_t timeBan = time_t(fields[1].GetUInt32());
                tm tmBan;
                localtime_r(&timeBan, &tmBan);
                if (fields[1].GetUInt32() == fields[2].GetUInt32())
                {
                    handler->PSendSysMessage("|%-15.15s|%02d-%02d-%02d %02d:%02d|   permanent  |%-15.15s|%-15.15s|",
                        fields[0].GetCString(), tmBan.tm_year%100, tmBan.tm_mon+1, tmBan.tm_mday, tmBan.tm_hour, tmBan.tm_min,
                        fields[3].GetCString(), fields[4].GetCString());
                }
                else
                {
                    time_t timeUnban = time_t(fields[2].GetUInt32());
                    tm tmUnban;
                    localtime_r(&timeUnban, &tmUnban);
                    handler->PSendSysMessage("|%-15.15s|%02d-%02d-%02d %02d:%02d|%02d-%02d-%02d %02d:%02d|%-15.15s|%-15.15s|",
                        fields[0].GetCString(), tmBan.tm_year%100, tmBan.tm_mon+1, tmBan.tm_mday, tmBan.tm_hour, tmBan.tm_min,
                        tmUnban.tm_year%100, tmUnban.tm_mon+1, tmUnban.tm_mday, tmUnban.tm_hour, tmUnban.tm_min,
                        fields[3].GetCString(), fields[4].GetCString());
                }
            }
            while (result->NextRow());

            handler->SendSysMessage(" ===============================================================================");
        }

        return true;
    }

    static bool HandleUnBanAccountCommand(ChatHandler* handler, char const* args)
    {
        return HandleUnBanHelper(BAN_ACCOUNT, args, handler);
    }

    static bool HandleUnBanCharacterCommand(ChatHandler* handler, char const* args)
    {
        if (!*args)
            return false;

        char* nameStr = strtok((char*)args, " ");
        if (!nameStr)
            return false;

        std::string name = nameStr;

        if (!normalizePlayerName(name))
        {
            handler->SendSysMessage(LANG_PLAYER_NOT_FOUND);
            handler->SetSentErrorMessage(true);
            return false;
        }

        if (!sWorld->RemoveBanCharacter(name))
        {
            handler->SendSysMessage(LANG_PLAYER_NOT_FOUND);
            handler->SetSentErrorMessage(true);
            return false;
        }

        handler->PSendSysMessage(LANG_UNBAN_UNBANNED, name.c_str());
        return true;
    }

    static bool HandleUnBanAccountByCharCommand(ChatHandler* handler, char const* args)
    {
        return HandleUnBanHelper(BAN_CHARACTER, args, handler);
    }

    static bool HandleUnBanIPCommand(ChatHandler* handler, char const* args)
    {
        return HandleUnBanHelper(BAN_IP, args, handler);
    }

    static bool HandleUnBanHelper(BanMode mode, char const* args, ChatHandler* handler)
    {
        if (!*args)
            return false;

        char* nameOrIPStr = strtok((char*)args, " ");
        if (!nameOrIPStr)
            return false;

        std::string nameOrIP = nameOrIPStr;

        switch (mode)
        {
            case BAN_ACCOUNT:
                if (!Utf8ToUpperOnlyLatin(nameOrIP))
                {
                    handler->PSendSysMessage(LANG_ACCOUNT_NOT_EXIST, nameOrIP.c_str());
                    handler->SetSentErrorMessage(true);
                    return false;
                }
                break;
            case BAN_CHARACTER:
                if (!normalizePlayerName(nameOrIP))
                {
                    handler->SendSysMessage(LANG_PLAYER_NOT_FOUND);
                    handler->SetSentErrorMessage(true);
                    return false;
                }
                break;
            case BAN_IP:
                if (!IsIPAddress(nameOrIP))
                    return false;
                break;
        }

        if (sWorld->RemoveBanAccount(mode, nameOrIP))
            handler->PSendSysMessage(LANG_UNBAN_UNBANNED, nameOrIP.c_str());
        else
            handler->PSendSysMessage(LANG_UNBAN_ERROR, nameOrIP.c_str());

        return true;
    }
};

void AddSC_ban_commandscript()
{
    new ban_commandscript();
}
