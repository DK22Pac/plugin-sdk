//-----------------------------------------------------------------------------
// File: D3DUtil.cpp
//
// Desc: Shortcut macros and functions for using DX objects
//
//
// Copyright (c) 1997-1998 Microsoft Corporation. All rights reserved
//-----------------------------------------------------------------------------

#define D3D_OVERLOADS
#define STRICT
#include <math.h>
#include <stdio.h>
#include "d3dutil.h"
#include <tchar.h>



//-----------------------------------------------------------------------------
// Name: D3DUtil_InitDeviceDesc()
// Desc: Helper function called to initialize a D3DDEVICEDESC structure,
//-----------------------------------------------------------------------------
VOID D3DUtil_InitDeviceDesc( D3DDEVICEDESC& ddDevDesc )
{
    ZeroMemory( &ddDevDesc, sizeof(D3DDEVICEDESC) );
    ddDevDesc.dwSize                  = sizeof(D3DDEVICEDESC);
    ddDevDesc.dtcTransformCaps.dwSize = sizeof(D3DTRANSFORMCAPS);
    ddDevDesc.dlcLightingCaps.dwSize  = sizeof(D3DLIGHTINGCAPS);
    ddDevDesc.dpcLineCaps.dwSize      = sizeof(D3DPRIMCAPS);
    ddDevDesc.dpcTriCaps.dwSize       = sizeof(D3DPRIMCAPS);
}




//-----------------------------------------------------------------------------
// Name: D3DUtil_InitSurfaceDesc()
// Desc: Helper function called to build a DDSURFACEDESC2 structure,
//       typically before calling CreateSurface() or GetSurfaceDesc()
//-----------------------------------------------------------------------------
VOID D3DUtil_InitSurfaceDesc( DDSURFACEDESC2& ddsd, DWORD dwFlags,
                              DWORD dwCaps )
{
    ZeroMemory( &ddsd, sizeof(DDSURFACEDESC2) );
    ddsd.dwSize                 = sizeof(DDSURFACEDESC2);
    ddsd.dwFlags                = dwFlags;
    ddsd.ddsCaps.dwCaps         = dwCaps;
    ddsd.ddpfPixelFormat.dwSize = sizeof(DDPIXELFORMAT);
}




//-----------------------------------------------------------------------------
// Name: D3DUtil_InitViewport()
// Desc: Helper function called to build a D3DVIEWPORT3 structure
//-----------------------------------------------------------------------------
VOID D3DUtil_InitViewport( D3DVIEWPORT2& vp, DWORD dwWidth, DWORD dwHeight )
{
    ZeroMemory( &vp, sizeof(D3DVIEWPORT2) );
    vp.dwSize   = sizeof(D3DVIEWPORT2);
    vp.dwWidth  = dwWidth;
    vp.dwHeight = dwHeight;
    vp.dvMaxZ   = 1.0f;

    vp.dvClipX      = -1.0f;
    vp.dvClipWidth  = 2.0f;
    vp.dvClipY      = 1.0f;
    vp.dvClipHeight = 2.0f;
}




//-----------------------------------------------------------------------------
// Name: D3DUtil_InitMaterial()
// Desc: Helper function called to build a D3DMATERIAL structure
//-----------------------------------------------------------------------------
VOID D3DUtil_InitMaterial( D3DMATERIAL& mtrl, FLOAT r, FLOAT g, FLOAT b )
{
    ZeroMemory( &mtrl, sizeof(D3DMATERIAL) );
    mtrl.dwSize       = sizeof(D3DMATERIAL);
    mtrl.dcvDiffuse.r = mtrl.dcvAmbient.r = r;
    mtrl.dcvDiffuse.g = mtrl.dcvAmbient.g = g;
    mtrl.dcvDiffuse.b = mtrl.dcvAmbient.b = b;
    mtrl.dcvDiffuse.a = mtrl.dcvAmbient.a = 1.0f;
    mtrl.dwRampSize   = 16L; // A default ramp size
}




