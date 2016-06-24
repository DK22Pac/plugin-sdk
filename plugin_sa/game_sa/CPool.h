#pragma once
#include "plbase/PluginBase_SA.h"

union tPoolObjectFlags
{
    struct
    {
        unsigned char 	uID : 7;
        bool 			bIsFreeSlot : 1;
    }					a;
    signed char			b;
};

VALIDATE_SIZE(tPoolObjectFlags, 1);

template<class A, class B = A> class CPool
{
public:
    B* 					m_Objects;
    tPoolObjectFlags* 	m_ByteMap;
    int					m_Size;
    int 				m_nFirstFree;
    bool 				m_bOwnsAllocations;
    bool 				m_Field_11;


    // Default constructor for statically allocated pools
    CPool()
    {
    }

    // Initializes pool
    CPool(int nSize, const char* pPoolName)
    {
        m_Objects = static_cast<B*>(operator new(sizeof(B) * nSize));
        m_ByteMap = static_cast<tPoolObjectFlags*>(operator new(sizeof(tPoolObjectFlags) *  nSize));

        m_Size = nSize;
        m_nFirstFree = -1;
        m_bOwnsAllocations = true;

        for (int i = 0; i < nSize; ++i)
        {
            m_ByteMap[i].a.bIsFreeSlot = true;
            m_ByteMap[i].a.uID = 0;
        }
    }

    ~CPool()
    {
        Flush();
    }

    // Initialises a pool with preallocated
    void Init(int nSize, void* pObjects, void* pInfos)
    {
        m_Objects = static_cast<B*>(operator new(sizeof(B) * nSize));
        m_ByteMap = static_cast<tPoolObjectFlags*>(operator new(nSize));

        m_Size = nSize;
        m_nFirstFree = -1;
        m_bOwnsAllocations = true;

        for (int i = 0; i < nSize; ++i)
        {
            m_ByteMap[i].a.bIsFreeSlot = true;
            m_ByteMap[i].a.uID = 0;
        }
    }

    // Shutdown pool
    void Flush()
    {
        if (m_bOwnsAllocations)
        {
            operator delete(m_Objects);
            operator delete(m_ByteMap);
        }

        m_Objects = nullptr;
        m_ByteMap = nullptr;
        m_Size = 0;
        m_nFirstFree = 0;
    }

    // Clears pool
    void Clear()
    {
        for (int i = 0; i < m_Size; i++)
            m_ByteMap[i].a.bIsFreeSlot = true;
    }

    // Returns pointer to object by index
    A* GetAt(int nIndex)
    {
        return nIndex >= 0 && nIndex < m_Size && !m_ByteMap[nIndex].a.bIsFreeSlot ? (A *)&m_Objects[nIndex] : nullptr;
    }

    // Returns if specified slot is free (0x404940)
    bool IsFreeSlotAtIndex(int idx)
    {
        return m_ByteMap[idx].a.bIsFreeSlot;
    }

    // Marks slot as free / used (0x404970)
    void SetNotFreeAt(int idx, char bIsSlotFree)
    {
        m_ByteMap[idx].a.bIsFreeSlot = bIsSlotFree;
    }

    // Allocates object
    A* New()
    {
        bool		bReachedTop = false;
        do
        {
            if (++m_nFirstFree >= m_Size)
            {
                if (bReachedTop)
                {
                    m_nFirstFree = -1;
                    return nullptr;
                }
                bReachedTop = true;
                m_nFirstFree = 0;
            }
        } while (!m_ByteMap[m_nFirstFree].a.bIsFreeSlot);
        m_ByteMap[m_nFirstFree].a.bIsFreeSlot = false;
        ++m_ByteMap[m_nFirstFree].a.uID;
        return &m_Objects[m_nFirstFree];
    }

    // Allocates object at a specific index from a SCM handle
    void				New(int nHandle)
    {
        nHandle >>= 8;

        m_ByteMap[nHandle].a.bIsFreeSlot = false;
        ++m_ByteMap[nHandle].a.uID;
        m_nFirstFree = 0;

        while (!m_ByteMap[m_nFirstFree].a.bIsFreeSlot)
            ++m_nFirstFree;
    }

    // Deallocates object
    void Delete(A* pObject)
    {
        int		nIndex = reinterpret_cast<B*>(pObject) - m_Objects;
        m_ByteMap[nIndex].a.bIsFreeSlot = true;
        if (nIndex < m_nFirstFree)
            m_nFirstFree = nIndex;
    }

    // Returns SCM handle for object
    int GetIndex(A* pObject)
    {
        return ((reinterpret_cast<B*>(pObject) - m_Objects) << 8) + m_ByteMap[reinterpret_cast<B*>(pObject) - m_Objects].b;
    }

    int GetArrayIndex(A* pObject)
    {
        return reinterpret_cast<B*>(pObject) - m_Objects;
    }

    // Returns pointer to object by SCM handle
    A* AtHandle(int handle)
    {
        int nSlotIndex = handle >> 8;
        return nSlotIndex >= 0 && nSlotIndex < m_Size && m_ByteMap[nSlotIndex].b == (handle & 0xFF) ? reinterpret_cast<A*>(&m_Objects[nSlotIndex]) : nullptr;
    }
};

VALIDATE_SIZE(CPool<int>, 0x14);