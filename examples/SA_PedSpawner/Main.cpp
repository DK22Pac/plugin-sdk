#include <plugin.h>
#include <game_sa\common.h>
#include <game_sa\CHud.h>
#include <game_sa\CTimer.h>
#include <game_sa\CStreaming.h>
#include <game_sa\CPopulation.h>

using namespace plugin;

int maleSkins[171] = { 0, 7, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 32, 33, 34, 35, 36, 37, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 57, 58, 59, 60, 61, 62, 66, 67, 68, 70, 71, 72, 73, 78, 79, 80, 81, 82, 83, 84, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 120, 121, 122, 123, 124, 125, 126, 127, 128, 132, 133, 134, 135, 136, 137, 142, 143, 144, 146, 147, 153, 154, 155, 156, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 170, 171, 173, 174, 175, 176, 177, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 200, 202, 203, 204, 206, 209, 210, 212, 213, 217, 220, 221, 222, 223, 227, 228, 229, 230, 234, 235, 236, 239, 240, 241, 242, 247, 248, 249, 250, 252, 253, 254, 255, 258, 259, 260, 261, 262 };
int femaleSkins[79] = { 9, 10, 11, 12, 13, 31, 38, 39, 40, 41, 53, 54, 55, 56, 63, 64, 69, 75, 76, 77, 85, 87, 88, 89, 90, 91, 92, 93, 129, 130, 131, 138, 139, 140, 141, 145, 148, 150, 151, 152, 157, 169, 172, 178, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 201, 205, 207, 211, 214, 215, 216, 218, 219, 224, 225, 226, 231, 232, 233, 237, 238, 243, 244, 245, 246, 251, 256, 257, 263 };

int GetRandomSkin(bool bMale = true) { return (bMale ? maleSkins[rand() % 171] : femaleSkins[rand() % 79]); }

class PedSpawner {
public:
	PedSpawner() {
		static int keyPressTime = 0;
		Events::gameProcessEvent += [] {
			if (FindPlayerPed() && KeyPressed(VK_F9) && CTimer::m_snTimeInMilliseconds - keyPressTime > 500) {
				keyPressTime = CTimer::m_snTimeInMilliseconds;
				const int bMale = rand() % 2;
				int modelID = GetRandomSkin(bMale);
				CStreaming::RequestModel(modelID, 0);
				CStreaming::LoadAllRequestedModels(false);
				CPed* ped = CPopulation::AddPed((bMale?PED_TYPE_CIVMALE:PED_TYPE_CIVFEMALE), modelID, FindPlayerPed()->TransformFromObjectSpace(CVector(0.0f, 5.0f, 3.0f)), false);
				if (ped) {
					ped->SetCharCreatedBy(2);
					ped->PositionAnyPedOutOfCollision();
					CHud::SetHelpMessage("PED SPAWNED", true, false, false);
				}
			}
		};
    }
} pedSpawner;