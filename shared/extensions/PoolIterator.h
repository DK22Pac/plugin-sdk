/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#if defined(GTA3) || defined(GTAVC) || defined(GTASA)
#include "CPool.h"

namespace plugin {

template <typename T1, typename T2>
class PoolIterator {
    CPool<T1, T2> *pool;
    int poolSlotIndex;
public:
    static int FindNextActiveSlotInPool(CPool<T1, T2> *_Pool, int _CurrentSlot) {
        for (int i = _CurrentSlot; i < _Pool->m_nSize; ++i) {
            if (!_Pool->IsFreeSlotAtIndex(i)) {
                return i;
            }
        }
        return -1;
    }

    PoolIterator(CPool<T1, T2> *_Pool, int _Index) {
        pool = _Pool;
        poolSlotIndex = _Index;
    }

    PoolIterator operator++() {
        poolSlotIndex = FindNextActiveSlotInPool(pool, poolSlotIndex + 1);
        return *this;
    }

    bool operator!=(const PoolIterator &other) {
        return poolSlotIndex != other.poolSlotIndex;
    }

    T1* operator*() const {
        return reinterpret_cast<T1*>(&pool->m_pObjects[poolSlotIndex]);
    }
};

}

template <typename T1, typename T2>
plugin::PoolIterator<T1, T2> begin(CPool<T1, T2> &pool) {
    return plugin::PoolIterator<T1, T2>(&pool, plugin::PoolIterator<T1, T2>::FindNextActiveSlotInPool(&pool, 0));
}

template <typename T1, typename T2>
plugin::PoolIterator<T1, T2> end(CPool<T1, T2> &pool) {
    return plugin::PoolIterator<T1, T2>(&pool, -1);
}

template <typename T1, typename T2>
plugin::PoolIterator<T1, T2> begin(CPool<T1, T2> *pool) {
    return plugin::PoolIterator<T1, T2>(pool, plugin::PoolIterator<T1, T2>::FindNextActiveSlotInPool(pool, 0));
}

template <typename T1, typename T2>
plugin::PoolIterator<T1, T2> end(CPool<T1, T2> *pool) {
    return plugin::PoolIterator<T1, T2>(pool, -1);
}
#endif
