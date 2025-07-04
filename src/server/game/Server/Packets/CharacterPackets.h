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

#ifndef TRINITYCORE_CHARACTER_PACKETS_H
#define TRINITYCORE_CHARACTER_PACKETS_H

#include "Packet.h"
#include "ObjectGuid.h"
#include "Optional.h"
#include "PacketUtilities.h"
#include "Position.h"
#include "RaceMask.h"
#include "SharedDefines.h"
#include "UnitDefines.h"
#include "UpdateFields.h"
#include <array>
#include <memory>

class Field;

namespace UF
{
    struct ChrCustomizationChoice;

    ByteBuffer& operator<<(ByteBuffer& data, ChrCustomizationChoice const& customizationChoice);
    ByteBuffer& operator>>(ByteBuffer& data, ChrCustomizationChoice& customizationChoice);
}

namespace WorldPackets
{
    namespace Character
    {
        using ChrCustomizationChoice = UF::ChrCustomizationChoice;

        class EnumCharacters final : public ClientPacket
        {
        public:
            explicit EnumCharacters(WorldPacket&& packet);

            void Read() override { }
        };

        struct CharacterCreateInfo
        {
            /// User specified variables
            uint8 Race            = RACE_NONE;
            uint8 Class           = CLASS_NONE;
            uint8 Sex             = GENDER_NONE;
            Array<ChrCustomizationChoice, 250> Customizations;
            Optional<int32> TemplateSet;
            int32 TimerunningSeasonID = 0;
            bool IsTrialBoost     = false;
            bool UseNPE           = false;
            bool HardcoreSelfFound = false;
            std::string Name;

            /// Server side data
            uint8 CharCount  = 0;
        };

        struct CharacterRenameInfo
        {
            std::string NewName;
            ObjectGuid Guid;
        };

        struct CharCustomizeInfo
        {
            ObjectGuid CharGUID;
            uint8 SexID             = GENDER_NONE;
            std::string CharName;
            Array<ChrCustomizationChoice, 250> Customizations;
        };

        struct CharRaceOrFactionChangeInfo
        {
            uint8 RaceID            = RACE_NONE;
            uint8 InitialRaceID     = RACE_NONE;
            uint8 SexID             = GENDER_NONE;
            ObjectGuid Guid;
            bool FactionChange      = false;
            std::string Name;
            Array<ChrCustomizationChoice, 250> Customizations;
        };

        struct CharacterUndeleteInfo
        {
            /// User specified variables
            ObjectGuid CharacterGuid; ///< Guid of the character to restore
            int32 ClientToken    = 0; ///< @todo: research

            /// Server side data
            std::string Name;
        };

        struct CustomTabardInfo
        {
            int32 EmblemStyle = -1;
            int32 EmblemColor = -1;
            int32 BorderStyle = -1;
            int32 BorderColor = -1;
            int32 BackgroundColor = -1;
        };

        struct WarbandGroupMember
        {
            uint32 WarbandScenePlacementID = 0;
            int32 Type = 0;
            ObjectGuid Guid;
        };

        struct WarbandGroup
        {
            uint64 GroupID = 0;
            uint8 OrderIndex = 0;
            uint32 WarbandSceneID = 0;
            uint32 Flags = 0;    ///< enum WarbandGroupFlags { Collapsed = 1 }
            std::vector<WarbandGroupMember> Members;
            std::string_view Name;
        };

        class EnumCharactersResult final : public ServerPacket
        {
        public:
            struct CharacterInfoBasic
            {
                /**
                 * @fn  void WorldPackets::Character::EnumCharactersResult::CharacterInfo::CharacterInfo(Field* fields);
                 *
                 * @brief   Initialize the struct with values from QueryResult
                 *
                 * @param   fields         Field set of CharacterDatabaseStatements::CHAR_SEL_ENUM
                 */
                CharacterInfoBasic(Field const* fields);

