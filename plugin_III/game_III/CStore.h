/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

template<typename T, int n>

class CStore {
public:
    int allocPtr;
    T store[n];

    T *Alloc(void) {
        if (allocPtr >= n) {
            printf("Size of this thing:%d needs increasing\n", n);
            assert(0);
        }
        return &store[allocPtr++];
    }
    void Clear(void) {
        allocPtr = 0;
    }
    int GetIndex(T *item) {
        assert(item >= &store[0]);
        assert(item < &store[n]);
        return item - store;
    }
    T *GetItem(int index) {
        assert(index >= 0);
        assert(index < n);
        return &store[index];
    }
};
