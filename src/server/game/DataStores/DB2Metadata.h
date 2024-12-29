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

#ifndef DB2Metadata_h__
#define DB2Metadata_h__

#include "DB2Meta.h"

struct AchievementMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[15] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1260179, 3, 15, 15, 0x19FCE7B0, fields, 11);
        return &instance;
    }
};

struct Achievement_CategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1324299, 1, 4, 4, 0x286BF460, fields, 3);
        return &instance;
    }
};

struct AdventureJournalMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[22] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 2, false },
            { FT_BYTE, 2, false },
        };
        static constexpr DB2Meta instance(1115949, -1, 22, 22, 0xAF456C4F, fields, -1);
        return &instance;
    }
};

struct AdventureMapPOIMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_FLOAT, 2, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1267070, -1, 12, 12, 0x1F9BE763, fields, -1);
        return &instance;
    }
};

struct AlliedRaceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1710672, 0, 8, 8, 0xBA13C058, fields, -1);
        return &instance;
    }
};

struct AlliedRaceRacialAbilityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1720145, -1, 5, 4, 0x5FF19738, fields, 4);
        return &instance;
    }
};

struct AnimKitMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1304323, -1, 3, 3, 0xE6EFB281, fields, -1);
        return &instance;
    }
};

struct AnimKitBoneSetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1375433, -1, 5, 5, 0x6EA7D66E, fields, -1);
        return &instance;
    }
};

struct AnimKitBoneSetAliasMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1266937, -1, 2, 2, 0x7D887630, fields, -1);
        return &instance;
    }
};

struct AnimKitConfigMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1300872, -1, 1, 1, 0x3144FD89, fields, -1);
        return &instance;
    }
};

struct AnimKitConfigBoneSetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1300873, -1, 3, 2, 0x44BD4A5F, fields, 2);
        return &instance;
    }
};

struct AnimKitPriorityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1266540, -1, 1, 1, 0x8DFC060A, fields, -1);
        return &instance;
    }
};

struct AnimKitReplacementMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1559807, 0, 5, 4, 0x51CD53BB, fields, 4);
        return &instance;
    }
};

struct AnimKitSegmentMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[18] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1304324, -1, 18, 18, 0x827B9DD7, fields, 0);
        return &instance;
    }
};

struct AnimReplacementMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1301100, 0, 5, 4, 0xA5ADECEB, fields, 4);
        return &instance;
    }
};

struct AnimReplacementSetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1284817, -1, 1, 1, 0x8AD1EA47, fields, -1);
        return &instance;
    }
};

struct AnimaCableMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[35] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(3286805, -1, 35, 35, 0xBA340158, fields, -1);
        return &instance;
    }
};

struct AnimaCylinderMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3286804, -1, 7, 7, 0x033E8736, fields, -1);
        return &instance;
    }
};

struct AnimaMaterialMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[31] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 3, true },
        };
        static constexpr DB2Meta instance(3153990, -1, 31, 31, 0x23D776A4, fields, -1);
        return &instance;
    }
};

struct AnimationDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1375431, -1, 4, 4, 0x00A3FC97, fields, -1);
        return &instance;
    }
};

struct AoiBoxMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_FLOAT, 6, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2140223, -1, 5, 4, 0x534BA29E, fields, 4);
        return &instance;
    }
};

struct AreaConditionalDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2123730, 1, 5, 4, 0x1F0DE7F6, fields, 4);
        return &instance;
    }
};

struct AreaFarClipOverrideMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1537162, -1, 4, 4, 0xB15D39C4, fields, -1);
        return &instance;
    }
};

struct AreaGroupMemberMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1093406, -1, 2, 1, 0xE55374B3, fields, 1);
        return &instance;
    }
};

struct AreaPOIMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[17] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1000630, 2, 17, 17, 0xEDDE9CE9, fields, 11);
        return &instance;
    }
};

struct AreaPOIStateMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1000631, -1, 5, 4, 0x960E0BAF, fields, 4);
        return &instance;
    }
};

struct AreaTableMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[23] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 2, true },
            { FT_SHORT, 4, false },
        };
        static constexpr DB2Meta instance(1353545, -1, 23, 23, 0x2AFB00FF, fields, -1);
        return &instance;
    }
};

struct AreaTriggerMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[16] =
        {
            { FT_STRING, 1, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1354401, 2, 16, 16, 0xB4CC10CD, fields, -1);
        return &instance;
    }
};

struct AreaTriggerActionSetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1352378, -1, 1, 1, 0x7E8012C8, fields, -1);
        return &instance;
    }
};

struct AreaTriggerBoxMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_FLOAT, 3, true },
        };
        static constexpr DB2Meta instance(1332554, -1, 1, 1, 0x16CBAF21, fields, -1);
        return &instance;
    }
};

struct AreaTriggerCreatePropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1937227, -1, 2, 2, 0x5E136A9C, fields, -1);
        return &instance;
    }
};

struct AreaTriggerCylinderMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1121943, -1, 3, 3, 0x7E59ED0C, fields, -1);
        return &instance;
    }
};

struct AreaTriggerSphereMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1315630, -1, 1, 1, 0xBF0CB8AA, fields, -1);
        return &instance;
    }
};

struct ArenaCcItemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3849793, 0, 3, 2, 0x8611CEBF, fields, 2);
        return &instance;
    }
};

struct ArmorLocationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1284818, -1, 5, 5, 0xCC7C0C3B, fields, -1);
        return &instance;
    }
};

struct AuctionHouseMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1237439, -1, 4, 4, 0x05DD4C81, fields, -1);
        return &instance;
    }
};

struct AuctionHouseCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(4366440, 2, 9, 8, 0xB60740F7, fields, 8);
        return &instance;
    }
};

struct BankBagSlotPricesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1284819, -1, 1, 1, 0x2B6DC00F, fields, -1);
        return &instance;
    }
};

struct BannedAddonsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1373459, -1, 3, 3, 0xFFC1F2CD, fields, -1);
        return &instance;
    }
};

struct BarberShopStyleMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1237437, 2, 8, 8, 0x4AA6B25C, fields, -1);
        return &instance;
    }
};

struct BattlePetAbilityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(841610, -1, 7, 7, 0x7BF6E30A, fields, -1);
        return &instance;
    }
};

struct BattlePetAbilityEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 6, true },
        };
        static constexpr DB2Meta instance(801575, 0, 7, 7, 0x44578ACF, fields, 1);
        return &instance;
    }
};

struct BattlePetAbilityStateMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(801576, -1, 3, 2, 0x9D4FB27A, fields, 2);
        return &instance;
    }
};

struct BattlePetAbilityTurnMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(801577, 0, 6, 6, 0xB7645CF1, fields, 1);
        return &instance;
    }
};

struct BattlePetBreedQualityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(801578, -1, 2, 2, 0xAFB434F3, fields, -1);
        return &instance;
    }
};

struct BattlePetBreedStateMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(801579, -1, 3, 2, 0x81A935E5, fields, 2);
        return &instance;
    }
};

struct BattlePetDisplayOverrideMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1802988, -1, 4, 4, 0x7A75AAF8, fields, -1);
        return &instance;
    }
};

struct BattlePetEffectPropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING_NOT_LOCALIZED, 6, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 6, false },
        };
        static constexpr DB2Meta instance(801580, -1, 3, 3, 0x1B17CCC2, fields, -1);
        return &instance;
    }
};

struct BattlePetNPCTeamMemberMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(841648, -1, 1, 1, 0x1AC95960, fields, -1);
        return &instance;
    }
};

struct BattlePetSpeciesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(841622, 2, 11, 11, 0xD48B948B, fields, -1);
        return &instance;
    }
};

struct BattlePetSpeciesStateMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(801581, -1, 3, 2, 0x5E6F6BB2, fields, 2);
        return &instance;
    }
};

struct BattlePetSpeciesXAbilityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(801582, -1, 4, 3, 0x082EEB57, fields, 3);
        return &instance;
    }
};

struct BattlePetStateMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(801583, -1, 3, 3, 0x0A2EE604, fields, -1);
        return &instance;
    }
};

struct BattlePetVisualMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(801584, -1, 7, 7, 0x396EBE73, fields, -1);
        return &instance;
    }
};

struct BattlemasterListMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[17] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 16, true },
        };
        static constexpr DB2Meta instance(1360265, -1, 17, 17, 0x20452B4C, fields, -1);
        return &instance;
    }
};

struct BeamEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1525607, -1, 10, 10, 0xDF394077, fields, -1);
        return &instance;
    }
};

struct BoneWindModifierModelMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1467254, -1, 2, 2, 0x7672F976, fields, 0);
        return &instance;
    }
};

struct BoneWindModifiersMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1416756, -1, 2, 2, 0xA304C1DE, fields, -1);
        return &instance;
    }
};

struct BonusRollMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1983274, -1, 4, 4, 0x0ED811D4, fields, -1);
        return &instance;
    }
};

struct BountyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1367866, -1, 5, 4, 0xF58B46A2, fields, 4);
        return &instance;
    }
};

struct BountySetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1367865, -1, 2, 2, 0xD368532B, fields, -1);
        return &instance;
    }
};

struct BroadcastTextMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 2, false },
            { FT_SHORT, 3, false },
            { FT_SHORT, 3, false },
        };
        static constexpr DB2Meta instance(841604, 2, 11, 11, 0x762EC396, fields, -1);
        return &instance;
    }
};

struct CameraEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1117695, -1, 1, 1, 0xFEAD817F, fields, -1);
        return &instance;
    }
};

struct CameraEffectEntryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[16] =
        {
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1117696, -1, 16, 15, 0xCE956A7C, fields, 15);
        return &instance;
    }
};

struct CameraModeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1343308, -1, 11, 11, 0x35E65B99, fields, -1);
        return &instance;
    }
};

struct CampaignMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_STRING, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(2031607, 3, 7, 7, 0x4E5DD51D, fields, -1);
        return &instance;
    }
};

struct CampaignXConditionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2031611, -1, 3, 2, 0xD2349DA5, fields, 2);
        return &instance;
    }
};

struct CampaignXQuestLineMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(2036722, -1, 3, 3, 0xDF3D2FCA, fields, 0);
        return &instance;
    }
};

struct CastableRaidBuffsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1283018, -1, 2, 1, 0xB8BB3BB3, fields, 1);
        return &instance;
    }
};

struct CelestialBodyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[15] =
        {
            { FT_FLOAT, 3, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 2, true },
            { FT_FLOAT, 2, true },
            { FT_INT, 2, true },
            { FT_FLOAT, 2, true },
            { FT_FLOAT, 2, true },
        };
        static constexpr DB2Meta instance(1592470, 1, 15, 15, 0xB9732DAC, fields, -1);
        return &instance;
    }
};

struct Cfg_CategoriesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_STRING, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1068162, -1, 6, 6, 0x9DEF38FC, fields, -1);
        return &instance;
    }
};

struct Cfg_ConfigsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1080949, -1, 4, 4, 0xCB5833EB, fields, -1);
        return &instance;
    }
};

struct Cfg_RegionsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1082876, -1, 5, 5, 0x46753F3C, fields, -1);
        return &instance;
    }
};

struct CharBaseInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1343386, -1, 2, 2, 0xF9E59B1E, fields, -1);
        return &instance;
    }
};

struct CharBaseSectionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1375798, -1, 3, 3, 0xDA5163F4, fields, -1);
        return &instance;
    }
};

struct CharComponentTextureLayoutsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1360262, -1, 2, 2, 0x98462100, fields, -1);
        return &instance;
    }
};

struct CharComponentTextureSectionsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1360263, -1, 7, 7, 0x7C4B248E, fields, -1);
        return &instance;
    }
};

struct CharHairGeosetsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1256914, -1, 10, 10, 0xD716D8C3, fields, 0);
        return &instance;
    }
};

struct CharSectionConditionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2388725, -1, 6, 5, 0x2AD06503, fields, 5);
        return &instance;
    }
};

struct CharShipmentMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(972425, -1, 9, 9, 0x43F2E414, fields, 0);
        return &instance;
    }
};

struct CharShipmentContainerMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[16] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(972405, -1, 16, 16, 0x5369BFD6, fields, -1);
        return &instance;
    }
};

struct CharStartOutfitMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 24, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1237591, -1, 7, 6, 0x6B9CB185, fields, 6);
        return &instance;
    }
};

struct CharTitlesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1349054, -1, 4, 4, 0x7B6E3975, fields, -1);
        return &instance;
    }
};

