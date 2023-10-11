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
        unsigned char nId : 7;
        bool bEmpty : 1;
    };
private:
    unsigned char nValue;
public:
    unsigned char IntValue() { return nValue; }
};

VALIDATE_SIZE(tPoolObjectFlags, 1);

template<class A, class B = A>
class CPool {
private:
    A* m_pObjects;
    tPoolObjectFlags* m_byteMap;
    int32_t m_nSize;
    int32_t m_nEntrySize;
    int32_t m_nFirstFree;
    uint32_t m_nUsed;
    bool m_bOwnsAllocations;
    uint8_t pad[3];

public:
    CPool() = default;
    CPool(uint32_t size, const char* name, uint32_t entrySize) {
        m_pObjects = static_cast<B*>(operator new(sizeof(B) * size));
        m_byteMap = static_cast<tPoolObjectFlags*>(operator new(sizeof(tPoolObjectFlags) * size));
        m_bOwnsAllocations = true;
        m_nSize = size;
        m_nEntrySize = entrySize;
        m_nFirstFree = -1;
        m_nUsed = 0;
        for (uint32_t i = 0; i < size; i++) {
            m_byteMap[i].bEmpty = true;
            m_byteMap[i].nId = 0;
        }
    }

    ~CPool() {
        Flush();
    }

    void Init(int nSize, void* pObjects, void* pInfos) {
        assert(this->m_pObjects == nullptr);
        m_pObjects = static_cast<B*>(pObjects);
        m_byteMap = static_cast<tPoolObjectFlags*>(pInfos);
        m_nSize = nSize;
        m_nFirstFree = -1;
        m_bOwnsAllocations = false;
        m_nUsed = 0;
        for (int i = 0; i < nSize; ++i) {
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
        m_nUsed = 0;
    }

    void Clear() {
        for (int i = 0; i < m_nSize; i++)
            m_byteMap[i].bEmpty = true;
    }

    bool IsFreeSlotAtIndex(int idx) {
        return m_byteMap[idx].bEmpty;
    }

    int GetIndex(A* pObject) {
        return reinterpret_cast<B*>(pObject) - m_pObjects;
    }

    A* GetAt(int nIndex) {
        return !IsFreeSlotAtIndex(nIndex) ? (A*)&m_pObjects[nIndex] : nullptr;
    }

    void SetFreeAt(int idx, bool bFree) {
        m_byteMap[idx].bEmpty = bFree;
    }

    void SetIdAt(int idx, unsigned char id) {
        m_byteMap[idx].nId = id;
    }

    unsigned char GetIdAt(int idx) {
        return m_byteMap[idx].nId;
    }

    int32_t GetSize() const {
        return m_nSize;
    }

    int32_t GetEntrySize() const {
        return m_nEntrySize;
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

    void CreateAtRef(int nRef) {
        nRef >>= 8;
        m_byteMap[nRef].bEmpty = false;
        ++m_byteMap[nRef].nId;
        m_nFirstFree = 0;
        while (!m_byteMap[m_nFirstFree].bEmpty)
            ++m_nFirstFree;
    }

    A* New(int nRef) {
        A* result = &m_pObjects[nRef >> 8];
        CreateAtRef(nRef);
        return result;
    }

    void Delete(A* pObject) {
        int nIndex = reinterpret_cast<B*>(pObject) - m_pObjects;
        m_byteMap[nIndex].bEmpty = true;
        if (nIndex < m_nFirstFree)
            m_nFirstFree = nIndex;
    }

    int GetRef(A* pObject) {
        return (GetIndex(pObject) << 8) + m_byteMap[GetIndex(pObject)].IntValue();
    }

    A* GetAtRef(int ref) {
        int nSlotIndex = ref >> 8;
        return nSlotIndex >= 0 && nSlotIndex < m_nSize && m_byteMap[nSlotIndex].IntValue() == (ref & 0xFF) ? reinterpret_cast<A*>(&m_pObjects[nSlotIndex]) : nullptr;
    }

    unsigned int GetNoOfUsedSpaces() {
        unsigned int counter = 0;
        for (int i = 0; i < m_nSize; ++i) {
            if (!IsFreeSlotAtIndex(i))
                ++counter;
        }
        return counter;
    }

    unsigned int GetNoOfFreeSpaces() {
        return m_nSize - GetNoOfUsedSpaces();
    }

    unsigned int GetObjectSize() {
        return sizeof(B);
    }

    bool IsObjectValid(A* obj) {
        int slot = GetIndex(obj);
        return slot >= 0 && slot < m_nSize && !IsFreeSlotAtIndex(slot);
    }
};

VALIDATE_SIZE(CPool<int32_t>, 0x1C);
