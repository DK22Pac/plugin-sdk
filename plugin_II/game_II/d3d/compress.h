#ifndef COMPRESS_H
#define COMPRESS_H

#include <ddraw.h>
#include <d3d.h>

struct TextureContainer;

HRESULT LoadTexture( TCHAR* strTextureName,
                     LPDIRECT3DDEVICE3 pd3dDevice, 
                     TextureContainer* ptcTexture);

HRESULT ReadDDSTexture( TCHAR* strTextureName, LPDIRECTDRAW4 pDD,
    DDSURFACEDESC2* pddsdComp,
    LPDIRECTDRAWSURFACE4* ppddsCompTop);

#endif // COMPRESS_H
