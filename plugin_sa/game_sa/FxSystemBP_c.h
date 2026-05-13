/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "ListItem_c.h"
#include "FxSphere_c.h"

class FxSystem_c;

/* FX System BluePrint */

class FxSystemBP_c : public ListItem_c {
public:
    unsigned int m_nNameKey;
    float m_fLength;
    float m_fLoopIntervalMin;
    float m_fLoopLength;
    short m_nCullDist;
    unsigned char m_nPlayMode;
    unsigned char m_nNumEmitters;
    void **m_emittersList;
    FxSphere_c *m_pBoundingSphere;

    FxSystemBP_c();
    ~FxSystemBP_c();
    static void* operator new(unsigned int size);
    void Unload();
    unsigned int Update(float arg0);
    void Render(RwCamera* camera, float arg1, unsigned char arg2);
    bool FreePrtFromSystem(FxSystem_c* system);
    FxSphere_c* GetBoundingSphere();
    void SetBoundingSphere(RwV3d* center, float radius);
    void Load(char* filename, int file, int version);
};
VALIDATE_OFFSET(FxSystemBP_c, m_nNameKey, 0x8);
VALIDATE_OFFSET(FxSystemBP_c, m_fLength, 0xC);
VALIDATE_OFFSET(FxSystemBP_c, m_fLoopIntervalMin, 0x10);
VALIDATE_OFFSET(FxSystemBP_c, m_fLoopLength, 0x14);
VALIDATE_OFFSET(FxSystemBP_c, m_nCullDist, 0x18);
VALIDATE_OFFSET(FxSystemBP_c, m_nPlayMode, 0x1A);
VALIDATE_OFFSET(FxSystemBP_c, m_nNumEmitters, 0x1B);
VALIDATE_OFFSET(FxSystemBP_c, m_emittersList, 0x1C);
VALIDATE_OFFSET(FxSystemBP_c, m_pBoundingSphere, 0x20);
VALIDATE_SIZE(FxSystemBP_c, 0x24);