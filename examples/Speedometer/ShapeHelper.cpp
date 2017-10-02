#include "ShapeHelper.h"
#include "RenderWare.h"
#include "CSprite2d.h"

const int MAX_CIRCLE_SIDES = 60;
const float CIRCLE_STEP = 6.0f;

float ShapeHelper::mSinTable[360];
float ShapeHelper::mCosTable[360];

void ShapeHelper::InitSinCosTable() {
    for (unsigned int i = 0; i < 360; i++) {
        mSinTable[i] = sinf(static_cast<float>(i) * 0.017453292f);
        mCosTable[i] = cosf(static_cast<float>(i) * 0.017453292f);
    }
}

void ShapeHelper::AddOneVertToBuffer(RwIm2DVertex *verts, unsigned int vertIndex, float x, float y, float z, float rhw, float u, float v, unsigned int color) {
    verts[vertIndex].emissiveColor = color;
    verts[vertIndex].rhw = rhw;
    verts[vertIndex].u = u;
    verts[vertIndex].v = v;
    verts[vertIndex].x = x;
    verts[vertIndex].y = y;
    verts[vertIndex].z = z;
}

void ShapeHelper::RotateVertices(RwIm2DVertex *verts, unsigned int num, float center_x, float center_y, float angle) {
    float l_angle = fmodf(angle, 360.0f);
    if (l_angle < 0.0f)
        l_angle += 360.0;
    l_angle = 360.0f - l_angle;
    float fCos = mCosTable[static_cast<unsigned int>(l_angle) % 360];
    float fSin = mSinTable[static_cast<unsigned int>(l_angle) % 360];
    for (unsigned int i = 0; i < num; i++) {
        float xold = verts[i].x;
        float yold = verts[i].y;
        verts[i].x = center_x + (xold - center_x) * fCos + (yold - center_y) * fSin;
        verts[i].y = center_y - (xold - center_x) * fSin + (yold - center_y) * fCos;
    }
}

void ShapeHelper::DrawTexturedRectangle(CRect const& rect, CRGBA const& color, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4) {
    CSprite2d::SetVertices(rect, color, color, color, color, u1, v1, u2, v2, u3, v3, u4, v4);
    RwIm2DRenderPrimitive(rwPRIMTYPETRIFAN, CSprite2d::maVertices, 4);
}

void ShapeHelper::DrawRotatedTexturedRectangle(CRect const& rect, float center_x, float center_y, float angle, CRGBA const& color, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4) {
    CSprite2d::SetVertices(rect, color, color, color, color, u1, v1, u2, v2, u3, v3, u4, v4);
    RotateVertices(CSprite2d::maVertices, 4, center_x, center_y, angle);
    RwIm2DRenderPrimitive(rwPRIMTYPETRIFAN, CSprite2d::maVertices, 4);
}

void ShapeHelper::DrawCircleSectorTextured(float tex_width, float tex_height, float tex_u_offset, float tex_v_offset, float tex_u_size, float tex_v_size,
    float center_x, float center_y, float width, float height, float start, float end) {
    static RwIm2DVertex verts[MAX_CIRCLE_SIDES * 2 + 3];
    unsigned int vertsCounter = 0;
    AddOneVertToBuffer(verts, vertsCounter++, center_x, center_y, 0.0f, 1.0f,
        0.5f * tex_u_size / tex_width + tex_u_offset / tex_width,
        0.5f * tex_v_size / tex_height + tex_v_offset / tex_height, RWRGBALONG(255, 255, 255, 255));
    float a = start;
    for (int i = 0; i < 60; i++) {
        float cos_x = mCosTable[static_cast<unsigned int>(a) % 360];
        float cos_y = mSinTable[static_cast<unsigned int>(a) % 360];
        float u = cos_x / 2.0f + 0.5f;
        float v = cos_y / 2.0f + 0.5f;
        AddOneVertToBuffer(verts, vertsCounter++, cos_x * width + center_x, cos_y * height + center_y, 0.0f, 1.0f,
            u * tex_u_size / tex_width + tex_u_offset / tex_width,
            v * tex_v_size / tex_height + tex_v_offset / tex_height, RWRGBALONG(255, 255, 255, 255));
        AddOneVertToBuffer(verts, vertsCounter++, center_x, center_y, 0.0f, 1.0f,
            0.5f * tex_u_size / tex_width + tex_u_offset / tex_width,
            0.5f * tex_v_size / tex_height + tex_v_offset / tex_height, RWRGBALONG(255, 255, 255, 255));
        a += CIRCLE_STEP;
        if (a > end) {
            cos_x = mCosTable[static_cast<unsigned int>(end) % 360];
            cos_y = mSinTable[static_cast<unsigned int>(end) % 360];
            u = cos_x / 2.0f + 0.5f;
            v = cos_y / 2.0f + 0.5f;
            AddOneVertToBuffer(verts, vertsCounter++, cos_x * width + center_x, cos_y * height + center_y, 0.0f, 1.0f,
                u * tex_u_size / tex_width + tex_u_offset / tex_width,
                v * tex_v_size / tex_height + tex_v_offset / tex_height, RWRGBALONG(255, 255, 255, 255));
            AddOneVertToBuffer(verts, vertsCounter++, center_x, center_y, 0.0f, 1.0f,
                0.5f * tex_u_size / tex_width + tex_u_offset / tex_width,
                0.5f * tex_v_size / tex_height + tex_v_offset / tex_height, RWRGBALONG(255, 255, 255, 255));
            break;
        }
        else if (a == end)
            break;
    }
    RwIm2DRenderPrimitive(rwPRIMTYPETRISTRIP, verts, vertsCounter);
}