struct CharacterFacialHairStylesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 5, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1369752, -1, 4, 4, 0x3B700736, fields, -1);
        return &instance;
    }
};

struct CharacterLoadoutMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_LONG, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1344281, 1, 5, 5, 0x9E8DD26A, fields, -1);
        return &instance;
    }
};

struct CharacterLoadoutItemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1302846, -1, 2, 2, 0xFE6D6D4D, fields, 0);
        return &instance;
    }
};

struct CharacterServiceInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1815417, -1, 11, 11, 0x069030E0, fields, -1);
        return &instance;
    }
};

struct ChatChannelsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1345278, 2, 6, 6, 0x331D8CF2, fields, -1);
        return &instance;
    }
};

struct ChatProfanityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1117084, -1, 2, 2, 0x151A97E2, fields, -1);
        return &instance;
    }
};

struct ChrClassRaceSexMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1306188, -1, 6, 6, 0xC05CAB5B, fields, -1);
        return &instance;
    }
};

struct ChrClassTitleMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1267497, -1, 3, 3, 0x17144A39, fields, -1);
        return &instance;
    }
};

struct ChrClassUIDisplayMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1316515, -1, 3, 3, 0x03C969CC, fields, -1);
        return &instance;
    }
};

struct ChrClassVillainMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1267498, -1, 3, 3, 0x1341BFBD, fields, -1);
        return &instance;
    }
};

struct ChrClassesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[24] =
        {
            { FT_STRING, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1361031, 5, 24, 24, 0xC9F80A6A, fields, -1);
        return &instance;
    }
};

struct ChrClassesXPowerTypesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1121420, -1, 2, 1, 0x0B71BB3C, fields, 1);
        return &instance;
    }
};

struct ChrCustClientChoiceConversionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3590348, 0, 4, 3, 0x531DD388, fields, 3);
        return &instance;
    }
};

struct ChrCustItemGeoModifyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3952714, -1, 3, 3, 0xFA0A7F36, fields, -1);
        return &instance;
    }
};

struct ChrCustomizationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 3, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1611874, -1, 7, 6, 0x25807B05, fields, 6);
        return &instance;
    }
};

struct ChrCustomizationBoneSetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3460181, -1, 2, 2, 0x46FB30D0, fields, -1);
        return &instance;
    }
};

struct ChrCustomizationCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(3526439, 1, 9, 9, 0xDE552A6A, fields, -1);
        return &instance;
    }
};

struct ChrCustomizationChoiceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(3450554, 1, 8, 8, 0xE8148293, fields, 2);
        return &instance;
    }
};

struct ChrCustomizationCondModelMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 3, true },
        };
        static constexpr DB2Meta instance(3460182, -1, 2, 2, 0x5B4D36CD, fields, -1);
        return &instance;
    }
};

struct ChrCustomizationConversionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3463337, -1, 7, 7, 0x1D1B187B, fields, 4);
        return &instance;
    }
};

struct ChrCustomizationDisplayInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(3593032, 0, 5, 5, 0xE662481C, fields, -1);
        return &instance;
    }
};

struct ChrCustomizationElementMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3512765, 0, 10, 10, 0x23DA3D78, fields, -1);
        return &instance;
    }
};

struct ChrCustomizationGeosetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3456171, -1, 3, 3, 0xF1B919BA, fields, -1);
        return &instance;
    }
};

struct ChrCustomizationMaterialMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3459652, 0, 3, 3, 0x25D08F0C, fields, -1);
        return &instance;
    }
};

struct ChrCustomizationOptionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3384247, 1, 12, 12, 0xEB7143AC, fields, 4);
        return &instance;
    }
};

struct ChrCustomizationReqMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3450453, 0, 6, 6, 0xEA6C595F, fields, -1);
        return &instance;
    }
};

struct ChrCustomizationReqChoiceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3580359, -1, 2, 1, 0x263E53D8, fields, 1);
        return &instance;
    }
};

struct ChrCustomizationSkinnedModelMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3460183, -1, 4, 4, 0x0A19C75E, fields, -1);
        return &instance;
    }
};

struct ChrModelMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[16] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(3384313, 2, 16, 16, 0xE62BB49C, fields, -1);
        return &instance;
    }
};

struct ChrModelMaterialMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3566562, 0, 7, 7, 0x09B4418C, fields, 1);
        return &instance;
    }
};

struct ChrModelTextureLayerMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 3, true },
            { FT_INT, 2, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3548976, 0, 9, 8, 0xB6E31714, fields, 8);
        return &instance;
    }
};

struct ChrRaceXChrModelMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3490304, -1, 2, 2, 0x888FDCA8, fields, 0);
        return &instance;
    }
};

struct ChrRacesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[57] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 3, false },
            { FT_INT, 3, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1305311, -1, 57, 57, 0xF405990A, fields, -1);
        return &instance;
    }
};

struct ChrSpecializationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1343390, 3, 13, 13, 0xAC6102D2, fields, 4);
        return &instance;
    }
};

struct ChrUpgradeBucketMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(984529, 0, 3, 2, 0x2BA3842E, fields, 2);
        return &instance;
    }
};

struct ChrUpgradeBucketSpellMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(984528, -1, 2, 1, 0xF4AACE3E, fields, 1);
        return &instance;
    }
};

struct ChrUpgradeTierMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(984530, 1, 4, 4, 0x3859B478, fields, -1);
        return &instance;
    }
};

struct CinematicCameraMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_FLOAT, 3, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1294214, -1, 4, 4, 0x7BA7D9AC, fields, -1);
        return &instance;
    }
};

struct CinematicSequencesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 8, false },
        };
        static constexpr DB2Meta instance(1134583, -1, 2, 2, 0xC8FDAE51, fields, -1);
        return &instance;
    }
};

struct ClientSceneEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1939843, -1, 1, 1, 0xA9E3C5F7, fields, -1);
        return &instance;
    }
};

struct CloakDampeningMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 5, true },
            { FT_FLOAT, 5, true },
            { FT_FLOAT, 2, true },
            { FT_FLOAT, 2, true },
        };
        static constexpr DB2Meta instance(1465903, -1, 7, 7, 0x9E74A177, fields, -1);
        return &instance;
    }
};

struct CloneEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2175218, -1, 8, 8, 0xE91DA548, fields, -1);
        return &instance;
    }
};

struct CombatConditionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 2, false },
            { FT_BYTE, 2, false },
            { FT_BYTE, 2, false },
            { FT_SHORT, 2, false },
            { FT_BYTE, 2, false },
            { FT_BYTE, 2, false },
        };
        static constexpr DB2Meta instance(1120958, -1, 11, 11, 0x280EEDE1, fields, -1);
        return &instance;
    }
};

struct CommentatorIndirectSpellMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3067644, -1, 3, 2, 0x022271FB, fields, 2);
        return &instance;
    }
};

struct CommentatorStartLocationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_FLOAT, 3, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1664251, -1, 2, 2, 0x360082E7, fields, -1);
        return &instance;
    }
};

struct CommentatorTrackedCooldownMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1661584, -1, 4, 3, 0x993345A4, fields, 3);
        return &instance;
    }
};

struct CommunityIconMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2098645, 0, 3, 3, 0xA20A2758, fields, -1);
        return &instance;
    }
};

struct ComponentModelFileDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1349053, -1, 4, 4, 0xDDEC6F9F, fields, -1);
        return &instance;
    }
};

struct ComponentTextureFileDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1278239, -1, 3, 3, 0xE8232574, fields, -1);
        return &instance;
    }
};

struct ConfigurationWarningMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1709409, -1, 2, 2, 0x1CAAE7CC, fields, -1);
        return &instance;
    }
};

struct ContentTuningMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1962930, 0, 6, 6, 0xD0AEEA71, fields, -1);
        return &instance;
    }
};

struct ContributionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 4, true },
        };
        static constexpr DB2Meta instance(1587153, 2, 7, 7, 0x6D42FEB5, fields, 3);
        return &instance;
    }
};

struct ContributionStyleMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2143633, -1, 7, 7, 0x68AD1498, fields, -1);
        return &instance;
    }
};

struct ContributionStyleContainerMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 5, true },
        };
        static constexpr DB2Meta instance(2143634, -1, 1, 1, 0x85ADF27E, fields, -1);
        return &instance;
    }
};

struct ConversationLineMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1260801, -1, 8, 8, 0x6A344A3F, fields, -1);
        return &instance;
    }
};

struct CreatureMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 4, true },
            { FT_FLOAT, 4, true },
            { FT_INT, 3, true },
        };
        static constexpr DB2Meta instance(841631, -1, 11, 11, 0x589E5A4C, fields, -1);
        return &instance;
    }
};

struct CreatureDifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 8, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(879282, -1, 7, 6, 0x833D355A, fields, 6);
        return &instance;
    }
};

struct CreatureDispXUiCameraMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1146692, -1, 2, 2, 0xB46136C5, fields, -1);
        return &instance;
    }
};

struct CreatureDisplayInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[25] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 3, true },
        };
        static constexpr DB2Meta instance(1108759, 0, 25, 25, 0x96D440DE, fields, -1);
        return &instance;
    }
};

struct CreatureDisplayInfoCondMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_LONG, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 3, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1332686, 1, 8, 7, 0x0A0D2C2D, fields, 7);
        return &instance;
    }
};

struct CreatureDisplayInfoCondXChoiceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3670439, -1, 2, 2, 0xE8CD17F9, fields, 0);
        return &instance;
    }
};

struct CreatureDisplayInfoEvtMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1586882, -1, 4, 3, 0x192F3389, fields, 3);
        return &instance;
    }
};

struct CreatureDisplayInfoExtraMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 3, false },
        };
        static constexpr DB2Meta instance(1264997, 0, 13, 13, 0x192D8556, fields, -1);
        return &instance;
    }
};

struct CreatureDisplayInfoGeosetDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1720141, -1, 3, 2, 0x469BDCA2, fields, 2);
        return &instance;
    }
};

struct CreatureDisplayInfoOptionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3692043, -1, 3, 2, 0x2155E881, fields, 2);
        return &instance;
    }
};

struct CreatureDisplayInfoTrnMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1146698, -1, 6, 5, 0x500975B6, fields, 5);
        return &instance;
    }
};

struct CreatureFamilyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_STRING, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 2, true },
        };
        static constexpr DB2Meta instance(1351351, -1, 9, 9, 0xEE03DE31, fields, -1);
        return &instance;
    }
};

struct CreatureImmunitiesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 2, true },
            { FT_INT, 9, false },
            { FT_INT, 16, false },
        };
        static constexpr DB2Meta instance(1131322, -1, 9, 9, 0xC4800010, fields, -1);
        return &instance;
    }
};

struct CreatureModelDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[28] =
        {
            { FT_FLOAT, 6, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1365368, -1, 28, 28, 0xF41D4A3B, fields, -1);
        return &instance;
    }
};

struct CreatureMovementInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1125666, -1, 1, 1, 0x25EE86F6, fields, -1);
        return &instance;
    }
};

struct CreatureSoundDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[38] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 5, false },
            { FT_INT, 4, false },
        };
        static constexpr DB2Meta instance(1344466, 0, 38, 38, 0x9C866B0C, fields, -1);
        return &instance;
    }
};

struct CreatureSoundFidgetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(4178576, -1, 3, 2, 0xB504137B, fields, 2);
        return &instance;
    }
};

struct CreatureSpellDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 4, true },
            { FT_INT, 4, true },
        };
        static constexpr DB2Meta instance(3032554, -1, 2, 2, 0x1562577D, fields, -1);
        return &instance;
    }
};

struct CreatureTypeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1131315, -1, 2, 2, 0xD40201AB, fields, -1);
        return &instance;
    }
};

struct CreatureXContributionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1587158, 0, 3, 2, 0x4626C791, fields, 2);
        return &instance;
    }
};

struct CreatureXDisplayInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1864302, -1, 5, 4, 0x6153D141, fields, 4);
        return &instance;
    }
};

struct CriteriaMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1263817, -1, 11, 11, 0x6FD42706, fields, -1);
        return &instance;
    }
};

struct CriteriaTreeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1263818, -1, 7, 7, 0xD5537A1E, fields, -1);
        return &instance;
    }
};

struct CriteriaTreeXEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1345969, -1, 2, 1, 0x5DFE4399, fields, 1);
        return &instance;
    }
};

struct CurrencyCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1125667, -1, 3, 3, 0xD66BAB95, fields, -1);
        return &instance;
    }
};