//-----------------------------------------------------------------------------
// Name: D3DUtil_InitLight()
// Desc: Initializes a D3DLIGHT structure
//-----------------------------------------------------------------------------
VOID D3DUtil_InitLight( D3DLIGHT& light, D3DLIGHTTYPE ltType, 
                        FLOAT x, FLOAT y, FLOAT z )
{
    ZeroMemory( &light, sizeof(D3DLIGHT) );
    light.dwSize       = sizeof(D3DLIGHT);
    light.dltType      = ltType;
    light.dcvColor.r   = 1.0f;
    light.dcvColor.g   = 1.0f;
    light.dcvColor.b   = 1.0f;
    light.dvPosition.x = light.dvDirection.x = x;
    light.dvPosition.y = light.dvDirection.y = y;
    light.dvPosition.z = light.dvDirection.z = z;
}




//-----------------------------------------------------------------------------
// Name: D3DUtil_GetDirectDrawFromDevice()
// Desc: Get the DDraw interface from a D3DDevice.
//-----------------------------------------------------------------------------
LPDIRECTDRAW4 D3DUtil_GetDirectDrawFromDevice( LPDIRECT3DDEVICE3 pd3dDevice )
{
    LPDIRECTDRAW4        pDD = NULL;
    LPDIRECTDRAWSURFACE4 pddsRender;

    if( pd3dDevice )
    {
        // Get the current render target
        if( SUCCEEDED( pd3dDevice->GetRenderTarget( &pddsRender ) ) )
        {
            // Get the DDraw4 interface from the render target
            pddsRender->GetDDInterface( (VOID**)&pDD );
            pddsRender->Release();
        }
    }
    return pDD;
}




//-----------------------------------------------------------------------------
// Name: D3DUtil_GetDeviceMemoryType()
// Desc: Retreives the default memory type used for the device.
//-----------------------------------------------------------------------------
DWORD D3DUtil_GetDeviceMemoryType( LPDIRECT3DDEVICE3 pd3dDevice )
{
    D3DDEVICEDESC ddHwDesc, ddSwDesc;
    ddHwDesc.dwSize = sizeof(D3DDEVICEDESC);
    ddSwDesc.dwSize = sizeof(D3DDEVICEDESC);
    if( FAILED( pd3dDevice->GetCaps( &ddHwDesc, &ddSwDesc ) ) )
        return 0L;

    if( ddHwDesc.dwFlags )
        return DDSCAPS_VIDEOMEMORY;

    return DDSCAPS_SYSTEMMEMORY;
}




//-----------------------------------------------------------------------------
// Name: D3DUtil_SetViewMatrix()
// Desc: Given an eye point, a lookat point, and an up vector, this
//       function builds a 4x4 view matrix.
//-----------------------------------------------------------------------------
HRESULT D3DUtil_SetViewMatrix( D3DMATRIX& mat, D3DVECTOR& vFrom, 
                               D3DVECTOR& vAt, D3DVECTOR& vWorldUp )
{
    // Get the z basis vector, which points straight ahead. This is the
    // difference from the eyepoint to the lookat point.
    D3DVECTOR vView = vAt - vFrom;

    FLOAT fLength = Magnitude( vView );
    if( fLength < 1e-6f )
        return E_INVALIDARG;

    // Normalize the z basis vector
    vView /= fLength;

    // Get the dot product, and calculate the projection of the z basis
    // vector onto the up vector. The projection is the y basis vector.
    FLOAT fDotProduct = DotProduct( vWorldUp, vView );

    D3DVECTOR vUp = vWorldUp - fDotProduct * vView;

    // If this vector has near-zero length because the input specified a
    // bogus up vector, let's try a default up vector
    if( 1e-6f > ( fLength = Magnitude( vUp ) ) )
    {
        vUp = D3DVECTOR( 0.0f, 1.0f, 0.0f ) - vView.y * vView;

        // If we still have near-zero length, resort to a different axis.
        if( 1e-6f > ( fLength = Magnitude( vUp ) ) )
        {
            vUp = D3DVECTOR( 0.0f, 0.0f, 1.0f ) - vView.z * vView;

            if( 1e-6f > ( fLength = Magnitude( vUp ) ) )
                return E_INVALIDARG;
        }
    }

    // Normalize the y basis vector
    vUp /= fLength;

    // The x basis vector is found simply with the cross product of the y
    // and z basis vectors
    D3DVECTOR vRight = CrossProduct( vUp, vView );
    
    // Start building the matrix. The first three rows contains the basis
    // vectors used to rotate the view to point at the lookat point
    D3DUtil_SetIdentityMatrix( mat );
    mat._11 = vRight.x;    mat._12 = vUp.x;    mat._13 = vView.x;
    mat._21 = vRight.y;    mat._22 = vUp.y;    mat._23 = vView.y;
    mat._31 = vRight.z;    mat._32 = vUp.z;    mat._33 = vView.z;

    // Do the translation values (rotations are still about the eyepoint)
    mat._41 = - DotProduct( vFrom, vRight );
    mat._42 = - DotProduct( vFrom, vUp );
    mat._43 = - DotProduct( vFrom, vView );

    return S_OK;
}




