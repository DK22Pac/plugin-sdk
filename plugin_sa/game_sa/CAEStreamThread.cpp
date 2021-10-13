/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CAEStreamThread.h"

bool CAEStreamThread::Initialise(void* channel) {
    return plugin::CallMethodAndReturn<bool, 0x4F1680, CAEStreamThread*>(this);
}

int CAEStreamThread::GetActiveTrackID() {
    return plugin::CallMethodAndReturn<int, 0x4F1560, CAEStreamThread*>(this);
}
