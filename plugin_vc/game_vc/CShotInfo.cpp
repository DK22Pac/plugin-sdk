/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CShotInfo.h"


unsigned int MAX_SHOT_INFOS = 100;
CShotInfo *aShotInfos = (CShotInfo *)0x781710;


void CShotInfo::Initialise() {
    plugin::Call<0x5C83B0>();
}


void CShotInfo::Shutdown() {
    plugin::Call<0x5C8390>();
}

bool CShotInfo::AddShot(CEntity* creator, eWeaponType weaponType, CVector origin, CVector target) {
    return plugin::CallAndReturn<bool, 0x5C8110, CEntity*, eWeaponType, CVector, CVector>(creator, weaponType, origin, target);
}


void CShotInfo::Update() {
    plugin::Call<0x5C7E60>();
}