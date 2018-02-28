/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

/*===========================================================================*
 *--- Include files ---------------------------------------------------------*
 *===========================================================================*/

#include "rwcore.h"
#include "rpworld.h"

/*---- start: ./matfx.h----*/


/**
 * \defgroup rpmatfx RpMatFX
 * \ingroup materials
 *
 * Material Effects Plugin for RenderWare Graphics.
 */

/*===========================================================================*
 *--- Global Types ----------------------------------------------------------*
 *===========================================================================*/

/**
 * \ingroup rpmatfx
 * RpMatFXMaterialFlags, this type represents the different types of
 * material effects that can be used on a material. The effects are
 * initialized with \ref RpMatFXMaterialSetEffects:
 */
enum RpMatFXMaterialFlags
{
    rpMATFXEFFECTNULL       = 0,
    rpMATFXEFFECTBUMPMAP    = 1, /**<Bump mapping                 */
    rpMATFXEFFECTENVMAP     = 2, /**<Environment mapping          */
    rpMATFXEFFECTBUMPENVMAP = 3, /**<Bump and environment mapping */
    rpMATFXEFFECTDUAL       = 4, /**<Dual pass                    */

    rpMATFXEFFECTMAX,
    rpMATFXNUMEFFECTS       = rpMATFXEFFECTMAX - 1,

    rpMATFXFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};
typedef enum RpMatFXMaterialFlags  RpMatFXMaterialFlags;

/*---- end: ./matfx.h----*/

/*---- start: c:/daily/rwsdk/plugin/matfx/d3d8/matfxplatform.h----*/

/**
 * \defgroup rpmatfxd3d8 D3D8
 * \ingroup rpmatfx
 *
 * D3D8 specific documentation.
 */


/******************************************************************************
 *  Enum types
 */

/**
 * \ingroup rpmatfxd3d8
 * \ref RpMatFXD3D8Pipeline
 */
enum RpMatFXD3D8Pipeline
{
    rpNAMATFXD3D8PIPELINE          = 0,
    rpMATFXD3D8ATOMICPIPELINE      = 1, /**<D3D8 atomic material effect rendering pipeline. */
    rpMATFXD3D8WORLDSECTORPIPELINE = 2, /**<D3D8 world sector material effect rendering pipeline. */
    rpMATFXD3D8PIPELINEMAX,
    rpMATFXD3D8PIPELINEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};
typedef enum RpMatFXD3D8Pipeline RpMatFXD3D8Pipeline;
