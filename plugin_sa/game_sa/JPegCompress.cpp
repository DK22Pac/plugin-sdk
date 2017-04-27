# include "JPegCompress.h"
# include "CScene.h"
# include "plugin.h"
# include <cassert>

// NOTE: pCamera parameter is not used, game's full screen will be saved in any way
// US-1.00 @ 0x005D0820
// EU-1.00 @ 0x005D0820
void JPegCompressScreenToFile(RwCamera * pCamera, RwChar const * pszPath) {
	assert(pszPath && pszPath[0]);
	assert(pCamera == Scene.m_pRwCamera && "Required due to dirty Rockstar implementation");
	plugin::Call<0x005D0820>(pCamera, pszPath);
}

void JPegCompressScreenToFile(RwChar const * pszPath) {
	JPegCompressScreenToFile(Scene.m_pRwCamera, pszPath);
}

// NOTE: pCamera parameter is not used, game's full screen will be saved in any way
// US-1.00 @ 0x005D0820
// EU-1.00 @ 0x005D0820
void JPegCompressScreenToBuffer(RwCamera * pCamera, RwInt8 ** pBuffer, RwUInt32 * pSize) {
	assert(pBuffer && *pBuffer && pSize);
	assert(pCamera == Scene.m_pRwCamera && "Required due to dirty Rockstar implementation");
	plugin::Call<0x005D0740>(pCamera, pBuffer, pSize);
}

void JPegCompressScreenToBuffer(RwInt8 ** pBuffer, RwUInt32 * pSize) {
	JPegCompressScreenToBuffer(Scene.m_pRwCamera, pBuffer, pSize);
}

// NOTE: CMenuManager::m_pJPegBuffer usage is hardcoded by Rockstar, you can't use any other pointer
//       also buffer size and image dimension is also hardcoded in executable so this function is not fully usable
// US-1.00 @ 0x005D07A0
// EU-1.00 @ 0x005D07A0
RwBool JPegDecompressToVramFromBuffer(RwRaster * pRaster, RwInt8 ** pBuffer) {
	assert(pRaster);
	assert(pBuffer && *pBuffer);
	assert(pBuffer == &FrontEndMenuManager.m_pJPegBuffer && "Required due to dirty Rockstar implementation");
	return plugin::CallAndReturn<RwBool, 0x005D07A0>(pRaster, pBuffer);
}

