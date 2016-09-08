/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CVehicleModelInfo.h"

RwTexture *CVehicleModelInfo::ms_pRemapTexture = (RwTexture *)0xB4E47C;
RwTexture *CVehicleModelInfo::ms_pLightsTexture = (RwTexture *)0xB4E68C;
RwTexture *CVehicleModelInfo::ms_pLightsOnTexture = (RwTexture *)0xB4E690;
unsigned char *CVehicleModelInfo::ms_currentCol = (unsigned char *)0xB4E3F0;
CRGBA *CVehicleModelInfo::ms_vehicleColourTable = (CRGBA *)0xB4E480;