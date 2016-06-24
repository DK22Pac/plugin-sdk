#pragma once

#include "plbase/PluginBase_SA.h"
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

VALIDATE_SIZE(CCutsceneObject, 0x19C);