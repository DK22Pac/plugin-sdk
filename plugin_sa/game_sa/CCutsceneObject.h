/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CObject.h"

class PLUGIN_API CCutsceneObject : public CObject {
public:
    union {
        RwFrame *m_pAttachTo;
        unsigned int m_nAttachBone; // this one if m_pAttachmentObject != 0
    };
    CObject *m_pAttachmentObject;
    CVector m_vWorldPosition;
    CVector m_vForce;
};
VALIDATE_OFFSET(CCutsceneObject, m_pAttachTo, 0x17C);
VALIDATE_OFFSET(CCutsceneObject, m_nAttachBone, 0x17C);
VALIDATE_OFFSET(CCutsceneObject, m_pAttachmentObject, 0x180);
VALIDATE_OFFSET(CCutsceneObject, m_vWorldPosition, 0x184);
VALIDATE_OFFSET(CCutsceneObject, m_vForce, 0x190);
VALIDATE_SIZE(CCutsceneObject, 0x19C);