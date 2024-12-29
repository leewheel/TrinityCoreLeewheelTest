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

#ifndef UpdateMask_h__
#define UpdateMask_h__

#include "Define.h"
#include <algorithm>
#include "UpdateData.h"

namespace UpdateMaskHelpers
{
    inline constexpr std::size_t GetBlockIndex(std::size_t bit) { return bit / 32u; }
    inline constexpr uint32 GetBlockFlag(std::size_t bit) { return 1u << (bit % 32u); }
}


//TODOFROST can be replaced with modern verison?
namespace LegacyUpdateMask
{
    typedef uint32 BlockType;

    enum DynamicFieldChangeType : uint16
    {
        UNCHANGED = 0,
        VALUE_CHANGED = 0x7FFF,
        VALUE_AND_SIZE_CHANGED = 0x8000
    };

    constexpr inline std::size_t GetBlockCount(std::size_t bitCount)
    {
        using BitsPerBlock = std::integral_constant<std::size_t, sizeof(BlockType) * 8>;
        return (bitCount + BitsPerBlock::value - 1) / BitsPerBlock::value;
    }

    inline std::size_t EncodeDynamicFieldChangeType(std::size_t blockCount, DynamicFieldChangeType changeType, ObjectUpdateType updateType)
    {
        return blockCount | ((changeType & VALUE_AND_SIZE_CHANGED) * ((3 - static_cast<uint8>(updateType) /*this part evaluates to 0 if update type is not VALUES*/) / 3));
    }

    template<typename T>
    inline void SetUpdateBit(T* data, std::size_t bitIndex)
    {
        static_assert(std::is_integral<T>::value && std::is_unsigned<T>::value, "Type used for SetUpdateBit data arg is not an unsigned integer");
        using BitsPerBlock = std::integral_constant<std::size_t, sizeof(T) * 8>;
        data[bitIndex / BitsPerBlock::value] |= T(1) << (bitIndex % BitsPerBlock::value);
    }
}



template<uint32 Bits>
class UpdateMask
{
public:
    static constexpr uint32 BitCount = Bits;
    static constexpr uint32 BlockCount = (Bits + 31) / 32;
    static constexpr uint32 BlocksMaskCount = (BlockCount + 31) / 32;

    constexpr UpdateMask() : _blocksMask(), _blocks()
    {
    }

    constexpr UpdateMask(std::array<uint32, BlockCount> const& init)
    {
        _blocksMask.back() = 0; // only last value of blocksMask will not be written fully
        for (uint32 block = 0; block < BlockCount; ++block)
        {
            if ((_blocks[block] = init[block]) != 0)
                _blocksMask[UpdateMaskHelpers::GetBlockIndex(block)] |= UpdateMaskHelpers::GetBlockFlag(block);
            else
                _blocksMask[UpdateMaskHelpers::GetBlockIndex(block)] &= ~UpdateMaskHelpers::GetBlockFlag(block);
        }
    }

    constexpr uint32 GetBlocksMask(uint32 index) const
    {
        return _blocksMask[index];
    }

    constexpr uint32 GetBlock(uint32 index) const
    {
        return _blocks[index];
    }

    constexpr bool operator[](uint32 index) const
    {
        return (_blocks[UpdateMaskHelpers::GetBlockIndex(index)] & UpdateMaskHelpers::GetBlockFlag(index)) != 0;
    }

    constexpr bool IsAnySet() const
    {
        return std::ranges::any_of(_blocksMask, [](uint32 blockMask)
            {
                return blockMask != 0;
            });
    }

    constexpr void Reset(uint32 index)
    {
        std::size_t blockIndex = UpdateMaskHelpers::GetBlockIndex(index);
        if (!(_blocks[blockIndex] &= ~UpdateMaskHelpers::GetBlockFlag(index)))
            _blocksMask[UpdateMaskHelpers::GetBlockIndex(blockIndex)] &= ~UpdateMaskHelpers::GetBlockFlag(blockIndex);
    }

    constexpr void ResetAll()
    {
        _blocksMask = { };
        _blocks = { };
    }

    constexpr void Set(uint32 index)
    {
        std::size_t blockIndex = UpdateMaskHelpers::GetBlockIndex(index);
        _blocks[blockIndex] |= UpdateMaskHelpers::GetBlockFlag(index);
        _blocksMask[UpdateMaskHelpers::GetBlockIndex(blockIndex)] |= UpdateMaskHelpers::GetBlockFlag(blockIndex);
    }

