/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"
#include <string.h>

union tPoolObjectFlags {
    struct {
        unsigned char nId : 7;
        bool bIsFreeSlot : 1;
    } a;
    unsigned char b;
};

VALIDATE_SIZE(tPoolObjectFlags, 1);

template<class A, class B = A> class CPool {
public:
    B*                m_pObjects;
    tPoolObjectFlags* m_byteMap;
    int               m_nSize;
    int               m_nFirstFree;

    // Default constructor for statically allocated pools
    CPool() {}



    // Initializes pool
    CPool(int nSize, const char* pPoolName) {
        m_pObjects = static_cast<B*>(operator new(sizeof(B) * nSize));
        m_byteMap = static_cast<tPoolObjectFlags*>(operator new(sizeof(tPoolObjectFlags) *  nSize));

        m_nSize = nSize;
        m_nFirstFree = -1;

        for (int i = 0; i < nSize; ++i) {
            m_byteMap[i].a.bIsFreeSlot = true;
            m_byteMap[i].a.nId = 0;
        }
    }

    ~CPool() {
        Flush();
    }

    // Initialises a pool with preallocated
    void Init(int nSize, void* pObjects, void* pInfos) {
        m_pObjects = static_cast<B*>(operator new(sizeof(B) * nSize));
        m_byteMap = static_cast<tPoolObjectFlags*>(operator new(nSize));

        m_nSize = nSize;
        m_nFirstFree = -1;

        for (int i = 0; i < nSize; ++i) {
            m_byteMap[i].a.bIsFreeSlot = true;
            m_byteMap[i].a.nId = 0;
        }
    }

    // Shutdown pool
    void Flush() {
        if (m_nSize > 0) {
            operator delete(m_pObjects);
            operator delete(m_byteMap);
            m_pObjects = nullptr;
            m_byteMap = nullptr;
            m_nSize = 0;
            m_nFirstFree = 0;
        }
    }

    // Clears pool
    void Clear() {
        for (int i = 0; i < m_nSize; i++)
            m_byteMap[i].a.bIsFreeSlot = true;
    }

    // Returns if specified slot is free
    bool IsFreeSlotAtIndex(int idx)
    {
        return m_byteMap[idx].a.bIsFreeSlot;
    }

    int GetIndex(A* pObject)
    {
        return reinterpret_cast<B*>(pObject) - m_pObjects;
    }

    // Returns pointer to object by index
    A* GetAt(int nIndex)
    {
        return !IsFreeSlotAtIndex(nIndex) ? (A *)&m_pObjects[nIndex] : nullptr;
    }

    // Marks slot as free / used
    void SetFreeAt(int idx, bool bFree)
    {
        m_byteMap[idx].a.bIsFreeSlot = bFree;
    }

    // Set new id for slot
    void SetIdAt(int idx, unsigned char id)
    {
        m_byteMap[idx].a.nId = id;
    }

    // Get id for slot 
    unsigned char GetIdAt(int idx)
    {
        return m_byteMap[idx].a.nId;
    }

    // Allocates object
    A* New()
    {
        bool		bReachedTop = false;
        do
        {
            if (++m_nFirstFree >= m_nSize)
            {
                if (bReachedTop)
                {
                    m_nFirstFree = -1;
                    return nullptr;
                }
                bReachedTop = true;
                m_nFirstFree = 0;
            }
        } while (!m_byteMap[m_nFirstFree].a.bIsFreeSlot);
        m_byteMap[m_nFirstFree].a.bIsFreeSlot = false;
        ++m_byteMap[m_nFirstFree].a.nId;
        return &m_pObjects[m_nFirstFree];
    }

    // Allocates object at a specific index from a SCM handle
    void CreateAtHandle(int nHandle)
    {
        nHandle >>= 8;

        m_byteMap[nHandle].a.bIsFreeSlot = false;
        ++m_byteMap[nHandle].a.nId;
        m_nFirstFree = 0;

        while (!m_byteMap[m_nFirstFree].a.bIsFreeSlot)
            ++m_nFirstFree;
    }

    A *New(int nHandle)
    {
        A *result = &m_pObjects[nHandle >> 8];
        CreateAtHandle(nHandle);
        return result;
    }

    // Deallocates object
    void Delete(A* pObject)
    {
        int		nIndex = reinterpret_cast<B*>(pObject) - m_pObjects;
        m_byteMap[nIndex].a.bIsFreeSlot = true;
        if (nIndex < m_nFirstFree)
            m_nFirstFree = nIndex;
    }

    // Returns SCM handle for object
    int GetHandle(A* pObject)
    {
        return (GetIndex(pObject) << 8) + m_byteMap[GetIndex(pObject)].b;
    }

    // Returns pointer to object by SCM handle
    A* GetAtHandle(int handle)
    {
        int nSlotIndex = handle >> 8;
        return nSlotIndex >= 0 && nSlotIndex < m_nSize && m_byteMap[nSlotIndex].b == (handle & 0xFF) ? reinterpret_cast<A*>(&m_pObjects[nSlotIndex]) : nullptr;
    }

    unsigned int GetNoOfUsedSpaces() {
        unsigned int counter = 0;
        for (int i = 0; i < m_nSize; ++i) {
            if (IsFreeSlotAtIndex(i))
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

    bool IsObjectValid(A *obj) {
        int slot = GetIndex(obj);
        return slot >= 0 && slot < m_nSize && !IsFreeSlotAtIndex(slot);
    }

    void Store(void **objectFlags, void **objects) {
        *objectFlags = operator new[](m_nSize);
        *objects = operator new[](m_nSize * sizeof(B));
        memcpy(*objectFlags, m_byteMap, m_nSize);
        memcpy(*objects, m_pObjects, m_nSize * sizeof(B));
        //dbgprint("Stored:%d (/%d)", GetNoOfUsedSpaces(), m_nSize);
    }

    void CopyBack(void **objectFlags, void **objects) {
        memcpy(m_byteMap, *objectFlags, m_nSize);
        memcpy(m_pObjects, *objects, m_nSize * sizeof(B));
        //dbgprint("Size copied:%d (%d)", m_nSize * sizeof(B), sizeof(B));
        m_nFirstFree = 0;
        operator delete[](*objectFlags);
        operator delete[](*objects);
        *objectFlags = nullptr;
        *objects = nullptr;
        //dbgprint("CopyBack:%d (/%d)", GetNoOfUsedSpaces(), m_nSize);
    }
};

VALIDATE_SIZE(CPool<int>, 0x10);