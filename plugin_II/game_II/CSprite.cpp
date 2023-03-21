/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CSprite.h"
#include "CGame.h"
#include "CPlayerPed.h"
#include "..\shared\extensions\Screen.h"
#include "GBH.h"
#include "CRect.h"

CObject* CSprite::GetObject() {
	return plugin::CallMethodAndReturn<CObject*, 0x40FEB0, CSprite*>(this);
}

void CSprite::SetPosition(CEncodedVector pos) {
	plugin::CallMethod<0x420600, CSprite*>(this, pos);
}

void CSprite::SetRotation(short rot) {
    plugin::CallMethod<0x420690, CSprite*>(this, rot);
}

void CSprite::SetRemap(short remap) {
    plugin::CallMethod<0x4B9B00, CSprite*>(this, remap);
}

void CSprite::Render() {
    plugin::CallMethod<0x4BE060, CSprite*>(this);
}

void CSprite::DrawSprite(int id1, int id2, int x, int y, int angle, int scale, int const& mode, int enableAlpha, int alpha, int unk, int lightFlag) {
    plugin::CallStd<0x4CBA50, int, int, int, int, int, int, int const&, int, int, int, int>(id1, id2, x, y, angle, scale, mode, enableAlpha, alpha, unk, lightFlag);
}