struct CurrencyContainerMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1934603, -1, 8, 7, 0x174BC741, fields, 7);
        return &instance;
    }
};

struct CurrencyTypesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1095531, -1, 11, 11, 0xFFEEE7A5, fields, -1);
        return &instance;
    }
};

struct CurveMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(892585, -1, 2, 2, 0xFF5FBC8A, fields, -1);
        return &instance;
    }
};

struct CurvePointMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_FLOAT, 2, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(892586, -1, 3, 3, 0x2C43C039, fields, -1);
        return &instance;
    }
};

struct DeathThudLookupsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1279415, -1, 4, 4, 0xA8BEE9BE, fields, -1);
        return &instance;
    }
};

struct DecalPropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[18] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1278176, 0, 18, 18, 0x43F203C0, fields, -1);
        return &instance;
    }
};

struct DeclinedWordMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1279100, 1, 2, 2, 0x50B8E82D, fields, -1);
        return &instance;
    }
};

struct DeclinedWordCasesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1279099, -1, 3, 2, 0x2AC7869B, fields, 2);
        return &instance;
    }
};

struct DestructibleModelDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[22] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1122116, -1, 22, 22, 0x29E344D1, fields, -1);
        return &instance;
    }
};

struct DeviceBlacklistMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(922722, -1, 2, 2, 0xABA94CC1, fields, -1);
        return &instance;
    }
};

struct DifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1352127, -1, 13, 13, 0x21EAE538, fields, -1);
        return &instance;
    }
};

struct DissolveEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[14] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1304325, -1, 14, 14, 0x12B80C10, fields, -1);
        return &instance;
    }
};

struct DriverBlacklistMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(922720, -1, 7, 7, 0x2AE0CE7C, fields, -1);
        return &instance;
    }
};

struct DungeonEncounterMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1347279, 1, 9, 9, 0xB52C4A8C, fields, 2);
        return &instance;
    }
};

struct DurabilityCostsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 21, false },
            { FT_SHORT, 8, false },
        };
        static constexpr DB2Meta instance(1283019, -1, 2, 2, 0xC447B1B1, fields, -1);
        return &instance;
    }
};

struct DurabilityQualityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1130268, -1, 1, 1, 0xA0671348, fields, -1);
        return &instance;
    }
};

struct EdgeGlowEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1387381, -1, 13, 13, 0x1A14D443, fields, -1);
        return &instance;
    }
};

struct EmotesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_LONG, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1343602, -1, 9, 9, 0xB3BBAC91, fields, -1);
        return &instance;
    }
};

struct EmotesTextMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1347273, -1, 2, 2, 0x47FC6428, fields, -1);
        return &instance;
    }
};

struct EmotesTextDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1283024, -1, 3, 2, 0x93E6D146, fields, 2);
        return &instance;
    }
};

struct EmotesTextSoundMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1286524, -1, 5, 4, 0xDDB1DE6E, fields, 4);
        return &instance;
    }
};

struct EnvironmentalDamageMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1278398, -1, 2, 2, 0x792416B2, fields, -1);
        return &instance;
    }
};

struct ExhaustionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_STRING, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1343313, 2, 8, 8, 0x301FDC00, fields, -1);
        return &instance;
    }
};

struct ExpectedStatMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1937326, -1, 11, 10, 0x04118896, fields, 10);
        return &instance;
    }
};

struct ExpectedStatModMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1969773, -1, 9, 9, 0x955F5B02, fields, -1);
        return &instance;
    }
};

struct FactionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[16] =
        {
            { FT_LONG, 4, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 4, true },
            { FT_SHORT, 4, false },
            { FT_INT, 4, true },
            { FT_INT, 4, true },
            { FT_FLOAT, 2, true },
            { FT_BYTE, 2, false },
        };
        static constexpr DB2Meta instance(1361972, 3, 16, 16, 0x2A4EC384, fields, -1);
        return &instance;
    }
};

struct FactionGroupMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1343595, 2, 6, 6, 0x059DA8DE, fields, -1);
        return &instance;
    }
};

struct FactionTemplateMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 4, false },
            { FT_SHORT, 4, false },
        };
        static constexpr DB2Meta instance(1361579, -1, 7, 7, 0xDB7D5E30, fields, -1);
        return &instance;
    }
};

struct FootprintTexturesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1308056, -1, 3, 3, 0x72145B82, fields, -1);
        return &instance;
    }
};

struct FootstepTerrainLookupMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1267647, -1, 4, 4, 0x3A1114BC, fields, -1);
        return &instance;
    }
};

struct FriendshipRepReactionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1237638, -1, 3, 3, 0x02633F49, fields, 1);
        return &instance;
    }
};

struct FriendshipReputationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1237639, 1, 4, 4, 0x69A59F93, fields, -1);
        return &instance;
    }
};

struct FullScreenEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[28] =
        {
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1348282, -1, 28, 28, 0xDF2E49F0, fields, -1);
        return &instance;
    }
};

struct GMSurveyAnswersMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1283025, -1, 3, 2, 0x62969172, fields, 2);
        return &instance;
    }
};

struct GMSurveyCurrentSurveyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1278177, -1, 1, 1, 0x6B9CE772, fields, -1);
        return &instance;
    }
};

struct GMSurveyQuestionsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(1278178, -1, 1, 1, 0x208A6601, fields, -1);
        return &instance;
    }
};

struct GMSurveySurveysMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_BYTE, 15, false },
        };
        static constexpr DB2Meta instance(1283020, -1, 1, 1, 0xE3F6FBC1, fields, -1);
        return &instance;
    }
};

struct GameClockDebugMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2922072, 0, 2, 2, 0x1E5DD1EB, fields, -1);
        return &instance;
    }
};

struct GameObjectArtKitMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 3, true },
        };
        static constexpr DB2Meta instance(1266737, -1, 2, 2, 0x8085B2FF, fields, -1);
        return &instance;
    }
};

struct GameObjectDiffAnimMapMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1302847, -1, 4, 3, 0x55525850, fields, 3);
        return &instance;
    }
};

struct GameObjectDisplayInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_FLOAT, 6, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1266277, -1, 6, 6, 0x21FD4DC2, fields, -1);
        return &instance;
    }
};

struct GameObjectDisplayInfoXSoundKitMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1345272, -1, 3, 2, 0xF4EF144A, fields, 2);
        return &instance;
    }
};

struct GameObjectsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_STRING, 1, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 4, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 8, true },
        };
        static constexpr DB2Meta instance(841620, 3, 12, 12, 0x0FD961D7, fields, 4);
        return &instance;
    }
};

struct GameTipsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1368021, -1, 4, 4, 0xAC5C7C88, fields, -1);
        return &instance;
    }
};

struct GemPropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1343604, -1, 3, 3, 0xE674AE42, fields, -1);
        return &instance;
    }
};

struct GlobalStringsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1394440, -1, 3, 3, 0x539B649A, fields, -1);
        return &instance;
    }
};

struct GlyphBindableSpellMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1270147, -1, 2, 1, 0x5A852AEA, fields, 1);
        return &instance;
    }
};

struct GlyphExclusiveCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(948546, -1, 1, 1, 0xF1376CB9, fields, -1);
        return &instance;
    }
};

struct GlyphPropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1345274, -1, 4, 4, 0x91CC1D2F, fields, -1);
        return &instance;
    }
};

struct GlyphRequiredSpecMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(948496, -1, 2, 1, 0x95606943, fields, 1);
        return &instance;
    }
};

struct GlyphSlotMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1130095, -1, 2, 2, 0xCCC77A3D, fields, -1);
        return &instance;
    }
};

struct GradientEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[16] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2433582, -1, 16, 16, 0x05FC5907, fields, -1);
        return &instance;
    }
};

struct GroundEffectDoodadMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1308057, -1, 4, 4, 0x7AC0B592, fields, -1);
        return &instance;
    }
};

struct GroundEffectTextureMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 4, false },
            { FT_BYTE, 4, true },
        };
        static constexpr DB2Meta instance(1308499, -1, 4, 4, 0x50B304D6, fields, -1);
        return &instance;
    }
};

struct GroupFinderActivityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[15] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(974813, -1, 15, 15, 0xB3E41C65, fields, -1);
        return &instance;
    }
};

struct GroupFinderActivityGrpMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(974814, -1, 2, 2, 0xDC994887, fields, -1);
        return &instance;
    }
};

struct GroupFinderCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(974812, -1, 4, 4, 0xB5DAE0F2, fields, -1);
        return &instance;
    }
};

struct GuildColorBackgroundMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1286526, -1, 3, 3, 0x252CEA28, fields, -1);
        return &instance;
    }
};

struct GuildColorBorderMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1286527, -1, 3, 3, 0x252CEA28, fields, -1);
        return &instance;
    }
};

struct GuildColorEmblemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1286525, -1, 3, 3, 0x252CEA28, fields, -1);
        return &instance;
    }
};

struct GuildEmblemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2734754, -1, 2, 2, 0xAFE5E47A, fields, -1);
        return &instance;
    }
};

struct GuildPerkSpellsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1135238, -1, 1, 1, 0x400E708A, fields, -1);
        return &instance;
    }
};

struct GuildShirtBackgroundMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2921008, -1, 4, 3, 0xD833DA51, fields, 3);
        return &instance;
    }
};

struct GuildShirtBorderMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2921475, -1, 5, 4, 0x29AFDD6F, fields, 4);
        return &instance;
    }
};

struct GuildTabardBackgroundMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2909769, -1, 4, 3, 0xE2B47F14, fields, 3);
        return &instance;
    }
};

struct GuildTabardBorderMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2920485, -1, 5, 4, 0x7AD6B16B, fields, 4);
        return &instance;
    }
};

struct GuildTabardEmblemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2910470, -1, 4, 3, 0x32C7C5B4, fields, 3);
        return &instance;
    }
};

struct HeirloomMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 6, true },
            { FT_SHORT, 6, false },
        };
        static constexpr DB2Meta instance(1097696, 1, 10, 10, 0xECAE6D6C, fields, -1);
        return &instance;
    }
};

struct HelmetAnimScalingMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1348283, -1, 3, 2, 0x6289F435, fields, 2);
        return &instance;
    }
};

struct HelmetGeosetDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2821752, -1, 4, 3, 0x7667436E, fields, 3);
        return &instance;
    }
};

struct HighlightColorMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(996358, -1, 5, 5, 0x251323AA, fields, -1);
        return &instance;
    }
};

struct HolidayDescriptionsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(996360, -1, 1, 1, 0xFA0F275C, fields, -1);
        return &instance;
    }
};

struct HolidayNamesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(996359, -1, 1, 1, 0xA739ACD7, fields, -1);
        return &instance;
    }
};

struct HolidaysMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 10, false },
            { FT_INT, 16, false },
            { FT_BYTE, 10, false },
            { FT_INT, 3, true },
        };
        static constexpr DB2Meta instance(996357, 0, 13, 13, 0x3C3EF0AA, fields, -1);
        return &instance;
    }
};

struct HotfixesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1995523, -1, 4, 4, 0xE753CD91, fields, -1);
        return &instance;
    }
};

struct ImportPriceArmorMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1121229, -1, 4, 4, 0xE17061DF, fields, -1);
        return &instance;
    }
};

struct ImportPriceQualityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1121228, -1, 1, 1, 0xA0671348, fields, -1);
        return &instance;
    }
};

struct ImportPriceShieldMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1121227, -1, 1, 1, 0xA0671348, fields, -1);
        return &instance;
    }
};

struct ImportPriceWeaponMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1121230, -1, 1, 1, 0xA0671348, fields, -1);
        return &instance;
    }
};

struct InvasionClientDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_STRING, 1, true },
            { FT_FLOAT, 2, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1336651, 2, 10, 9, 0xB3195B9D, fields, 9);
        return &instance;
    }
};

struct ItemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[19] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 5, false },
            { FT_SHORT, 7, true },
            { FT_SHORT, 5, false },
            { FT_SHORT, 5, false },
        };
        static constexpr DB2Meta instance(841626, -1, 19, 19, 0xA95A19EE, fields, -1);
        return &instance;
    }
};

struct ItemAppearanceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(982462, -1, 4, 4, 0x83D2C1C9, fields, -1);
        return &instance;
    }
};

struct ItemAppearanceXUiCameraMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1248126, -1, 2, 2, 0x774578C5, fields, -1);
        return &instance;
    }
};

struct ItemArmorQualityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_FLOAT, 7, true },
        };
        static constexpr DB2Meta instance(1283021, -1, 1, 1, 0x6FA61021, fields, -1);
        return &instance;
    }
};

