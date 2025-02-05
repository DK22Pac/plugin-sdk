/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CSprite2d.h"
#include "Other.h"
#include "d3d/compress.h"
#include "d3d/d3dtextr.h"
#include <tchar.h>

tVertex CSprite2d::ms_aVertices[8];

CSprite2d::CSprite2d() {
	m_pTexture = nullptr;
	m_cPath[0] = TEXT('\0');
}

CSprite2d::~CSprite2d() {
	Delete();
}

void CSprite2d::Delete() {
	if (m_pTexture) {
		D3DTextr_DestroyTexture(m_cPath);

		if (m_cPath[0] != TEXT('\0'))
			lstrcpy(m_cPath, TEXT("\0"));

		m_pTexture = nullptr;
	}
}

bool CSprite2d::SetTexture(const TCHAR* name) {
	Delete();
	lstrcpy(m_cPath, name);
	D3DTextr_CreateTexture(GetD3DDevice(), m_cPath, 0, 0, m_pTexture);
	return true;
}

bool CSprite2d::SetTexture(const TCHAR* name, unsigned short width, unsigned short height, unsigned int bitCount, unsigned char* pixels) {
	lstrcpy(m_cPath, name);
	D3DTextr_CreateTexture(GetD3DDevice(), m_cPath, width, height, bitCount, pixels, m_pTexture);
	return true;
}

void CSprite2d::Reset() {
	if (m_cPath[0] != TEXT('\0'))
		D3DTextr_Restore(m_cPath, GetD3DDevice(), m_pTexture);
}

void CSprite2d::DrawLine(float x1, float y1, float x2, float y2, CRGBA const& color) {
	float z = 0.00009f;
	float offset = 1.0f / 1024.0f;

	ms_aVertices[0].x = x1;
	ms_aVertices[0].y = y1;
	ms_aVertices[0].z = z;
	ms_aVertices[0].w = z;
	ms_aVertices[0].diff = COLOR_RGBA(color.r, color.g, color.b, color.a);
	ms_aVertices[0].spec = 0;
	ms_aVertices[1].x = x2;
	ms_aVertices[1].y = y2;
	ms_aVertices[1].z = z;
	ms_aVertices[1].w = z;
	ms_aVertices[1].diff = COLOR_RGBA(color.r, color.g, color.b, color.a);
	ms_aVertices[1].spec = 0;

	RenderStateSet(D3DRENDERSTATE_TEXTUREHANDLE, NULL);

	RenderStateSet(D3DRENDERSTATE_SHADEMODE, (void*)D3DSHADE_FLAT);
	RenderStateSet(D3DRENDERSTATE_SHADEMODE, (void*)D3DSHADE_FLAT);
	RenderStateSet(D3DRENDERSTATE_ZENABLE, FALSE);
	RenderStateSet(D3DRENDERSTATE_ZWRITEENABLE, FALSE);
	RenderStateSet(D3DRENDERSTATE_VERTEXBLEND, (void*)(color.a != 255));

	RenderPrimitive(D3DPT_LINELIST, ms_aVertices, 2);

	RenderStateSet(D3DRENDERSTATE_ZENABLE, (void*)TRUE);
	RenderStateSet(D3DRENDERSTATE_ZWRITEENABLE, (void*)TRUE);
	RenderStateSet(D3DRENDERSTATE_SHADEMODE, (void*)D3DSHADE_GOURAUD);
}

void CSprite2d::DrawRect(CRect const& rect, CRGBA const& color) {
	SetVertices(rect, color, color, color, color);

	RenderStateSet(D3DRENDERSTATE_TEXTUREHANDLE, NULL);

	RenderStateSet(D3DRENDERSTATE_SHADEMODE, (void*)D3DSHADE_FLAT);
	RenderStateSet(D3DRENDERSTATE_SHADEMODE, (void*)D3DSHADE_FLAT);
	RenderStateSet(D3DRENDERSTATE_ZENABLE, FALSE);
	RenderStateSet(D3DRENDERSTATE_ZWRITEENABLE, FALSE);
	RenderStateSet(D3DRENDERSTATE_VERTEXBLEND, (void*)(color.a != 255));

	RenderPrimitive(D3DPT_TRIANGLEFAN, ms_aVertices, 4);

	RenderStateSet(D3DRENDERSTATE_ZENABLE, (void*)TRUE);
	RenderStateSet(D3DRENDERSTATE_ZWRITEENABLE, (void*)TRUE);
	RenderStateSet(D3DRENDERSTATE_SHADEMODE, (void*)D3DSHADE_GOURAUD);
}

