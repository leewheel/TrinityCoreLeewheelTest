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

#ifndef TRINITYCORE_CORPSE_H
#define TRINITYCORE_CORPSE_H

#include "Object.h"
#include "GridObject.h"
#include "DatabaseEnvFwd.h"
#include "GridDefines.h"
#include "IteratorPair.h"

struct Loot;

enum CorpseType
{
    CORPSE_BONES             = 0,
    CORPSE_RESURRECTABLE_PVE = 1,
    CORPSE_RESURRECTABLE_PVP = 2
};
#define MAX_CORPSE_TYPE        3

// Value equal client resurrection dialog show radius.
#define CORPSE_RECLAIM_RADIUS 39

enum CorpseFlags
{
    CORPSE_FLAG_NONE        = 0x00,
    CORPSE_FLAG_BONES       = 0x01,
    CORPSE_FLAG_UNK1        = 0x02,
    CORPSE_FLAG_PVP         = 0x04,
    CORPSE_FLAG_HIDE_HELM   = 0x08,
    CORPSE_FLAG_HIDE_CLOAK  = 0x10,
    CORPSE_FLAG_SKINNABLE   = 0x20,
    CORPSE_FLAG_FFA_PVP     = 0x40
};

class TC_GAME_API Corpse : public WorldObject, public GridObject<Corpse>
{
    public:
        explicit Corpse(CorpseType type = CORPSE_BONES);
        ~Corpse();

    protected:
        void BuildValuesCreate(ByteBuffer* data, Player const* target) const override;
        void BuildValuesUpdate(ByteBuffer* data, Player const* target) const override;
        void BuildValuesUpdateCompat(ObjectUpdateType updatetype, ByteBuffer* data, Player const* target) const override;
        void BuildDynamicValuesUpdateCompat(ObjectUpdateType updatetype, ByteBuffer* data, Player const* target) const override;
        void ClearUpdateMask(bool remove) override;

    public:
        void BuildValuesUpdateForPlayerWithMask(UpdateData* data, UF::ObjectData::Mask const& requestedObjectMask,
            UF::CorpseData::Mask const& requestedCorpseMask, Player const* target) const;

        struct ValuesUpdateForPlayerWithMaskSender // sender compatible with MessageDistDeliverer
        {
            explicit ValuesUpdateForPlayerWithMaskSender(Corpse const* owner) : Owner(owner) { }

            Corpse const* Owner;
            UF::ObjectData::Base ObjectMask;
            UF::CorpseData::Base CorpseMask;

            void operator()(Player const* player) const;
        };

        void AddToWorld() override;
        void RemoveFromWorld() override;

        bool Create(ObjectGuid::LowType guidlow, Map* map);
        bool Create(ObjectGuid::LowType guidlow, Player* owner);

        void SaveToDB();
        bool LoadCorpseFromDB(ObjectGuid::LowType guid, Field* fields);

        void DeleteFromDB(CharacterDatabaseTransaction trans);
        static void DeleteFromDB(ObjectGuid const& ownerGuid, CharacterDatabaseTransaction trans);

        CorpseDynFlags GetCorpseDynamicFlags() const { return CorpseDynFlags(*m_corpseData->DynamicFlags); }
        void SetCorpseDynamicFlag(CorpseDynFlags dynamicFlags) {
            SetFlag(UF::CORPSE_FIELD_DYNAMIC_FLAGS, dynamicFlags);
            SetUpdateFieldFlagValue(m_values.ModifyValue(&Corpse::m_corpseData).ModifyValue(&UF::CorpseData::DynamicFlags), dynamicFlags);
        }
        void RemoveCorpseDynamicFlag(CorpseDynFlags dynamicFlags) {
            RemoveFlag(UF::CORPSE_FIELD_DYNAMIC_FLAGS, dynamicFlags);
            RemoveUpdateFieldFlagValue(m_values.ModifyValue(&Corpse::m_corpseData).ModifyValue(&UF::CorpseData::DynamicFlags), dynamicFlags);
        }
        void ReplaceAllCorpseDynamicFlags(CorpseDynFlags dynamicFlags) {
            SetUInt32Value(UF::CORPSE_FIELD_DYNAMIC_FLAGS, dynamicFlags);
            SetUpdateFieldValue(m_values.ModifyValue(&Corpse::m_corpseData).ModifyValue(&UF::CorpseData::DynamicFlags), dynamicFlags);
        }