                ObjectGuid Guid;
                uint32 VirtualRealmAddress = 0;
                uint64 GuildClubMemberID = 0; ///< same as bgs.protocol.club.v1.MemberId.unique_id, guessed basing on SMSG_QUERY_PLAYER_NAME_RESPONSE (that one is known)
                std::string Name;
                uint16 ListPosition      = 0; ///< Order of the characters in list
                uint8 RaceID             = 0;
                uint8 ClassID            = 0;
                uint8 SexID              = 0;
                std::vector<ChrCustomizationChoice> Customizations;
                uint8 ExperienceLevel    = 0;
                int32 ZoneID             = 0;
                int32 MapID              = 0;
                TaggedPosition<Position::XYZ> PreloadPos;
                ObjectGuid GuildGUID;
                uint32 Flags             = 0; ///< Character flag @see enum CharacterFlags
                uint32 Flags2            = 0; ///< Character customization flags @see enum CharacterCustomizeFlags
                uint32 Flags3            = 0; ///< Character flags 3 @todo research
                uint32 Flags4            = 0; ///< Character flags 4 @todo research
                bool FirstLogin      = false;
                uint8 CantLoginReason    = 0;
                Timestamp<> LastActiveTime;
                uint16 SpecID            = 0;
                uint32 SaveVersion       = 0;
                uint32 LastLoginVersion  = 0;
                uint32 OverrideSelectScreenFileDataID = 0;
                int32 TimerunningSeasonID = 0;

                uint32 PetCreatureDisplayID = 0;
                uint32 PetExperienceLevel   = 0;
                uint32 PetCreatureFamilyID  = 0;

                int32 ProfessionIds[2] = { }; ///< @todo

                struct VisualItemInfo
                {
                    uint32 DisplayID        = 0;
                    uint32 DisplayEnchantID = 0;
                    int32 SecondaryItemModifiedAppearanceID = 0; // also -1 is some special value
                    uint8 InvType           = 0;
                    uint8 Subclass          = 0;
                    uint32 ItemID           = 0;
                    uint32 TransmogrifiedItemID = 0;
                };

                std::array<VisualItemInfo, 19> VisualItems = { };
                CustomTabardInfo PersonalTabard;
                uint32 Unused1110_1 = 0;
                bool Unused1110_2 = false;
                bool Unused1110_3 = false;
            };

            struct CharacterRestrictionAndMailData
            {
                bool BoostInProgress = false; ///< @todo
                uint32 RestrictionFlags  = 0;
                std::vector<std::string> MailSenders;
                std::vector<uint32> MailSenderTypes;
                bool RpeResetAvailable = false;
                bool RpeResetQuestClearAvailable = false;
            };

            struct CharacterInfo
            {
                CharacterInfo(Field const* fields);

                CharacterInfoBasic Basic;
                CharacterRestrictionAndMailData RestrictionsAndMails;
            };

            struct RegionwideCharacterListEntry
            {
                RegionwideCharacterListEntry(Field const* fields);

                CharacterInfoBasic Basic;
                uint64 Money = 0;
                float AvgEquippedItemLevel = 0.0f;
                float CurrentSeasonMythicPlusOverallScore = 0.0f;
                uint32 CurrentSeasonBestPvpRating = 0;
                int8 PvpRatingBracket = 0;
                int16 PvpRatingAssociatedSpecID = 0;
            };

            struct RaceUnlock
            {
                int8 RaceID = 0;
                bool HasUnlockedLicense = false;
                bool HasUnlockedAchievement = false;
                bool HasHeritageArmorUnlockAchievement = false;
                bool HideRaceOnClient = false;
                bool Unused1027 = false;
            };

            struct UnlockedConditionalAppearance
            {
                int32 AchievementID = 0;
                int32 ConditionalType = 0;
            };

            struct RaceLimitDisableInfo
            {
                enum
                {
                    Server,
                    Level
                };

                int8 RaceID = 0;
                int32 Reason = 0;
            };

            explicit EnumCharactersResult() : ServerPacket(SMSG_ENUM_CHARACTERS_RESULT) { }

            WorldPacket const* Write() override;

