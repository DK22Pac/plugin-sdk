/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CCutsceneObject.h"

class CCutsceneHead : public CCutsceneObject {
public:
    RwFrame *m_pHeadNode;
    
    //funcs
    void PlayAnimation(char const* name);
    CCutsceneHead(CObject* object);
};

VALIDATE_SIZE(CCutsceneHead, 0x19C);