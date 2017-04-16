/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPed.h"

CVector *vecPedCarDoorAnimOffset = (CVector *)0x62E030;
CVector *vecPedCarDoorLoAnimOffset = (CVector *)0x62E03C;
CVector *vecPedVanRearDoorAnimOffset = (CVector *)0x62E048;
CVector *vecPedTrainDoorAnimOffset = (CVector *)0x62E054;
CVector *vecPedDraggedOutCarAnimOffset = (CVector *)0x62E060;
CVector *vecPedQuickDraggedOutCarAnimOffset = (CVector *)0x62E06C;

// Converted from thiscall void CPed::CPed(uint modelIndex) 0x4C41C0
CPed::CPed(unsigned int modelIndex) : CPhysical(plugin::dummy), m_aWeapons{ plugin::dummy, plugin::dummy,
plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy,
plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy } {
    plugin::CallMethod<0x4C41C0, CPed *, unsigned int>(this, modelIndex);
}