/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CCutsceneObject.h"

class CCutsceneHead : public CCutsceneObject {
public:
    RwFrame *m_pHeadNode;
    
    //funcs
    void PlayAnimation(char const* name);
    CCutsceneHead(CObject* object);
};

VALIDATE_SIZE(CCutsceneHead, 0x19C);