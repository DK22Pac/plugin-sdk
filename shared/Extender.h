/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include <vector>

namespace plugin {
    template <typename T>
    class ExtenderInterface {
    public:
        virtual void AllocateBlocks() = 0;
        virtual void OnConstructor(T *object) = 0;
        virtual void OnDestructor(T *object) = 0;
    };

    template <typename T>
    class ExtendersHandler
    {
    protected:
        struct static_data
        {
            std::vector <ExtenderInterface<T> *> extenders;
            bool injected;
        };

        static inline static_data& get_data() {
            // Has to be constructed at some point, so it is allocated at first call
            // of this function.
            static static_data data;
            
            return data;
        }

        static void Allocate() {
            static_data& data = get_data();
            for (auto &i : data.extenders)
                i->AllocateBlocks();
        }

        static void Constructor(T *object) {
            static_data& data = get_data();
            for (auto &i : data.extenders)
                i->OnConstructor(object);
        }

        static void Destructor(T *object) {
            static_data& data = get_data();
            for (auto &i : data.extenders)
                i->OnDestructor(object);
        }
    };
};
