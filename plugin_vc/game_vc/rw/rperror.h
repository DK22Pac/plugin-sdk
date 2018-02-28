/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

/***************************************************************************
 *                                                                         *
 * Module  : rperror.h                                                     *
 *                                                                         *
 * Purpose : Used to generate error codes                                  *
 *                                                                         *
 **************************************************************************/

#pragma once

/****************************************************************************
 Defines
 */

#define RWECODE(a,b) a,

enum rwPLUGIN_ERRENUM
{
    rwPLUGIN_ERRENUMLAST = RWFORCEENUMSIZEINT
};

typedef enum rwPLUGIN_ERRENUM rwPLUGIN_ERRENUM;
