/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"

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
    bool              m_bOwnsAllocations;
    bool field_11; 

    // Default constructor for statically allocated pools
    CPool()
    {
        // Remember to call CPool::Init to fill in the fields!

        this->m_pObjects = NULL;
        this->m_byteMap = NULL;
        this->m_nSize = 0;
        this->m_bOwnsAllocations = false;
    }

    // Initializes pool
    CPool(int nSize, const char* pPoolName)
    {
        m_pObjects = static_cast<B*>(operator new(sizeof(B) * nSize));
        m_byteMap = static_cast<tPoolObjectFlags*>(operator new(sizeof(tPoolObjectFlags) *  nSize));

        m_nSize = nSize;
        m_nFirstFree = -1;
        m_bOwnsAllocations = true;

        for (int i = 0; i < nSize; ++i)
        {
            m_byteMap[i].a.bIsFreeSlot = true;
            m_byteMap[i].a.nId = 0;
        }
    }

    ~CPool()
    {
        Flush();
    }

    // Initialises a pool with preallocated
    // To be called one-time-only for statically allocated pools.
    void Init(int nSize, void* pObjects, void* pInfos)
    {
        // Since we statically allocated the pools we do not deallocate.
        assert( this->m_pObjects == NULL );

        m_pObjects = static_cast<B*>(pObjects);
        m_byteMap = static_cast<tPoolObjectFlags*>(pInfos);

        m_nSize = nSize;
        m_nFirstFree = -1;
        m_bOwnsAllocations = false;

        for (int i = 0; i < nSize; ++i)
        {
            m_byteMap[i].a.bIsFreeSlot = true;
            m_byteMap[i].a.nId = 0;
        }
    }

    // Shutdown pool
    void Flush()
    {
        if (m_bOwnsAllocations)
        {
            operator delete(m_pObjects);
            operator delete(m_byteMap);
        }

        m_pObjects = nullptr;
        m_byteMap = nullptr;
        m_nSize = 0;
        m_nFirstFree = 0;
    }

    // Clears pool
    void Clear()
    {
        for (int i = 0; i < m_nSize; i++)
            m_byteMap[i].a.bIsFreeSlot = true;
    }

    // Returns if specified slot is free (0x404940)
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

    // Marks slot as free / used (0x404970)
    void SetFreeAt(int idx, bool bFree)
    {
        m_byteMap[idx].a.bIsFreeSlot = bFree;
    }

    // Set new id for slot (0x54F9F0)
    void SetIdAt(int idx, unsigned char id)
    {
        m_byteMap[idx].a.nId = id;
    }

    // Get id for slot (0x552200)
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

    // Allocates object at a specific index from a SCM handle (0x59F610)
    void CreateAtHandle(int nHandle)
    {
        nHandle >>= 8;

        m_byteMap[nHandle].a.bIsFreeSlot = false;
        ++m_byteMap[nHandle].a.nId;
        m_nFirstFree = 0;

        while (!m_byteMap[m_nFirstFree].a.bIsFreeSlot)
            ++m_nFirstFree;
    }

    // (0x5A1C00)
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

    // Returns SCM handle for object (0x424160)
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

    // (0x54F6B0)
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

    // (0x54F690)
    unsigned int GetObjectSize() {
        return sizeof(B);
    }

    // (0x5A1CD0)
    bool IsObjectValid(A *obj) {
        int slot = GetIndex(obj);
        return slot >= 0 && slot < m_nSize && !IsFreeSlotAtIndex(slot);
    }
};

VALIDATE_SIZE(CPool<int>, 0x14);