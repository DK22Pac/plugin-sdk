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
VALIDATE_OFFSET(CScrollBar, m_Counter, 0x0);
VALIDATE_OFFSET(CScrollBar, m_pMessage, 0x4);
VALIDATE_OFFSET(CScrollBar, m_vecPosition, 0x8);
VALIDATE_OFFSET(CScrollBar, m_MessageCurrentChar, 0x14);
VALIDATE_OFFSET(CScrollBar, m_MessageLength, 0x18);
VALIDATE_OFFSET(CScrollBar, m_vecSize, 0x1C);
VALIDATE_OFFSET(CScrollBar, m_fIntensity, 0x28);
VALIDATE_OFFSET(CScrollBar, m_MessageBar, 0x2C);
VALIDATE_OFFSET(CScrollBar, m_nType, 0x54);
VALIDATE_OFFSET(CScrollBar, m_bVisible, 0x55);
VALIDATE_OFFSET(CScrollBar, m_nRed, 0x56);
VALIDATE_OFFSET(CScrollBar, m_nGreen, 0x57);
VALIDATE_OFFSET(CScrollBar, m_nBlue, 0x58);
VALIDATE_OFFSET(CScrollBar, m_fScale, 0x5C);
VALIDATE_SIZE(CScrollBar, 0x60);

#include "meta/meta.CScrollBar.h"
