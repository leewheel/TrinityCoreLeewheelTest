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

#include "TraitPacketsCommon.h"
#include "DBCEnums.h"
#include "UpdateFields.h"

namespace WorldPackets::Traits
{
TraitEntry::TraitEntry() = default;

TraitEntry::TraitEntry(UF::TraitEntry const& ufEntry)
{
    TraitNodeID = ufEntry.TraitNodeID;
    TraitNodeEntryID = ufEntry.TraitNodeEntryID;
    Rank = ufEntry.Rank;
    GrantedRanks = ufEntry.GrantedRanks;
}

TraitSubTreeCache::TraitSubTreeCache() = default;

TraitSubTreeCache::TraitSubTreeCache(UF::TraitSubTreeCache const& ufSubTreeCache)
{
    TraitSubTreeID = ufSubTreeCache.TraitSubTreeID;
    for (UF::TraitEntry const& ufEntry : ufSubTreeCache.Entries)
        Entries.emplace_back(ufEntry);
    Active = ufSubTreeCache.Active;
}

TraitConfig::TraitConfig() = default;

TraitConfig::TraitConfig(UF::TraitConfig const& ufConfig)
{
    ID = ufConfig.ID;
    Type = static_cast<TraitConfigType>(*ufConfig.Type);
    ChrSpecializationID = ufConfig.ChrSpecializationID;
    CombatConfigFlags = static_cast<TraitCombatConfigFlags>(*ufConfig.CombatConfigFlags);
    LocalIdentifier = ufConfig.LocalIdentifier;
    SkillLineID = ufConfig.SkillLineID;
    TraitSystemID = ufConfig.TraitSystemID;
    for (UF::TraitEntry const& ufEntry : ufConfig.Entries)
        Entries.emplace_back(ufEntry);
    for (UF::TraitSubTreeCache const& ufSubTree : ufConfig.SubTrees)
        SubTrees.emplace_back(ufSubTree);
    Name = ufConfig.Name;
}

ByteBuffer& operator>>(ByteBuffer& data, TraitEntry& traitEntry)
{
    data >> traitEntry.TraitNodeID;
    data >> traitEntry.TraitNodeEntryID;
    data >> traitEntry.Rank;
    data >> traitEntry.GrantedRanks;

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, TraitEntry const& traitEntry)
{
    data << int32(traitEntry.TraitNodeID);
    data << int32(traitEntry.TraitNodeEntryID);
    data << int32(traitEntry.Rank);
    data << int32(traitEntry.GrantedRanks);

    return data;
}

ByteBuffer& operator>>(ByteBuffer& data, TraitSubTreeCache& traitSubTreeCache)
{
    data >> traitSubTreeCache.TraitSubTreeID;
    uint32 entriesSize = data.read<uint32>();
    if (entriesSize > 100)
        OnInvalidArraySize(entriesSize, 100);

    traitSubTreeCache.Entries.resize(entriesSize);
    for (TraitEntry& traitEntry : traitSubTreeCache.Entries)
        data >> traitEntry;

    data >> Bits<1>(traitSubTreeCache.Active);

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, TraitSubTreeCache const& traitSubTreeCache)
{
    data << int32(traitSubTreeCache.TraitSubTreeID);
    data << Size<uint32>(traitSubTreeCache.Entries);

    for (TraitEntry const& traitEntry : traitSubTreeCache.Entries)
        data << traitEntry;

    data << Bits<1>(traitSubTreeCache.Active);
    data.FlushBits();

    return data;
}

ByteBuffer& operator>>(ByteBuffer& data, TraitConfig& traitConfig)
{
    data >> traitConfig.ID;
    data >> As<int32>(traitConfig.Type);
    uint32 entriesSize = data.read<uint32>();
    if (entriesSize > 100)
        OnInvalidArraySize(entriesSize, 100);

    traitConfig.Entries.resize(entriesSize);

    uint32 subtreesSize = data.read<uint32>();
    if (subtreesSize > 10)
        OnInvalidArraySize(subtreesSize, 10);

    traitConfig.SubTrees.resize(subtreesSize);

    switch (traitConfig.Type)
    {
        case TraitConfigType::Combat:
            data >> traitConfig.ChrSpecializationID;
            data >> As<int32>(traitConfig.CombatConfigFlags);
            data >> traitConfig.LocalIdentifier;
            break;
        case TraitConfigType::Profession:
            data >> traitConfig.SkillLineID;
            break;
        case TraitConfigType::Generic:
            data >> traitConfig.TraitSystemID;
            break;
        default:
            break;
    }

    for (TraitEntry& traitEntry : traitConfig.Entries)
        data >> traitEntry;

    data >> SizedString::BitsSize<9>(traitConfig.Name);

    for (TraitSubTreeCache& traitSubTreeCache : traitConfig.SubTrees)
        data >> traitSubTreeCache;

    data >> SizedString::Data<Strings::DontValidateUtf8>(traitConfig.Name);

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, TraitConfig const& traitConfig)
{
    data << int32(traitConfig.ID);
    data << int32(traitConfig.Type);
    data << Size<uint32>(traitConfig.Entries);
    data << Size<uint32>(traitConfig.SubTrees);
    switch (traitConfig.Type)
    {
        case TraitConfigType::Combat:
            data << int32(traitConfig.ChrSpecializationID);
            data << int32(traitConfig.CombatConfigFlags);
            data << int32(traitConfig.LocalIdentifier);
            break;
        case TraitConfigType::Profession:
            data << int32(traitConfig.SkillLineID);
            break;
        case TraitConfigType::Generic:
            data << int32(traitConfig.TraitSystemID);
            break;
        default:
            break;
    }

    for (TraitEntry const& traitEntry : traitConfig.Entries)
        data << traitEntry;

    data << SizedString::BitsSize<9>(traitConfig.Name);

    for (TraitSubTreeCache const& traitSubTreeCache : traitConfig.SubTrees)
        data << traitSubTreeCache;

    data.FlushBits();

    data << SizedString::Data(static_cast<std::string const&>(traitConfig.Name));

    return data;
}
}
