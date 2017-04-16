/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "RenderWare.h"
#include "CMenuManager.h"

/**
 * Compress camera screen and save at the given file path
 */
void JPegCompressScreenToFile(RwChar const * pszPath);

/**
 * Compress camera screen to the given buffer
 */
void JPegCompressScreenToBuffer(RwInt8 ** pBuffer, RwUInt32 * pSize);
