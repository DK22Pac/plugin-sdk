/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

class PLUGIN_API CScene {
public:
    RpWorld *m_pWorld;
    RwCamera *m_pCamera;
};
VALIDATE_OFFSET(CScene, m_pWorld, 0x0);
VALIDATE_OFFSET(CScene, m_pCamera, 0x4);
VALIDATE_SIZE(CScene, 0x8);

SUPPORTED_10EN_11EN_STEAM extern CScene &Scene;

VALIDATE_SIZE(CScene, 0x8);
