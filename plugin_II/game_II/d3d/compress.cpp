#define STRICT
#define D3D_OVERLOADS
#include <math.h>
#include <stdio.h>
#include <windows.h>
#include <mmsystem.h>
#include "d3dutil.h"
#include "compress.h"
#include "d3dtextr.h"
#include <tchar.h>



//-----------------------------------------------------------------------------
// Defines, constants, and global variables
//-----------------------------------------------------------------------------
DWORD     g_dwDXT       = 0L;
BOOL      g_bMipTexture = TRUE;
BOOL      g_bSupportsMipmaps = TRUE;

CHAR      g_strDiskPixelFormat[20];
CHAR      g_strRendererPixelFormat[20];
CHAR      g_strError[200];

struct PixelFormatNode
{
    DDPIXELFORMAT       ddpf;
    PixelFormatNode*    pNext;
    int                 nAlphaBits;
    int                 nRedBits;
    int                 nGreenBits;
    int                 nBlueBits;
    BOOL                bPremultipliedAlpha;
};




//-----------------------------------------------------------------------------
// Name: GetNumberOfBits()
// Desc: Returns the number of bits set in a DWORD mask
//-----------------------------------------------------------------------------
WORD GetNumberOfBits( DWORD dwMask )
{
    WORD wBits = 0;

    while( dwMask )
    {
        dwMask = dwMask & ( dwMask - 1 );  
        wBits++;
    }
    return wBits;
}




//-----------------------------------------------------------------------------
// Name: PixelFormatToString()
// Desc: Creates a string describing a pixel format.
//-----------------------------------------------------------------------------
VOID PixelFormatToString( CHAR* strPixelFormat, DDPIXELFORMAT* pddpf )
{
    char szTemp[50] = "";

    switch( pddpf->dwFourCC )
    {
        case 0:
            if( pddpf->dwBBitMask & DDPF_ALPHAPREMULT )
                strcpy( szTemp, "-premul" );

            // This dds texture isn't compressed so write out ARGB format
            sprintf( strPixelFormat, "ARGB-%d%d%d%d%s", 
                     GetNumberOfBits( pddpf->dwRGBAlphaBitMask ), 
                     GetNumberOfBits( pddpf->dwRBitMask ),
                     GetNumberOfBits( pddpf->dwGBitMask ),
                     GetNumberOfBits( pddpf->dwBBitMask ),
                     szTemp );
            break;

        case MAKEFOURCC('D','X','T','1'):
            strcpy( strPixelFormat, "DXT1" );
            break;

        case MAKEFOURCC('D','X','T','2'):
            strcpy( strPixelFormat, "DXT2" );
            break;

        case MAKEFOURCC('D','X','T','3'):
            strcpy( strPixelFormat, "DXT3" );
            break;

        case MAKEFOURCC('D','X','T','4'):
            strcpy( strPixelFormat, "DXT4" );
            break;

        case MAKEFOURCC('D','X','T','5'):
            strcpy( strPixelFormat, "DXT5" );
            break;
    }
}




