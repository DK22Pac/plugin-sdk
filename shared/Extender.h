/*
GTASA C++ SDK
See README.md for more details
DK22Pac, 2015
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
    class ExtendersHandler {
    protected:
        static std::vector<ExtenderInterface<T> *> extenders;
        static bool injected;

        static void Allocate() {
            for (auto &i : extenders)
                i->AllocateBlocks();
        }

        static void Constructor(T *object) {
            for (auto &i : extenders)
                i->OnConstructor(object);
        }

        static void Destructor(T *object) {
            for (auto &i : extenders)
                i->OnDestructor(object);
        }
    };
};