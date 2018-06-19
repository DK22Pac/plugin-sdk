/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "plugin.h"
#include "RenderWare.h"
#include "common.h"
#include "CMenuManager.h"
#include "CRadar.h"
#include "CWorld.h"
#include "RenderWare.h"
#include "CFont.h"
#include "d3d9.h"

#define MAX_NODE_POINTS 2000
#define GPS_LINE_WIDTH  4.0f
#define GPS_LINE_R  180
#define GPS_LINE_G  24
#define GPS_LINE_B  24
#define GPS_LINE_A  255
#define MAX_TARGET_DISTANCE 20.0f

using namespace plugin;

class GPS {
public:
    GPS() {
        static bool gpsShown;
        static float gpsDistance;
        static CNodeAddress resultNodes[MAX_NODE_POINTS];
        static CVector2D nodePoints[MAX_NODE_POINTS];
        static RwIm2DVertex lineVerts[MAX_NODE_POINTS * 4];

        Events::gameProcessEvent += []() {
            if (FrontEndMenuManager.m_nTargetBlipIndex
                && CRadar::ms_RadarTrace[LOWORD(FrontEndMenuManager.m_nTargetBlipIndex)].m_nCounter == HIWORD(FrontEndMenuManager.m_nTargetBlipIndex)
                && CRadar::ms_RadarTrace[LOWORD(FrontEndMenuManager.m_nTargetBlipIndex)].m_nBlipDisplayFlag
                && FindPlayerPed()
                && DistanceBetweenPoints(CVector2D(FindPlayerCoors(0)), 
                    CVector2D(CRadar::ms_RadarTrace[LOWORD(FrontEndMenuManager.m_nTargetBlipIndex)].m_vPosition)) < MAX_TARGET_DISTANCE)
            {
                CRadar::ClearBlip(FrontEndMenuManager.m_nTargetBlipIndex);
                FrontEndMenuManager.m_nTargetBlipIndex = 0;
            }
        };

        Events::drawRadarOverlayEvent += []() {
            gpsShown = false;
            CPed *playa = FindPlayerPed(0);
            if (playa
                && playa->m_pVehicle
                && playa->m_nPedFlags.bInVehicle
                && playa->m_pVehicle->m_nVehicleSubClass != VEHICLE_PLANE
                && playa->m_pVehicle->m_nVehicleSubClass != VEHICLE_HELI
                && playa->m_pVehicle->m_nVehicleSubClass != VEHICLE_BMX
                && FrontEndMenuManager.m_nTargetBlipIndex
                && CRadar::ms_RadarTrace[LOWORD(FrontEndMenuManager.m_nTargetBlipIndex)].m_nCounter == HIWORD(FrontEndMenuManager.m_nTargetBlipIndex)
                && CRadar::ms_RadarTrace[LOWORD(FrontEndMenuManager.m_nTargetBlipIndex)].m_nBlipDisplayFlag)
            {
                CVector destPosn = CRadar::ms_RadarTrace[LOWORD(FrontEndMenuManager.m_nTargetBlipIndex)].m_vPosition;
                destPosn.z = CWorld::FindGroundZForCoord(destPosn.x, destPosn.y);
                
                short nodesCount = 0;
                
                ThePaths.DoPathSearch(0, FindPlayerCoors(0), CNodeAddress(), destPosn, resultNodes, &nodesCount, MAX_NODE_POINTS, &gpsDistance,
                    999999.0f, NULL, 999999.0f, false, CNodeAddress(), false, playa->m_pVehicle->m_nVehicleSubClass == VEHICLE_BOAT);
                
                if (nodesCount > 0) {
                    for (short i = 0; i < nodesCount; i++) {
                        CVector nodePosn = ThePaths.GetPathNode(resultNodes[i])->GetNodeCoors();
                        CVector2D tmpPoint;
                        CRadar::TransformRealWorldPointToRadarSpace(tmpPoint, CVector2D(nodePosn.x, nodePosn.y));
                        if (!FrontEndMenuManager.drawRadarOrMap)
                            CRadar::TransformRadarPointToScreenSpace(nodePoints[i], tmpPoint);
                        else {
                            CRadar::LimitRadarPoint(tmpPoint);
                            CRadar::TransformRadarPointToScreenSpace(nodePoints[i], tmpPoint);
                            nodePoints[i].x *= static_cast<float>(RsGlobal.maximumWidth) / 640.0f;
                            nodePoints[i].y *= static_cast<float>(RsGlobal.maximumHeight) / 448.0f;
                            CRadar::LimitToMap(&nodePoints[i].x, &nodePoints[i].y);
                        }
                    }

                    if (!FrontEndMenuManager.drawRadarOrMap 
                        && reinterpret_cast<D3DCAPS9 const*>(RwD3D9GetCaps())->RasterCaps & D3DPRASTERCAPS_SCISSORTEST)
                    {
                        RECT rect;
                        CVector2D posn;
                        CRadar::TransformRadarPointToScreenSpace(posn, CVector2D(-1.0f, -1.0f));
                        rect.left = static_cast<LONG>(posn.x + 2.0f);
                        rect.bottom = static_cast<LONG>(posn.y - 2.0f);
                        CRadar::TransformRadarPointToScreenSpace(posn, CVector2D(1.0f, 1.0f));
                        rect.right = static_cast<LONG>(posn.x - 2.0f);
                        rect.top = static_cast<LONG>(posn.y + 2.0f);
                        GetD3DDevice()->SetRenderState(D3DRS_SCISSORTESTENABLE, TRUE);
                        GetD3DDevice()->SetScissorRect(&rect);
                    }

                    RwRenderStateSet(rwRENDERSTATETEXTURERASTER, NULL);

                    unsigned int vertIndex = 0;
                    for (short i = 0; i < (nodesCount - 1); i++) {
                        CVector2D point[4], shift[2];
                        CVector2D dir = nodePoints[i + 1] - nodePoints[i];
                        float angle = atan2(dir.y, dir.x);
                        if (!FrontEndMenuManager.drawRadarOrMap) {
                            shift[0].x = cosf(angle - 1.5707963f) * GPS_LINE_WIDTH;
                            shift[0].y = sinf(angle - 1.5707963f) * GPS_LINE_WIDTH;
                            shift[1].x = cosf(angle + 1.5707963f) * GPS_LINE_WIDTH;
                            shift[1].y = sinf(angle + 1.5707963f) * GPS_LINE_WIDTH;
                        }
                        else {
                            float mp = FrontEndMenuManager.m_fMapZoom - 140.0f;
                            if (mp < 140.0f)
                                mp = 140.0f;
                            else if (mp > 960.0f)
                                mp = 960.0f;
                            mp = mp / 960.0f + 0.4f;
                            shift[0].x = cosf(angle - 1.5707963f) * GPS_LINE_WIDTH * mp;
                            shift[0].y = sinf(angle - 1.5707963f) * GPS_LINE_WIDTH * mp;
                            shift[1].x = cosf(angle + 1.5707963f) * GPS_LINE_WIDTH * mp;
                            shift[1].y = sinf(angle + 1.5707963f) * GPS_LINE_WIDTH * mp;
                        }
                        Setup2dVertex(lineVerts[vertIndex + 0], nodePoints[i].x + shift[0].x, nodePoints[i].y + shift[0].y);
                        Setup2dVertex(lineVerts[vertIndex + 1], nodePoints[i + 1].x + shift[0].x, nodePoints[i + 1].y + shift[0].y);
                        Setup2dVertex(lineVerts[vertIndex + 2], nodePoints[i].x + shift[1].x, nodePoints[i].y + shift[1].y);
                        Setup2dVertex(lineVerts[vertIndex + 3], nodePoints[i + 1].x + shift[1].x, nodePoints[i + 1].y + shift[1].y);
                        vertIndex += 4;
                    }
                
                    RwIm2DRenderPrimitive(rwPRIMTYPETRISTRIP, lineVerts, 4 * (nodesCount - 1));

                    if (!FrontEndMenuManager.drawRadarOrMap
                        && reinterpret_cast<D3DCAPS9 const*>(RwD3D9GetCaps())->RasterCaps & D3DPRASTERCAPS_SCISSORTEST)
                    {
                        GetD3DDevice()->SetRenderState(D3DRS_SCISSORTESTENABLE, FALSE);
                    }

                    gpsDistance += DistanceBetweenPoints(FindPlayerCoors(0), ThePaths.GetPathNode(resultNodes[0])->GetNodeCoors());
                    gpsShown = true;
                }
            }
        };

        Events::drawHudEvent += [] {
            if (gpsShown) {
                CFont::SetOrientation(ALIGN_CENTER);
                CFont::SetColor(CRGBA(200, 200, 200, 255));
                CFont::SetBackground(false, false);
                CFont::SetWrapx(500.0f);
                CFont::SetScale(0.4f * static_cast<float>(RsGlobal.maximumWidth) / 640.0f, 
                    0.8f * static_cast<float>(RsGlobal.maximumHeight) / 448.0f);
                CFont::SetFontStyle(FONT_SUBTITLES);
                CFont::SetProportional(true);
                CFont::SetDropShadowPosition(1);
                CFont::SetDropColor(CRGBA(0, 0, 0, 255));
                CVector2D radarBottom;
                CRadar::TransformRadarPointToScreenSpace(radarBottom, CVector2D(0.0f, -1.0f));
                char text[16];
                if (gpsDistance > 1000.0f)
                    sprintf(text, "%.2fkm", gpsDistance / 1000.0f);
                else
                    sprintf(text, "%dm", static_cast<int>(gpsDistance));
                CFont::PrintString(radarBottom.x, radarBottom.y + 8.0f * static_cast<float>(RsGlobal.maximumHeight) / 448.0f, text);
            }
        };
    }

    static void Setup2dVertex(RwIm2DVertex &vertex, float x, float y) {
        vertex.x = x;
        vertex.y = y;
        vertex.u = vertex.v = 0.0f;
        vertex.z = CSprite2d::NearScreenZ + 0.0001f;
        vertex.rhw = CSprite2d::RecipNearClip;
        vertex.emissiveColor = RWRGBALONG(GPS_LINE_R, GPS_LINE_G, GPS_LINE_B, GPS_LINE_A);
    }
} gps;