//-----------------------------------------------------------------------------
// Name: ReadDDSTexture()
// Desc: Reads a DDS texture format from disk given a filename.
//       ppCompTop contains the DDS surface, and 
//       pddsdComp contains the DDS surface description
//-----------------------------------------------------------------------------
HRESULT ReadDDSTexture( TCHAR* strTextureName, LPDIRECTDRAW4 pDD, 
                        DDSURFACEDESC2* pddsdComp, 
                        LPDIRECTDRAWSURFACE4* ppddsCompTop )
{
    HRESULT              hr;
    LPDIRECTDRAWSURFACE4 pddsTop      = NULL;
    LPDIRECTDRAWSURFACE4 pdds         = NULL;
    LPDIRECTDRAWSURFACE4 pddsAttached = NULL;
    DDSURFACEDESC2       ddsd;
    DWORD                dwMagic;

    hr = E_FAIL;

    // open the compressed texture file
    FILE* file = _tfopen( strTextureName, TEXT( "rb" ) );
    if( file == NULL )
        return E_FAIL;

    // read magic number
    fread( &dwMagic, sizeof(DWORD), 1, file );
    if( dwMagic != MAKEFOURCC('D','D','S',' ') )
        goto LFail;

    // read the surface description
    fread( pddsdComp, sizeof(DDSURFACEDESC2), 1, file );

    // mask/set surface caps appropriately for app
    pddsdComp->ddsCaps.dwCaps2 |= DDSCAPS2_TEXTUREMANAGE;

    // handle special case for hardware that doesn't support mipmaping
    if( !g_bSupportsMipmaps )
    {
        pddsdComp->dwMipMapCount = 0;
        pddsdComp->dwFlags &= ~DDSD_MIPMAPCOUNT;
        pddsdComp->ddsCaps.dwCaps &= ~( DDSCAPS_MIPMAP | DDSCAPS_COMPLEX );
    }

    // does texture have mipmaps?
    if( pddsdComp->dwMipMapCount == 0 )
        g_bMipTexture = FALSE;
    else
        g_bMipTexture = TRUE;

    // create a new surface based on the surface description
    if( FAILED( hr = pDD->CreateSurface( pddsdComp, ppddsCompTop, NULL ) ) )
        goto LFail;

    pddsTop = *ppddsCompTop;

    pdds = pddsTop;
    pdds->AddRef();

    while( TRUE )
    {
        ZeroMemory( &ddsd, sizeof(DDSURFACEDESC2) );
        ddsd.dwSize = sizeof(DDSURFACEDESC2);

        if( FAILED( hr = pdds->Lock( NULL, &ddsd, DDLOCK_WAIT, NULL )))
            goto LFail;

        if( ddsd.dwFlags & DDSD_LINEARSIZE )
        {
            fread( ddsd.lpSurface, ddsd.dwLinearSize, 1, file );
        }
        else
        {
            DWORD yp;
            BYTE* pbDest = (BYTE*)ddsd.lpSurface;
            LONG dataBytesPerRow = ddsd.dwWidth * ddsd.ddpfPixelFormat.dwRGBBitCount / 8;
            for( yp = 0; yp < ddsd.dwHeight; yp++ )
            {
                fread( pbDest, dataBytesPerRow, 1, file );
                pbDest += ddsd.lPitch;
            }
        }

        pdds->Unlock( NULL );

        //if( !g_bSupportsMipmaps )
        //{
        //    // for mipless hardware, don't copy mipmaps
        //    pdds->Release();
        //    break;
        //}

        ddsd.ddsCaps.dwCaps = DDSCAPS_TEXTURE | DDSCAPS_MIPMAP | DDSCAPS_COMPLEX;

        if( FAILED( hr = pdds->GetAttachedSurface( &ddsd.ddsCaps, &pddsAttached ) ) )
        {
            pdds->Release();
            break;
        }

        //pdds->Release();
        pdds = pddsAttached;
    }

    // create string descriptor of pixel format of
    // the texture on disk.  This is used in AppShowStats()
    PixelFormatToString( g_strDiskPixelFormat, &pddsdComp->ddpfPixelFormat );

    hr = S_OK;  // everything worked

LFail:
    fclose( file );

    return hr;
}




//-----------------------------------------------------------------------------
// Name: EnumTextureFormats()
// Desc: Callback fn for enumerating the pixel formats the current renderer 
//       supports.  Enumerated pixel formats are collected in a linked list
//       The head for this linked list is in (PixelFormatNode*)pUserArg->pNext. 
//-----------------------------------------------------------------------------
HRESULT WINAPI EnumTextureFormats( DDPIXELFORMAT* pPixelFormat,
                                   VOID* pUserArg )
{
    PixelFormatNode** ppHead = (PixelFormatNode**)pUserArg; 
    PixelFormatNode* pNode = NULL;

    // create a new node 
    pNode = new PixelFormatNode;
    if( NULL == pNode )
        return DDENUMRET_CANCEL;
    
    // insert new node at beginning of list
    pNode->pNext = *ppHead;
    *ppHead = pNode;

    // fill up node info
    pNode->ddpf = *pPixelFormat;
    pNode->nAlphaBits = GetNumberOfBits( pPixelFormat->dwRGBAlphaBitMask );
    pNode->nRedBits   = GetNumberOfBits( pPixelFormat->dwRBitMask );
    pNode->nGreenBits = GetNumberOfBits( pPixelFormat->dwGBitMask );
    pNode->nBlueBits  = GetNumberOfBits( pPixelFormat->dwBBitMask );
    pNode->bPremultipliedAlpha = pPixelFormat->dwFlags & DDPF_ALPHAPREMULT;

    // continue enumerating all supported pixel formats
    return DDENUMRET_OK;
}




