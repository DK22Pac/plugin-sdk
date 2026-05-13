/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "RenderWare.h"

/*struct BreakInfo_t { // TODO: unused type, invalid member types, use consistent naming
    uint32_t version;
    uint16_t numVerts;
    RwV3d* verts;
    RwTexCoords* texCoords;
    RwRGBA* preLitCols;
    uint16_t numTris;
    BreakInfoTriangle* vtxIndices;
    uint16_t* groupId;
    uint16_t numGroups;
    RwTexture** pTexture;
    char* m_pTextureNames;
    char* texMaskNames;
    float* matCols;
};
VALIDATE_SIZE(BreakInfo_t, 0x34);
*/

struct BreakTri_t {
    RwV3d m_verts[3];
    RwTexCoords m_texCoords[3];
    RwRGBA m_col[3];
};
VALIDATE_OFFSET(BreakTri_t, m_verts, 0x0);
VALIDATE_OFFSET(BreakTri_t, m_texCoords, 0x24);
VALIDATE_OFFSET(BreakTri_t, m_col, 0x3C);
VALIDATE_SIZE(BreakTri_t, 0x48);

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
VALIDATE_OFFSET(BreakGroup_t, m_mat, 0x0);
VALIDATE_OFFSET(BreakGroup_t, m_vel, 0x40);
VALIDATE_OFFSET(BreakGroup_t, m_atRest, 0x4C);
VALIDATE_OFFSET(BreakGroup_t, m_numTris, 0x4E);
VALIDATE_OFFSET(BreakGroup_t, m_tris, 0x50);
VALIDATE_OFFSET(BreakGroup_t, m_pTexture, 0x54);
VALIDATE_OFFSET(BreakGroup_t, m_restAxisId, 0x58);
VALIDATE_OFFSET(BreakGroup_t, m_restHeight, 0x5C);
VALIDATE_OFFSET(BreakGroup_t, m_spinSpeed, 0x60);
VALIDATE_OFFSET(BreakGroup_t, m_spinAxis, 0x64);
VALIDATE_OFFSET(BreakGroup_t, m_timer, 0x70);
VALIDATE_SIZE(BreakGroup_t, 0x74);

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
VALIDATE_OFFSET(BreakObject_c, m_smashed, 0x0);
VALIDATE_OFFSET(BreakObject_c, m_active, 0x1);
VALIDATE_OFFSET(BreakObject_c, m_produceSparks, 0x2);
VALIDATE_OFFSET(BreakObject_c, m_drawLast, 0x3);
VALIDATE_OFFSET(BreakObject_c, m_numGroups, 0x4);
VALIDATE_OFFSET(BreakObject_c, m_groups, 0x8);
VALIDATE_OFFSET(BreakObject_c, m_age, 0xC);
VALIDATE_OFFSET(BreakObject_c, m_groundZ, 0x10);
VALIDATE_OFFSET(BreakObject_c, m_groundNormal, 0x14);
VALIDATE_SIZE(BreakObject_c, 0x20);

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
VALIDATE_OFFSET(BreakManager_c, m_breakObjects, 0x0);
VALIDATE_SIZE(BreakManager_c, 0x800);

extern BreakManager_c& g_breakMan;
