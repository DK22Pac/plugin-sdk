/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

namespace rage {
#define POOL_FLAG_ISFREE 0x80
#define POOL_FLAG_REFERENCEMASK 0x7f

    class fwBasePool {
    public:
        uint8_t* m_aStorage;
        uint8_t* m_aFlags;
        int32_t m_nSize;
        int32_t m_nStorageSize;
        int32_t m_nFirstFreeIndex;
        int32_t m_numSlotsUsed;

    public:
        int32_t GetSize() const {
            return m_nSize;
        }

        int32_t GetNoOfUsedSpaces() const {
            return m_numSlotsUsed;
        }

        int32_t GetNoOfFreeSpaces() const {
            return m_nSize - m_numSlotsUsed;
        }

        int32_t GetPoolSize() const {
            return m_nSize;
        }

        bool GetIsFree(int32_t index) const {
            return (m_aFlags[index] & POOL_FLAG_ISFREE) != 0;
        }

        int GetId(int i) const {
            return m_aFlags[i] & POOL_FLAG_REFERENCEMASK;
        }

        uint8_t GetReference(int32_t index) const {
            return (m_aFlags[index] & POOL_FLAG_REFERENCEMASK);
        }

        uint8_t GetFlags(int32_t index) const {
            return (m_aFlags[index]);
        }

    public:
        void SetIsFree(int32_t index, bool bIsFree) {
            bIsFree ? (m_aFlags[index] |= POOL_FLAG_ISFREE) : (m_aFlags[index] &= ~POOL_FLAG_ISFREE);
        }

        void SetId(int i, int id) {
            m_aFlags[i] = (m_aFlags[i] & POOL_FLAG_ISFREE) | (id & POOL_FLAG_REFERENCEMASK);
        }

        void SetReference(int32_t index, uint8_t nReference) {
            m_aFlags[index] = (m_aFlags[index] & ~POOL_FLAG_REFERENCEMASK) | (((nReference & POOL_FLAG_REFERENCEMASK) > 1 ? (nReference & POOL_FLAG_REFERENCEMASK) : 1));
        }

        void MakeEmpty() {
            for (int32_t i = 0; i < m_nSize; i++) {
                SetIsFree(i, true);
                SetReference(i, 0);
            }
        }

        void Reset() {
            m_nFirstFreeIndex = 0;
            MakeEmpty();
        }

        void* GetAt(int32_t index) {
            return m_aFlags[index >> 8] == (index & 0xFF) ? &m_aStorage[index >> 8] : nullptr;
        }

        int32_t GetJustIndex_NoFreeAssert(const void* entry) {
            int index = ((uint8_t*)entry - m_aStorage);
            return index;
        }

        int32_t GetIndex(const void* entry) {
            int i = GetJustIndex_NoFreeAssert(entry);
            return m_aFlags[i] + (i << 8);
        }

        int32_t GetJustIndex(const void* entry) {
            int index = GetJustIndex_NoFreeAssert(entry);
            return index;
        }

        void* GetSlot(int32_t index) {
            return GetIsFree(index) ? nullptr : &m_aStorage[index];
        }

        void* New() {
            int32_t freeIndex = m_nFirstFreeIndex;
            int32_t* nextFree = (int32_t*)(m_aStorage + freeIndex * m_nStorageSize);
            m_nFirstFreeIndex = *nextFree;

            void* result = (void*)nextFree;
            SetIsFree(freeIndex, false);
            SetReference(freeIndex, GetReference(freeIndex) + 1);
            return result;
        }

        void* New(int32_t index) {
            const uint32_t i = (index >> 8);

            SetIsFree(i, false);
            SetReference(i, index & 255);

            uint8_t* pT = &m_aStorage[i * m_nStorageSize];
            int32_t* prev = &m_nFirstFreeIndex;
            while (*prev != -1 && *prev != i)
                prev = (int32_t*)(m_aStorage + *prev * m_nStorageSize);

            *prev = *(int32_t*)(m_aStorage + i * m_nStorageSize);

            m_numSlotsUsed++;
            return pT;
        }

        void Delete(void* pT) {
            int32_t index = GetJustIndex(pT);
            int32_t* node = (int32_t*)(m_aStorage + index * m_nStorageSize);
            *node = -1;

            if (m_nFirstFreeIndex == -1)
                m_nFirstFreeIndex = index;

            SetIsFree(index, true);

            m_numSlotsUsed--;
        }
    };

    template<class T>
    class fwPool : public fwBasePool {
    public:
        T* New() {
            return static_cast<T*>(fwBasePool::New());
        }

        T* New(int32_t index) {
            return static_cast<T*>(fwBasePool::New(index));
        }

        T* GetAt(int32_t index) {
            return static_cast<T*>(fwBasePool::GetAt(index));
        }

        T* GetSlot(int32_t index) {
            return static_cast<T*>(fwBasePool::GetSlot(index));
        }

        const T* GetSlot(int32_t index) const {
            return static_cast<const T*>(fwBasePool::GetSlot(index));
        }
    };
}
