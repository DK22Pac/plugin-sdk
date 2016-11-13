#pragma once
#include "Parameters.h"
/*
  From               0x6D076C
  To                 0x6D0779
  Input  BL          numNitroBoosts
  Output ST0         nitrousAccMultiplier
*/
void __declspec(naked) ASM_SelectAccMultiplier() {
    _asm {
        movzx eax, bl
        cmp eax, 1
        jna SelectAccMultiplier_1
        fstp st
        sub eax, 2
        push eax
        fild dword ptr[esp]
        pop eax
        fmul FNC_NITROUS_ACCELERATION_MULTIPLIER
        fadd FNC_NITROUS_BASE_ACCELERATION
    SelectAccMultiplier_1 :
        mov eax, 0x6D0779
        jmp eax
    }
}