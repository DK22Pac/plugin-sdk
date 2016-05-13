#include <Windows.h>
#include "plugin.h"
#include "game_sa\CPed.h"
#include "game_sa\RenderWare.h"
#include "game_sa\CSprite.h"
#include "game_sa\CFont.h"
#include "game_sa\common.h"
#include "extender\ObjectExtender.h"
#include "additional\Error.h"

using namespace plugin;

class MyCustomData {
public:
    bool touched;

    MyCustomData(CObject *) {
        touched = false;
    }
	
    void DoCheck(CPed *playa, CObject *object) {
        if (playa) {
            for (unsigned int i = 0; i < playa->m_nNumEntitiesCollided; i++) {
                if (playa->m_apCollidedEntities[i] == object)
                    touched = true;
            }
        }
    }
};
// Регистрируем расширение CObject
ObjectExtendedData<MyCustomData> objectExData;

void CheckAndDraw()
{
	CPed *playa = FindPlayerPed();
	for (int i = 0; i < CPools::ms_pObjectPool->m_Size; i++) {
		CObject *object = CPools::ms_pObjectPool->GetAt(i);
		if (object) {
			// Выводим надпись
			CVector &posn = object->m_pCoords ? object->m_pCoords->pos : object->m_Placement.m_vPosn;
			RwV3d rwp = { posn.x, posn.y, posn.z + 1.0f };
			RwV3d screenCoors; float w, h;
			if (CSprite::CalcScreenCoors(rwp, &screenCoors, &w, &h, true, true)) { // Получаем экранные координаты из 3d
				CFont::SetAlignment(ALIGN_CENTER);
				CFont::SetOutlinePosition(1);
				CFont::SetBackground(false, false);
				CFont::SetWrapx(500.0);
				CFont::SetScale(0.5, 1.0);
				CFont::SetFontStyle(FONT_SUBTITLES);
				CFont::SetProp(true);
                objectExData.Get(object).DoCheck(playa, object);
                if (objectExData.Get(object).touched) {
                    CFont::SetColor(CRGBA(0, 200, 0, 255));
                    CFont::PrintString(screenCoors.x, screenCoors.y, "TOUCHED :)");
                }
                else {
                    CFont::SetColor(CRGBA(200, 0, 0, 255));
                    CFont::PrintString(screenCoors.x, screenCoors.y, "NOT TOUCHED :(");
                }
			}
		}
	}
}

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved) {
	if (reason == DLL_PROCESS_ATTACH) {
		// Добавляем нашу функцию в событие отрисовки на экране
		Events::drawingEvent += CheckAndDraw;
	}
	return TRUE;
}