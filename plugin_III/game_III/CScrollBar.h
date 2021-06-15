/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

enum PLUGIN_API eScrollBarTypes {
    SCROLL_BUSINESS = 0,
    SCROLL_TRAFFIC = 1,
    SCROLL_ENTERTAINMENT = 2,
    SCROLL_AIRPORT_DOORS = 3,
    SCROLL_AIRPORT_FRONT = 4,
    SCROLL_STORE = 5,
    SCROLL_USED_CARS = 6
};

class PLUGIN_API CScrollBar {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CScrollBar)

public:
    int m_Counter;
    char const *m_pMessage;
    CVector m_vecPosition;
    unsigned int m_MessageCurrentChar;
    unsigned int m_MessageLength;
    CVector m_vecSize;
    float m_fIntensity;
    unsigned char m_MessageBar[40];
    unsigned char m_nType;
    bool m_bVisible;
    unsigned char m_nRed;
    unsigned char m_nGreen;
    unsigned char m_nBlue;
    float m_fScale;

    SUPPORTED_10EN_11EN_STEAM void Init(CVector pos, unsigned char type, float sizeX, float sizeY, float sizeZ, unsigned char red, unsigned char green, unsigned char blue, float scale);
    SUPPORTED_10EN_11EN_STEAM void Render();
    SUPPORTED_10EN_11EN_STEAM void Update();

    SUPPORTED_10EN_11EN_STEAM static char const *GetBridgeString();
    SUPPORTED_10EN_11EN_STEAM static char const *GetTunnelString();
};

VALIDATE_SIZE(CScrollBar, 0x60);

#include "meta/meta.CScrollBar.h"
