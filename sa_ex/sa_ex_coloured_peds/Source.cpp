#include <Windows.h>
#include "plugin.h"
#include "game_sa\CPed.h"
#include "game_sa\RenderWare.h"
#include "game_sa\CSprite.h"
#include "game_sa\CFont.h"
#include "Extension.h"

RpMaterial *MaterialCallback(RpMaterial *material, PedColor *color){
    material->color.red = color->red; material->color.green = color->green; material->color.blue = color->blue;
    return material;
}

RpAtomic *AtomicCallback(RpAtomic *atomic, PedColor *color){
    if (atomic->geometry){
        atomic->geometry->flags |= rpGEOMETRYMODULATEMATERIALCOLOR;
        RpGeometryForAllMaterials(atomic->geometry, MaterialCallback, color);
    }
    return atomic;
}

void OnPedRender(CPed *ped){
    if (ped->m_pRwObject){
        if (ped->m_pRwObject->type == rpCLUMP)
            RpClumpForAllAtomics(reinterpret_cast<RpClump*>(ped->m_pRwObject), AtomicCallback, pedColorData.Get(ped));
        else
            AtomicCallback(reinterpret_cast<RpAtomic*>(ped->m_pRwObject), pedColorData.Get(ped));
    }
}

void OnScreenDrawing()
{
    for (int i = 0; i < CPools::ms_pPedPool->m_Size; i++)
    {
        if (!CPools::ms_pPedPool->IsFreeSlotAtIndex(i))
        {
            CPed *ped = &CPools::ms_pPedPool->m_Objects[i];
            CVector &posn = ped->m_pCoords ? ped->m_pCoords->pos : ped->m_Placement.m_vPosn;
            RwV3d rwp = { posn.x, posn.y, posn.z + 1.0f };
            RwV3d screenCoors; float w, h;
            if (CSprite::CalcScreenCoors(rwp, &screenCoors, &w, &h, true, true))
            {
                CFont::SetAlignment(ALIGN_CENTER);
                CFont::SetColor(CRGBA(pedColorData.Get(ped)->red, pedColorData.Get(ped)->green, pedColorData.Get(ped)->blue, 255));
                CFont::SetOutlinePosition(1);
                CFont::SetBackground(false, false);
                CFont::SetWrapx(500.0);
                CFont::SetScale(0.5, 1.0);
                CFont::SetFontStyle(FONT_SUBTITLES);
                CFont::SetProp(true);
                char text[16];
                sprintf(text, "%d %d %d", pedColorData.Get(ped)->red, pedColorData.Get(ped)->green, pedColorData.Get(ped)->blue);
                CFont::PrintString(screenCoors.x, screenCoors.y, text);
            }
        }
    }
}

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved){
    if (reason == DLL_PROCESS_ATTACH){
        Events::drawingEvent += OnScreenDrawing;
        Events::pedRenderEvent += OnPedRender;
    }
    return TRUE;
}