            bool Success                          = false;
            bool Realmless                        = false;
            bool IsDeletedCharacters              = false; ///< used for character undelete list
            bool IgnoreNewPlayerRestrictions      = false; ///< allows client to skip new player restrictions
            bool IsRestrictedNewPlayer            = false; ///< forbids using level boost and class trials
            bool IsNewcomerChatCompleted          = false; ///< forbids hero classes and allied races
            bool IsRestrictedTrial                = false;
            bool DontCreateCharacterDisplays      = false;

            int32 MaxCharacterLevel     = 1;
            Optional<uint32> ClassDisableMask;

            std::vector<CharacterInfo> Characters; ///< all characters on the list
            std::vector<RegionwideCharacterListEntry> RegionwideCharacters;
            std::vector<RaceUnlock> RaceUnlockData;
            std::vector<UnlockedConditionalAppearance> UnlockedConditionalAppearances;
            std::vector<RaceLimitDisableInfo> RaceLimitDisables;
            std::vector<WarbandGroup> WarbandGroups;
        };

        class CheckCharacterNameAvailability final : public ClientPacket
        {
        public:
            explicit CheckCharacterNameAvailability(WorldPacket&& packet) : ClientPacket(CMSG_CHECK_CHARACTER_NAME_AVAILABILITY, std::move(packet)) { }

            void Read() override;

            uint32 SequenceIndex = 0;
            std::string Name;
        };

        class CheckCharacterNameAvailabilityResult final : public ServerPacket
        {
        public:
            explicit CheckCharacterNameAvailabilityResult(uint32 sequenceIndex, uint32 result) : ServerPacket(SMSG_CHECK_CHARACTER_NAME_AVAILABILITY_RESULT, 4 + 4),
                SequenceIndex(sequenceIndex), Result(result)
            {
            }

            WorldPacket const* Write() override;

            uint32 SequenceIndex;
            uint32 Result;
        };

        class CreateCharacter final : public ClientPacket
        {
        public:
            explicit CreateCharacter(WorldPacket&& packet) : ClientPacket(CMSG_CREATE_CHARACTER, std::move(packet)) { }

            void Read() override;

            /**
             * @var uint8 Race
             * @var uint8 Class
             * @var uint8 Sex
             * @var uint8 Skin
             * @var uint8 Face
             * @var uint8 HairStyle
             * @var uint8 HairColor
             * @var uint8 FacialHairStyle
             * @var uint8 OutfitId
             * @var Optional<int32> TemplateSet
             * @var std::string Name
             */
            std::shared_ptr<CharacterCreateInfo> CreateInfo;
        };

        class CreateChar final : public ServerPacket
        {
        public:
            explicit CreateChar() : ServerPacket(SMSG_CREATE_CHAR, 1) { }

            WorldPacket const* Write() override;

            uint8 Code = 0; ///< Result code @see enum ResponseCodes
            ObjectGuid Guid;
        };

        class CharDelete final : public ClientPacket
        {
        public:
            explicit CharDelete(WorldPacket&& packet): ClientPacket(CMSG_CHAR_DELETE, std::move(packet)) { }

            void Read() override;

            ObjectGuid Guid; ///< Guid of the character to delete
        };

        class DeleteChar final : public ServerPacket
        {
        public:
            explicit DeleteChar(): ServerPacket(SMSG_DELETE_CHAR, 1) { }

            WorldPacket const* Write() override;

            uint8 Code = 0; ///< Result code @see enum ResponseCodes
        };

        class CharacterRenameRequest final : public ClientPacket
        {
        public:
            explicit CharacterRenameRequest(WorldPacket&& packet) : ClientPacket(CMSG_CHARACTER_RENAME_REQUEST, std::move(packet)) { }

            void Read() override;

            /**
             * @var std::string NewName
             * @var ObjectGuid Guid
             */
            std::shared_ptr<CharacterRenameInfo> RenameInfo;
        };

        class CharacterRenameResult final : public ServerPacket
        {
        public:
            explicit CharacterRenameResult() : ServerPacket(SMSG_CHARACTER_RENAME_RESULT, 20) { }

            WorldPacket const* Write() override;