struct ItemArmorShieldMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_FLOAT, 7, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1277741, -1, 2, 2, 0x9772ECE9, fields, -1);
        return &instance;
    }
};

struct ItemArmorTotalMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_SHORT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1283022, -1, 5, 5, 0x3D9BE0E6, fields, -1);
        return &instance;
    }
};

struct ItemBagFamilyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(1278179, -1, 1, 1, 0x1AC95960, fields, -1);
        return &instance;
    }
};

struct ItemBonusMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 4, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(959070, -1, 4, 4, 0x84110DA5, fields, 1);
        return &instance;
    }
};

struct ItemBonusListLevelDeltaMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1320358, 1, 2, 2, 0xB7C13761, fields, -1);
        return &instance;
    }
};

struct ItemBonusTreeNodeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(987134, -1, 5, 4, 0x211E1FFB, fields, 4);
        return &instance;
    }
};

struct ItemChildEquipmentMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1247926, -1, 3, 2, 0xCD8B219D, fields, 2);
        return &instance;
    }
};

struct ItemClassMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1140189, -1, 4, 4, 0x560AF57A, fields, -1);
        return &instance;
    }
};

struct ItemContextPickerEntryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1405665, -1, 6, 5, 0xD8F88806, fields, 5);
        return &instance;
    }
};

struct ItemCurrencyCostMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(801670, -1, 1, 1, 0xA6BDFDC1, fields, 0);
        return &instance;
    }
};

struct ItemDamageAmmoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_FLOAT, 7, true },
        };
        static constexpr DB2Meta instance(1277740, -1, 2, 2, 0xF2F36529, fields, -1);
        return &instance;
    }
};

struct ItemDamageOneHandMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_FLOAT, 7, true },
        };
        static constexpr DB2Meta instance(1277743, -1, 2, 2, 0xF2F36529, fields, -1);
        return &instance;
    }
};

struct ItemDamageOneHandCasterMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_FLOAT, 7, true },
        };
        static constexpr DB2Meta instance(1277739, -1, 2, 2, 0xF2F36529, fields, -1);
        return &instance;
    }
};

struct ItemDamageTwoHandMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_FLOAT, 7, true },
        };
        static constexpr DB2Meta instance(1277738, -1, 2, 2, 0xF2F36529, fields, -1);
        return &instance;
    }
};

struct ItemDamageTwoHandCasterMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_FLOAT, 7, true },
        };
        static constexpr DB2Meta instance(1277742, -1, 2, 2, 0xF2F36529, fields, -1);
        return &instance;
    }
};

struct ItemDisenchantLootMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1134087, -1, 7, 6, 0xD8262388, fields, 6);
        return &instance;
    }
};

struct ItemDisplayInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[15] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 2, false },
            { FT_INT, 2, true },
            { FT_INT, 2, true },
            { FT_INT, 6, true },
            { FT_INT, 6, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1266429, -1, 15, 15, 0xB923D577, fields, -1);
        return &instance;
    }
};

struct ItemDisplayInfoMaterialResMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1280614, -1, 3, 2, 0xC4DFD0DA, fields, 2);
        return &instance;
    }
};

struct ItemDisplayXUiCameraMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1146690, -1, 2, 2, 0xD6A09D12, fields, -1);
        return &instance;
    }
};

struct ItemEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(969941, -1, 9, 8, 0x95B79695, fields, 8);
        return &instance;
    }
};

struct ItemExtendedCostMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 5, true },
            { FT_SHORT, 5, false },
            { FT_SHORT, 5, false },
            { FT_INT, 5, false },
        };
        static constexpr DB2Meta instance(801681, -1, 10, 10, 0xAE07F513, fields, -1);
        return &instance;
    }
};

struct ItemGroupSoundsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 4, false },
        };
        static constexpr DB2Meta instance(1283023, -1, 1, 1, 0x04927D36, fields, -1);
        return &instance;
    }
};

struct ItemLevelSelectorMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1588911, -1, 2, 2, 0x20DD80A4, fields, -1);
        return &instance;
    }
};

struct ItemLevelSelectorQualityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1624937, -1, 3, 2, 0xE0678608, fields, 2);
        return &instance;
    }
};

struct ItemLevelSelectorQualitySetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1624933, -1, 2, 2, 0xF46AC9F0, fields, -1);
        return &instance;
    }
};

struct ItemLimitCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1237440, -1, 3, 3, 0xE09B28B2, fields, -1);
        return &instance;
    }
};

struct ItemLimitCategoryConditionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1378590, -1, 3, 2, 0x904A7192, fields, 2);
        return &instance;
    }
};

struct ItemModifiedAppearanceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(982457, 0, 6, 6, 0xCB7953C8, fields, 1);
        return &instance;
    }
};

struct ItemModifiedAppearanceExtraMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1278399, -1, 5, 5, 0xBEB0A3C9, fields, -1);
        return &instance;
    }
};

struct ItemNameDescriptionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1332559, -1, 2, 2, 0x302E0BAD, fields, -1);
        return &instance;
    }
};

struct ItemPetFoodMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(1302240, -1, 1, 1, 0x896335AB, fields, -1);
        return &instance;
    }
};

struct ItemPriceBaseMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1121231, -1, 3, 3, 0x9186CA7C, fields, -1);
        return &instance;
    }
};

struct ItemRandomPropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING, 1, true },
            { FT_SHORT, 5, false },
        };
        static constexpr DB2Meta instance(1237441, -1, 2, 2, 0x3C106C78, fields, -1);
        return &instance;
    }
};

struct ItemRandomSuffixMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_SHORT, 5, false },
            { FT_SHORT, 5, false },
        };
        static constexpr DB2Meta instance(1237592, -1, 3, 3, 0x97F945AB, fields, -1);
        return &instance;
    }
};

struct ItemRangedDisplayInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1270315, -1, 4, 4, 0x9EF94AAB, fields, -1);
        return &instance;
    }
};

struct ItemSetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 17, false },
        };
        static constexpr DB2Meta instance(1343609, -1, 5, 5, 0x189535BF, fields, -1);
        return &instance;
    }
};

struct ItemSetSpellMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1314689, -1, 4, 3, 0x96588F97, fields, 3);
        return &instance;
    }
};

struct ItemSparseMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[70] =
        {
            { FT_LONG, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 10, true },
            { FT_INT, 10, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 4, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 2, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 5, false },
            { FT_SHORT, 5, false },
            { FT_SHORT, 7, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 3, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 10, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 10, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1572924, -1, 70, 70, 0x9E2F6B8B, fields, -1);
        return &instance;
    }
};

struct ItemSpecMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1135120, -1, 6, 6, 0x193869CC, fields, 2);
        return &instance;
    }
};

struct ItemSpecOverrideMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1134576, -1, 2, 1, 0xA10DBD4A, fields, 1);
        return &instance;
    }
};

struct ItemSubClassMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1261604, -1, 10, 10, 0x2B018A83, fields, 2);
        return &instance;
    }
};

struct ItemSubClassMaskMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1302852, -1, 3, 3, 0xAB8D8248, fields, -1);
        return &instance;
    }
};

struct ItemUpgradeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(801687, -1, 5, 5, 0x0B161BB8, fields, -1);
        return &instance;
    }
};

struct ItemVisualsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 5, true },
        };
        static constexpr DB2Meta instance(1343605, -1, 1, 1, 0x8BDC2A63, fields, -1);
        return &instance;
    }
};

struct ItemVisualsXEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3043873, -1, 6, 5, 0xF8A03E10, fields, 5);
        return &instance;
    }
};

struct ItemXBonusTreeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(987133, -1, 2, 1, 0x87253AAD, fields, 1);
        return &instance;
    }
};

struct JournalEncounterMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_FLOAT, 2, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1240336, -1, 10, 10, 0xDFEDC272, fields, -1);
        return &instance;
    }
};

struct JournalEncounterCreatureMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1301155, 2, 8, 8, 0x56FA3951, fields, 3);
        return &instance;
    }
};

struct JournalEncounterItemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1344467, 0, 6, 6, 0x003A0C63, fields, 1);
        return &instance;
    }
};

struct JournalEncounterSectionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[15] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1134413, -1, 15, 15, 0xD11DFA43, fields, -1);
        return &instance;
    }
};

struct JournalEncounterXDifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1121901, -1, 2, 1, 0x28A617E9, fields, 1);
        return &instance;
    }
};

struct JournalEncounterXMapLocMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_FLOAT, 2, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1722928, -1, 5, 4, 0xC185CFC1, fields, 4);
        return &instance;
    }
};

struct JournalInstanceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1237438, 2, 11, 11, 0xEB2E3026, fields, -1);
        return &instance;
    }
};

struct JournalItemXDifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1277744, -1, 2, 1, 0x27F32E12, fields, 1);
        return &instance;
    }
};

struct JournalSectionXDifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1121900, -1, 2, 1, 0xD20CD86E, fields, 1);
        return &instance;
    }
};

struct JournalTierMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(1349056, -1, 1, 1, 0x2ABC8A8B, fields, -1);
        return &instance;
    }
};

struct JournalTierXInstanceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1285009, -1, 2, 2, 0x88DBB128, fields, 0);
        return &instance;
    }
};

struct KeychainMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_BYTE, 32, false },
        };
        static constexpr DB2Meta instance(801693, -1, 1, 1, 0xB47B9AEE, fields, -1);
        return &instance;
    }
};

struct KeystoneAffixMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1344761, 2, 4, 4, 0x6A1F8517, fields, -1);
        return &instance;
    }
};

struct LFGDungeonExpansionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1343606, -1, 7, 6, 0xC96332BB, fields, 6);
        return &instance;
    }
};

struct LFGDungeonGroupMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1135058, -1, 4, 4, 0xFDF860DD, fields, -1);
        return &instance;
    }
};

struct LFGDungeonsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[33] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1361033, -1, 33, 33, 0x4D903335, fields, -1);
        return &instance;
    }
};

struct LFGRoleRequirementMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(982805, -1, 3, 2, 0xCE4F29ED, fields, 2);
        return &instance;
    }
};

struct LanguageWordsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(984702, -1, 2, 2, 0x275A6A49, fields, -1);
        return &instance;
    }
};

struct LanguagesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1135325, 1, 2, 2, 0x8DD4A016, fields, -1);
        return &instance;
    }
};

struct LfgDungeonsGroupingMapMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1339818, -1, 3, 2, 0x51AAC642, fields, 2);
        return &instance;
    }
};

struct LightMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 8, false },
        };
        static constexpr DB2Meta instance(1375579, -1, 5, 5, 0x9088A2A3, fields, -1);
        return &instance;
    }
};

struct LightDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[45] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 4, true },
            { FT_FLOAT, 4, true },
            { FT_FLOAT, 4, true },
        };
        static constexpr DB2Meta instance(1375580, -1, 45, 45, 0x79AC7C4B, fields, 0);
        return &instance;
    }
};

struct LightParamsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_FLOAT, 3, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1334669, 1, 12, 12, 0x08EE51F6, fields, -1);
        return &instance;
    }
};

struct LightSkyboxMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1308501, -1, 4, 4, 0xD466A5C2, fields, -1);
        return &instance;
    }
};

struct LightningMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[34] =
        {
            { FT_FLOAT, 2, true },
            { FT_INT, 3, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(2003383, -1, 34, 34, 0x5CA01131, fields, -1);
        return &instance;
    }
};

struct LiquidMaterialMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1132538, -1, 2, 2, 0xD384A6A0, fields, -1);
        return &instance;
    }
};

struct LiquidObjectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1308058, -1, 5, 5, 0xF09062A1, fields, -1);
        return &instance;
    }
};

struct LiquidTypeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[21] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING_NOT_LOCALIZED, 6, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 6, false },
            { FT_INT, 2, true },
            { FT_FLOAT, 18, true },
            { FT_INT, 4, false },
            { FT_FLOAT, 4, true },
        };
        static constexpr DB2Meta instance(1371380, -1, 21, 21, 0xD0172A80, fields, -1);
        return &instance;
    }
};

struct LoadingScreenTaxiSplinesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 10, true },
            { FT_FLOAT, 10, true },
        };
        static constexpr DB2Meta instance(1302239, -1, 5, 5, 0xB113BAAC, fields, -1);
        return &instance;
    }
};

struct LoadingScreensMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1266541, -1, 3, 3, 0x54D4DACD, fields, -1);
        return &instance;
    }
};

