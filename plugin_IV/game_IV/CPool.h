/*
    Plugin-SDK (Grand Theft Auto IV) header file
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
    uint8_t IntValue() { return nValue; }
};

VALIDATE_SIZE(tPoolObjectFlags, 1);

template<typename A, typename B = A>
class CPool {
private:
    B* m_pObjects;
    tPoolObjectFlags* m_byteMap;
    uint32_t m_nSize;
    uint32_t m_nEntrySize;
    uint32_t m_nFirstFree;
    uint32_t m_nUsed;
    bool m_bOwnsAllocations;
    uint8_t pad[3];

public:
    CPool() {
        m_pObjects = nullptr;
        m_byteMap = nullptr;
        m_nSize = 0;
        m_bOwnsAllocations = false;
    }

    CPool(int32_t nSize, const char* pPoolName) {
        m_pObjects = static_cast<B*>(operator new(sizeof(B) * nSize));
        m_byteMap = static_cast<tPoolObjectFlags*>(operator new(sizeof(tPoolObjectFlags) * nSize));
        m_nSize = nSize;
        m_nFirstFree = -1;
        m_bOwnsAllocations = true;
        for (int32_t i = 0; i < nSize; ++i) {
            m_byteMap[i].bEmpty = true;
            m_byteMap[i].nId = 0;
        }
    }

    ~CPool() {
        Flush();
    }

    void Init(int32_t nSize, void* pObjects, void* pInfos) {
        assert(this->m_pObjects == nullptr);
        m_pObjects = static_cast<B*>(pObjects);
        m_byteMap = static_cast<tPoolObjectFlags*>(pInfos);
        m_nSize = nSize;
        m_nFirstFree = -1;
        m_bOwnsAllocations = false;
        for (int32_t i = 0; i < nSize; ++i) {
            m_byteMap[i].bEmpty = true;
            m_byteMap[i].nId = 0;
        }
    }

    void Flush() {
        if (m_bOwnsAllocations) {
            operator delete(m_pObjects);
            operator delete(m_byteMap);
        }
        m_pObjects = nullptr;
        m_byteMap = nullptr;
        m_nSize = 0;
        m_nFirstFree = 0;
    }

    void Clear() {
        for (int32_t i = 0; i < m_nSize; i++)
            m_byteMap[i].bEmpty = true;
    }

    bool IsFreeSlotAtIndex(int32_t idx) {
        return m_byteMap[idx].bEmpty;
    }

    int32_t GetIndex(A* pObject) {
        return reinterpret_cast<B*>(pObject) - m_pObjects;
    }

    A* GetAt(int32_t nIndex) {
        return !IsFreeSlotAtIndex(nIndex) ? (A*)&m_pObjects[m_nEntrySize * nIndex] : nullptr;
    }

    void SetFreeAt(int32_t idx, bool bFree) {
        m_byteMap[idx].bEmpty = bFree;
    }

    void SetIdAt(int32_t idx, uint8_t id) {
        m_byteMap[idx].nId = id;
    }

    uint8_t GetIdAt(int32_t idx) {
        return m_byteMap[idx].nId;
    }

    A* New() {
        bool bReachedTop = false;
        do {
            if (++m_nFirstFree >= m_nSize) {
                if (bReachedTop) {
                    m_nFirstFree = -1;
                    return nullptr;
                }
                bReachedTop = true;
                m_nFirstFree = 0;
            }
        } while (!m_byteMap[m_nFirstFree].bEmpty);
        m_byteMap[m_nFirstFree].bEmpty = false;
        ++m_byteMap[m_nFirstFree].nId;
        return &m_pObjects[m_nFirstFree];
    }

    void CreateAtRef(int32_t nRef) {
        nRef >>= 8;
        m_byteMap[nRef].bEmpty = false;
        ++m_byteMap[nRef].nId;
        m_nFirstFree = 0;
        while (!m_byteMap[m_nFirstFree].bEmpty)
            ++m_nFirstFree;
    }

    A* New(int32_t nRef) {
        A* result = &m_pObjects[nRef >> 8];
        CreateAtRef(nRef);
        return result;
    }

    void Delete(A* pObject) {
        uint32_t nIndex = reinterpret_cast<B*>(pObject) - m_pObjects;
        m_byteMap[nIndex].bEmpty = true;
        if (nIndex < m_nFirstFree)
            m_nFirstFree = nIndex;
    }

    int32_t GetRef(A* pObject) {
        return (GetIndex(pObject) << 8) + m_byteMap[GetIndex(pObject)].IntValue();
    }

    A* GetAtRef(int32_t ref) {
        int32_t nSlotIndex = ref >> 8;
        return nSlotIndex >= 0 && nSlotIndex < m_nSize && m_byteMap[nSlotIndex].IntValue() == (ref & 0xFF) ? reinterpret_cast<A*>(&m_pObjects[nSlotIndex]) : nullptr;
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

    int32_t GetSize() {
        return m_nSize;
    }
};