            std::string Name;
            uint8 Result = 0;
            Optional<ObjectGuid> Guid;
        };

        class CharCustomize final : public ClientPacket
        {
        public:
            explicit CharCustomize(WorldPacket&& packet) : ClientPacket(CMSG_CHAR_CUSTOMIZE, std::move(packet)) { }

            void Read() override;

            /**
             * @var uint8 HairStyleID
             * @var uint8 FaceID
             * @var ObjectGuid CharGUID
             * @var uint8 SexID
             * @var std::string CharName
             * @var uint8 HairColorID
             * @var uint8 FacialHairStyleID
             * @var uint8 SkinID
             */
            std::shared_ptr<CharCustomizeInfo> CustomizeInfo;
        };

        /// @todo: CharCustomizeResult

        class CharRaceOrFactionChange final : public ClientPacket
        {
        public:
            explicit CharRaceOrFactionChange(WorldPacket&& packet) : ClientPacket(CMSG_CHAR_RACE_OR_FACTION_CHANGE, std::move(packet)) { }

            void Read() override;

            /**
             * @var Optional<uint8> HairColorID
             * @var uint8 RaceID
             * @var uint8 SexID
             * @var Optional<uint8> SkinID
             * @var Optional<uint8> FacialHairStyleID
             * @var ObjectGuid Guid
             * @var bool FactionChange
             * @var std::string Name
             * @var Optional<uint8> FaceID
             * @var Optional<uint8> HairStyleID
             */
            std::shared_ptr<CharRaceOrFactionChangeInfo> RaceOrFactionChangeInfo;
        };

        struct CharFactionChangeDisplayInfo
        {
            std::string Name;
            uint8 SexID             = 0;
            uint8 RaceID            = RACE_NONE;
            Array<ChrCustomizationChoice, 250> const* Customizations = nullptr;
        };

        class CharFactionChangeResult final : public ServerPacket
        {
        public:
            explicit CharFactionChangeResult() : ServerPacket(SMSG_CHAR_FACTION_CHANGE_RESULT, 20 + sizeof(CharFactionChangeDisplayInfo)) { }

            WorldPacket const* Write() override;

            uint8 Result = 0; ///< @see enum ResponseCodes
            ObjectGuid Guid;
            Optional<CharFactionChangeDisplayInfo> Display;
        };

        class GenerateRandomCharacterName final : public ClientPacket
        {
        public:
            explicit GenerateRandomCharacterName(WorldPacket&& packet) : ClientPacket(CMSG_GENERATE_RANDOM_CHARACTER_NAME, std::move(packet)) { }

            void Read() override;

            uint8 Sex = 0;
            uint8 Race = 0;
        };

        class GenerateRandomCharacterNameResult final : public ServerPacket
        {
        public:
            explicit GenerateRandomCharacterNameResult() : ServerPacket(SMSG_GENERATE_RANDOM_CHARACTER_NAME_RESULT, 20) { }

            WorldPacket const* Write() override;

            std::string Name;
            bool Success = false;
        };

        class ReorderCharacters final : public ClientPacket
        {
        public:
            struct ReorderInfo
            {
                ObjectGuid PlayerGUID;
                uint8 NewPosition = 0;
            };

            explicit ReorderCharacters(WorldPacket&& packet);

            void Read() override;

            Array<ReorderInfo, 200> Entries;
        };

        class UndeleteCharacter final : public ClientPacket
        {
        public:
            explicit UndeleteCharacter(WorldPacket&& packet) : ClientPacket(CMSG_UNDELETE_CHARACTER, std::move(packet)) { }

            void Read() override;

            /**
             * @var ObjectGuid CharacterGuid
             * @var int32 ClientToken
             */
            std::shared_ptr<CharacterUndeleteInfo> UndeleteInfo;
        };

        class UndeleteCharacterResponse final : public ServerPacket
        {
        public:
            explicit UndeleteCharacterResponse() : ServerPacket(SMSG_UNDELETE_CHARACTER_RESPONSE, 26) { }

            WorldPacket const* Write() override;