    constexpr void SetAll()
    {
        std::memset(_blocksMask.data(), 0xFF, _blocksMask.size() * sizeof(typename decltype(_blocksMask)::value_type));
        if constexpr (BlocksMaskCount % 32)
        {
            constexpr uint32 unused = 32 - (BlocksMaskCount % 32);
            _blocksMask.back() &= (0xFFFFFFFF >> unused);
        }
        std::memset(_blocks.data(), 0xFF, _blocks.size() * sizeof(typename decltype(_blocks)::value_type));
        if constexpr (BlockCount % 32)
        {
            constexpr uint32 unused = 32 - (BlockCount % 32);
            _blocks.back() &= (0xFFFFFFFF >> unused);
        }
    }

    constexpr UpdateMask& operator&=(UpdateMask const& right)
    {
        for (uint32 i = 0; i < BlocksMaskCount; ++i)
            _blocksMask[i] &= right._blocksMask[i];

        for (uint32 i = 0; i < BlockCount; ++i)
            if (!(_blocks[i] &= right._blocks[i]))
                _blocksMask[UpdateMaskHelpers::GetBlockIndex(i)] &= ~UpdateMaskHelpers::GetBlockFlag(i);

        return *this;
    }

    constexpr UpdateMask& operator|=(UpdateMask const& right)
    {
        for (std::size_t i = 0; i < BlocksMaskCount; ++i)
            _blocksMask[i] |= right._blocksMask[i];

        for (std::size_t i = 0; i < BlockCount; ++i)
            _blocks[i] |= right._blocks[i];

        return *this;
    }

private:
    std::array<uint32, BlocksMaskCount> _blocksMask;
    std::array<uint32, BlockCount> _blocks;
};

template<uint32 Bits>
UpdateMask<Bits> operator&(UpdateMask<Bits> const& left, UpdateMask<Bits> const& right)
{
    UpdateMask<Bits> result = left;
    result &= right;
    return result;
}

template<uint32 Bits>
UpdateMask<Bits> operator|(UpdateMask<Bits> const& left, UpdateMask<Bits> const& right)
{
    UpdateMask<Bits> result = left;
    result |= right;
    return result;
}

namespace UF::Compat
{
    using BlockType = uint32;

    constexpr inline std::size_t GetBlockCount(std::size_t bitCount)
    {
        using BitsPerBlock = std::integral_constant<std::size_t, sizeof(BlockType) * 8>;
        return (bitCount + BitsPerBlock::value - 1) / BitsPerBlock::value;
    }

    enum DynamicFieldChangeType : uint16
    {
        UNCHANGED = 0,
        VALUE_CHANGED = 0x7FFF,
        VALUE_AND_SIZE_CHANGED = 0x8000
    };

    inline std::size_t EncodeDynamicFieldChangeType(std::size_t blockCount, DynamicFieldChangeType changeType, ObjectUpdateType updateType)
    {
        return blockCount | ((changeType & VALUE_AND_SIZE_CHANGED) * ((3 - static_cast<uint8>(updateType) /*this part evaluates to 0 if update type is not VALUES*/) / 3));
    }

    class UpdateMaskBuf
    {
    public:
        UpdateMaskBuf(ByteBuffer* buf, size_t off) : _source(buf), _byte_offset(off), _bit_offset(0) {}

        inline void SetBit(size_t pos)
        {
            const size_t position = _bit_offset + pos;
            using BitsPerBlock = std::integral_constant<std::size_t, sizeof(uint8) * 8>;
            const size_t index = position / BitsPerBlock::value;
            uint8* src = _source->contents() + _byte_offset;
            src[index] |= uint8(1) << (position % BitsPerBlock::value);
        }

        inline void Offset(size_t off)
        {
            _bit_offset += off;
        }

        inline size_t GetOffset() const
        {
            return _bit_offset;
        }

    private:
        ByteBuffer* _source;
        size_t _byte_offset;
        size_t _bit_offset;
    };

}

//TODOFROST remove
//template<uint32 Bits>
//class DynamicUpdateMask : public UpdateMask<Bits> {
//public:
//
//    enum DynamicFieldChangeType : uint16
//    {
//        UNCHANGED = 0,
//        VALUE_CHANGED = 0x7FFF,
//        VALUE_AND_SIZE_CHANGED = 0x8000
//    };
//
//    uint32 EncodeDynamicFieldChangeType(DynamicFieldChangeType changeType, uint8 updateType) {
//        return this->BlockCount | ((changeType & VALUE_AND_SIZE_CHANGED) * ((3 - updateType /*this part evaluates to 0 if update type is not VALUES*/) / 3));
//    }
//};

#endif // UpdateMask_h__
