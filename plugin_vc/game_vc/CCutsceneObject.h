/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_VC.h"
#include "CObject.h"

class CCutsceneObject : public CObject {
public:
    void *m_pCutsceneShadow; // CCutsceneShadow *
    RwFrame *m_pAttachTo;
    CObject *m_pAttachmentObject;
};

VALIDATE_SIZE(CCutsceneObject, 0x1A0);