struct LocaleMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(801706, -1, 3, 3, 0x22837252, fields, -1);
        return &instance;
    }
};

struct LocationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
        };
        static constexpr DB2Meta instance(801707, -1, 2, 2, 0xD6CE20A8, fields, -1);
        return &instance;
    }
};

struct LockMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 8, true },
            { FT_SHORT, 8, false },
            { FT_BYTE, 8, false },
            { FT_BYTE, 8, false },
        };
        static constexpr DB2Meta instance(1343608, -1, 4, 4, 0x2BD710C7, fields, -1);
        return &instance;
    }
};

struct LockTypeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1284823, 4, 5, 5, 0xED10C5C0, fields, -1);
        return &instance;
    }
};

struct LookAtControllerMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[18] =
        {
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1098785, -1, 18, 18, 0x9311BB7C, fields, -1);
        return &instance;
    }
};

struct MailTemplateMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(1240344, -1, 1, 1, 0x82DA0EF5, fields, -1);
        return &instance;
    }
};

struct ManagedWorldStateMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 4, true },
        };
        static constexpr DB2Meta instance(1587159, 0, 10, 10, 0xEC75BD52, fields, -1);
        return &instance;
    }
};

struct ManagedWorldStateBuffMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1587155, -1, 4, 3, 0xE6CF3A6B, fields, 3);
        return &instance;
    }
};

struct ManagedWorldStateInputMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1587151, -1, 3, 3, 0xF4514EDF, fields, -1);
        return &instance;
    }
};

struct ManifestInterfaceActionIconMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1375803, 0, 1, 1, 0x28EBA06A, fields, -1);
        return &instance;
    }
};

struct ManifestInterfaceDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1375801, -1, 2, 2, 0x9A4B7AC1, fields, -1);
        return &instance;
    }
};

struct ManifestInterfaceItemIconMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1375804, 0, 1, 1, 0x28EBA06A, fields, -1);
        return &instance;
    }
};

struct ManifestInterfaceTOCDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1267335, -1, 1, 1, 0xC45B9788, fields, -1);
        return &instance;
    }
};

struct MapMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[21] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1349477, -1, 21, 21, 0xC08A6797, fields, -1);
        return &instance;
    }
};

struct MapCelestialBodyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_SHORT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1597466, -1, 3, 2, 0xF791CC89, fields, 2);
        return &instance;
    }
};

struct MapChallengeModeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 3, true },
        };
        static constexpr DB2Meta instance(801709, 1, 5, 5, 0xD1A78B20, fields, 2);
        return &instance;
    }
};

struct MapDifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1367868, -1, 10, 9, 0x80F5388C, fields, 9);
        return &instance;
    }
};

struct MapDifficultyXConditionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1375435, -1, 4, 3, 0x35ACEFCA, fields, 3);
        return &instance;
    }
};

struct MapLoadingScreenMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_FLOAT, 2, true },
            { FT_FLOAT, 2, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1719707, -1, 5, 4, 0x901F4821, fields, 4);
        return &instance;
    }
};

struct MarketingPromotionsXLocaleMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(801710, -1, 7, 7, 0xD951637F, fields, -1);
        return &instance;
    }
};

struct MaterialMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1294217, -1, 4, 4, 0x6BEC0928, fields, -1);
        return &instance;
    }
};

struct MinorTalentMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1347274, -1, 3, 2, 0x4CB5B1F9, fields, 2);
        return &instance;
    }
};

struct MissileTargetingMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 2, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1710117, -1, 12, 12, 0xF5E06A68, fields, -1);
        return &instance;
    }
};

struct ModelAnimCloakDampeningMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1465904, -1, 3, 2, 0x17C2AF37, fields, 2);
        return &instance;
    }
};

struct ModelFileDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1337833, 0, 4, 4, 0xEA46BC99, fields, 3);
        return &instance;
    }
};

struct ModelRibbonQualityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1399953, -1, 2, 1, 0x71C06725, fields, 1);
        return &instance;
    }
};

struct ModifierTreeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1267645, -1, 7, 7, 0x6FCCC8E6, fields, -1);
        return &instance;
    }
};

struct MountMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(921760, 3, 11, 11, 0x8A076C82, fields, -1);
        return &instance;
    }
};

struct MountCapabilityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1114709, 0, 8, 8, 0x930D52E4, fields, -1);
        return &instance;
    }
};

struct MountTypeXCapabilityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1114715, -1, 3, 3, 0xC657AD26, fields, 0);
        return &instance;
    }
};

struct MountXDisplayMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1576117, -1, 3, 2, 0x21691987, fields, 2);
        return &instance;
    }
};

struct MovieMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1332556, -1, 4, 4, 0x225D06E5, fields, -1);
        return &instance;
    }
};

struct MovieFileDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1301154, -1, 1, 1, 0x08B7478A, fields, -1);
        return &instance;
    }
};

struct MovieVariationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1339819, -1, 3, 2, 0xF9F1832A, fields, 2);
        return &instance;
    }
};

struct MultiStatePropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_FLOAT, 3, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1965592, -1, 11, 10, 0x9F2C68CB, fields, 10);
        return &instance;
    }
};

struct MultiTransitionPropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1965589, -1, 5, 5, 0x044B192D, fields, -1);
        return &instance;
    }
};

struct MythicPlusSeasonRewardLevelsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2123783, -1, 4, 3, 0x4C011559, fields, 3);
        return &instance;
    }
};

struct MythicPlusSeasonTrackedMapMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(4521365, -1, 2, 1, 0x5B26E537, fields, 1);
        return &instance;
    }
};

struct NPCModelItemSlotDisplayInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1340661, -1, 3, 2, 0xBA98178D, fields, 2);
        return &instance;
    }
};

struct NPCSoundsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 4, false },
        };
        static constexpr DB2Meta instance(1282621, -1, 1, 1, 0xE4C9E3CB, fields, -1);
        return &instance;
    }
};

struct NameGenMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1122117, -1, 3, 3, 0x49AF9298, fields, -1);
        return &instance;
    }
};

struct NamesProfanityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1117086, -1, 2, 2, 0x7E5D907A, fields, -1);
        return &instance;
    }
};

struct NamesReservedMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1117085, -1, 1, 1, 0x3F7A5E4A, fields, -1);
        return &instance;
    }
};

struct NamesReservedLocaleMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1117087, -1, 2, 2, 0x939EBBCF, fields, -1);
        return &instance;
    }
};

struct NumTalentsAtLevelMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1953326, 0, 4, 4, 0x0F173041, fields, -1);
        return &instance;
    }
};

struct ObjectEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_FLOAT, 3, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1090577, -1, 8, 8, 0x3FE89433, fields, -1);
        return &instance;
    }
};

struct ObjectEffectModifierMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_FLOAT, 4, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1090575, -1, 4, 4, 0x918E2238, fields, -1);
        return &instance;
    }
};

struct ObjectEffectPackageElemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1090578, -1, 3, 3, 0x9844275E, fields, -1);
        return &instance;
    }
};

struct OccluderMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(2066958, 0, 9, 9, 0x5BAE5E78, fields, -1);
        return &instance;
    }
};

struct OccluderCurtainMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3850529, -1, 6, 6, 0x82B3A9F9, fields, -1);
        return &instance;
    }
};

struct OccluderLocationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2115224, 2, 4, 4, 0xAC2ED558, fields, -1);
        return &instance;
    }
};

struct OccluderNodeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2066959, 0, 4, 4, 0x899EA7B8, fields, -1);
        return &instance;
    }
};

struct OutlineEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 2, false },
        };
        static constexpr DB2Meta instance(1279739, -1, 6, 6, 0xCAD7FE83, fields, -1);
        return &instance;
    }
};

struct OverrideSpellDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 10, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1002186, -1, 3, 3, 0x7DC5F710, fields, -1);
        return &instance;
    }
};

struct PVPBracketTypesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_BYTE, 1, true },
            { FT_INT, 4, false },
        };
        static constexpr DB2Meta instance(1394275, -1, 2, 2, 0x298C6B08, fields, -1);
        return &instance;
    }
};

struct PVPDifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1339820, -1, 4, 3, 0xCB799A74, fields, 3);
        return &instance;
    }
};

struct PVPItemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(972287, -1, 2, 2, 0x67F64EE9, fields, -1);
        return &instance;
    }
};

struct PageTextMaterialMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1271600, -1, 1, 1, 0xA3CF1EB8, fields, -1);
        return &instance;
    }
};

struct PaperDollItemFrameMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1252503, -1, 3, 3, 0x828E8A54, fields, -1);
        return &instance;
    }
};

struct ParagonReputationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1581183, -1, 3, 3, 0xA583D6E0, fields, -1);
        return &instance;
    }
};

struct ParticleColorMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 3, true },
            { FT_INT, 3, true },
            { FT_INT, 3, true },
        };
        static constexpr DB2Meta instance(1284820, -1, 3, 3, 0x218FDF1C, fields, -1);
        return &instance;
    }
};

struct ParticulateMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3396285, -1, 2, 2, 0x41991AD7, fields, -1);
        return &instance;
    }
};

struct ParticulateSoundMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2053913, -1, 5, 5, 0x7C953E18, fields, 0);
        return &instance;
    }
};

struct PathMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(801732, -1, 7, 7, 0xF65ED186, fields, -1);
        return &instance;
    }
};

struct PathNodeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(801733, 0, 4, 4, 0x899EA7B8, fields, -1);
        return &instance;
    }
};

struct PathNodePropertyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(801734, 0, 5, 5, 0x87ACB772, fields, -1);
        return &instance;
    }
};

struct PathPropertyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(801735, 0, 4, 4, 0xCF5160B6, fields, -1);
        return &instance;
    }
};

struct PetLoyaltyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(2179604, -1, 1, 1, 0x33C3E34B, fields, -1);
        return &instance;
    }
};

struct PetPersonalityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_FLOAT, 3, true },
            { FT_INT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 8, true },
        };
        static constexpr DB2Meta instance(2179609, -1, 4, 4, 0x7882540A, fields, -1);
        return &instance;
    }
};

struct PhaseMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1348558, -1, 1, 1, 0x4B4C20B9, fields, -1);
        return &instance;
    }
};

struct PhaseShiftZoneSoundsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1267336, -1, 13, 13, 0xE520F6E3, fields, -1);
        return &instance;
    }
};

struct PhaseXPhaseGroupMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(987581, -1, 2, 1, 0x6A500919, fields, 1);
        return &instance;
    }
};

struct PlayerConditionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[81] =
        {
            { FT_LONG, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 4, false },
            { FT_SHORT, 4, false },
            { FT_SHORT, 4, false },
            { FT_INT, 3, false },
            { FT_BYTE, 3, false },
            { FT_INT, 4, false },
            { FT_INT, 4, false },
            { FT_INT, 4, false },
            { FT_INT, 4, true },
            { FT_INT, 4, true },
            { FT_INT, 4, false },
            { FT_SHORT, 2, false },
            { FT_INT, 2, false },
            { FT_INT, 4, true },
            { FT_BYTE, 4, false },
            { FT_SHORT, 4, false },
            { FT_SHORT, 4, false },
            { FT_BYTE, 4, false },
            { FT_BYTE, 4, false },
            { FT_INT, 4, false },
            { FT_INT, 4, false },
            { FT_INT, 4, false },
            { FT_INT, 6, false },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1045411, 2, 81, 81, 0xC289B61E, fields, -1);
        return &instance;
    }
};

struct PositionerMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1251523, -1, 4, 4, 0x5695C795, fields, -1);
        return &instance;
    }
};

struct PositionerStateMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1251506, -1, 8, 8, 0xADBD2846, fields, -1);
        return &instance;
    }
};

struct PositionerStateEntryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1251533, -1, 11, 11, 0xBA3F5A35, fields, -1);
        return &instance;
    }
};

struct PowerDisplayMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1332557, -1, 5, 5, 0x1CC1F41C, fields, -1);
        return &instance;
    }
};

struct PowerTypeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1266022, -1, 12, 12, 0x01E623B5, fields, -1);
        return &instance;
    }
};

struct PrestigeLevelInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1275869, -1, 5, 5, 0xA7BA9093, fields, -1);
        return &instance;
    }
};

struct PvpScalingEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1591100, -1, 3, 3, 0x3DDA2316, fields, 1);
        return &instance;
    }
};

struct PvpScalingEffectTypeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1591098, -1, 1, 1, 0x028513CE, fields, -1);
        return &instance;
    }
};

struct PvpTalentMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1302853, 1, 9, 9, 0xA6A98BD5, fields, 2);
        return &instance;
    }
};

