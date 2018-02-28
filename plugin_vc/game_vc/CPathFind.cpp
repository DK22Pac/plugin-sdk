/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPathFind.h"


CPathFind &ThePaths = *(CPathFind*)0x9B6E5C;

// Converted from thiscall bool CPathFind::GeneratePedCreationCoors(float arg1,float arg2,float arg3,float arg4,float arg5,float arg6,CVector *ar7,int *arg8,int *arg9,float *arg10,CMatrix *arg11)	0x437B10	
bool CPathFind::GeneratePedCreationCoors(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, CVector* ar7, int* arg8, int* arg9, float* arg10, CMatrix* arg11) {
    return plugin::CallMethodAndReturn<bool, 0x437B10, CPathFind *, float, float, float, float, float, float, CVector*, int*, int*, float*, CMatrix*>(this, arg1, arg2, arg3, arg4, arg5, arg6, ar7, arg8, arg9, arg10, arg11);
}

// Converted from thiscall bool CPathFind::GenerateCarCreationCoors(float arg1,float arg2,float arg3,float arg4,float arg5,float arg6,bool arg7,CVector *arg8,int *arg9,int * arg10,float * arg11,bool arg12)	0x4382B0	
bool CPathFind::GenerateCarCreationCoors(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, bool arg7, CVector* arg8, int* arg9, int* arg10, float* arg11, bool arg12) {
    return plugin::CallMethodAndReturn<bool, 0x4382B0, CPathFind *, float, float, float, float, float, float, bool, CVector*, int*, int*, float*, bool>(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
}

// Converted from thiscall int CPathFind::FindNodeClosestToCoors(CVector arg1,uchar arg2,float arg3,bool arg4,bool arg5,bool arg6,bool arg7)	0x437150
int CPathFind::FindNodeClosestToCoors(CVector arg1, unsigned char arg2, float arg3, bool arg4, bool arg5, bool arg6, bool arg7) {
	return plugin::CallMethodAndReturn<int, 0x437150, CPathFind *, CVector, unsigned char, float, bool, bool, bool, bool>(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}
