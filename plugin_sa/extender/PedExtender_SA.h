/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

/*
GTASA C++ SDK
See README.md for more details
DK22Pac, 2015
*/

#pragma once

#include "game_sa\CPools.h"
#include "..\shared\Extender.h"
#include "events\Events_SA.h"
#include <vector>

class CPed;

namespace plugin {
    class PedExtendersHandler : public ExtendersHandler<CPed> {
    public:
        static void Add(ExtenderInterface<CPed> *extender) {
            extenders.push_back(extender);
            if (!injected) {
                plugin::Events::initPoolsEvent.after += Allocate;
                plugin::Events::pedCtorEvent.before += Constructor;
                plugin::Events::pedDtorEvent.after += Destructor;
                injected = true;
            }
        }
    };

    template <typename T> class PedExtendedData : public ExtenderInterface<CPed> {
        T **blocks;
        unsigned int numBlocks;

        void AllocateBlocks() {
            numBlocks = CPools::ms_pPedPool->m_nSize;
            blocks = new T*[numBlocks];
            for (unsigned int i = 0; i < numBlocks; i++)
                blocks[i] = 0;
        }

        void OnConstructor(CPed *ped) {
            blocks[CPools::ms_pPedPool->GetIndex(ped)] = new T(ped);
        }

        void OnDestructor(CPed *ped) {
            delete blocks[CPools::ms_pPedPool->GetIndex(ped)];
            blocks[CPools::ms_pPedPool->GetIndex(ped)] = 0;
        }
    public:
        PedExtendedData() {
            blocks = 0;
            PedExtendersHandler::Add(this);
        }

        ~PedExtendedData() {
            for (unsigned int i = 0; i < numBlocks; i++)
                delete blocks[i];
            delete[] blocks;
        }

        T &Get(CPed *ped) {
            return *blocks[CPools::ms_pPedPool->GetIndex(ped)];
        }
    };
}