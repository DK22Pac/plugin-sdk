#pragma once
/***************************************************************************
 *                                                                         *
 * Module  : rperror.h                                                     *
 *                                                                         *
 * Purpose : Used to generate error codes                                  *
 *                                                                         *
 **************************************************************************/

/****************************************************************************
 Defines
 */

#define RWECODE(a,b) a,

enum rwPLUGIN_ERRENUM
{
    rwPLUGIN_ERRENUMLAST = RWFORCEENUMSIZEINT
};

typedef enum rwPLUGIN_ERRENUM rwPLUGIN_ERRENUM;