//-----------------------------------------------------------------------------
// Name: D3DUtil_SetProjectionMatrix()
// Desc: Sets the passed in 4x4 matrix to a perpsective projection matrix built
//       from the field-of-view (fov, in y), aspect ratio, near plane (D),
//       and far plane (F). Note that the projection matrix is normalized for
//       element [3][4] to be 1.0. This is performed so that W-based range fog
//       will work correctly.
//-----------------------------------------------------------------------------
HRESULT D3DUtil_SetProjectionMatrix( D3DMATRIX& mat, FLOAT fFOV, FLOAT fAspect,
                                     FLOAT fNearPlane, FLOAT fFarPlane )
{
    if( fabs(fFarPlane-fNearPlane) < 0.01f )
        return E_INVALIDARG;
    if( fabs(sin(fFOV/2)) < 0.01f )
        return E_INVALIDARG;

    FLOAT w = fAspect * (FLOAT)( cos(fFOV/2)/sin(fFOV/2) );
    FLOAT h =   1.0f  * (FLOAT)( cos(fFOV/2)/sin(fFOV/2) );
    FLOAT Q = fFarPlane / ( fFarPlane - fNearPlane );

    ZeroMemory( &mat, sizeof(D3DMATRIX) );
    mat._11 = w;
    mat._22 = h;
    mat._33 = Q;
    mat._34 = 1.0f;
    mat._43 = -Q*fNearPlane;

    return S_OK;
}




//-----------------------------------------------------------------------------
// Name: D3DUtil_SetRotateXMatrix()
// Desc: Create Rotation matrix about X axis
//-----------------------------------------------------------------------------
VOID D3DUtil_SetRotateXMatrix( D3DMATRIX& mat, FLOAT fRads )
{
    D3DUtil_SetIdentityMatrix( mat );
    mat._22 =  (FLOAT)cos( fRads );
    mat._23 =  (FLOAT)sin( fRads );
    mat._32 = -(FLOAT)sin( fRads );
    mat._33 =  (FLOAT)cos( fRads );
}




//-----------------------------------------------------------------------------
// Name: D3DUtil_SetRotateYMatrix()
// Desc: Create Rotation matrix about Y axis
//-----------------------------------------------------------------------------
VOID D3DUtil_SetRotateYMatrix( D3DMATRIX& mat, FLOAT fRads )
{
    D3DUtil_SetIdentityMatrix( mat );
    mat._11 =  (FLOAT)cos( fRads );
    mat._13 = -(FLOAT)sin( fRads );
    mat._31 =  (FLOAT)sin( fRads );
    mat._33 =  (FLOAT)cos( fRads );
}




