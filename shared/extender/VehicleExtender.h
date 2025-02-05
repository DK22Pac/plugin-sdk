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

class CVehicle;

namespace plugin {
    class VehicleExtendersHandler : public ExtendersHandler<CVehicle> {
    public:
        static void Add(ExtenderInterface<CVehicle> *extender) {
            static_data& data = get_data();
            data.extenders.push_back(extender);
            if (!data.injected) {
                plugin::Events::initPoolsEvent.after += Allocate;
                plugin::Events::vehicleCtorEvent.before += Constructor;
                plugin::Events::vehicleDtorEvent.after += Destructor;
                data.injected = true;
            }
        }
    };

    template <typename T> class VehicleExtendedData : public ExtenderInterface<CVehicle> {
        T **blocks;
        unsigned int numBlocks;

        void AllocateBlocks() {
            numBlocks = CPools::ms_pVehiclePool->m_nSize;
            blocks = new T*[numBlocks];
            for (unsigned int i = 0; i < numBlocks; i++)
                blocks[i] = 0;
        }

        void OnConstructor(CVehicle *vehicle) {
            blocks[CPools::ms_pVehiclePool->GetIndex(vehicle)] = new T(vehicle);
        }

        void OnDestructor(CVehicle *vehicle) {
            delete blocks[CPools::ms_pVehiclePool->GetIndex(vehicle)];
            blocks[CPools::ms_pVehiclePool->GetIndex(vehicle)] = 0;
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
            return *blocks[CPools::ms_pVehiclePool->GetIndex(vehicle)];
        }
    };
}
#endif
