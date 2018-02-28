/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

/**
 * \defgroup rpskin RpSkin
 * \ingroup skinning
 *
 * Skin Plugin for RenderWare Graphics.
 */

/*===========================================================================*
 *--- Include files ---------------------------------------------------------*
 *===========================================================================*/
#include "rwcore.h"
#include "rpworld.h"

#include "rpcriter.h"

#include "rphanim.h"

/*===========================================================================*
 *--- Global Types ----------------------------------------------------------*
 *===========================================================================*/
typedef struct RwMatrixWeights RwMatrixWeights;

/**
 * \ingroup rpskin
 * \struct RwMatrixWeights
 * A structure for defining up to four matrix weights per vertex.
 * Not all entries need to be used.
 *
 * \note
 * Values should be sorted, such that any zero 0.0f entries appear
 * after the valid weights. Any weights that appear after a zero
 * entry will be ignored.
 *
 * \see RpSkinCreate
 */
struct RwMatrixWeights
{
    RwReal w0; /**< The first matrix weight.  */
    RwReal w1; /**< The second matrix weight. */
    RwReal w2; /**< The third matrix weight.  */
    RwReal w3; /**< The fourth matrix weight. */
};

/**
 * \ingroup rpskin
 * \struct RpSkin
 *
 * Skin object. This should be considered an opaque type.
 * Use the RpSkin API functions to access.
 *
 * \see RpSkinCreate
 * \see RpSkinDestroy
 */
typedef struct RpSkin RpSkin;

/*---------------------------------------------------------------------------*
 *-   Skin pipeline                                                         -*
 *---------------------------------------------------------------------------*/

/**
 * \ingroup rpskin
 * \ref RpSkinType defines the different ways a skinned atomic can
 * be rendered. Once a skinned \ref RpGeometry has been attached to
 * an \ref RpAtomic the atomic must be setup with the correct skin
 * rendering pipeline with \ref RpSkinAtomicSetType.
 */
enum RpSkinType
{
    rpNASKINTYPE        = 0, /**<Invalid skin pipeline.           */
    rpSKINTYPEGENERIC   = 1, /**<Generic skin rendering.          */
    rpSKINTYPEMATFX     = 2, /**<Material effects skin rendering. */
    rpSKINTYPETOON      = 3, /**<Toon skin rendering.             */
    rpSKINTYPEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};
typedef enum RpSkinType RpSkinType;

/*---- start: ./d3d8/skinplatform.h----*/

/**
 * \defgroup rpskind3d8 D3D8
 * \ingroup rpskin
 *
 * D3D8 skin pipeline extension.
 */

/**
 * \defgroup rpskind3d8features Features
 * \ingroup rpskind3d8
 *
 * D3D8 skin pipeline features.
 */

/**
 * \defgroup rpskind3d8restrictions Restrictions
 * \ingroup rpskind3d8
 *
 * D3D8 skin pipeline restrictions.
 */

/**
 * \defgroup rpskinbonelimit Bone limit
 * \ingroup rpskind3d8restrictions
 *
 * \par Bone limit
 * The bone limit is 256 as skinning is performed on the CPU.
 *
 */


/*===========================================================================*
 *--- D3D8 Defines -----------------------------------------------------------*
 *===========================================================================*/

/*===========================================================================*
 *--- D3D8 Global Types ------------------------------------------------------*
 *===========================================================================*/

/**
 * \ingroup rpskind3d8
 * \ref RpSkinD3D8Pipeline rendering pipelines available within
 * the \ref RpSkin plugin. Use \ref RpSkinGetD3D8Pipeline to
 * retrieve the \ref RxPipeline's.
 */
enum RpSkinD3D8Pipeline
{
    rpNASKIND3D8PIPELINE              = 0,
    rpSKIND3D8PIPELINEGENERIC         = 1,
    /**<D3D8 generic skin rendering pipeline.                           */
    rpSKIND3D8PIPELINEMATFX           = 2,
    /**<D3D8 material effect skin rendering pipeline.                   */
    rpSKIND3D8PIPELINETOON            = 3,
    /**<D3D8 toon skin rendering pipeline.                              */
    rpSKIND3D8PIPELINEMATFXTOON       = 4,
    /**<D3D8 toon matfx skin rendering pipeline not supported           */
    rpSKIND3D8PIPELINEMAX,
    rpSKIND3D8PIPELINEFORCEENUMSIZEINT = RWFORCEENUMSIZEINT
};
typedef enum RpSkinD3D8Pipeline RpSkinD3D8Pipeline;
