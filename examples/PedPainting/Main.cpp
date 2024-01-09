/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "plugin.h"
#include <list>
#include "common.h"
#include "CWorld.h"

using namespace plugin;

class PedPainting {
public:
    PedPainting() {
        static std::list<std::pair<unsigned int *, unsigned int>> resetEntries;
        static CPed *pVictim = nullptr;
#ifdef GTAVC
        static RwTexture *savedPlayerTex = nullptr;
#endif

        Events::pedRenderEvent.before += [](CPed *ped) {
            if (ped == pVictim && ped->m_pRwClump && ped->m_pRwClump->object.type == rpCLUMP) {
#ifdef GTAVC
                savedPlayerTex = nullptr;
                if (ped == FindPlayerPed()) {
                    savedPlayerTex = CWorld::Players[0].m_pSkinTexture;
                    CWorld::Players[0].m_pSkinTexture = nullptr;
                }
#endif
                RpClumpForAllAtomics(ped->m_pRwClump, [](RpAtomic *atomic, void *data) {
                    if (atomic->geometry) {
                        atomic->geometry->flags |= rpGEOMETRYMODULATEMATERIALCOLOR;
                        RpGeometryForAllMaterials(atomic->geometry, [](RpMaterial *material, void *data) {
                            resetEntries.push_back(std::make_pair(reinterpret_cast<unsigned int *>(&material->color), *reinterpret_cast<unsigned int *>(&material->color)));
                            material->color = { 255, 0, 0, 255 };
                            resetEntries.push_back(std::make_pair(reinterpret_cast<unsigned int *>(&material->texture), *reinterpret_cast<unsigned int *>(&material->texture)));
                            material->texture = 0;
                            return material;
                        }, 0);
                    }
                    return atomic;
                }, 0);
                DeActivateDirectional();
                SetFullAmbient();
            }
        };

        Events::pedRenderEvent.after += [](CPed *ped) {
            for (auto &p : resetEntries)
                *p.first = p.second;
            resetEntries.clear();
#ifdef GTAVC
            if (savedPlayerTex)
                CWorld::Players[0].m_pSkinTexture = savedPlayerTex;
#endif
        };

        Events::gameProcessEvent += [] {
            pVictim = FindPlayerPed();
        };
    }
} pedPainting;