struct PvpTalentCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1891534, -1, 1, 1, 0xF6B59A30, fields, -1);
        return &instance;
    }
};

struct PvpTalentSlotUnlockMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1950197, -1, 4, 4, 0x05372436, fields, -1);
        return &instance;
    }
};

struct PvpTierMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_STRING, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2066871, -1, 8, 8, 0x223746BF, fields, 5);
        return &instance;
    }
};

struct QuestFactionRewardMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_SHORT, 10, true },
        };
        static constexpr DB2Meta instance(1282622, -1, 1, 1, 0xD65EACAF, fields, -1);
        return &instance;
    }
};

struct QuestFeedbackEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1343388, -1, 6, 6, 0xC371A7DF, fields, -1);
        return &instance;
    }
};

struct QuestInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1120960, -1, 4, 4, 0xC508CFB5, fields, -1);
        return &instance;
    }
};

struct QuestLineMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(973430, -1, 3, 3, 0x860E7B54, fields, -1);
        return &instance;
    }
};

struct QuestLineXQuestMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(973441, -1, 3, 3, 0xFF15296C, fields, 0);
        return &instance;
    }
};

struct QuestMoneyRewardMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 10, false },
        };
        static constexpr DB2Meta instance(1139047, -1, 1, 1, 0x4B06657C, fields, -1);
        return &instance;
    }
};

struct QuestObjectiveMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1251960, -1, 8, 7, 0x7EC6466C, fields, 7);
        return &instance;
    }
};

struct QuestPackageItemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(801743, -1, 4, 4, 0x5518203F, fields, -1);
        return &instance;
    }
};

struct QuestSortMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1134585, -1, 2, 2, 0x78E6AE79, fields, -1);
        return &instance;
    }
};

struct QuestV2Meta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1139443, -1, 1, 1, 0x30FDC3CE, fields, -1);
        return &instance;
    }
};

struct QuestV2CliTaskMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[24] =
        {
            { FT_LONG, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 3, false },
        };
        static constexpr DB2Meta instance(1028735, 3, 24, 24, 0x9E9CB090, fields, -1);
        return &instance;
    }
};

struct QuestXGroupActivityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1573634, -1, 2, 2, 0x601AC6F5, fields, -1);
        return &instance;
    }
};

struct QuestXPMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_SHORT, 10, false },
        };
        static constexpr DB2Meta instance(1139378, -1, 1, 1, 0xE49E815E, fields, -1);
        return &instance;
    }
};

struct RandPropPointsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 5, false },
            { FT_INT, 5, false },
            { FT_INT, 5, false },
        };
        static constexpr DB2Meta instance(1310245, -1, 4, 4, 0x77DE4FE0, fields, -1);
        return &instance;
    }
};

struct RelicSlotTierRequirementMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1716803, -1, 3, 3, 0x6EE8DD9E, fields, -1);
        return &instance;
    }
};

struct RelicTalentMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1671256, -1, 5, 5, 0x7DC0DB5C, fields, -1);
        return &instance;
    }
};

struct ResearchBranchMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1133729, -1, 6, 6, 0xE71C50A8, fields, -1);
        return &instance;
    }
};

struct ResearchFieldMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1133711, 1, 3, 3, 0x19E8D6A8, fields, -1);
        return &instance;
    }
};

struct ResearchProjectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1134090, 2, 9, 9, 0xFD3FD69A, fields, -1);
        return &instance;
    }
};

struct ResearchSiteMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1134091, -1, 4, 4, 0xD726A6EE, fields, -1);
        return &instance;
    }
};

struct ResistancesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1135072, -1, 3, 3, 0x1895D4EB, fields, -1);
        return &instance;
    }
};

struct RewardPackMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1307156, -1, 6, 6, 0x46AD3B95, fields, -1);
        return &instance;
    }
};

struct RewardPackXCurrencyTypeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1307153, -1, 3, 2, 0xFF9E3096, fields, 2);
        return &instance;
    }
};

struct RewardPackXItemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1307155, -1, 3, 2, 0xC131D42C, fields, 2);
        return &instance;
    }
};

struct RibbonQualityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1398908, -1, 5, 5, 0x65E85BF3, fields, -1);
        return &instance;
    }
};

struct RulesetItemUpgradeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(801749, -1, 2, 2, 0xDD8D5AD6, fields, -1);
        return &instance;
    }
};

struct SDReplacementModelMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1712172, -1, 1, 1, 0x5C3E39E7, fields, -1);
        return &instance;
    }
};

struct SSAOSettingsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(2056369, 0, 5, 5, 0x20BC890C, fields, -1);
        return &instance;
    }
};

struct ScalingStatDistributionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1141728, -1, 3, 3, 0xE9A4FF63, fields, -1);
        return &instance;
    }
};

struct ScalingStatValuesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[23] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(4719537, -1, 23, 23, 0x7037AEF9, fields, -1);
        return &instance;
    }
};

struct ScenarioMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1139062, -1, 5, 5, 0x25359326, fields, -1);
        return &instance;
    }
};

struct ScenarioEventEntryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1141065, -1, 2, 2, 0x23EC2227, fields, -1);
        return &instance;
    }
};

struct ScenarioStepMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1132761, -1, 11, 11, 0x2E81EBA9, fields, 2);
        return &instance;
    }
};

struct SceneScriptMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(801754, -1, 2, 2, 0x1D557390, fields, -1);
        return &instance;
    }
};

struct SceneScriptGlobalTextMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1758036, -1, 2, 2, 0x2023785D, fields, -1);
        return &instance;
    }
};

struct SceneScriptPackageMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(801755, -1, 1, 1, 0xD7CC5A6A, fields, -1);
        return &instance;
    }
};

struct SceneScriptPackageMemberMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(801756, -1, 4, 4, 0xB7D9304D, fields, 0);
        return &instance;
    }
};

struct SceneScriptTextMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1758037, -1, 2, 2, 0x2023785D, fields, -1);
        return &instance;
    }
};

struct ScheduledIntervalMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1327082, -1, 5, 5, 0x51E48A73, fields, -1);
        return &instance;
    }
};

struct ScreenEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 4, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1302849, -1, 12, 12, 0x82E76E04, fields, -1);
        return &instance;
    }
};

struct ScreenEffectTypeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3063174, -1, 1, 1, 0xBE649273, fields, -1);
        return &instance;
    }
};

struct ScreenLocationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1279416, -1, 1, 1, 0xE7C2B265, fields, -1);
        return &instance;
    }
};

struct SeamlessSiteMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1328719, -1, 1, 1, 0x95763E0E, fields, 0);
        return &instance;
    }
};

struct ServerMessagesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(1301141, -1, 1, 1, 0xB6A67FBF, fields, -1);
        return &instance;
    }
};

struct ShadowyEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1239844, -1, 13, 13, 0xDD9C37C7, fields, -1);
        return &instance;
    }
};

struct SiegeablePropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1954391, -1, 4, 4, 0xC8D65F95, fields, -1);
        return &instance;
    }
};

struct SkillLineMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1240935, 5, 13, 13, 0x029CC231, fields, -1);
        return &instance;
    }
};

struct SkillLineAbilityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[16] =
        {
            { FT_LONG, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1266278, 1, 16, 16, 0x812C6AF2, fields, 2);
        return &instance;
    }
};

struct SkillLineCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(2179610, -1, 2, 2, 0xD521FCDB, fields, -1);
        return &instance;
    }
};

struct SkillRaceClassInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_LONG, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1240406, -1, 7, 7, 0x09EBC8F7, fields, 1);
        return &instance;
    }
};

struct SkySceneXPlayerConditionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3581893, -1, 2, 1, 0xBF5812B6, fields, 1);
        return &instance;
    }
};

struct SoundAmbienceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 2, false },
            { FT_INT, 2, false },
            { FT_INT, 2, false },
        };
        static constexpr DB2Meta instance(1310628, -1, 6, 6, 0x7C547DA0, fields, -1);
        return &instance;
    }
};

struct SoundAmbienceFlavorMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1267065, -1, 3, 2, 0xB0DE778D, fields, 2);
        return &instance;
    }
};

struct SoundBusMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1310246, 0, 8, 7, 0x2F26A438, fields, 7);
        return &instance;
    }
};

struct SoundBusOverrideMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1598732, 0, 7, 7, 0xDECEC2B1, fields, 1);
        return &instance;
    }
};

struct SoundEmitterPillPointsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_FLOAT, 3, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1092317, -1, 2, 2, 0x3F03ED1B, fields, 1);
        return &instance;
    }
};

struct SoundEmittersMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1092316, 3, 12, 11, 0x595EA255, fields, 11);
        return &instance;
    }
};

struct SoundEnvelopeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1693131, -1, 7, 7, 0x9D42FE93, fields, 0);
        return &instance;
    }
};

struct SoundFilterMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1271601, -1, 1, 1, 0x028513CE, fields, -1);
        return &instance;
    }
};

struct SoundFilterElemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_FLOAT, 9, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1267066, -1, 3, 2, 0x1BC48044, fields, 2);
        return &instance;
    }
};

struct SoundKitMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[16] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1237434, 0, 16, 16, 0x1F4AF63A, fields, -1);
        return &instance;
    }
};

struct SoundKitAdvancedMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[43] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1237436, 0, 43, 43, 0x9E8F3D27, fields, -1);
        return &instance;
    }
};

struct SoundKitChildMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1307289, -1, 2, 2, 0xC9AA0EF9, fields, 1);
        return &instance;
    }
};

struct SoundKitEntryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1237435, -1, 4, 4, 0x8FEA5F4F, fields, 0);
        return &instance;
    }
};

struct SoundKitFallbackMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1307288, -1, 2, 2, 0x806E9113, fields, -1);
        return &instance;
    }
};

struct SoundOverrideMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1266542, -1, 5, 5, 0x932609E8, fields, -1);
        return &instance;
    }
};

struct SoundProviderPreferencesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[23] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1279417, -1, 23, 23, 0x2D23257D, fields, -1);
        return &instance;
    }
};

struct SourceInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1313612, -1, 4, 3, 0xFE474766, fields, 3);
        return &instance;
    }
};

struct SpamMessagesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1117088, -1, 1, 1, 0x0904D8D6, fields, -1);
        return &instance;
    }
};

struct SpecSetMemberMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2057624, -1, 2, 1, 0x64CD1E2D, fields, 1);
        return &instance;
    }
};

struct SpecializationSpellsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1240335, 1, 6, 6, 0x4345768A, fields, 2);
        return &instance;
    }
};

struct SpecializationSpellsDisplayMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 6, false },
        };
        static constexpr DB2Meta instance(2067238, -1, 2, 2, 0x13467AE7, fields, 0);
        return &instance;
    }
};

struct SpellMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(1140089, -1, 3, 3, 0x716B4F88, fields, -1);
        return &instance;
    }
};

struct SpellActionBarPrefMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1019373, -1, 2, 2, 0xFFED047B, fields, -1);
        return &instance;
    }
};

struct SpellActivationOverlayMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_INT, 4, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1261603, -1, 8, 8, 0x0FE8E80E, fields, -1);
        return &instance;
    }
};

struct SpellAuraOptionsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 2, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1139952, -1, 8, 7, 0xF3B54642, fields, 7);
        return &instance;
    }
};

struct SpellAuraRestrictionsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(981566, -1, 10, 9, 0xBF42FB43, fields, 9);
        return &instance;
    }
};

struct SpellAuraVisXChrSpecMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1280615, -1, 2, 1, 0x66548CBA, fields, 1);
        return &instance;
    }
};

struct SpellAuraVisibilityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1280616, 0, 4, 3, 0xCE14F092, fields, 3);
        return &instance;
    }
};

struct SpellCastTimesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1134089, -1, 3, 3, 0x9BD18C05, fields, -1);
        return &instance;
    }
};

struct SpellCastingRequirementsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1002166, -1, 7, 7, 0xE83B7350, fields, -1);
        return &instance;
    }
};

struct SpellCategoriesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1139939, -1, 9, 8, 0x637E61DD, fields, 8);
        return &instance;
    }
};

struct SpellCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1280619, -1, 6, 6, 0xAF6B03DC, fields, -1);
        return &instance;
    }
};

struct SpellChainEffectsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[60] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 11, false },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 3, true },
        };
        static constexpr DB2Meta instance(1343310, -1, 60, 60, 0x31DC7CA9, fields, -1);
        return &instance;
    }
};

