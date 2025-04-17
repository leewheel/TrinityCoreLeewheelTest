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

#include "Banner.h"
#include "GitRevision.h"
#include "StringFormat.h"
#include <string>
#include "GitRevision.h"
#include <sstream>
#include <unordered_map>

std::string FormatBuildDateTime(const char* dateStr, const char* timeStr)
{
    std::unordered_map<std::string, std::string> monthMap = {
        {"Jan", "1"}, {"Feb", "2"}, {"Mar", "3"}, {"Apr", "4"},
        {"May", "5"}, {"Jun", "6"}, {"Jul", "7"}, {"Aug", "8"},
        {"Sep", "9"}, {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"}
    };

    // 解析日期
    std::istringstream dateStream(dateStr);
    std::string mon, day, year;
    dateStream >> mon >> day >> year;

    // 去除前导0
    if (day[0] == '0')
        day = day.substr(1);

    // 解析时间
    std::istringstream timeStream(timeStr);
    std::string hour, minute, second;
    std::getline(timeStream, hour, ':');
    std::getline(timeStream, minute, ':');
    std::getline(timeStream, second, ':');

    return +"YEAR" + year + "MONTH" + monthMap[mon] + "DAY" + day +
        hour + "HOUR" + minute + "MIN" + second + "SEC";
}



void Trinity::Banner::Show(char const* applicationName, void(*log)(char const* text), void(*logExtraInfo)())
{
    log(Trinity::StringFormat("{} ({})", GitRevision::GetFullVersion(), applicationName).c_str());
    log(R"(<Ctrl-C> to stop.)" "\n");
    log(R"( ______                       __)");
    log(R"(/\__  _\       __          __/\ \__)");
    log(R"(\/_/\ \/ _ __ /\_\    ___ /\_\ \, _\  __  __)");
    log(R"(   \ \ \/\`'__\/\ \ /' _ `\/\ \ \ \/ /\ \/\ \)");
    log(R"(    \ \ \ \ \/ \ \ \/\ \/\ \ \ \ \ \_\ \ \_\ \)");
    log(R"(     \ \_\ \_\  \ \_\ \_\ \_\ \_\ \__\\/`____ \)");
    log(R"(      \/_/\/_/   \/_/\/_/\/_/\/_/\/__/ `/___/> \)");
    log(R"(                                 C O R E  /\___/)");
    log(R"(http://TrinityCore.org                    \/__/)" "\n");

    log("这只是一个经典怀旧服....alpha中的alpha版本\n");

    log(Trinity::StringFormat("编译时间: {}\n", FormatBuildDateTime(__DATE__, __TIME__)).c_str());

    if (logExtraInfo)
        logExtraInfo();
}
