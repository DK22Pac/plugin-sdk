/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPopulation.h"

CPopulation** gPopulation = (CPopulation**)0x5E4CA4;

CPopulation* GetPopulationManager() {
    return *gPopulation;
}

CCar* CPopulation::SpawnCar(int x, int y, int z, short rot, int model) {
    return plugin::CallMethodAndReturn<CCar*, 0x426E10, CPopulation*, int, int, int, short, int>(this, x, y, z, rot, model);
}