struct SpellClassOptionsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 4, true },
        };
        static constexpr DB2Meta instance(979663, -1, 4, 4, 0xF6EF2BD9, fields, -1);
        return &instance;
    }
};

struct SpellCooldownsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1139924, -1, 5, 4, 0x8A952DCF, fields, 4);
        return &instance;
    }
};

struct SpellCraftUIMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(2620904, -1, 1, 1, 0x866062DA, fields, -1);
        return &instance;
    }
};

struct SpellDescriptionVariablesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1140004, -1, 1, 1, 0xB3BAF484, fields, -1);
        return &instance;
    }
};

struct SpellDispelTypeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1137829, -1, 4, 4, 0xC3F3F9A3, fields, -1);
        return &instance;
    }
};

struct SpellDurationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1137828, -1, 3, 3, 0x70784BCD, fields, -1);
        return &instance;
    }
};

struct SpellEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[29] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 2, true },
            { FT_INT, 2, false },
            { FT_INT, 4, true },
            { FT_SHORT, 2, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1140088, -1, 29, 28, 0x9E9FF6CB, fields, 28);
        return &instance;
    }
};

struct SpellEffectAutoDescriptionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1888495, -1, 9, 9, 0x30A8728D, fields, -1);
        return &instance;
    }
};

struct SpellEffectEmissionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1310248, -1, 4, 4, 0xB26CB10D, fields, -1);
        return &instance;
    }
};

struct SpellEquippedItemsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1140011, -1, 4, 4, 0xE6040358, fields, -1);
        return &instance;
    }
};

struct SpellFlyoutMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_LONG, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1146819, -1, 6, 6, 0x2EAF1C11, fields, -1);
        return &instance;
    }
};

struct SpellFlyoutItemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1134085, -1, 3, 2, 0xEB06A5FD, fields, 2);
        return &instance;
    }
};

struct SpellFocusObjectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(1280620, -1, 1, 1, 0x1AC95960, fields, -1);
        return &instance;
    }
};

struct SpellInterruptsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, true },
            { FT_INT, 2, true },
            { FT_INT, 2, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1139906, -1, 5, 4, 0x62CE2641, fields, 4);
        return &instance;
    }
};

struct SpellItemEnchantmentMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[20] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 3, false },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 3, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 3, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1362771, -1, 20, 20, 0x2DF904D2, fields, -1);
        return &instance;
    }
};

struct SpellItemEnchantmentConditionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_BYTE, 5, false },
            { FT_INT, 5, false },
            { FT_BYTE, 5, false },
            { FT_BYTE, 5, false },
            { FT_BYTE, 5, false },
            { FT_BYTE, 5, false },
        };
        static constexpr DB2Meta instance(1121834, -1, 6, 6, 0x5C1CBAD7, fields, -1);
        return &instance;
    }
};

struct SpellKeyboundOverrideMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1127327, -1, 4, 4, 0x11EB6252, fields, -1);
        return &instance;
    }
};

struct SpellLabelMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1347275, -1, 2, 1, 0x46008468, fields, 1);
        return &instance;
    }
};

struct SpellLearnSpellMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1001907, -1, 3, 3, 0xC0699F17, fields, -1);
        return &instance;
    }
};

struct SpellLevelsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1140079, -1, 6, 5, 0xF1FA4CF1, fields, 5);
        return &instance;
    }
};

struct SpellMechanicMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(1014438, -1, 1, 1, 0xBD81DC13, fields, -1);
        return &instance;
    }
};

struct SpellMiscMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 14, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1003144, -1, 12, 11, 0x957F010C, fields, 11);
        return &instance;
    }
};

struct SpellMissileMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[15] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(897956, -1, 15, 15, 0x086B0CE5, fields, -1);
        return &instance;
    }
};

struct SpellMissileMotionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(897955, -1, 4, 4, 0xA5BEAF64, fields, -1);
        return &instance;
    }
};

struct SpellNameMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(1990283, -1, 1, 1, 0x1AC95960, fields, -1);
        return &instance;
    }
};

struct SpellPowerMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[14] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(982806, 0, 14, 13, 0xC41C9FCF, fields, 13);
        return &instance;
    }
};

struct SpellPowerDifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(982804, 0, 3, 3, 0x6CF6BAAA, fields, -1);
        return &instance;
    }
};

struct SpellProceduralEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_FLOAT, 4, true },
        };
        static constexpr DB2Meta instance(1140477, 0, 3, 3, 0x41DDE181, fields, -1);
        return &instance;
    }
};

struct SpellProcsPerMinuteMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1133526, -1, 2, 2, 0x7B121F85, fields, -1);
        return &instance;
    }
};

struct SpellProcsPerMinuteModMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1133525, -1, 4, 3, 0xA09AE996, fields, 3);
        return &instance;
    }
};

struct SpellRadiusMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1134584, -1, 4, 4, 0x6BD6FF9E, fields, -1);
        return &instance;
    }
};

struct SpellRangeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 2, true },
            { FT_FLOAT, 2, true },
        };
        static constexpr DB2Meta instance(1146820, -1, 5, 5, 0x371ED383, fields, -1);
        return &instance;
    }
};

struct SpellReagentsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 8, true },
            { FT_SHORT, 8, true },
        };
        static constexpr DB2Meta instance(841946, -1, 3, 3, 0x0675B343, fields, -1);
        return &instance;
    }
};

struct SpellReagentsCurrencyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1135239, -1, 3, 3, 0x1D2927F1, fields, 0);
        return &instance;
    }
};

struct SpellScalingMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1139940, -1, 5, 5, 0x732DE96C, fields, -1);
        return &instance;
    }
};

struct SpellShapeshiftMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 2, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1139929, -1, 4, 4, 0xE59A8101, fields, -1);
        return &instance;
    }
};

struct SpellShapeshiftFormMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 4, false },
            { FT_INT, 8, false },
        };
        static constexpr DB2Meta instance(1280618, -1, 10, 10, 0x869B8C31, fields, -1);
        return &instance;
    }
};

struct SpellSpecialUnitEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1268903, -1, 2, 2, 0xBD6355C5, fields, -1);
        return &instance;
    }
};

struct SpellTargetRestrictionsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1139993, -1, 8, 7, 0x573DA9BA, fields, 7);
        return &instance;
    }
};

struct SpellTotemsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 2, false },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1002162, -1, 3, 3, 0x3D40DC5D, fields, -1);
        return &instance;
    }
};

struct SpellVisualMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[17] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(897952, -1, 17, 17, 0x4D81CB5D, fields, -1);
        return &instance;
    }
};

struct SpellVisualAnimMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1140479, -1, 3, 3, 0xA8F09E94, fields, -1);
        return &instance;
    }
};

struct SpellVisualColorEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1094006, -1, 11, 11, 0x41C2763B, fields, -1);
        return &instance;
    }
};

struct SpellVisualEffectNameMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[14] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(897948, -1, 14, 14, 0x8AA2AAED, fields, -1);
        return &instance;
    }
};

struct SpellVisualEventMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1685317, -1, 9, 8, 0xA85282AD, fields, 8);
        return &instance;
    }
};

struct SpellVisualKitMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(897949, -1, 5, 5, 0x2EF1F900, fields, -1);
        return &instance;
    }
};

struct SpellVisualKitAreaModelMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(897951, -1, 6, 6, 0x45686FDD, fields, -1);
        return &instance;
    }
};

struct SpellVisualKitEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1140480, -1, 3, 2, 0xD906832B, fields, 2);
        return &instance;
    }
};

struct SpellVisualKitModelAttachMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[22] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(897953, 2, 22, 21, 0x6A8BE635, fields, 21);
        return &instance;
    }
};

struct SpellVisualMissileMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[16] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(897954, 2, 16, 15, 0xE760A338, fields, 15);
        return &instance;
    }
};

struct SpellXDescriptionVariablesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1724949, -1, 2, 2, 0x73798270, fields, -1);
        return &instance;
    }
};

struct SpellXSpellVisualMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1101657, 0, 13, 12, 0xA275DA43, fields, 12);
        return &instance;
    }
};

struct StableSlotPricesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(2179613, -1, 1, 1, 0x990C4D8D, fields, -1);
        return &instance;
    }
};

struct StartupFilesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1604265, -1, 3, 3, 0x368EADE0, fields, -1);
        return &instance;
    }
};

struct Startup_StringsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING, 1, true },
        };
        static constexpr DB2Meta instance(1375805, -1, 2, 2, 0x0A561909, fields, -1);
        return &instance;
    }
};

struct StationeryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1140758, -1, 3, 3, 0x9BA3EF05, fields, -1);
        return &instance;
    }
};

struct SummonPropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1345276, -1, 5, 5, 0xE3512881, fields, -1);
        return &instance;
    }
};

struct TactKeyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_BYTE, 16, false },
        };
        static constexpr DB2Meta instance(1302850, -1, 1, 1, 0x7A828CBE, fields, -1);
        return &instance;
    }
};

struct TactKeyLookupMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_BYTE, 8, false },
        };
        static constexpr DB2Meta instance(1302851, -1, 1, 1, 0x0A22E36E, fields, -1);
        return &instance;
    }
};

struct TalentMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[14] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 2, false },
            { FT_INT, 9, true },
            { FT_INT, 3, true },
            { FT_INT, 3, true },
        };
        static constexpr DB2Meta instance(1369062, -1, 14, 14, 0x98F23E5A, fields, -1);
        return &instance;
    }
};

struct TalentTabMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2178102, -1, 5, 5, 0x947D806F, fields, -1);
        return &instance;
    }
};

struct TaxiNodesMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[14] =
        {
            { FT_STRING, 1, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 2, true },
            { FT_FLOAT, 2, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 2, true },
        };
        static constexpr DB2Meta instance(1068100, 4, 14, 14, 0x951F23F1, fields, 5);
        return &instance;
    }
};

struct TaxiPathMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1067802, 0, 4, 4, 0x0ECA5A01, fields, 1);
        return &instance;
    }
};

struct TaxiPathNodeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_FLOAT, 3, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1000437, 1, 9, 9, 0x40CF66AF, fields, 2);
        return &instance;
    }
};

struct TerrainMaterialMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1307290, -1, 3, 3, 0xC714F1BC, fields, -1);
        return &instance;
    }
};

struct TerrainTypeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1310249, -1, 6, 6, 0x71668204, fields, -1);
        return &instance;
    }
};

struct TerrainTypeSoundsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1284822, -1, 1, 1, 0x3AF6B1EA, fields, -1);
        return &instance;
    }
};

struct TextureBlendSetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[11] =
        {
            { FT_INT, 3, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 4, true },
        };
        static constexpr DB2Meta instance(1328721, -1, 11, 11, 0x1BBA6A98, fields, -1);
        return &instance;
    }
};

struct TextureFileDataMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(982459, 0, 3, 3, 0x9082651D, fields, 2);
        return &instance;
    }
};

struct TierTransitionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(3076928, -1, 4, 4, 0xE71F230A, fields, -1);
        return &instance;
    }
};

struct TotemCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1134586, -1, 3, 3, 0xFF4D821C, fields, -1);
        return &instance;
    }
};

struct ToyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(988200, 1, 5, 5, 0x2BF9A25E, fields, -1);
        return &instance;
    }
};

struct TradeSkillCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1301101, 2, 7, 7, 0xEACBC3D4, fields, -1);
        return &instance;
    }
};

struct TransformMatrixMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1338702, -1, 5, 5, 0xA90524CC, fields, -1);
        return &instance;
    }
};

struct TransmogHolidayMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1589454, 0, 2, 2, 0xCDFBE4A2, fields, -1);
        return &instance;
    }
};

struct TransmogSetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1376213, 1, 10, 10, 0x9DFDFC7E, fields, 7);
        return &instance;
    }
};

struct TransmogSetGroupMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1576116, 1, 2, 2, 0x6AB28D48, fields, -1);
        return &instance;
    }
};

struct TransmogSetItemMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1376212, 0, 4, 4, 0x79E6E5F6, fields, 1);
        return &instance;
    }
};

struct TransportAnimationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_FLOAT, 3, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1140686, -1, 4, 3, 0x986AE487, fields, 3);
        return &instance;
    }
};

struct TransportPhysicsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1121973, -1, 10, 10, 0x1096CC46, fields, -1);
        return &instance;
    }
};

struct TransportRotationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_FLOAT, 4, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1140687, -1, 3, 2, 0x9BBA6ACB, fields, 2);
        return &instance;
    }
};

struct TrophyMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(975024, -1, 4, 4, 0x85D711DA, fields, -1);
        return &instance;
    }
};

struct UIExpansionDisplayInfoMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1729547, -1, 3, 3, 0x4638120A, fields, -1);
        return &instance;
    }
};

struct UIExpansionDisplayInfoIconMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1729546, -1, 3, 3, 0x2C3DA03F, fields, -1);
        return &instance;
    }
};

struct UIScriptedAnimationEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[27] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3556601, 0, 27, 27, 0x0F921F51, fields, -1);
        return &instance;
    }
};

struct UiCamFbackTransmogChrRaceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1261406, -1, 5, 5, 0xA7C6C51B, fields, -1);
        return &instance;
    }
};

struct UiCamFbackTransmogWeaponMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1261407, -1, 4, 4, 0x33BD89B3, fields, -1);
        return &instance;
    }
};

struct UiCameraMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1120287, -1, 9, 9, 0xB0F77175, fields, -1);
        return &instance;
    }
};

struct UiCameraTypeMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1120288, -1, 3, 3, 0xF785DCB0, fields, -1);
        return &instance;
    }
};

struct UiCanvasMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1989363, 0, 3, 3, 0xD6692509, fields, -1);
        return &instance;
    }
};

struct UiMapMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1957206, 1, 13, 13, 0xF5EC37EE, fields, 2);
        return &instance;
    }
};

struct UiMapArtMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1957202, -1, 3, 3, 0xFF6316CB, fields, -1);
        return &instance;
    }
};

struct UiMapArtStyleLayerMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1957208, -1, 9, 8, 0x7123828B, fields, 8);
        return &instance;
    }
};

struct UiMapArtTileMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1957210, -1, 5, 4, 0x38D8E918, fields, 4);
        return &instance;
    }
};

struct UiMapAssignmentMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_FLOAT, 2, true },
            { FT_FLOAT, 2, true },
            { FT_FLOAT, 6, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1957219, 3, 10, 10, 0xAA730213, fields, 4);
        return &instance;
    }
};

struct UiMapFogOfWarMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2006972, 0, 4, 4, 0x3CC5A9B0, fields, 1);
        return &instance;
    }
};

struct UiMapFogOfWarVisualizationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(2006973, -1, 3, 3, 0xF107011A, fields, -1);
        return &instance;
    }
};

struct UiMapGroupMemberMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
        };
        static constexpr DB2Meta instance(1957204, -1, 5, 5, 0x15D925F9, fields, 1);
        return &instance;
    }
};

struct UiMapLinkMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_FLOAT, 2, true },
            { FT_FLOAT, 2, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(2030690, 2, 9, 9, 0x90B080E2, fields, 3);
        return &instance;
    }
};

struct UiMapXMapArtMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1957217, -1, 3, 2, 0x9776E9C8, fields, 2);
        return &instance;
    }
};

struct UiModelSceneMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1548215, -1, 2, 2, 0xA24757C0, fields, -1);
        return &instance;
    }
};

struct UiModelSceneActorMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1548214, 2, 10, 9, 0xD7DABE1F, fields, 9);
        return &instance;
    }
};

struct UiModelSceneActorDisplayMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
        };
        static constexpr DB2Meta instance(1548216, -1, 7, 7, 0xE28EC062, fields, -1);
        return &instance;
    }
};

struct UiModelSceneCameraMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[16] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1548213, 3, 16, 15, 0x3580F257, fields, 15);
        return &instance;
    }
};

struct UiPartyPoseMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1993323, -1, 6, 5, 0x0A6C74A9, fields, 5);
        return &instance;
    }
};

struct UiTextureAtlasMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(897470, -1, 4, 4, 0xDC7A7D35, fields, -1);
        return &instance;
    }
};

struct UiTextureAtlasElementMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1989276, 1, 2, 2, 0xD65CFDA5, fields, -1);
        return &instance;
    }
};

struct UiTextureAtlasMemberMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[12] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(897532, 1, 12, 12, 0xBD0C10F6, fields, 7);
        return &instance;
    }
};

struct UiTextureKitMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(939159, -1, 1, 1, 0xD387CFB7, fields, -1);
        return &instance;
    }
};

struct UiWidgetMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1983278, -1, 6, 6, 0xD139CBB3, fields, -1);
        return &instance;
    }
};

struct UiWidgetConstantSourceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1983639, -1, 3, 2, 0x40F52391, fields, 2);
        return &instance;
    }
};

struct UiWidgetDataSourceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1983640, -1, 4, 3, 0x8B222B2E, fields, 3);
        return &instance;
    }
};

struct UiWidgetStringSourceMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1983641, -1, 3, 2, 0x00E08529, fields, 2);
        return &instance;
    }
};

struct UiWidgetVisualizationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1983276, -1, 4, 4, 0x6DCD2EF3, fields, -1);
        return &instance;
    }
};

struct UnitBloodMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 2, false },
            { FT_INT, 2, false },
        };
        static constexpr DB2Meta instance(1284821, -1, 2, 2, 0x1A6799C3, fields, -1);
        return &instance;
    }
};

struct UnitBloodLevelsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_BYTE, 3, false },
        };
        static constexpr DB2Meta instance(1268904, -1, 1, 1, 0x73AC3D67, fields, -1);
        return &instance;
    }
};

struct UnitConditionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 8, false },
            { FT_BYTE, 8, true },
            { FT_INT, 8, true },
        };
        static constexpr DB2Meta instance(1120959, -1, 4, 4, 0x6997A33D, fields, -1);
        return &instance;
    }
};

struct UnitPowerBarMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[16] =
        {
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 6, true },
            { FT_INT, 6, true },
        };
        static constexpr DB2Meta instance(1237753, -1, 16, 16, 0x491662FD, fields, -1);
        return &instance;
    }
};

struct VehicleMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[18] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 8, false },
            { FT_SHORT, 3, false },
        };
        static constexpr DB2Meta instance(1368621, -1, 18, 18, 0x69788D5B, fields, -1);
        return &instance;
    }
};

struct VehicleSeatMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[61] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1345447, -1, 61, 61, 0x2F9F8A8F, fields, -1);
        return &instance;
    }
};

struct VehicleUIIndSeatMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1279741, -1, 4, 3, 0x410C15F9, fields, 3);
        return &instance;
    }
};

struct VehicleUIIndicatorMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1279740, -1, 1, 1, 0x4DC3FB8D, fields, -1);
        return &instance;
    }
};

struct VignetteMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(892861, -1, 9, 9, 0x4AC89FFC, fields, -1);
        return &instance;
    }
};

struct VirtualAttachmentMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1634482, -1, 2, 2, 0xD9EF5527, fields, -1);
        return &instance;
    }
};

struct VirtualAttachmentCustomizationMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1634480, -1, 3, 3, 0xA3DF15CC, fields, -1);
        return &instance;
    }
};

struct VocalUISoundsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 2, false },
        };
        static constexpr DB2Meta instance(1267067, -1, 4, 4, 0x9170B04C, fields, -1);
        return &instance;
    }
};

struct VoiceOverPriorityMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(4211372, -1, 3, 3, 0xA54084F0, fields, -1);
        return &instance;
    }
};

struct VolumeFogConditionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(3587230, -1, 4, 3, 0x93FE029C, fields, 3);
        return &instance;
    }
};

struct WMOAreaTableMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[15] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1355528, 1, 15, 15, 0xCC3C73FF, fields, 2);
        return &instance;
    }
};

struct WMOMinimapTextureMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1323241, -1, 5, 4, 0xECCFAA9B, fields, 4);
        return &instance;
    }
};

struct WbAccessControlListMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(879634, -1, 5, 5, 0x669122E7, fields, -1);
        return &instance;
    }
};

struct WeaponImpactSoundsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 11, false },
            { FT_INT, 11, false },
            { FT_INT, 11, false },
            { FT_INT, 11, false },
        };
        static constexpr DB2Meta instance(1267648, -1, 7, 7, 0x1498601B, fields, -1);
        return &instance;
    }
};

struct WeaponSwingSounds2Meta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(1267068, -1, 3, 3, 0x8066E81A, fields, -1);
        return &instance;
    }
};

struct WeaponTrailMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[9] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
        };
        static constexpr DB2Meta instance(982461, -1, 9, 9, 0xBD80DBD9, fields, -1);
        return &instance;
    }
};

struct WeaponTrailModelDefMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1239843, -1, 3, 2, 0x4F7A4F20, fields, 2);
        return &instance;
    }
};

struct WeaponTrailParamMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1239842, -1, 10, 9, 0x0AFAAF35, fields, 9);
        return &instance;
    }
};

struct WeatherMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[22] =
        {
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 2, true },
            { FT_FLOAT, 3, true },
        };
        static constexpr DB2Meta instance(1343311, -1, 22, 22, 0x50346E3B, fields, -1);
        return &instance;
    }
};

struct WeatherXParticulateMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1965591, -1, 2, 1, 0xD7EB645F, fields, 1);
        return &instance;
    }
};

struct WindSettingsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[10] =
        {
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 3, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_FLOAT, 1, true },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(943871, -1, 10, 10, 0xD1B2CCF6, fields, -1);
        return &instance;
    }
};

struct WorldBossLockoutMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[2] =
        {
            { FT_STRING, 1, true },
            { FT_INT, 1, false },
        };
        static constexpr DB2Meta instance(975279, -1, 2, 2, 0xF6CA67DB, fields, -1);
        return &instance;
    }
};

struct WorldChunkSoundsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1267069, -1, 6, 6, 0x67C4FB37, fields, -1);
        return &instance;
    }
};

struct WorldEffectMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[6] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1343312, -1, 6, 6, 0x3D9AC39D, fields, -1);
        return &instance;
    }
};

struct WorldElapsedTimerMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_STRING, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1135240, -1, 3, 3, 0xA5CF4268, fields, -1);
        return &instance;
    }
};

struct WorldMapOverlayMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[13] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 4, false },
        };
        static constexpr DB2Meta instance(1134579, 0, 13, 13, 0x40F7DB0A, fields, 1);
        return &instance;
    }
};

struct WorldMapOverlayTileMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1957212, -1, 5, 4, 0x40F5F817, fields, 4);
        return &instance;
    }
};

struct WorldStateExpressionMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
        };
        static constexpr DB2Meta instance(1332558, -1, 1, 1, 0xCB64D021, fields, -1);
        return &instance;
    }
};

struct WorldStateUIMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[17] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 3, false },
        };
        static constexpr DB2Meta instance(1343596, 5, 17, 17, 0xB319BAE8, fields, 6);
        return &instance;
    }
};

struct WorldStateZoneSoundsMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[8] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };
        static constexpr DB2Meta instance(1266941, -1, 8, 8, 0xA24FF759, fields, -1);
        return &instance;
    }
};

struct World_PVP_AreaMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[7] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, true },
        };
        static constexpr DB2Meta instance(1310255, -1, 7, 7, 0x783DEE60, fields, -1);
        return &instance;
    }
};

struct ZoneIntroMusicTableMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };
        static constexpr DB2Meta instance(1310251, -1, 4, 4, 0x042F6C99, fields, -1);
        return &instance;
    }
};

struct ZoneLightMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[5] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1310253, -1, 5, 5, 0x8401424D, fields, -1);
        return &instance;
    }
};

struct ZoneLightPointMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[3] =
        {
            { FT_FLOAT, 2, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1310256, -1, 3, 2, 0xA9A4F9A7, fields, 2);
        return &instance;
    }
};

struct ZoneMusicMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, true },
            { FT_INT, 2, false },
            { FT_INT, 2, false },
            { FT_INT, 2, false },
        };
        static constexpr DB2Meta instance(1310254, -1, 4, 4, 0x491CF01E, fields, -1);
        return &instance;
    }
};

struct ZoneStoryMeta
{
    static DB2Meta const* Instance()
    {
        static constexpr DB2MetaField fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };
        static constexpr DB2Meta instance(1797864, -1, 4, 3, 0x8A9E50D6, fields, 3);
        return &instance;
    }
};


//struct WbCertWhitelistMeta
//{
//    static DB2Meta const* Instance()
//    {
//        static constexpr DB2MetaField fields[4] =
//        {
//            { FT_STRING_NOT_LOCALIZED, 1, true },
//            { FT_BYTE, 1, false },
//            { FT_BYTE, 1, false },
//            { FT_BYTE, 1, false },
//        };
//        static constexpr DB2Meta instance(? ? ? , -1, 4, 4, 0x543DDD18, fields, -1);
//        return &instance;
//    }
//};
//



#endif // DB2Metadata_h__
