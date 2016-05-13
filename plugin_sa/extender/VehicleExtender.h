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

class CVehicle;

namespace plugin {
    class VehicleExtendersHandler : public ExtendersHandler<CVehicle> {
    public:
        static void Add(ExtenderInterface<CVehicle> *extender) {
            extenders.push_back(extender);
            if (!injected) {
                plugin::Events::initPoolsEvent.after += Allocate;
                plugin::Events::vehicleCtorEvent.before += Constructor;
                plugin::Events::vehicleDtorEvent.after += Destructor;
                injected = true;
            }
        }
    };

    std::vector<ExtenderInterface<CVehicle> *> VehicleExtendersHandler::extenders;
    bool VehicleExtendersHandler::injected;

    template <typename T> class VehicleExtendedData : public ExtenderInterface<CVehicle> {
        T **blocks;
        unsigned int numBlocks;

        void AllocateBlocks() {
            numBlocks = CPools::ms_pVehiclePool->m_Size;
            blocks = new T*[numBlocks];
            for (unsigned int i = 0; i < numBlocks; i++)
                blocks[i] = 0;
        }

        void OnConstructor(CVehicle *vehicle) {
            blocks[CPools::ms_pVehiclePool->GetArrayIndex(vehicle)] = new T(vehicle);
        }

        void OnDestructor(CVehicle *vehicle) {
            delete blocks[CPools::ms_pVehiclePool->GetArrayIndex(vehicle)];
            blocks[CPools::ms_pVehiclePool->GetArrayIndex(vehicle)] = 0;
        }
    public:
        VehicleExtendedData() {
            blocks = 0;
            VehicleExtendersHandler::Add(this);
        }

        ~VehicleExtendedData() {
            for (unsigned int i = 0; i < numBlocks; i++)
                delete blocks[i];
            delete[] blocks;
        }

        T &Get(CVehicle *vehicle) {
            return *blocks[CPools::ms_pVehiclePool->GetArrayIndex(vehicle)];
        }
    };
}