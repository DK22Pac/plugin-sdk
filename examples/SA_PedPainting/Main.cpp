#include "plugin.h"
#include "list"
#include "game_sa\common.h"

using namespace plugin;

class PedPainting {
public:
    PedPainting() {
        static std::list<std::pair<unsigned int *, unsigned int>> resetEntries;
        static CPed *pVictim = nullptr;

        Events::pedRenderEvent.before += [](CPed *ped) {
            if (ped == pVictim && ped->m_pRwClump && ped->m_pRwClump->object.type == rpCLUMP) {
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
        };

        Events::gameProcessEvent += [] {
            pVictim = FindPlayerPed();
        };
    }
} pedPainting;