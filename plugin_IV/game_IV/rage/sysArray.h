/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "pgPtr.h"

namespace rage {
    template<typename T = uint8_t, uint16_t COUNT = 0, typename C = uint16_t>
    class sysArray {
    private:
        T* m_Elements;
        C m_Count;
        C m_Capacity;

    public:
        class iterator {
        private:
            T* ptr;

        public:
            explicit iterator(T* p) : ptr(p) {}

            T& operator*() {
                return *ptr;
            }

            iterator& operator++() {
                ++ptr;
                return *this;
            }

            bool operator!=(const iterator& other) const {
                return ptr != other.ptr;
            }
        };

        iterator begin() {
            return iterator(m_Elements);
        }

        iterator end() {
            return iterator(m_Elements + m_Count);
        }

        T& operator[](uint32_t index) {
            return m_Elements[index];
        }

        auto At(uint32_t index) {
            return m_Elements[index];
        }

        int16_t Capacity() {
            return m_Capacity;
        }

        int16_t Count() {
            return m_Count;
        }

        sysArray() {
            Reserve(COUNT);
        }

        ~sysArray() {
            Kill();
        }

        uint8_t* Allocate(int32_t count) {
            return new uint8_t[sizeof(T) * count];
        }

        void Reserve(uint32_t capacity) {
            if (capacity)
                m_Elements = (T*)Allocate(capacity);

            m_Capacity = capacity;
        }

        void Kill() {
            if (m_Capacity > 0)
                delete[](uint8_t*)m_Elements;
        }
    };
}
