/*
    Plugin-SDK (Grand Theft Auto San Andreas Unreal) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

union tPoolObjectFlags {
    struct {
        uint8_t nId : 7;
        bool bEmpty : 1;
    };
private:
    uint8_t nValue;

public:
    uint8_t IntValue() {
        return nValue;
    }
};

VALIDATE_SIZE(tPoolObjectFlags, 0x1);

template<typename A, typename B = A>
class CPool {
public:
    B* m_aStorage;
    tPoolObjectFlags* m_aFlags;
    int32_t m_nSize;
    int32_t m_nFreeIndex;
    bool m_bOwnsArrays;
    bool m_bDealWithNoMemory;

public:
    CPool() {
        m_aStorage = nullptr;
        m_aFlags = nullptr;
        m_nSize = 0;
        m_bOwnsArrays = false;
    }

    CPool(int32_t nSize, const char* pPoolName) {
        m_aStorage = static_cast<B*>(operator new(sizeof(B) * nSize));
        m_aFlags = static_cast<tPoolObjectFlags*>(operator new(sizeof(tPoolObjectFlags) * nSize));
        m_nSize = nSize;
        m_nFreeIndex = -1;
        m_bOwnsArrays = true;
        for (int32_t i = 0; i < nSize; ++i) {
            m_aFlags[i].bEmpty = true;
            m_aFlags[i].nId = 0;
        }
    }

    ~CPool() {
        Flush();
    }

    void Init(int32_t nSize, void* pObjects, void* pInfos) {
        assert(this->m_aStorage == nullptr);
        m_aStorage = static_cast<B*>(pObjects);
        m_aFlags = static_cast<tPoolObjectFlags*>(pInfos);
        m_nSize = nSize;
        m_nFreeIndex = -1;
        m_bOwnsArrays = false;
        for (int32_t i = 0; i < nSize; ++i) {
            m_aFlags[i].bEmpty = true;
            m_aFlags[i].nId = 0;
        }
    }

    void Flush() {
        if (m_bOwnsArrays) {
            operator delete(m_aStorage);
            operator delete(m_aFlags);
        }
        m_aStorage = nullptr;
        m_aFlags = nullptr;
        m_nSize = 0;
        m_nFreeIndex = 0;
    }

    void Clear() {
        for (int32_t i = 0; i < m_nSize; i++)
            m_aFlags[i].bEmpty = true;
    }

    bool IsFreeSlotAtIndex(int32_t idx) {
        return m_aFlags[idx].bEmpty;
    }

    int32_t GetIndex(A* pObject) {
        return reinterpret_cast<B*>(pObject) - m_aStorage;
    }

    A* GetAt(int32_t nIndex) {
        return !IsFreeSlotAtIndex(nIndex) ? (A*)&m_aStorage[nIndex] : nullptr;
    }

    void SetFreeAt(int32_t idx, bool bFree) {
        m_aFlags[idx].bEmpty = bFree;
    }

    void SetIdAt(int32_t idx, uint8_t id) {
        m_aFlags[idx].nId = id;
    }

    uint8_t GetIdAt(int32_t idx) {
        return m_aFlags[idx].nId;
    }

    A* New() {
        bool bReachedTop = false;
        do {
            if (++m_nFreeIndex >= m_nSize) {
                if (bReachedTop) {
                    m_nFreeIndex = -1;
                    return nullptr;
                }
                bReachedTop = true;
                m_nFreeIndex = 0;
            }
        } while (!m_aFlags[m_nFreeIndex].bEmpty);
        m_aFlags[m_nFreeIndex].bEmpty = false;
        ++m_aFlags[m_nFreeIndex].nId;
        return &m_aStorage[m_nFreeIndex];
    }

    void CreateAtRef(int32_t nRef) {
        nRef >>= 8;
        m_aFlags[nRef].bEmpty = false;
        ++m_aFlags[nRef].nId;
        m_nFreeIndex = 0;
        while (!m_aFlags[m_nFreeIndex].bEmpty)
            ++m_nFreeIndex;
    }

    A* New(int32_t nRef) {
        A* result = &m_aStorage[nRef >> 8];
        CreateAtRef(nRef);
        return result;
    }

    void Delete(A* pObject) {
        int32_t nIndex = reinterpret_cast<B*>(pObject) - m_aStorage;
        m_aFlags[nIndex].bEmpty = true;
        if (nIndex < m_nFreeIndex)
            m_nFreeIndex = nIndex;
    }

    int32_t GetRef(A* pObject) {
        return (GetIndex(pObject) << 8) + m_aFlags[GetIndex(pObject)].IntValue();
    }

    A* GetAtRef(int32_t ref) {
        int32_t nSlotIndex = ref >> 8;
        return nSlotIndex >= 0 && nSlotIndex < m_nSize && m_aFlags[nSlotIndex].IntValue() == (ref & 0xFF) ? reinterpret_cast<A*>(&m_aStorage[nSlotIndex]) : nullptr;
    }

    uint32_t GetNoOfUsedSpaces() {
        uint32_t counter = 0;
        for (int32_t i = 0; i < m_nSize; ++i) {
            if (!IsFreeSlotAtIndex(i))
                ++counter;
        }
        return counter;
    }

    uint32_t GetNoOfFreeSpaces() {
        return m_nSize - GetNoOfUsedSpaces();
    }

    uint32_t GetObjectSize() {
        return sizeof(B);
    }

    bool IsObjectValid(A* obj) {
        int32_t slot = GetIndex(obj);
        return slot >= 0 && slot < m_nSize && !IsFreeSlotAtIndex(slot);
    }
};

VALIDATE_SIZE(CPool<int32_t>, 0x20);