//-----------------------------------------------------------------------------
// Name: FindBestPixelFormatMatch()
// Desc: Given a pixel format from a compressed surface, it finds the best
//       pixel format match format that is supported by the current
//       renderer.  pddsdBestMatch contains the best match found.
//-----------------------------------------------------------------------------
HRESULT FindBestPixelFormatMatch( LPDIRECT3DDEVICE3 pd3dDevice, 
                                  DDPIXELFORMAT     ddsdDDSTexture, 
                                  DDPIXELFORMAT*    pddsdBestMatch )
{
    HRESULT          hr;
    PixelFormatNode* pHead          = NULL;
    PixelFormatNode* pNode          = NULL;
    PixelFormatNode* pGoodMatchNode = NULL;
    int              nCompAlphaBits;
    int              nHighestFound = 0;
    BOOL             bCompressedTexture; 
    BOOL             bPremultipliedAlpha;

    bCompressedTexture = TRUE; // assume true

    // set how many alpha bits are in the compressed texture 
    switch ( ddsdDDSTexture.dwFourCC )
    {
        case 0:
            // this dds texture isn't compressed so we need an
            // exact pixel format match to render this surface
            // (or do a manual pixel conversion)
            bCompressedTexture = FALSE;  
            break;

        case MAKEFOURCC('D','X','T','1'):
            nCompAlphaBits = 1;
            bPremultipliedAlpha = FALSE;
            break;

        case MAKEFOURCC('D','X','T','2'):
            nCompAlphaBits = 4;
            bPremultipliedAlpha = TRUE;
            break;

        case MAKEFOURCC('D','X','T','3'):
            nCompAlphaBits = 4;
            bPremultipliedAlpha = FALSE;
            break;

        case MAKEFOURCC('D','X','T','4'):
            nCompAlphaBits = 8;
            bPremultipliedAlpha = TRUE;
            break;

        case MAKEFOURCC('D','X','T','5'):
            nCompAlphaBits = 8;
            bPremultipliedAlpha = FALSE;
            break;
    }

    // pixelFormatEnum is just a placeholder.
    // pixelFormatEnum.pNext will start the list
    if( FAILED( hr = pd3dDevice->EnumTextureFormats( EnumTextureFormats, 
                                                     (VOID*)&pHead ) ) )
        return hr;

    if( !bCompressedTexture )
    {
        // if the texture isn't compressed then look for an exact
        // pixel format match, otherwise fail since this sample
        // doesn't implement any manual pixel format conversion 
        // algorithms.
        int nTextureABits = GetNumberOfBits( ddsdDDSTexture.dwRGBAlphaBitMask );
        int nTextureRBits = GetNumberOfBits( ddsdDDSTexture.dwRBitMask );
        int nTextureGBits = GetNumberOfBits( ddsdDDSTexture.dwGBitMask );
        int nTextureBBits = GetNumberOfBits( ddsdDDSTexture.dwBBitMask );

        pGoodMatchNode = NULL;

        // run through list looking for an exact match
        pNode = pHead;

        while( NULL != pNode )
        {
            if( pNode->ddpf.dwFourCC == 0             &&
                pNode->nAlphaBits    == nTextureABits &&
                pNode->nRedBits      == nTextureRBits &&
                pNode->nGreenBits    == nTextureGBits &&
                pNode->nBlueBits     == nTextureBBits ) 
            {
                // this is an exact pixel format match, so it works
                pGoodMatchNode = pNode;
                break;
            }

            pNode = pNode->pNext; // advance along list
        }

        // pGoodMatchNode will be NULL if no exact match found, 
        // and since this is an uncompressed DDS texture format 
        // the blt can not convert between pixel formats.  
        // A manual conversion of the pixels could be done, but 
        // this is not implemeneted in this sample
    }
    else
    {
        // search for an exact pixel format match 
        // if renderer supports compressed textures 
        pNode = pHead;
        while( NULL != pNode )
        {
            if( pNode->ddpf.dwFourCC == ddsdDDSTexture.dwFourCC )
            {
                // look no further, since this is the best possible match
                pGoodMatchNode = pNode;
                break;
            }

            pNode = pNode->pNext; // advance along list
        }

        // if a good match was not found then keep looking
        if( NULL == pGoodMatchNode ) 
        {
            // search for exact or highest alpha bit rate match 
            // and also make sure the texture isn't blitted from
            // premultipled alpha to non-premultipled alpha or visa-versa
            pNode = pHead;
            nHighestFound = -1;
            pGoodMatchNode = NULL;

            while( NULL != pNode )
            {
                if( pNode->nAlphaBits          == nCompAlphaBits &&
                    pNode->bPremultipliedAlpha == bPremultipliedAlpha &&
                    pNode->nRedBits            >= 4 &&
                    pNode->nGreenBits          >= 4 &&
                    pNode->nBlueBits           >= 4 ) 
                {
                    // look no further, since this is the next best possible match
                    pGoodMatchNode = pNode;
                    break;
                }

                if( pNode->nAlphaBits          >  nHighestFound &&
                    pNode->bPremultipliedAlpha == bPremultipliedAlpha &&
                    pNode->nRedBits            >= 4 &&
                    pNode->nGreenBits          >= 4 &&
                    pNode->nBlueBits           >= 4 ) 
                {
                    nHighestFound = pNode->nAlphaBits;
                    pGoodMatchNode = pNode;
                    // keep looking for a better match
                }

                pNode = pNode->pNext; // advance along list
            }
        }
    }

    // if no match was found then either no texture pixel formats 
    // are supported by the renderer or this in an uncompressed
    // pixel format and an exact pixel format match was not found
    if( NULL == pGoodMatchNode ) 
    {
        hr = E_FAIL;
        goto LFail; // delete linked list
    }

    // choose the highest alpha rate possible as the best match
    *pddsdBestMatch = pGoodMatchNode->ddpf;  

    // create string descriptor of the best match found 
    // this is used in AppShowStats().
    PixelFormatToString( g_strRendererPixelFormat, &pGoodMatchNode->ddpf );

LFail:
    // delete the nodes of the linked list
    while( NULL != pHead )  // while more in list, keep deleting
    {
        pNode = pHead; 
        pHead = pHead->pNext;
        delete pNode;
    }

    return hr;
}




