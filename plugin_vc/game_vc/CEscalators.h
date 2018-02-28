/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVector.h"

class CEscalators {
public:
    //variables
    static int &NumEscalators;

    //funcs
    void AddOne(CVector const& arg0, CVector const& arg1, CVector const& arg2, CVector const& arg3, bool arg4);
    static void Init();
    static void Shutdown();
    void Update();
};