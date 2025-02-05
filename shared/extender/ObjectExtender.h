/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#if defined(GTA3) || defined(GTAVC) || defined(GTASA)
#include "CPools.h"
#include "Extender.h"
#include "Events.h"
#include <vector>

class CObject;

namespace plugin {
    class ObjectExtendersHandler : public ExtendersHandler<CObject> {
    public:
        static void Add(ExtenderInterface<CObject> *extender) {
            static_data& data = get_data();
            data.extenders.push_back(extender);
            if (!data.injected) {
                plugin::Events::initPoolsEvent.after += Allocate;
                plugin::Events::objectCtorEvent.before += Constructor;
                plugin::Events::objectDtorEvent.after += Destructor;
                data.injected = true;
            }
        }
    };

    template <typename T> class ObjectExtendedData : public ExtenderInterface<CObject> {
        T **blocks;
        unsigned int numBlocks;

        void AllocateBlocks() {
            numBlocks = CPools::ms_pObjectPool->m_nSize;
            blocks = new T*[numBlocks];
            for (unsigned int i = 0; i < numBlocks; i++)
                blocks[i] = 0;
        }

        void OnConstructor(CObject *object) {
            blocks[CPools::ms_pObjectPool->GetIndex(object)] = new T(object);
        }

        void OnDestructor(CObject *object) {
            delete blocks[CPools::ms_pObjectPool->GetIndex(object)];
            blocks[CPools::ms_pObjectPool->GetIndex(object)] = 0;
        }
    public:
        ObjectExtendedData() {
            blocks = 0;
            ObjectExtendersHandler::Add(this);
        }

        ~ObjectExtendedData() {
            for (unsigned int i = 0; i < numBlocks; i++)
                delete blocks[i];
            delete[] blocks;
        }

        T &Get(CObject *object) {
            return *blocks[CPools::ms_pObjectPool->GetIndex(object)];
        }
    };
}
#endif
