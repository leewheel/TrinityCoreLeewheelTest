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

#ifndef TRINITYCORE_MESSAGE_BUFFER_H
#define TRINITYCORE_MESSAGE_BUFFER_H

#include "Define.h"
#include <vector>
#include <cstring>

class MessageBuffer
{
    typedef std::vector<uint8>::size_type size_type;

public:
    MessageBuffer() : _wpos(0), _rpos(0), _storage()
    {
        _storage.resize(4096);
    }

    explicit MessageBuffer(std::size_t initialSize) : _wpos(0), _rpos(0), _storage(initialSize)
    {
    }

    MessageBuffer(MessageBuffer const& right) = default;

    MessageBuffer(MessageBuffer&& right) noexcept : _wpos(right._wpos), _rpos(right._rpos), _storage(std::move(right).Release()) { }

    ~MessageBuffer() = default;

    void Reset()
    {
        _wpos = 0;
        _rpos = 0;
    }

    void Resize(size_type bytes)
    {
        _storage.resize(bytes);
    }

    uint8* GetBasePointer() { return _storage.data(); }

    uint8* GetReadPointer() { return GetBasePointer() + _rpos; }

    uint8* GetWritePointer() { return GetBasePointer() + _wpos; }

    void ReadCompleted(size_type bytes) { _rpos += bytes; }

    void WriteCompleted(size_type bytes) { _wpos += bytes; }

    size_type GetActiveSize() const { return _wpos - _rpos; }

    size_type GetRemainingSpace() const { return _storage.size() - _wpos; }

    size_type GetBufferSize() const { return _storage.size(); }

    // Discards inactive data
    void Normalize()
    {
        if (_rpos)
        {
            if (_rpos != _wpos)
                memmove(GetBasePointer(), GetReadPointer(), GetActiveSize());

            _wpos -= _rpos;
            _rpos = 0;
        }
    }

    // Ensures there's "some" free space, make sure to call Normalize() before this
    void EnsureFreeSpace()
    {
        // resize buffer if it's already full
        if (GetRemainingSpace() == 0)
            _storage.resize(_storage.size() * 3 / 2);
    }

    void Write(void const* data, std::size_t size)
    {
        if (size)
        {
            memcpy(GetWritePointer(), data, size);
            WriteCompleted(size);
        }
    }

    std::vector<uint8>&& Release() &&
    {
        Reset();
        return std::move(_storage);
    }

    MessageBuffer& operator=(MessageBuffer const& right) = default;

    MessageBuffer& operator=(MessageBuffer&& right) noexcept
    {
        if (this != &right)
        {
            _wpos = right._wpos;
            _rpos = right._rpos;
            _storage = std::move(right).Release();
        }

        return *this;
    }

private:
    size_type _wpos;
    size_type _rpos;
    std::vector<uint8> _storage;
};

#endif /* __MESSAGEBUFFER_H_ */
