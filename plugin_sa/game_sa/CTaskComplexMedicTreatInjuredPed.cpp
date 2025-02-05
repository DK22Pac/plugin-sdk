/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTaskComplex.h"
#include "CTaskComplexMedicTreatInjuredPed.h"

CTaskComplexMedicTreatInjuredPed::CTaskComplexMedicTreatInjuredPed(CVehicle* pAmbulance, CPed *pMedic, bool isPassenger) : CTaskComplex(plugin::dummy)
{
	plugin::CallMethod<0x658BA0, CTaskComplexMedicTreatInjuredPed*, CVehicle *, CPed *, bool>(this, pAmbulance, pMedic, isPassenger);
}