            /**
             * @var ObjectGuid CharacterGuid
             * @var int32 ClientToken
             */
            CharacterUndeleteInfo const* UndeleteInfo = nullptr;
            uint32 Result = 0; ///< @see enum CharacterUndeleteResult
        };

        class GetUndeleteCharacterCooldownStatus final : public ClientPacket
        {
        public:
            explicit GetUndeleteCharacterCooldownStatus(WorldPacket&& packet) : ClientPacket(CMSG_GET_UNDELETE_CHARACTER_COOLDOWN_STATUS, std::move(packet)) { }

            void Read() override { }
        };

        class UndeleteCooldownStatusResponse final : public ServerPacket
        {
        public:
            explicit UndeleteCooldownStatusResponse() : ServerPacket(SMSG_UNDELETE_COOLDOWN_STATUS_RESPONSE, 9) { }

            WorldPacket const* Write() override;

            uint32 MaxCooldown     = 0; ///< Max. cooldown until next free character restoration. Displayed in undelete confirm message. (in sec)
            uint32 CurrentCooldown = 0; ///< Current cooldown until next free character restoration. (in sec)
            bool OnCooldown    = false; ///<
        };

        class PlayerLogin final : public ClientPacket
        {
        public:
            explicit PlayerLogin(WorldPacket&& packet) : ClientPacket(CMSG_PLAYER_LOGIN, std::move(packet)) { }

            void Read() override;

            ObjectGuid Guid;      ///< Guid of the player that is logging in
            float FarClip = 0.0f; ///< Visibility distance (for terrain)
        };

        class LoginVerifyWorld final : public ServerPacket
        {
        public:
            explicit LoginVerifyWorld() : ServerPacket(SMSG_LOGIN_VERIFY_WORLD, 4 + 4 * 4 + 4) { }

            WorldPacket const* Write() override;

            int32 MapID = -1;
            TaggedPosition<Position::XYZO> Pos;
            uint32 Reason = 0;
        };

        enum class LoginFailureReason : uint8
        {
            Failed                          = 0,
            NoWorld                         = 1,
            DuplicateCharacter              = 2,
            NoInstances                     = 3,
            Disabled                        = 4,
            NoCharacter                     = 5,
            LockedForTransfer               = 6,
            LockedByBilling                 = 7,
            LockedByMobileAH                = 8,
            TemporaryGMLock                 = 9,
            LockedByCharacterUpgrade        = 10,
            LockedByRevokedCharacterUpgrade = 11,
            LockedByRevokedVASTransaction   = 17,
            LockedByRestriction             = 19,
            LockedForRealmPlaytype          = 23
        };

        class CharacterLoginFailed  final : public ServerPacket
        {
        public:
            explicit CharacterLoginFailed(LoginFailureReason code) : ServerPacket(SMSG_CHARACTER_LOGIN_FAILED, 1), Code(code) { }

            WorldPacket const* Write() override;

            LoginFailureReason Code = LoginFailureReason::Failed;
        };

        class LogoutRequest final : public ClientPacket
        {
        public:
            explicit LogoutRequest(WorldPacket&& packet) : ClientPacket(CMSG_LOGOUT_REQUEST, std::move(packet)) { }

            void Read() override;

            bool IdleLogout = false;
        };

        class LogoutResponse final : public ServerPacket
        {
        public:
            explicit LogoutResponse() : ServerPacket(SMSG_LOGOUT_RESPONSE, 4 + 1) { }

            WorldPacket const* Write() override;

            int32 LogoutResult = 0;
            bool Instant = false;
        };

        struct GameModeData
        {
            int32 Unknown_1107_0 = 0;
            ObjectGuid Guid;
            uint8 GameMode = 0;
            int32 MapID = 0;
            uint8 Unknown_1107_1 = 0;
            uint8 Unknown_1107_2 = 0;
            uint8 Unknown_1107_3 = 0;
            Array<ChrCustomizationChoice, 250> Customizations;
            Array<ChrCustomizationChoice, 250> Unknown_1107_4;
        };

