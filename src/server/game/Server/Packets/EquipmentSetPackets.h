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

#ifndef TRINITYCORE_EQUIPMENT_SET_PACKETS_H
#define TRINITYCORE_EQUIPMENT_SET_PACKETS_H

#include "Packet.h"
#include "EquipmentSet.h"
#include "ItemPacketsCommon.h"

namespace WorldPackets
{
    namespace EquipmentSet
    {
        class EquipmentSetID final : public ServerPacket
        {
        public:
            explicit EquipmentSetID() : ServerPacket(SMSG_EQUIPMENT_SET_ID, 8 + 4 + 4) { }

            WorldPacket const* Write() override;

            uint64 GUID  = 0; ///< Set Identifier
            int32 Type = 0;
            uint32 SetID = 0; ///< Index
        };

        class LoadEquipmentSet final : public ServerPacket
        {
        public:
            explicit LoadEquipmentSet() : ServerPacket(SMSG_LOAD_EQUIPMENT_SET, 4) { }

            WorldPacket const* Write() override;

            std::vector<EquipmentSetInfo::EquipmentSetData const*> SetData;
        };

        class SaveEquipmentSet final : public ClientPacket
        {
        public:
            explicit SaveEquipmentSet(WorldPacket&& packet) : ClientPacket(CMSG_SAVE_EQUIPMENT_SET, std::move(packet)) { }

            void Read() override;

            EquipmentSetInfo::EquipmentSetData Set;
        };

        class DeleteEquipmentSet final : public ClientPacket
        {
        public:
            explicit DeleteEquipmentSet(WorldPacket&& packet) : ClientPacket(CMSG_DELETE_EQUIPMENT_SET, std::move(packet)) { }

            void Read() override;

            uint64 ID = 0;
        };

        class UseEquipmentSet final : public ClientPacket
        {
        public:
            explicit UseEquipmentSet(WorldPacket&& packet) : ClientPacket(CMSG_USE_EQUIPMENT_SET, std::move(packet)) { }

            void Read() override;

            struct EquipmentSetItem
            {
                ObjectGuid Item;
                uint8 ContainerSlot     = 0;
                uint8 Slot              = 0;
            };

            WorldPackets::Item::InvUpdate Inv;
            EquipmentSetItem Items[EQUIPMENT_SET_SLOTS];
            uint64 GUID = 0; ///< Set Identifier
        };

        class UseEquipmentSetResult final : public ServerPacket
        {
        public:
            explicit UseEquipmentSetResult() : ServerPacket(SMSG_USE_EQUIPMENT_SET_RESULT, 8 + 1) { }

            WorldPacket const* Write() override;

            uint64 GUID = 0; ///< Set Identifier
            int32 Reason = 0;
        };
    }
}

#endif // TRINITYCORE_EQUIPMENT_SET_PACKETS_H
