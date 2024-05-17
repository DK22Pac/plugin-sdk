/*
    Plugin-SDK (Grand Theft Auto San Andreas Unreal) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRunningScript.h"

void CRunningScript::ProcessOneCommand() {
    plugin::CallMethodDyn(gpattern("48 89 5C 24 ? 48 89 74 24 ? 48 89 7C 24 ? 41 56 48 83 EC 20 33 FF 48 8D 35"), this);
}

void CRunningScript::Init() {

}