        struct SwitchGameModeData
        {
            bool IsFastLogin = false;
            GameModeData Current;
            GameModeData New;
        };

        class LogoutComplete final : public ServerPacket
        {
        public:
            LogoutComplete() : ServerPacket(SMSG_LOGOUT_COMPLETE, 1) { }

            WorldPacket const* Write() override;

            std::unique_ptr<SwitchGameModeData> SwitchGameMode;
        };

        class LogoutCancel final : public ClientPacket
        {
        public:
            explicit LogoutCancel(WorldPacket&& packet) : ClientPacket(CMSG_LOGOUT_CANCEL, std::move(packet)) { }

            void Read() override { }
        };

        class LogoutCancelAck final : public ServerPacket
        {
        public:
            explicit LogoutCancelAck() : ServerPacket(SMSG_LOGOUT_CANCEL_ACK, 0) { }

            WorldPacket const* Write() override { return &_worldPacket; }
        };

        class LoadingScreenNotify final : public ClientPacket
        {
        public:
            explicit LoadingScreenNotify(WorldPacket&& packet) : ClientPacket(CMSG_LOADING_SCREEN_NOTIFY, std::move(packet)) { }

            void Read() override;

            int32 MapID = -1;
            bool Showing = false;
        };

        class InitialSetup final : public ServerPacket
        {
        public:
            explicit InitialSetup() : ServerPacket(SMSG_INITIAL_SETUP, 1 + 1) { }

            WorldPacket const* Write() override;

            uint8 ServerExpansionTier = 0;
            uint8 ServerExpansionLevel = 0;
        };

        class SetActionBarToggles final : public ClientPacket
        {
        public:
            explicit SetActionBarToggles(WorldPacket&& packet) : ClientPacket(CMSG_SET_ACTION_BAR_TOGGLES, std::move(packet)) { }

            void Read() override;

            uint8 Mask = 0;
        };

        class RequestPlayedTime final : public ClientPacket
        {
        public:
            explicit RequestPlayedTime(WorldPacket&& packet) : ClientPacket(CMSG_REQUEST_PLAYED_TIME, std::move(packet)) { }

            void Read() override;

            bool TriggerScriptEvent = false;
        };

        class PlayedTime final : public ServerPacket
        {
        public:
            explicit PlayedTime() : ServerPacket(SMSG_PLAYED_TIME, 9) { }

            WorldPacket const* Write() override;

            int32 TotalTime = 0;
            int32 LevelTime = 0;
            bool TriggerEvent = false;
        };

        class SetTitle final : public ClientPacket
        {
        public:
            explicit SetTitle(WorldPacket&& packet) : ClientPacket(CMSG_SET_TITLE, std::move(packet)) { }

            void Read() override;

            int32 TitleID = 0;
        };

        class AlterApperance final : public ClientPacket
        {
        public:
            explicit AlterApperance(WorldPacket&& packet) : ClientPacket(CMSG_ALTER_APPEARANCE, std::move(packet)) { }

            void Read() override;

            uint8 NewSex = 0;
            Array<ChrCustomizationChoice, 250> Customizations;
            int8 CustomizedRace = 0;
            int32 CustomizedChrModelID = 0;
            int8 UnalteredVisualRaceID = 0;
        };

        class BarberShopResult final : public ServerPacket
        {
        public:
            enum class ResultEnum : uint8
            {
                Success = 0,
                NoMoney = 1,
                NotOnChair = 2,
                NoMoney2 = 3
            };

            explicit BarberShopResult(ResultEnum result) : ServerPacket(SMSG_BARBER_SHOP_RESULT, 4), Result(result) { }

            WorldPacket const* Write() override;

            ResultEnum Result = ResultEnum::Success;
        };

        class LogXPGain final : public ServerPacket
        {
        public:
            explicit LogXPGain() : ServerPacket(SMSG_LOG_XP_GAIN, 16 + 4 + 1 + 4 + 4) { }

            WorldPacket const* Write() override;

            ObjectGuid Victim;
            int32 Original = 0;
            uint8 Reason = 0;
            int32 Amount = 0;
            float GroupBonus = 0.0f;
        };

