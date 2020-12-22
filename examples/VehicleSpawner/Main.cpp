/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "plugin.h"
#include "CCheat.h"
#include "CHud.h"
#include <algorithm>

using namespace plugin;

class VehicleSpawner {
public:
    VehicleSpawner() {
        static const char *vehicleNames[] = {
            "LANDSTAL", "BRAVURA", "BUFFALO", "LINERUN", "PEREN", "SENTINEL", "DUMPER", "FIRETRUK", "TRASH", "STRETCH", "MANANA",
            "INFERNUS", "VOODOO", "PONY", "MULE", "CHEETAH", "AMBULAN", "LEVIATHN", "MOONBEAM", "ESPERANT", "TAXI", "WASHING", "BOBCAT",
            "MRWHOOP", "BFINJECT", "HUNTER", "PREMIER", "ENFORCER", "SECURICA", "BANSHEE", "PREDATOR", "BUS", "RHINO", "BARRACKS",
            "HOTKNIFE", "ARTICT1", "PREVION", "COACH", "CABBIE", "STALLION", "RUMPO", "RCBANDIT", "ROMERO", "PACKER", "MONSTER",
            "ADMIRAL", "SQUALO", "SEASPAR", "PIZZABOY", "TRAM", "ARTICT2", "TURISMO", "SPEEDER", "REEFER", "TROPIC", "FLATBED", "YANKEE",
            "CADDY", "SOLAIR", "TOPFUN", "SKIMMER", "PCJ600", "FAGGIO", "FREEWAY", "RCBARON", "RCRAIDER", "GLENDALE", "OCEANIC",
            "SANCHEZ", "SPARROW", "PATRIOT", "QUAD", "COASTG", "DINGHY", "HERMES", "SABRE", "RUSTLER", "ZR350", "WALTON", "REGINA",
            "COMET", "BMX", "BURRITO", "CAMPER", "MARQUIS", "BAGGAGE", "DOZER", "MAVERICK", "VCNMAV", "RANCHER", "FBIRANCH", "VIRGO",
            "GREENWOO", "JETMAX", "HOTRING", "SANDKING", "BLISTAC", "POLMAV", "BOXVILLE", "BENSON", "MESA", "RCGOBLIN", "HOTRINA",
            "HOTRINB", "BLOODRA", "RNCHLURE", "SUPERGT", "ELEGANT", "JOURNEY", "BIKE", "MTBIKE", "BEAGLE", "CROPDUST", "STUNT", "PETRO",
            "RDTRAIN", "NEBULA", "MAJESTIC", "BUCCANEE", "SHAMAL", "HYDRA", "FCR900", "NRG500", "COPBIKE", "CEMENT", "TOWTRUCK",
            "FORTUNE", "CADRONA", "FBITRUCK", "WILLARD", "FORKLIFT", "TRACTOR", "COMBINE", "FELTZER", "REMINGTN", "SLAMVAN", "BLADE",
            "FREIGHT", "STREAK", "VORTEX", "VINCENT", "BULLET", "CLOVER", "SADLER", "FIRELA", "HUSTLER", "INTRUDER", "PRIMO", "CARGOBOB",
            "TAMPA", "SUNRISE", "MERIT", "UTILITY", "NEVADA", "YOSEMITE", "WINDSOR", "MONSTERA", "MONSTERB", "URANUS", "JESTER", "SULTAN",
            "STRATUM", "ELEGY", "RAINDANC", "RCTIGER", "FLASH", "TAHOMA", "SAVANNA", "BANDITO", "FREIFLAT", "STREAKC", "KART", "MOWER",
            "DUNERIDE", "SWEEPER", "BROADWAY", "TORNADO", "AT400", "DFT30", "HUNTLEY", "STAFFORD", "BF400", "NEWSVAN", "TUG", "PETROTR",
            "EMPEROR", "WAYFARER", "EUROS", "HOTDOG", "CLUB", "FREIBOX", "ARTICT3", "ANDROM", "DODO", "RCCAM", "LAUNCH", "COPCARLA",
            "COPCARSF", "COPCARVG", "COPCARRU", "PICADOR", "SWATVAN", "ALPHA", "PHOENIX", "GLENSHIT", "SADLSHIT", "BAGBOXA", "BAGBOXB",
            "TUGSTAIR", "BOXBURG", "FARMTR1", "UTILTR1"
        };

        Events::gameProcessEvent += [] {
            for (int i = 0; i < 212; i++) {
                std::string str = vehicleNames[i];
                std::reverse(str.begin(), str.end());
                if (!str.compare(0, str.size(), CCheat::m_CheatString, str.size())) {
                    CCheat::m_CheatString[0] = '\0';
                    str = vehicleNames[i];
                    CVehicle *vehicle = CCheat::VehicleCheat(i + 400);
                    if (vehicle) {
                        vehicle->m_nVehicleFlags.bHasBeenOwnedByPlayer = true;
                        str.append(" SPAWNED");
                    }
                    else {
                        str.insert(0, "CAN'T SPAWN ");
                        str.append(" RIGHT NOW");
                    }
                    CHud::SetHelpMessage(str.c_str(), true, false, false);
                }
            }
        };
    }
} vehicleSpawner;