/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CBox.h"

class CColBox : public CBox
{
public:
    
    void Set(CVector const& sup, CVector const& inf, unsigned char material, unsigned char flags);
    void operator=(CColBox const& right);
};