//-----------------------------------------------------------------------------
// Name: D3DUtil_SetRotateZMatrix()
// Desc: Create Rotation matrix about Z axis
//-----------------------------------------------------------------------------
VOID D3DUtil_SetRotateZMatrix( D3DMATRIX& mat, FLOAT fRads )
{
    D3DUtil_SetIdentityMatrix( mat );
    mat._11  =  (FLOAT)cos( fRads );
    mat._12  =  (FLOAT)sin( fRads );
    mat._21  = -(FLOAT)sin( fRads );
    mat._22  =  (FLOAT)cos( fRads );
}




//-----------------------------------------------------------------------------
// Name: D3DUtil_SetRotationMatrix
// Desc: Create a Rotation matrix about vector direction 
//-----------------------------------------------------------------------------
VOID D3DUtil_SetRotationMatrix( D3DMATRIX& mat, D3DVECTOR& vDir, FLOAT fRads )
{
    FLOAT     fCos = (FLOAT)cos( fRads );
    FLOAT     fSin = (FLOAT)sin( fRads );
    D3DVECTOR v    = Normalize( vDir );

    mat._11 = ( v.x * v.x ) * ( 1.0f - fCos ) + fCos;
    mat._12 = ( v.x * v.y ) * ( 1.0f - fCos ) - (v.z * fSin);
    mat._13 = ( v.x * v.z ) * ( 1.0f - fCos ) + (v.y * fSin);

    mat._21 = ( v.y * v.x ) * ( 1.0f - fCos ) + (v.z * fSin);
    mat._22 = ( v.y * v.y ) * ( 1.0f - fCos ) + fCos ;
    mat._23 = ( v.y * v.z ) * ( 1.0f - fCos ) - (v.x * fSin);

    mat._31 = ( v.z * v.x ) * ( 1.0f - fCos ) - (v.y * fSin);
    mat._32 = ( v.z * v.y ) * ( 1.0f - fCos ) + (v.x * fSin);
    mat._33 = ( v.z * v.z ) * ( 1.0f - fCos ) + fCos;
    
    mat._14 = mat._24 = mat._34 = 0.0f;
    mat._41 = mat._42 = mat._43 = 0.0f;
    mat._44 = 1.0f;
} 




//-----------------------------------------------------------------------------
// Name: D3DUtil_GetDisplayDepth()
// Desc: Returns the depth of the current display mode.
//-----------------------------------------------------------------------------
DWORD D3DUtil_GetDisplayDepth( LPDIRECTDRAW4 pDD4 )
{
    // If the caller did not supply a DDraw object, just create a temp one.
    if( NULL == pDD4 )
    {
        LPDIRECTDRAW pDD1;
        if( FAILED( DirectDrawCreate( NULL, &pDD1, NULL ) ) )
            return 0L;
    
        HRESULT hr = pDD1->QueryInterface( IID_IDirectDraw4, (VOID**)&pDD4 );
        pDD1->Release();
        if( FAILED(hr) )
            return 0L;
    }
    else
        pDD4->AddRef();

    // Get the display mode description
    DDSURFACEDESC2 ddsd;
    ZeroMemory( &ddsd, sizeof(DDSURFACEDESC2) );
    ddsd.dwSize = sizeof(DDSURFACEDESC2);
    pDD4->GetDisplayMode( &ddsd );
    pDD4->Release();

    // Return the display mode's depth
    return ddsd.ddpfPixelFormat.dwRGBBitCount;
}




//-----------------------------------------------------------------------------
// Name: _DbgOut()
// Desc: Outputs a message to the debug stream
//-----------------------------------------------------------------------------
HRESULT _DbgOut( TCHAR* strFile, DWORD dwLine, HRESULT hr, TCHAR* strMsg )
{
    TCHAR buffer[256];
    _stprintf( buffer, TEXT( "%s(%ld): " ), strFile, dwLine );
    OutputDebugString( buffer );
    OutputDebugString( strMsg );
    
    if( hr )
    {
        _stprintf( buffer, TEXT( "(hr=%08lx)\n" ), hr );
        OutputDebugString( buffer );
    }

    OutputDebugString( TEXT( "\n" ) );
    
    return hr;
}