        class TitleEarned final : public ServerPacket
        {
        public:
            explicit TitleEarned(OpcodeServer opcode) : ServerPacket(opcode, 4) { }

            WorldPacket const* Write() override;

            uint32 Index = 0;
        };

        class SetFactionAtWar final : public ClientPacket
        {
        public:
            explicit SetFactionAtWar(WorldPacket&& packet) : ClientPacket(CMSG_SET_FACTION_AT_WAR, std::move(packet)) { }

            void Read() override;

            uint16 FactionIndex = 0;
        };

        class SetFactionNotAtWar final : public ClientPacket
        {
        public:
            explicit SetFactionNotAtWar(WorldPacket&& packet) : ClientPacket(CMSG_SET_FACTION_NOT_AT_WAR, std::move(packet)) { }

            void Read() override;

            uint16 FactionIndex = 0;
        };

        class SetFactionInactive final : public ClientPacket
        {
        public:
            explicit SetFactionInactive(WorldPacket&& packet) : ClientPacket(CMSG_SET_FACTION_INACTIVE, std::move(packet)) { }

            void Read() override;

            uint32 Index = 0;
            bool State = false;
        };

        class SetWatchedFaction final : public ClientPacket
        {
        public:
            explicit SetWatchedFaction(WorldPacket&& packet) : ClientPacket(CMSG_SET_WATCHED_FACTION, std::move(packet)) { }

            void Read() override;

            uint32 FactionIndex = 0;
        };

        class SetFactionVisible : public ServerPacket
        {
        public:
            explicit SetFactionVisible(bool visible) : ServerPacket(visible ? SMSG_SET_FACTION_VISIBLE : SMSG_SET_FACTION_NOT_VISIBLE, 4) { }

            WorldPacket const* Write() override;

            uint32 FactionIndex = 0;
        };

        class CharCustomizeSuccess final : public ServerPacket
        {
        public:
            explicit CharCustomizeSuccess(CharCustomizeInfo const* customizeInfo);

            WorldPacket const* Write() override;

            ObjectGuid CharGUID;
            std::string CharName;
            uint8 SexID = 0;
            Array<ChrCustomizationChoice, 250> const& Customizations;
        };

        class CharCustomizeFailure final : public ServerPacket
        {
        public:
            explicit CharCustomizeFailure() : ServerPacket(SMSG_CHAR_CUSTOMIZE_FAILURE, 1 + 16) { }

            WorldPacket const* Write() override;

            uint8 Result = 0;
            ObjectGuid CharGUID;
        };

        class SetPlayerDeclinedNames final : public ClientPacket
        {
        public:
            explicit SetPlayerDeclinedNames(WorldPacket&& packet) : ClientPacket(CMSG_SET_PLAYER_DECLINED_NAMES, std::move(packet)) { }

            void Read() override;

            ObjectGuid Player;
            DeclinedName DeclinedNames;
        };

        class SetPlayerDeclinedNamesResult final : public ServerPacket
        {
        public:
            explicit SetPlayerDeclinedNamesResult() : ServerPacket(SMSG_SET_PLAYER_DECLINED_NAMES_RESULT, 8 + 4) { }

            WorldPacket const* Write() override;

            ObjectGuid Player;
            int32 ResultCode = 0;
        };

        class SavePersonalEmblem final : public ClientPacket
        {
        public:
            explicit SavePersonalEmblem(WorldPacket&& packet) : ClientPacket(CMSG_SAVE_PERSONAL_EMBLEM, std::move(packet)) { }

            void Read() override;

            ObjectGuid Vendor;
            CustomTabardInfo PersonalTabard;
        };

        class PlayerSavePersonalEmblem final : public ServerPacket
        {
        public:
            explicit PlayerSavePersonalEmblem(int32 error) : ServerPacket(SMSG_PLAYER_SAVE_PERSONAL_EMBLEM, 4), Error(error) { }

            WorldPacket const* Write() override;

            int32 Error;
        };
    }
}

#endif // TRINITYCORE_CHARACTER_PACKETS_H
