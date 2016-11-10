/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_VC.h"
#include "CBox.h"
#include "CColSphere.h"

#pragma pack(push, 4)
class CColModel
{
public:
    CColSphere m_colSphere;
    CBox m_boundBox;
    __int16 field_28; 
    __int16 field_2A; 
    __int16 field_2C; 
    char field_2E; 
    char field_2F; 
    char field_30; 
    char gap_31[3]; 
    int field_34; 
    int colData; 
    int field_3C; 
    int field_40; 
    int field_44; 
    int field_48; 

    CColModel();
    void CalculateTrianglePlanes();
    int GetLinkPtr();
    int GetTrianglePoint(CVector& arg0, int arg1);
    void RemoveCollisionVolumes();
    void RemoveTrianglePlanes();
    static void operator delete(void* data);
    static void* operator new(unsigned int size);
    void operator=(CColModel const& arg0);
};
#pragma pack(pop)

VALIDATE_SIZE(CColModel, 0x4C);