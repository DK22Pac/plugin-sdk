/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CCutsceneObject.h"
#include "RenderWare.h"
#include "CObject.h"

class PLUGIN_API CCutsceneHead : public CCutsceneObject {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CCutsceneHead)

public:
    RwFrame *m_pHeadNode;

    // virtual function #0 (destructor)


    // virtual function #1 (not overriden)


    // virtual function #2 (not overriden)


    // virtual function #3 (not overriden)


    // virtual function #4 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void CreateRwObject();
    SUPPORTED_10EN_11EN_STEAM void DeleteRwObject();

    // virtual function #7 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void ProcessControl();

    // virtual function #9 (not overriden)


    // virtual function #10 (not overriden)


    // virtual function #11 (not overriden)


    // virtual function #12 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void Render();

    // virtual function #14 (not overriden)


    // virtual function #15 (not overriden)


    // virtual function #16 (not overriden)


    // virtual function #17 (not overriden)


    SUPPORTED_10EN_11EN_STEAM void PlayAnimation(char const *name);
};

VTABLE_DESC(CCutsceneHead, 0x5F7C08, 18);
VALIDATE_SIZE(CCutsceneHead, 0x19C);

#include "meta/meta.CCutsceneHead.h"
