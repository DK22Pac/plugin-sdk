/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"

class CPlayerPed;

enum eGameStatus {
    GAME_PAUSED = 2,
    GAME_RUN = 1
};

enum eControlKeys {
    CONTROLKEY_FORWARD,
    CONTROLKEY_BACKWARD,
    CONTROLKEY_LEFT,
    CONTROLKEY_RIGHT,
    CONTROLKEY_ATTACK,
    CONTROLKEY_ENTEROREXIT,
    CONTROLKEY_HANDBRAKEORJUMP,
    CONTROLKEY_PREVWEAPON,
    CONTROLKEY_NEXTWEAPON,
    CONTROLKEY_SPECIAL1,
    CONTROLKEY_SPECIAL2,
    CONTROLKEY_UNKNOWN,
    NUM_CONTROLKEYS,
};

class PLUGIN_API CGame {
public:
    eGameStatus m_eGameStatus;
    CPlayerPed* m_pPlayers[6];
    CPlayerPed* m_pCurrentPlr;
    unsigned char field_20;
    unsigned char field_21;
    unsigned char field_22;
    unsigned char m_nNumPlayers;
    char m_nPlayerInFocus;
    unsigned char field_25;
    unsigned char field_26;
    unsigned char field_27;
    int field_28;
    int m_nMainState;
    unsigned char field_30;
    unsigned char field_31;
    unsigned char field_32;
    unsigned char field_33;
    int field_34;
    CPlayerPed* m_pCurrentPlayer;
    unsigned char m_bNoWantedLevel;
    unsigned char field_3d;
    unsigned char field_3e;
    unsigned char field_3f;

public:
    class CPlayerPed* FindPlayerPed(unsigned char index);
    void SwitchUserPause();
    void Process();
    void SetState(int unk, int state);
    bool GetIsUserPaused();
};

VALIDATE_SIZE(CGame, 0x40);

extern CGame** gGame;
extern int* ControlKeys; // eControlKeys

extern CGame* GetGame();
