/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CPedType {
public:
    union tPedTypeFlags
    {
        unsigned int IntValue;
        struct
        {
            unsigned char bPlayer1 : 1; 
            unsigned char bPlayer2 : 1; 
            unsigned char bPlayer3 : 1; 
            unsigned char bPlayer4 : 1; 
            unsigned char bCivmale : 1; 
            unsigned char bCivfemale : 1; 
            unsigned char bCop : 1;       
            unsigned char bGang1 : 1;     

            unsigned char bGang2 : 1;     
            unsigned char bGang3 : 1;     
            unsigned char bGang4 : 1;     
            unsigned char bGang5 : 1; 
            unsigned char bGang6 : 1; 
            unsigned char bGang7 : 1; 
            unsigned char bGang8 : 1; 
            unsigned char bGang9 : 1; 

            unsigned char bEmergency : 1; 
            unsigned char bProstitute : 1; 
            unsigned char bCriminal : 1; 
            unsigned char bSpecial : 1; 
            unsigned char bGun : 1;     
            unsigned char bCop_car : 1; 
            unsigned char bFast_car : 1; 
            unsigned char bExplosion : 1; 

            unsigned char bFireman : 1; 
            unsigned char bDeadpeds : 1; 
        };
    };

    tPedTypeFlags m_Type;
    float field_4;
    float field_8;
    float field_C;
    float field_10;
    float field_14;
    tPedTypeFlags m_Threat;
    tPedTypeFlags m_Avoid;

    // variables
    static CPedType* (&ms_apPedType)[23];		// CPedType* CPedType::ms_apPedType[23]

    // functions
    static unsigned int FindPedFlag(char* flagName);
    static unsigned int FindPedType(char* pedName);
    static void Initialise();
    static void Load(unsigned char* bufferPointer, unsigned int structSize);
    static void LoadPedData();
    static void Save(unsigned char* bufferPointer, unsigned int* structSize);
    static void Shutdown();
};
VALIDATE_OFFSET(CPedType, m_Type, 0x0);
VALIDATE_OFFSET(CPedType, field_4, 0x4);
VALIDATE_OFFSET(CPedType, field_8, 0x8);
VALIDATE_OFFSET(CPedType, field_C, 0xC);
VALIDATE_OFFSET(CPedType, field_10, 0x10);
VALIDATE_OFFSET(CPedType, field_14, 0x14);
VALIDATE_OFFSET(CPedType, m_Threat, 0x18);
VALIDATE_OFFSET(CPedType, m_Avoid, 0x1C);
VALIDATE_SIZE(CPedType, 0x20);