void CSprite2d::Draw2DPolygon(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, const CRGBA& color) {
	SetVertices(x1, y1, x2, y2, x3, y3, x4, y4, color, color, color, color);
	
	RenderStateSet(D3DRENDERSTATE_TEXTUREHANDLE, NULL);

	RenderStateSet(D3DRENDERSTATE_SHADEMODE, (void*)D3DSHADE_FLAT);
	RenderStateSet(D3DRENDERSTATE_ZENABLE, (void*)FALSE);
	RenderStateSet(D3DRENDERSTATE_ZWRITEENABLE, (void*)FALSE);
	RenderStateSet(D3DRENDERSTATE_VERTEXBLEND, (void*)(color.a != 255));

	RenderPrimitive(D3DPT_TRIANGLEFAN, ms_aVertices, 4);

	RenderStateSet(D3DRENDERSTATE_ZENABLE, (void*)TRUE);
	RenderStateSet(D3DRENDERSTATE_ZWRITEENABLE, (void*)TRUE);
	RenderStateSet(D3DRENDERSTATE_SHADEMODE, (void*)D3DSHADE_GOURAUD);
}

void CSprite2d::Draw(float x, float y, float w, float h, CRGBA const& color) {
	Draw(CRect(x, y, x + w, y + h), color);
}

void CSprite2d::Draw(CRect const& rect, CRGBA const& color) {
	SetVertices(rect, color, color, color, color);

	RenderStateSet(D3DRENDERSTATE_TEXTUREHANDLE, m_pTexture);

	RenderStateSet(D3DRENDERSTATE_SHADEMODE, (void*)D3DSHADE_FLAT);
	RenderStateSet(D3DRENDERSTATE_ZENABLE, FALSE);
	RenderStateSet(D3DRENDERSTATE_ZWRITEENABLE, FALSE);
	RenderStateSet(D3DRENDERSTATE_VERTEXBLEND, (void*)(color.a != 255));

	RenderPrimitive(D3DPT_TRIANGLEFAN, ms_aVertices, 4);

	RenderStateSet(D3DRENDERSTATE_ZENABLE, (void*)TRUE);
	RenderStateSet(D3DRENDERSTATE_ZWRITEENABLE, (void*)TRUE);
	RenderStateSet(D3DRENDERSTATE_SHADEMODE, (void*)D3DSHADE_GOURAUD);
}

void CSprite2d::Draw(CRect const& rect, CRGBA const& color, float u0, float v0, float u1, float v1, float u3, float v3, float u2, float v2) {
	SetVertices(rect, color, color, color, color, u0, v0, u1, v1, u2, v2, u3, v3);

	RenderStateSet(D3DRENDERSTATE_TEXTUREHANDLE, m_pTexture);

	RenderStateSet(D3DRENDERSTATE_SHADEMODE, (void*)D3DSHADE_FLAT);
	RenderStateSet(D3DRENDERSTATE_ZENABLE, FALSE);
	RenderStateSet(D3DRENDERSTATE_ZWRITEENABLE, FALSE);
	RenderStateSet(D3DRENDERSTATE_VERTEXBLEND, (void*)(color.a != 255));

	RenderPrimitive(D3DPT_TRIANGLEFAN, ms_aVertices, 4);

	RenderStateSet(D3DRENDERSTATE_ZENABLE, (void*)TRUE);
	RenderStateSet(D3DRENDERSTATE_ZWRITEENABLE, (void*)TRUE);
	RenderStateSet(D3DRENDERSTATE_SHADEMODE, (void*)D3DSHADE_GOURAUD);
}

