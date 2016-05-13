#include <Windows.h>
#include "plugin.h"

void MyDraw()
{
}

void RegisterMyDrawFunction(){
	plugin::Events::drawingEvent += MyDraw;
}