/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_VC.h"
#include "CVector.h"

#pragma pack(push, 4)
class PLUGIN_API CBox
{
public:
    CVector m_vSup;
    CVector m_vInf;

    static void Set(CVector const& sup, CVector const& inf);
};
#pragma pack(pop)

VALIDATE_SIZE(CBox, 0x18);