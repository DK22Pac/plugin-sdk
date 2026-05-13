/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

class CScene {
public:
    RpWorld *m_pWorld;
    RwCamera *m_pCamera;
};
VALIDATE_OFFSET(CScene, m_pWorld, 0x0);
VALIDATE_OFFSET(CScene, m_pCamera, 0x4);
VALIDATE_SIZE(CScene, 0x8);

extern CScene &Scene;