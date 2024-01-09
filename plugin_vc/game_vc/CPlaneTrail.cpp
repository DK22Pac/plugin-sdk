
#include "CPlaneTrail.h"


void CPlaneTrail::Render(float visibility) {
    plugin::Call<0x54D370, float>(visibility);
}