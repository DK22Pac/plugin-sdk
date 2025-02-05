/***************************************************************************
 *                                                                         *
 * Module  : rttoc.h                                                       *
 *                                                                         *
 * Purpose : Table Of Contents (TOC)                                       *
 *                                                                         *
 **************************************************************************/

#ifndef RTTOC_H
#define RTTOC_H

/**
 * \defgroup rttoc RtTOC
 * \ingroup rttool
 *
 * Table Of Contents (TOC) - e.g. creating a TOC for a RwStream.
 */

/****************************************************************************
 Includes
 */
#include "rwcore.h"

#include "rpcriter.h"

/****************************************************************************
 Defines
 */

/****************************************************************************
 Global Types
 */

typedef struct _rtTOCGUID _rtTOCGUID;
struct _rtTOCGUID
{
    RwUInt32        data1;
    RwUInt16        data2;
    RwUInt16        data3;
    RwUInt8         data4[8];
};

typedef struct RtTOCEntry RtTOCEntry;
/**
 * \ingroup rttoc
 * \struct RtTOCEntry
 * 
 * BLAH
 */
struct RtTOCEntry
{  
    RwCorePluginID  id;    /**< Chunk ID */
    RwUInt32        offset;/**< Offset of chunk from the start of the file 
                            *   including TOC */
    _rtTOCGUID      guid;  /**< GUID */
};

typedef struct RtTOC RtTOC;

/**
 * \ingroup rttoc
 * \struct RtTOC
 *
 * BLAH
 */
struct RtTOC
{
    RwInt32         numEntries; /**< Number of entries*/
    RtTOCEntry      entry[1];   /**< Entry*/
};

/****************************************************************************
 Function prototypes
 */

#ifdef    __cplusplus
extern "C"
{
#endif                          /* __cplusplus */

/* Create/Destroy */
extern RtTOC *RtTOCCreate(RwStream *stream);
extern void RtTOCDestroy(RtTOC *toc);

/* Access */
extern RwInt32 RtTOCGetNumEntries(const RtTOC *toc);
extern RtTOCEntry *RtTOCGetEntry(RtTOC *toc, RwInt32 entry);

/* Serialization */
extern RwUInt32 RtTOCStreamGetSize(const RtTOC *toc);
extern const RtTOC *RtTOCStreamWrite(RtTOC *toc, RwStream *stream);
extern RtTOC *RtTOCStreamRead(RwStream *stream);


#ifdef    __cplusplus
}
#endif                          /* __cplusplus */

#endif /* RTTOC_H */
