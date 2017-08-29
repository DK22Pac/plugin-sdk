#pragma once
/*
  From               0x6B277C
  To                 0x6B2798
  Input  ESI         automobile
  Output [ESP+0x1C]  handlingCheatType
*/
void __declspec(naked) ASM_PassNitrousAcc() {
    _asm {
        mov al, byte ptr[esi + 0x48A]
        cmp al, 10
        jna PassNitrousPower_1
        mov al, 10
    PassNitrousPower_1:
        add al, 2
        mov byte ptr[esp + 0x1C], al
        mov eax, 0x6B2798
        jmp eax
    }
}