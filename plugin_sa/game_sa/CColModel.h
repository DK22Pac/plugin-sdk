/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CBoundingBox.h"
#include "CColSphere.h"
#include "CCollisionData.h"

class CColModel {
public:
    CBoundingBox m_boundBox;
    CSphere m_boundSphere;
    unsigned char m_nColSlot;
    union {
        struct {
            unsigned char m_bHasCollisionVolumes : 1;
            unsigned char m_bIsSingleColDataAlloc : 1;
            unsigned char m_bIsActive : 1;
        };
        unsigned char m_nFlags;
    };
    CCollisionData* m_pColData;

    CColModel();
    ~CColModel();
    CColModel& operator=(CColModel const& colModel);

    void MakeMultipleAlloc();
    void AllocateData();
    void AllocateData(int numSpheres, int numBoxes, int numLines, int numVertices, int numTriangles, bool disks);
    void AllocateData(int size);
    void RemoveCollisionVolumes();
    void CalculateTrianglePlanes();
    void RemoveTrianglePlanes();

    static void* operator new(unsigned int size);
    static void operator delete(void* data);
};

VALIDATE_SIZE(CColModel, 0x30);