//-----------------------------------------------------------------------------
// Name: BltToUncompressedSurface()
// Desc: Creates an uncompressed surface and blits the compressed surface to 
//       it using the specified pixel format.
//-----------------------------------------------------------------------------
HRESULT BltToUncompressedSurface( LPDIRECTDRAW4 pDD, DDSURFACEDESC2 ddsd, 
                                  DDPIXELFORMAT ddpf, 
                                  LPDIRECTDRAWSURFACE4 pddsDXT, 
                                  LPDIRECTDRAWSURFACE4* ppddsNewSurface )
{
    LPDIRECTDRAWSURFACE4 pddsDXTAttached;
    LPDIRECTDRAWSURFACE4 pddsNew;
    LPDIRECTDRAWSURFACE4 pddsNewAttached;

    // Set surface caps for the new surface
    ddsd.ddpfPixelFormat = ddpf;

    // create an un-compressed surface based on the enumerated texture formats
    if( FAILED( pDD->CreateSurface( &ddsd, &pddsNew, NULL ) ) )
        return E_FAIL;
    *ppddsNewSurface = pddsNew;

    // Copy compress image to un-compressed surface, including mips (if any)
    while( TRUE )
    {
        if( FAILED( pddsNew->Blt( NULL, pddsDXT, NULL, DDBLT_WAIT, NULL ) ) )
            return E_FAIL;

        // Get next surface in DXT's mipmap chain
        ddsd.ddsCaps.dwCaps = DDSCAPS_TEXTURE | DDSCAPS_MIPMAP | DDSCAPS_COMPLEX;
        if( FAILED( pddsDXT->GetAttachedSurface( &ddsd.ddsCaps, &pddsDXTAttached )))
        {
            // Failure here means were done with the mipmap chain
            return S_OK;
        }
        pddsDXT = pddsDXTAttached;  

        // Get next surface in the new surface's mipmap chain
        if( FAILED( pddsNew->GetAttachedSurface( &ddsd.ddsCaps, &pddsNewAttached )))
            return E_FAIL;
        pddsNew = pddsNewAttached;
    }
}