void CSprite2d::Draw(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, CRGBA const& color) {
	SetVertices(x1, y1, x2, y2, x3, y3, x4, y4, color, color, color, color);

	RenderStateSet(D3DRENDERSTATE_TEXTUREHANDLE, m_pTexture);
	RenderStateSet(D3DRENDERSTATE_SHADEMODE, (void*)D3DSHADE_FLAT);
	RenderStateSet(D3DRENDERSTATE_ZENABLE, FALSE);
	RenderStateSet(D3DRENDERSTATE_ZWRITEENABLE, FALSE);
	RenderStateSet(D3DRENDERSTATE_VERTEXBLEND, (void*)(color.a != 255));
	
	RenderPrimitive(D3DPT_TRIANGLEFAN, ms_aVertices, 4);

	RenderStateSet(D3DRENDERSTATE_ZENABLE, (void*)TRUE);
	RenderStateSet(D3DRENDERSTATE_ZWRITEENABLE, (void*)TRUE);
	RenderStateSet(D3DRENDERSTATE_SHADEMODE, (void*)D3DSHADE_GOURAUD);
}

void CSprite2d::SetMaskVertices(int n, float* positions) {
	int i;
	float z = 0.00009f;

	for (i = 0; i < n; i++) {
		ms_aVertices[i].x = positions[i * 2 + 0];
		ms_aVertices[i].y = positions[i * 2 + 1];
		ms_aVertices[i].z = z;
		ms_aVertices[i].w = z;
		ms_aVertices[i].diff = COLOR_RGBA(255, 255, 255, 255);
		ms_aVertices[i].spec = 0;
		ms_aVertices[i].u = 0.0f;
		ms_aVertices[i].v = 1.0f;
	}
}

void CSprite2d::SetVertices(int n, float* positions, float* uvs, CRGBA const& color) {
	float z = 0.00009f;

	for (int i = 0; i < n; i++) {
		ms_aVertices[i].x = positions[i * 2 + 0];
		ms_aVertices[i].y = positions[i * 2 + 1];
		ms_aVertices[i].z = z + 0.0001f;
		ms_aVertices[i].w = z;
		ms_aVertices[i].diff = COLOR_RGBA(color.r, color.g, color.b, color.a);
		ms_aVertices[i].spec = 0;
		ms_aVertices[i].u = uvs[i * 2 + 0];
		ms_aVertices[i].v =  uvs[i * 2 + 1];
	}
}

void CSprite2d::SetVertices(CRect const& rect, CRGBA const& c0, CRGBA const& c1, CRGBA const& c2, CRGBA const& c3) {
	float z = 0.00009f;
	float offset = 1.0f / 1024.0f;

	ms_aVertices[0].x = rect.left;
	ms_aVertices[0].y = rect.top;
	ms_aVertices[0].z = z;
	ms_aVertices[0].w = z;
	ms_aVertices[0].diff = COLOR_RGBA(c2.r, c2.g, c2.b, c2.a);
	ms_aVertices[0].spec = 0;
	ms_aVertices[0].u = 0.0f + offset;
	ms_aVertices[0].v = 0.0f + offset;
	
	ms_aVertices[1].x = rect.right;
	ms_aVertices[1].y = rect.top;
	ms_aVertices[1].z = z;
	ms_aVertices[1].w = z;
	ms_aVertices[1].diff = COLOR_RGBA(c3.r, c3.g, c3.b, c3.a);
	ms_aVertices[1].spec = 0;
	ms_aVertices[1].u = 1.0f + offset;
	ms_aVertices[1].v = 0.0f + offset;
	
	ms_aVertices[2].x = rect.right;
	ms_aVertices[2].y = rect.bottom;
	ms_aVertices[2].z = z;
	ms_aVertices[2].w = z;
	ms_aVertices[2].diff = COLOR_RGBA(c1.r, c1.g, c1.b, c1.a);
	ms_aVertices[2].spec = 0;
	ms_aVertices[2].u = 1.0f + offset;
	ms_aVertices[2].v = 1.0f + offset;
	
	ms_aVertices[3].x = rect.left;
	ms_aVertices[3].y = rect.bottom;
	ms_aVertices[3].z = z;
	ms_aVertices[3].w = z;
	ms_aVertices[3].diff = COLOR_RGBA(c0.r, c0.g, c0.b, c0.a);
	ms_aVertices[3].spec = 0;
	ms_aVertices[3].u = 0.0f + offset;
	ms_aVertices[3].v = 1.0f + offset;
}

