/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

namespace rage {
    enum grceRenderState : int32_t {
        grcersZENABLE = 0x0,
        grcersFILLMODE = 0x1,
        grcersZWRITEENABLE = 0x2,
        grcersALPHATESTENABLE = 0x3,
        grcersSRCBLEND = 0x4,
        grcersDESTBLEND = 0x5,
        grcersCULLMODE = 0x6,
        grcersZFUNC = 0x7,
        grcersALPHAREF = 0x8,
        grcersALPHAFUNC = 0x9,
        grcersALPHABLENDENABLE = 0xA,
        grcersSTENCILENABLE = 0xB,
        grcersSTENCILFAIL = 0xC,
        grcersSTENCILZFAIL = 0xD,
        grcersSTENCILPASS = 0xE,
        grcersSTENCILFUNC = 0xF,
        grcersSTENCILREF = 0x10,
        grcersSTENCILMASK = 0x11,
        grcersSTENCILWRITEMASK = 0x12,
        grcersCOLORWRITEENABLE = 0x13,
        grcersCOLORWRITEENABLE1 = 0x14,
        grcersCOLORWRITEENABLE2 = 0x15,
        grcersCOLORWRITEENABLE3 = 0x16,
        grcersBLENDOP = 0x17,
        grcersBLENDOPALPHA = 0x18,
        grcersSEPARATEALPHABLENDENABLE = 0x19,
        grcersSRCBLENDALPHA = 0x1A,
        grcersDESTBLENDALPHA = 0x1B,
        grcersHIGHPRECISIONBLENDENABLE = 0x1C,
        grcersSLOPESCALEDEPTHBIAS = 0x1D,
        grcersDEPTHBIAS = 0x1E,
        grcersBLENDFACTOR = 0x1F,
        grcersALPHATOMASK = 0x20,
        grcersALPHATOMASKOFFSETS = 0x21,
        grcersHALFPIXELOFFSET = 0x22,
        grcersTWOSIDEDSTENCIL = 0x23,
        grcersBACKSTENCILFAIL = 0x24,
        grcersBACKSTENCILZFAIL = 0x25,
        grcersBACKSTENCILPASS = 0x26,
        grcersBACKSTENCILFUNC = 0x27,
        grcersBACKSTENCILREF = 0x28,
        grcersBACKSTENCILMASK = 0x29,
        grcersBACKSTENCILWRITEMASK = 0x2A,
        grcersANTIALIASINGMASK = 0x2B,
        grcersRASTERIZERSTATEKEY = 0x2C,
        grcersDEPTHSTENCILSTATEKEY = 0x2D,
        grcersBLENDSTATEKEY = 0x2E,
        grcersMULTISAMPLEAA = 0x2F,
        grcersDx9COUNT = 0x30,
        grcersALPHABLENDENABLE1 = 0x30,
        grcersALPHABLENDENABLE2 = 0x31,
        grcersALPHABLENDENABLE3 = 0x32,
        grcersALPHABLENDENABLE4 = 0x33,
        grcersALPHABLENDENABLE5 = 0x34,
        grcersALPHABLENDENABLE6 = 0x35,
        grcersALPHABLENDENABLE7 = 0x36,
        grcersCOLORWRITEENABLE4 = 0x37,
        grcersCOLORWRITEENABLE5 = 0x38,
        grcersCOLORWRITEENABLE6 = 0x39,
        grcersCOLORWRITEENABLE7 = 0x3A,
        grcersFRONTCOUNTERCLOCKWISE = 0x3B,
        grcersDEPTHCLIPENABLE = 0x3C,
        grcersDEPTHBIASCLAMP = 0x3D,
        grcersANTIALIASEDLINEENABLE = 0x3E,
        grcersCOUNT = 0x3F,
    };

    struct grcRenderState {
        rage::grceRenderState State;

        union {
            int32_t Int;
            float Float;
        };
    };

    VALIDATE_SIZE(grcRenderState, 0x8);
}