//-----------------------------------------------------------------------------
// Name: LoadTexture()
// Desc: Creates the device-dependant surface and loads a DDS texture 
//-----------------------------------------------------------------------------
HRESULT LoadTexture( TCHAR* strTextureName,
                     LPDIRECT3DDEVICE3 pd3dDevice, 
                     TextureContainer* ptcTexture)
{
    HRESULT              hr;
    LPDIRECTDRAW4        pDD        = NULL;
    LPDIRECTDRAWSURFACE4 pDDSNewTop = NULL;
    LPDIRECTDRAWSURFACE4 pddsRenderTarget = NULL;
    DDSURFACEDESC2       ddsdComp;
    DDPIXELFORMAT        ddpfBestMatch;

    // Get the render target surface
    if( FAILED( hr = pd3dDevice->GetRenderTarget( &pddsRenderTarget ) ) )
        goto LFail;

    // Get a DDraw ptr (from render target) for creating surfaces
    if( FAILED( hr = pddsRenderTarget->GetDDInterface( (VOID**)&pDD ) ) )
        goto LFail;

    // Create a DDS texture surface based on the dds file
    // this surface may or may not be compressed
    if( FAILED( hr = ReadDDSTexture( strTextureName, pDD, &ddsdComp,
                                     &ptcTexture->pddsSurface) ) )
        goto LFail;

    // enumerate all pixel formats, then choose the best match
    // based on the read-in DDS texture format
    if( FAILED( hr = FindBestPixelFormatMatch( pd3dDevice, 
                                               ddsdComp.ddpfPixelFormat, 
                                               &ddpfBestMatch ) ) )
        goto LFail;

    if( ddpfBestMatch.dwFlags & DDPF_ALPHAPREMULT )
    {
        // Use D3DBLEND_ONE if DDPF_ALPHAPREMULT is on
        pd3dDevice->SetRenderState( D3DRENDERSTATE_SRCBLEND, D3DBLEND_ONE );
    }
    else
    {
        // Use D3DBLEND_SRCALPHA if DDPF_ALPHAPREMULT is off
        pd3dDevice->SetRenderState( D3DRENDERSTATE_SRCBLEND, D3DBLEND_SRCALPHA );
    }

    // Does the renderer support the compress texture format or 
    // is the dds texture already uncompressed? 
    if( ddsdComp.ddpfPixelFormat.dwFourCC != ddpfBestMatch.dwFourCC )
    {
        // blt the compressed surface to an uncompressed 
        // surface using the best pixel format match
        if( FAILED( hr = BltToUncompressedSurface( pDD, ddsdComp, ddpfBestMatch, 
                                                   ptcTexture->pddsSurface, &ptcTexture->pddsSurface) ) )
            goto LFail;

        // get the texture interface from the 
        // new uncompressed texture surface 
        if( FAILED( hr = pDDSNewTop->QueryInterface( IID_IDirect3DTexture2, 
                                                    (VOID**)&ptcTexture->ptexTexture ) ) )
            goto LFail;
    }
    else
    {
        // don't uncompress texture since renderer 
        // natively supports this pixel format
        if( FAILED( hr = ptcTexture->pddsSurface->QueryInterface( IID_IDirect3DTexture2,
                                                    (VOID**)&ptcTexture->ptexTexture ) ) )
            goto LFail;
    }

LFail:

    if( pDDSNewTop )       pDDSNewTop->Release();
    //if( pDDSDXTTop )       pDDSDXTTop->Release();
    if( pddsRenderTarget ) pddsRenderTarget->Release();
    if( pDD )              pDD->Release();

    return hr;
}

