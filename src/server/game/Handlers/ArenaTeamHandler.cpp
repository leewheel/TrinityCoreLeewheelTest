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

#include "WorldSession.h"
#include "ArenaTeam.h"
#include "ArenaTeamMgr.h"
#include "BattlegroundMgr.h"
#include "BattlegroundPackets.h"
#include "CharacterCache.h"
#include "Log.h"
#include "ObjectAccessor.h"
#include "ObjectMgr.h"
#include "Opcodes.h"
#include "Player.h"
#include "SocialMgr.h"
#include "World.h"
#include "WorldPacket.h"


void WorldSession::HandleArenaTeamRoster(WorldPackets::Battleground::ArenaTeamRosterRequest& rosterRequest)
{
    TC_LOG_DEBUG("network", "WORLD: Received CMSG_ARENA_TEAM_ROSTER");

    Player* player = GetPlayer();

    if (!player)
        return;

    uint32 arenaTeamId = player->GetArenaTeamId(rosterRequest.TeamIndex);

    if (ArenaTeam* arenaTeam = sArenaTeamMgr->GetArenaTeamById(arenaTeamId))
    {
        //TODO response (this should already be enough for vanilla).
        //WorldPackets::Battleground::ArenaTeamRosterResponse
        assert(false);
    }
}
