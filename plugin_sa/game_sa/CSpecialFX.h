/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"
#include "RenderWare.h"

class CSpecialFX {
public:
    static bool &bVideoCam;
    static bool &bLiftCam;
    static unsigned int &SnapShotFrames;
    static bool &bSnapShotActive;

    // unused function; for 'weaponType', see eWeaponType
    static void AddWeaponStreak(int weaponType);
    static void Init();
    static void Render();
    static void Render2DFXs();
    static void ReplayStarted();
    static void Shutdown();
    static void Update();
};

extern RwTexture *&gpFinishFlagTex;