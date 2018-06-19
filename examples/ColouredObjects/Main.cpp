/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "plugin.h"
#include "CPed.h"
#include "RenderWare.h"
#include "CSprite.h"
#include "CFont.h"
#include "common.h"
#include "CRadar.h"
#include "CMenuManager.h"

using namespace plugin;

class ColouredObjects {
    class ObjectColor {
    public:
        unsigned char red, green, blue;
        ObjectColor(CObject *) {
            red = rand() % 255; green = rand() % 255; blue = rand() % 255;
        }

        static RpMaterial *MaterialCallback(RpMaterial *material, void *color) {
            ObjectColor *objColor = reinterpret_cast<ObjectColor *>(color);
            material->color.red = objColor->red; material->color.green = objColor->green; material->color.blue = objColor->blue;
            return material;
        }

        static RpAtomic *AtomicCallback(RpAtomic *atomic, void *color) {
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
            for (auto object : CPools::ms_pObjectPool) {
                CVector &posn = object->GetPosition();
                RwV3d rwp = { posn.x, posn.y, posn.z + 1.0f };
                RwV3d screenCoors; float w, h;
                if (CSprite::CalcScreenCoors(rwp, &screenCoors, &w, &h, true, true)) {
                    CFont::SetOrientation(ALIGN_CENTER);
                    CFont::SetColor(CRGBA(objColorData.Get(object).red, objColorData.Get(object).green, objColorData.Get(object).blue, 255));
                    CFont::SetDropShadowPosition(1);
                    CFont::SetBackground(false, false);
                    CFont::SetWrapx(500.0);
                    CFont::SetScale(0.5, 1.0);
                    CFont::SetFontStyle(FONT_SUBTITLES);
                    CFont::SetProportional(true);
                    char text[16];
                    sprintf(text, "%d %d %d", objColorData.Get(object).red, objColorData.Get(object).green, objColorData.Get(object).blue);
                    CFont::PrintString(screenCoors.x, screenCoors.y, text);
                }
            }
        };

        // Show objects on radar
        Events::drawBlipsEvent += [] {
            if (!FrontEndMenuManager.drawRadarOrMap && FindPlayerPed(0)) {
                for (auto object : CPools::ms_pObjectPool) {
                    CVector &objectPosn = object->GetPosition();
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
        };
    }
} colouredObjects;