        ObjectGuid GetOwnerGUID() const override { return m_corpseData->Owner; }
        void SetOwnerGUID(ObjectGuid owner) {
            SetGuidValue(UF::CORPSE_FIELD_OWNER, owner);
			SetUpdateFieldValue(m_values.ModifyValue(&Corpse::m_corpseData).ModifyValue(&UF::CorpseData::Owner), owner);
        }
        void SetPartyGUID(ObjectGuid partyGuid) {
            SetGuidValue(UF::CORPSE_FIELD_PARTY_GUID, partyGuid);
            SetUpdateFieldValue(m_values.ModifyValue(&Corpse::m_corpseData).ModifyValue(&UF::CorpseData::PartyGUID), partyGuid);
        }
        void SetGuildGUID(ObjectGuid guildGuid) {
            SetGuidValue(UF::CORPSE_FIELD_GUILD_GUID, guildGuid);
            SetUpdateFieldValue(m_values.ModifyValue(&Corpse::m_corpseData).ModifyValue(&UF::CorpseData::GuildGUID), guildGuid);
        }
        void SetDisplayId(uint32 displayId) {
            SetUInt32Value(UF::CORPSE_FIELD_DISPLAY_ID, displayId);
            SetUpdateFieldValue(m_values.ModifyValue(&Corpse::m_corpseData).ModifyValue(&UF::CorpseData::DisplayID), displayId);
        }
        void SetRace(uint8 race) {
            SetByteValue(UF::CORPSE_FIELD_BYTES_1, 0, race);
            SetUpdateFieldValue(m_values.ModifyValue(&Corpse::m_corpseData).ModifyValue(&UF::CorpseData::RaceID), race);
        }
        void SetClass(uint8 playerClass) {
            SetByteValue(UF::CORPSE_FIELD_BYTES_1, 2, playerClass);
            SetUpdateFieldValue(m_values.ModifyValue(&Corpse::m_corpseData).ModifyValue(&UF::CorpseData::Class), playerClass);
        }
        void SetSex(uint8 sex) {
            SetByteValue(UF::CORPSE_FIELD_BYTES_1, 1, sex);
            SetUpdateFieldValue(m_values.ModifyValue(&Corpse::m_corpseData).ModifyValue(&UF::CorpseData::Sex), sex);
        }
        void ReplaceAllFlags(uint32 flags) {
            SetUInt32Value(UF::CORPSE_FIELD_FLAGS, flags);
            SetUpdateFieldValue(m_values.ModifyValue(&Corpse::m_corpseData).ModifyValue(&UF::CorpseData::Flags), flags);
        }
        void SetFactionTemplate(int32 factionTemplate) {
            SetInt32Value(UF::CORPSE_FIELD_FACTION_TEMPLATE, factionTemplate);
            SetUpdateFieldValue(m_values.ModifyValue(&Corpse::m_corpseData).ModifyValue(&UF::CorpseData::FactionTemplate), factionTemplate);
        }
        uint32 GetFaction() const override { return m_corpseData->FactionTemplate; }
        void SetFaction(uint32 faction) override { SetFactionTemplate(faction); }
        void SetItem(uint32 slot, uint32 item) {
            SetUInt32Value(UF::CORPSE_FIELD_ITEMS + slot, item);
            SetUpdateFieldValue(m_values.ModifyValue(&Corpse::m_corpseData).ModifyValue(&UF::CorpseData::Items, slot), item);
        }

        template<typename Iter>
        void SetCustomizations(Trinity::IteratorPair<Iter> customizations)
        {
            uint32 index = 0;
            for (auto&& customization : customizations)
            {
                auto custom = m_values.ModifyValue(&Corpse::m_corpseData).ModifyValue(&UF::CorpseData::Customizations, index);
                SetUpdateFieldFlagValue(custom.ModifyValue(&UF::ChrCustomizationChoice::ChrCustomizationOptionID), customization.ChrCustomizationOptionID);
                SetUpdateFieldFlagValue(custom.ModifyValue(&UF::ChrCustomizationChoice::ChrCustomizationChoiceID), customization.ChrCustomizationChoiceID);
                index++;
            }

            for (; index < m_corpseData->Customizations.size(); index++)
            {
                auto custom = m_values.ModifyValue(&Corpse::m_corpseData).ModifyValue(&UF::CorpseData::Customizations, index);
                SetUpdateFieldFlagValue(custom.ModifyValue(&UF::ChrCustomizationChoice::ChrCustomizationOptionID), 0);
                SetUpdateFieldFlagValue(custom.ModifyValue(&UF::ChrCustomizationChoice::ChrCustomizationChoiceID), 0);
            }
        }

        time_t const& GetGhostTime() const { return m_time; }
        void ResetGhostTime();
        CorpseType GetType() const { return m_type; }

        CellCoord const& GetCellCoord() const { return _cellCoord; }
        void SetCellCoord(CellCoord const& cellCoord) { _cellCoord = cellCoord; }

        std::unique_ptr<Loot> m_loot;
        Loot* GetLootForPlayer(Player const* /*player*/) const override { return m_loot.get(); }

        Player* lootRecipient;

        bool IsExpired(time_t t) const;

        UF::UpdateField<UF::CorpseData, 0, TYPEID_CORPSE> m_corpseData;

    private:
        CorpseType m_type;
        time_t m_time;
        CellCoord _cellCoord;
};
#endif
