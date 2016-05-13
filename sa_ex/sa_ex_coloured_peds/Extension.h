#include <Windows.h>
#include "plugin.h"

using namespace plugin;

class PedColor{
public:
    unsigned char red, green, blue;
    PedColor(CPed *ped){
        red = rand() % 255; green = rand() % 255; blue = rand() % 255;
    }
};

extern PedExtendedData<PedColor> pedColorData;