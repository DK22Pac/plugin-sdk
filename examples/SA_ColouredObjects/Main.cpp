#include <Windows.h>
#include <plugin.h>
#include <game_sa\CPed.h>
#include <game_sa\RenderWare.h>
#include <game_sa\CSprite.h>
#include <game_sa\CFont.h>
#include <game_sa\common.h>
#include <game_sa\CRadar.h>
#include <game_sa\CMenuManager.h>

using namespace plugin;

class ColouredObjects {
    class ObjectColor {
    public:
        unsigned char red, green, blue;
        ObjectColor(CObject *) {
            red = rand() % 255; green = rand() % 255; blue = rand() % 255;
        }

        static RpMaterial *MaterialCallback(RpMaterial *material, ObjectColor *color) {
            material->color.red = color->red; material->color.green = color->green; material->color.blue = color->blue;
            return material;
        }

        static RpAtomic *AtomicCallback(RpAtomic *atomic, ObjectColor *color) {
            if (atomic->geometry) {
                atomic->geometry->flags |= rpGEOMETRYMODULATEMATERIALCOLOR;
                RpGeometryForAllMaterials(atomic->geometry, MaterialCallback, color);
            }
            return atomic;
        }
    };
public:
    ColouredObjects() {
        static ObjectExtendedData<ObjectColor> objColorData;

        // Paint object
        Events::objectRenderEvent += [](CObject *object) {
            if (object->m_pRwObject) {
                if (object->m_pRwObject->type == rpCLUMP)
                    RpClumpForAllAtomics(reinterpret_cast<RpClump*>(object->m_pRwObject), ObjectColor::AtomicCallback, &objColorData.Get(object));
                else
                    ObjectColor::AtomicCallback(reinterpret_cast<RpAtomic*>(object->m_pRwObject), &objColorData.Get(object));
            }
        };

        // Print objects text
        Events::drawingEvent += [] {
            for (int i = 0; i < CPools::ms_pPedPool->m_Size; i++) {
                CObject *object = CPools::ms_pObjectPool->GetAt(i);
                if (object) {
                    CVector &posn = object->GetCoords();
                    RwV3d rwp = { posn.x, posn.y, posn.z + 1.0f };
                    RwV3d screenCoors; float w, h;
                    if (CSprite::CalcScreenCoors(rwp, &screenCoors, &w, &h, true, true)) {
                        CFont::SetAlignment(ALIGN_CENTER);
                        CFont::SetColor(CRGBA(objColorData.Get(object).red, objColorData.Get(object).green, objColorData.Get(object).blue, 255));
                        CFont::SetOutlinePosition(1);
                        CFont::SetBackground(false, false);
                        CFont::SetWrapx(500.0);
                        CFont::SetScale(0.5, 1.0);
                        CFont::SetFontStyle(FONT_SUBTITLES);
                        CFont::SetProp(true);
                        char text[16];
                        sprintf(text, "%d %d %d", objColorData.Get(object).red, objColorData.Get(object).green, objColorData.Get(object).blue);
                        CFont::PrintString(screenCoors.x, screenCoors.y, text);
                    }
                }
            }
        };

        // Show objects on radar
        Events::drawBlipsEvent += [] {
            if (!FrontEndMenuManager.drawRadarOrMap && FindPlayerPed(0)) {
                for (int i = 0; i < CPools::ms_pObjectPool->m_Size; i++) {
                    CObject *object = CPools::ms_pObjectPool->GetAt(i);
                    if (object) {
                        CVector &objectPosn = object->GetCoords();
                        CVector2D coords;
                        CRadar::TransformRealWorldPointToRadarSpace(coords, CVector2D(objectPosn.x, objectPosn.y));
                        float distance = CRadar::LimitRadarPoint(coords);
                        if (distance < 1.0f) {
                            CVector2D screen;
                            CRadar::TransformRadarPointToScreenSpace(screen, coords);
                            CVector playerPosn = FindPlayerCentreOfWorld_NoInteriorShift(0);
                            unsigned char blipType = RADAR_TRACE_NORMAL;
                            if (playerPosn.z - objectPosn.z > 4.0f)
                                blipType = RADAR_TRACE_HIGH;
                            else if (playerPosn.z - objectPosn.z < -2.0f)
                                blipType = RADAR_TRACE_LOW;
                            CRadar::ShowRadarTraceWithHeight(screen.x, screen.y, 1, objColorData.Get(object).red, 
                                objColorData.Get(object).green, objColorData.Get(object).blue, 255, blipType);
                        }
                    }
                }
            }
        };
    }
} colouredObjects;