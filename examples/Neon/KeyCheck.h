/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

class KeyCheck {
    static unsigned char currStates[256];
    static unsigned char prevStates[256];
    static unsigned int timeDelayPressed[256];
public:
    static void Update(); // апдейт клавиш. Нужно вызывать эту функцию один раз за фрейм, перед тем, как проверять клавиши

    static bool Check(unsigned int key); // Проверить, нажата ли сейчас клавиша
    static bool CheckJustDown(unsigned int key); // Проверить, была ли нажата клавиша прямо сейчас
    static bool CheckJustUp(unsigned int key); // Проверить, была ли отпущена клавиша прямо сейчас
    static bool CheckWithDelay(unsigned int key, unsigned int time); // Проверить нажата ли клавиша, с интервалом проверки
};
