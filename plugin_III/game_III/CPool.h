/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_III.h"
#include <string.h>

union tPoolObjectFlags {
    struct {
        unsigned char 	uID : 7;
        bool 			bIsFreeSlot : 1;
    }					a;
    signed char			b;
};

VALIDATE_SIZE(tPoolObjectFlags, 1);

template<class A, class B = A> class CPool {
public:
    B* 					m_pObjects;
    tPoolObjectFlags* 	m_ByteMap;
    int					m_nSize;
    int 				m_nFirstFree;

    // Default constructor for statically allocated pools
    CPool() {}

    // Initializes pool
    CPool(int nSize, const char* pPoolName) {
        m_pObjects = static_cast<B*>(operator new(sizeof(B) * nSize));
        m_ByteMap = static_cast<tPoolObjectFlags*>(operator new(sizeof(tPoolObjectFlags) *  nSize));

        m_nSize = nSize;
        m_nFirstFree = -1;

        for (int i = 0; i < nSize; ++i) {
            m_ByteMap[i].a.bIsFreeSlot = true;
            m_ByteMap[i].a.uID = 0;
        }
    }

    ~CPool() {
        Flush();
    }

    // Initialises a pool with preallocated
    void Init(int nSize, void* pObjects, void* pInfos) {
        m_pObjects = static_cast<B*>(operator new(sizeof(B) * nSize));
        m_ByteMap = static_cast<tPoolObjectFlags*>(operator new(nSize));

        m_nSize = nSize;
        m_nFirstFree = -1;

        for (int i = 0; i < nSize; ++i) {
            m_ByteMap[i].a.bIsFreeSlot = true;
            m_ByteMap[i].a.uID = 0;
        }
    }

    // Shutdown pool
    void Flush() {
        if (m_nSize > 0) {
            operator delete(m_pObjects);
            operator delete(m_ByteMap);
            m_pObjects = nullptr;
            m_ByteMap = nullptr;
            m_nSize = 0;
            m_nFirstFree = 0;
        }
    }

    // Clears pool
    void Clear() {
        for (int i = 0; i < m_nSize; i++)
            m_ByteMap[i].a.bIsFreeSlot = true;
    }

    // Returns pointer to object by index
    A* GetAt(int nIndex) {
        return nIndex >= 0 && nIndex < m_nSize && !m_ByteMap[nIndex].a.bIsFreeSlot ? (A *)&m_pObjects[nIndex] : nullptr;
    }

    // Returns if specified slot is free
    bool IsFreeSlotAtIndex(int idx) {
        return m_ByteMap[idx].a.bIsFreeSlot;
    }

    // Marks slot as free / used
    void SetNotFreeAt(int idx, char bIsSlotFree) {
        m_ByteMap[idx].a.bIsFreeSlot = bIsSlotFree;
    }

    // Allocates object
    A* New() {
        bool		bReachedTop = false;
        do {
            if (++m_nFirstFree >= m_nSize) {
                if (bReachedTop) {
                    m_nFirstFree = -1;
                    return nullptr;
                }
                bReachedTop = true;
                m_nFirstFree = 0;
            }
        } while (!m_ByteMap[m_nFirstFree].a.bIsFreeSlot);
        m_ByteMap[m_nFirstFree].a.bIsFreeSlot = false;
        ++m_ByteMap[m_nFirstFree].a.uID;
        return &m_pObjects[m_nFirstFree];
    }

    // Allocates object at a specific index from a SCM handle
    void New(int nHandle) {
        nHandle >>= 8;

        m_ByteMap[nHandle].a.bIsFreeSlot = false;
        ++m_ByteMap[nHandle].a.uID;
        m_nFirstFree = 0;

        while (!m_ByteMap[m_nFirstFree].a.bIsFreeSlot)
            ++m_nFirstFree;
    }

    // Deallocates object
    void Delete(A* pObject) {
        int	nIndex = GetIndex(pObject);
        m_ByteMap[nIndex].a.bIsFreeSlot = true;
        if (nIndex < m_nFirstFree)
            m_nFirstFree = nIndex;
    }

    // Returns object index in pool
    int GetJustIndex(A* pObject) {
        return static_cast<B*>(pObject) - m_pObjects;
    }

    unsigned int GetNoOfUsedSpaces() {
        int counter = 0;
        for (unsigned i = 0; i < m_nSize; ++i) {
            if (!m_ByteMap[i].a.bIsFreeSlot)
                ++counter;
        }
        return counter;
    }

    unsigned int GetNoOfFreeSpaces() {
        return m_nSize - GetNoOfUsedSpaces();
    }

    void Store(void **objectFlags, void **objects) {
        *objectFlags = operator new[](m_nSize);
        *objects = operator new[](m_nSize * sizeof(B));
        memcpy(*objectFlags, m_ByteMap, m_nSize);
        memcpy(*objects, m_pObjects, m_nSize * sizeof(B));
        //dbgprint("Stored:%d (/%d)", GetNoOfUsedSpaces(), m_nSize);
    }

    void CopyBack(void **objectFlags, void **objects) {
        memcpy(m_ByteMap, *objectFlags, m_nSize);
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