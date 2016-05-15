/*
GTASA C++ SDK
See README.md for more details
DK22Pac, 2015
*/

#pragma once

#include "game_sa\CPools.h"
#include "extender\Extender.h"
#include "events\EventList.h"
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

    std::vector<ExtenderInterface<CPed> *> PedExtendersHandler::extenders;
    bool PedExtendersHandler::injected;

    template <typename T> class PedExtendedData : public ExtenderInterface<CPed> {
        T **blocks;
        unsigned int numBlocks;

        void AllocateBlocks() {
            numBlocks = CPools::ms_pPedPool->m_Size;
            blocks = new T*[numBlocks];
            for (unsigned int i = 0; i < numBlocks; i++)
                blocks[i] = 0;
        }

        void OnConstructor(CPed *ped) {
            blocks[CPools::ms_pPedPool->GetArrayIndex(ped)] = new T(ped);
        }

        void OnDestructor(CPed *ped) {
            delete blocks[CPools::ms_pPedPool->GetArrayIndex(ped)];
            blocks[CPools::ms_pPedPool->GetArrayIndex(ped)] = 0;
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
            return *blocks[CPools::ms_pPedPool->GetArrayIndex(ped)];
        }
    };
}