void CSprite2d::SetVertices(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, CRGBA const& c0, CRGBA const& c1, CRGBA const& c2, CRGBA const& c3) {
	float z = 0.00009f;
	float offset = 1.0f / 1024.0f;

	ms_aVertices[0].x = x3;
	ms_aVertices[0].y = y3;
	ms_aVertices[0].w = z;
	ms_aVertices[0].z = z;
	ms_aVertices[0].diff = COLOR_RGBA(c2.r, c2.g, c2.b, c2.a);
	ms_aVertices[0].spec = 0;
	ms_aVertices[0].u = 0.0f + offset;
	ms_aVertices[0].v = 0.0f + offset;

	ms_aVertices[1].x = x4;
	ms_aVertices[1].y = y4;
	ms_aVertices[1].z = z;
	ms_aVertices[1].w = z;
	ms_aVertices[1].diff = COLOR_RGBA(c3.r, c3.g, c3.b, c3.a);
	ms_aVertices[1].spec = 0;
	ms_aVertices[1].u = 1.0f + offset;
	ms_aVertices[1].v = 0.0f + offset;

	ms_aVertices[2].x = x2;
	ms_aVertices[2].y = y2;
	ms_aVertices[2].z = z;
	ms_aVertices[2].w = z;
	ms_aVertices[2].diff = COLOR_RGBA(c1.r, c1.g, c1.b, c1.a);
	ms_aVertices[2].spec = 0;
	ms_aVertices[2].u = 1.0f + offset;
	ms_aVertices[2].v = 1.0f + offset;

	ms_aVertices[3].x = x1;
	ms_aVertices[3].y = y1;
	ms_aVertices[3].z = z;
	ms_aVertices[3].w = z;
	ms_aVertices[3].diff =  COLOR_RGBA(c0.r, c0.g, c0.b, c0.a);
	ms_aVertices[3].spec = 0;
	ms_aVertices[3].u = 0.0f + offset;
	ms_aVertices[3].v = 1.0f + offset;
}

void CSprite2d::SetVertices(const CRect& rect, const CRGBA& c0, const CRGBA& c1, const CRGBA& c2, const CRGBA& c3, float u0, float v0, float u1, float v1, float u2, float v2, float u3, float v3) {
	float z = 0.00009f;

	ms_aVertices[0].x = rect.left;
	ms_aVertices[0].y = rect.top;
	ms_aVertices[0].z = z;
	ms_aVertices[0].w = z;
	ms_aVertices[0].diff = COLOR_RGBA(c2.r, c2.g, c2.b, c2.a);
	ms_aVertices[0].spec = 0;
	ms_aVertices[0].u = u0;
	ms_aVertices[0].v = v0;

	ms_aVertices[1].x = rect.right;
	ms_aVertices[1].y = rect.top;
	ms_aVertices[1].z = z;
	ms_aVertices[1].w = z;
	ms_aVertices[1].diff = COLOR_RGBA(c3.r, c3.g, c3.b, c3.a);
	ms_aVertices[1].spec = 0;
	ms_aVertices[1].u = u1;
	ms_aVertices[1].v = v1;

	ms_aVertices[2].x = rect.right;
	ms_aVertices[2].y = rect.bottom;
	ms_aVertices[2].z = z;
	ms_aVertices[2].w = z;
	ms_aVertices[2].diff = COLOR_RGBA(c1.r, c1.g, c1.b, c1.a);
	ms_aVertices[2].spec = 0;
	ms_aVertices[2].u = u2;
	ms_aVertices[2].v = v2;

	ms_aVertices[3].x = rect.left;
	ms_aVertices[3].y = rect.bottom;
	ms_aVertices[3].z = z;
	ms_aVertices[3].w = z;
	ms_aVertices[3].diff = COLOR_RGBA(c0.r, c0.g, c0.b, c0.a);
	ms_aVertices[3].spec = 0;
	ms_aVertices[3].u = u3;
	ms_aVertices[3].v = v3;
}
