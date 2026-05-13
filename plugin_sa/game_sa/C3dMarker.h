/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CRGBA.h"
#include "CVector.h"
#include "CMatrix.h"

enum e3dMarkerType {
    MARKER3D_ARROW = 0,
    MARKER3D_CYLINDER = 1,
    MARKER3D_TUBE = 2,
    MARKER3D_ARROW2 = 3,
    MARKER3D_TORUS = 4,
    MARKER3D_CONE = 5,
    MARKER3D_CONE_NO_COLLISION = 6,
    MARKER3D_NA = 257
};

class PLUGIN_API C3dMarker {
public:
    CMatrix         m_mat;
    RpAtomic       *m_pAtomic;
    RpMaterial     *m_pMaterial;
    unsigned short  m_nType; // see e3dMarkerType
    bool            m_bIsUsed;
    bool            m_bMustBeRenderedThisFrame;
    int             m_nIdentifier;
    CRGBA           m_colour;
    short           m_nPulsePeriod;
    short           m_nRotateRate;
    int             m_nStartTime;
    float           m_fPulseFraction;
    float           m_fStdSize;
    float           m_fSize;
    float           m_fBrightness;
    float           m_fCameraRange;
    CVector         m_vecNormal;
    short           m_nLastMapReadX; // float casted to short
    short           m_nLastMapReadY; // float casted to short
    float           m_fLastMapReadResultZ;
    float           m_fRoofHeight;
    CVector         m_vecLastPosition;
    int             m_nOnScreenTestTime;

    bool AddMarker(unsigned int id, unsigned short type, float size, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, unsigned short pulsePeriod, float pulseFraction, short rotateRate);
    void DeleteMarkerObject();
    bool IsZCoordinateUpToDate();
    void Render();
    void SetZCoordinateIfNotUpToDate(float coordinate);
    void UpdateZCoordinate(CVector arg0, float arg1);
};
VALIDATE_OFFSET(C3dMarker, m_mat, 0x0);
VALIDATE_OFFSET(C3dMarker, m_pAtomic, 0x48);
VALIDATE_OFFSET(C3dMarker, m_pMaterial, 0x4C);
VALIDATE_OFFSET(C3dMarker, m_nType, 0x50);
VALIDATE_OFFSET(C3dMarker, m_bIsUsed, 0x52);
VALIDATE_OFFSET(C3dMarker, m_bMustBeRenderedThisFrame, 0x53);
VALIDATE_OFFSET(C3dMarker, m_nIdentifier, 0x54);
VALIDATE_OFFSET(C3dMarker, m_colour, 0x58);
VALIDATE_OFFSET(C3dMarker, m_nPulsePeriod, 0x5C);
VALIDATE_OFFSET(C3dMarker, m_nRotateRate, 0x5E);
VALIDATE_OFFSET(C3dMarker, m_nStartTime, 0x60);
VALIDATE_OFFSET(C3dMarker, m_fPulseFraction, 0x64);
VALIDATE_OFFSET(C3dMarker, m_fStdSize, 0x68);
VALIDATE_OFFSET(C3dMarker, m_fSize, 0x6C);
VALIDATE_OFFSET(C3dMarker, m_fBrightness, 0x70);
VALIDATE_OFFSET(C3dMarker, m_fCameraRange, 0x74);
VALIDATE_OFFSET(C3dMarker, m_vecNormal, 0x78);
VALIDATE_OFFSET(C3dMarker, m_nLastMapReadX, 0x84);
VALIDATE_OFFSET(C3dMarker, m_nLastMapReadY, 0x86);
VALIDATE_OFFSET(C3dMarker, m_fLastMapReadResultZ, 0x88);
VALIDATE_OFFSET(C3dMarker, m_fRoofHeight, 0x8C);
VALIDATE_OFFSET(C3dMarker, m_vecLastPosition, 0x90);
VALIDATE_OFFSET(C3dMarker, m_nOnScreenTestTime, 0x9C);
VALIDATE_SIZE(C3dMarker, 0xA0);
