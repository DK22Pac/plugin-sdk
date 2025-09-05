/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "RenderWare.h"

struct BreakInfo_t {
    uint32_t version;
    uint16_t numVerts;
    float* verts;
    float* texCoords;
    uint8_t* preLitCols;
    uint16_t numTris;
    uint16_t* vtxIndices;
    uint16_t* groupId;
    uint16_t numGroups;
    RwTexture** pTexture;
    char* texNames[32];
    char* texMaskNames[32];
    float* matCols;
};

struct BreakTri_t {
    RwV3d m_verts[3];
    RwTexCoords m_texCoords[3];
    RwRGBA m_col[3];
};

struct BreakGroup_t {
    RwMatrix m_mat;
    RwV3d m_vel;
    uint8_t m_atRest;
    uint16_t m_numTris;
    BreakTri_t* m_tris;
    RwTexture* m_pTexture;
    uint8_t m_restAxisId;
    float m_restHeight;
    float m_spinSpeed;
    RwV3d m_spinAxis;
    int32_t m_timer;
};

struct BreakObject_c {
    uint8_t m_smashed;
    uint8_t m_active;
    uint8_t m_produceSparks;
    uint8_t m_drawLast;
    int32_t m_numGroups;
    BreakGroup_t* m_groups;
    int32_t m_age;
    float m_groundZ;
    RwV3d m_groundNormal;
};

class BreakManager_c {
public:
    BreakObject_c m_breakObjects[64];

public:
    bool Init();
    void Exit();
    void Render(bool renderAlphas);
    void ResetAll();
    void Update(float timeStep);
};

extern BreakManager_c& g_breakMan;
