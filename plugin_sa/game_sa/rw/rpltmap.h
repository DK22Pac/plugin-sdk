
/**
 * \defgroup rpltmap RpLtMap
 * \ingroup lighting
 *
 * Lightmap Plugin for RenderWare Graphics.
 */

#ifndef RPLTMAP_H
#define RPLTMAP_H

/*===========================================================================*
 *--- Includes --------------------------------------------------------------*
 *===========================================================================*/

#include "rwcore.h"
#include "rpworld.h"


/* Used during lightmap illumination (sliver triangles are skipped
 * (their texels should be filled by dilate()), because their normals
 * can't be accurately calculated) */
#define rpLTMAPDEFAULTSLIVERAREATHRESHOLD (0.001f)

/* Used during lightmap UV calculation (polySets may be
 * joined on the basis of vertices with equal positions) */
#define rpLTMAPDEFAULTVERTEXWELDTHRESHOLD (0.1f)

#define rpLTMAPDEFAULTLIGHTMAPSIZE 128
#define rpLTMAPMINLIGHTMAPSIZE     16
#define rpLTMAPMAXLIGHTMAPSIZE     512/*?? any better way of determining this ??*/

#define rpLTMAPMAXPREFIXSTRINGLENGTH 4

#define rpLTMAPDEFAULTMAXAREALIGHTSAMPLESPERMESH 256
/* The default tolerance for errors induced by area light ROIs is 1
 * (being the smallest difference in lightmap colour values) */
#define rpLTMAPDEFAULTAREALIGHTROICUTOFF (1.0f)


/* Misc flags for used in the world plugin data. */
#define rpLTMAPWORLDFLAGLIGHTMAP        0x01



/**
 * \ingroup rpltmap
 * \ref RpLtMapStyle
 * Flags specifying the rendering style of the lightmap plugin.
 *
 * \see RpLtMapGetRenderStyle
 * \see RpLtMapSetRenderStyle
 */
enum RpLtMapStyle
{
    rpLTMAPSTYLENASTYLE          = 0x0,

    rpLTMAPSTYLERENDERBASE       = 0x1, /**< The base texture should be rendered */
    rpLTMAPSTYLERENDERLIGHTMAP   = 0x2, /**< The lightmap should be rendered */
    rpLTMAPSTYLEPOINTSAMPLE      = 0x4, /**< The lightmap should be point-sampled */

    rpLTMAPSTYLEFORCEENUMSIZEINT = 0x7FFFFFFF
};
typedef enum RpLtMapStyle RpLtMapStyle;

#if (!defined(DOXYGEN))
typedef struct rpLtMapSampleMap rpLtMapSampleMap;
struct rpLtMapSampleMap
{
    RwUInt32    refCount;
    RwUInt8     *samplePixels;
};
#endif /* (!defined(DOXYGEN)) */


#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */


extern RwBool
RpLtMapPluginAttach(void);

extern RxPipeline *
RpLtMapGetPlatformAtomicPipeline(void);
extern RxPipeline *
RpLtMapGetPlatformWorldSectorPipeline(void);

extern RwBool
RpLtMapSetRenderStyle(RpLtMapStyle style, RpWorld *world);
extern RpLtMapStyle
RpLtMapGetRenderStyle(void);

extern RwUInt32
RpLtMapWorldLightMapsQuery(RpWorld *world);

extern RwTexture *
RpLtMapWorldSectorGetLightMap(RpWorldSector *sector);
extern RpWorldSector *
RpLtMapWorldSectorSetLightMap(RpWorldSector *sector, RwTexture *lightMap);
extern RwTexture *
RpLtMapAtomicGetLightMap(RpAtomic *atomic);
extern RpAtomic *
RpLtMapAtomicSetLightMap(RpAtomic *atomic, RwTexture *lightMap);

extern RwUInt32 RpLtMapGetRasterFormat(void);
extern RwBool RpLtMapSetRasterFormat(RwUInt32 format);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* RPLTMAP_H */


