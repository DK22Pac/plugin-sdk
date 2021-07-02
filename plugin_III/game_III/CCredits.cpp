/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCredits.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE unsigned int &CCredits::CreditsStartTime = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2528, 0x8F25DC, 0x90271C));
PLUGIN_VARIABLE bool &CCredits::bCreditsGoing = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CDD3, 0x95CF8B, 0x96D0CB));

int addrof(CCredits::AreCreditsDone) = ADDRESS_BY_VERSION(0x4FE790, 0x4FE870, 0x4FE800);
int gaddrof(CCredits::AreCreditsDone) = GLOBAL_ADDRESS_BY_VERSION(0x4FE790, 0x4FE870, 0x4FE800);

bool CCredits::AreCreditsDone() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CCredits::AreCreditsDone));
}

int addrof(CCredits::Init) = ADDRESS_BY_VERSION(0x4FE7A0, 0x4FE880, 0x4FE810);
int gaddrof(CCredits::Init) = GLOBAL_ADDRESS_BY_VERSION(0x4FE7A0, 0x4FE880, 0x4FE810);

void CCredits::Init() {
    plugin::CallDynGlobal(gaddrof(CCredits::Init));
}

int addrof(CCredits::PrintCreditSpace) = ADDRESS_BY_VERSION(0x4FE710, 0x4FE7F0, 0x4FE780);
int gaddrof(CCredits::PrintCreditSpace) = GLOBAL_ADDRESS_BY_VERSION(0x4FE710, 0x4FE7F0, 0x4FE780);

void CCredits::PrintCreditSpace(float space, unsigned int *line) {
    plugin::CallDynGlobal<float, unsigned int *>(gaddrof(CCredits::PrintCreditSpace), space, line);
}

int addrof(CCredits::PrintCreditText) = ADDRESS_BY_VERSION(0x4FE620, 0x4FE700, 0x4FE690);
int gaddrof(CCredits::PrintCreditText) = GLOBAL_ADDRESS_BY_VERSION(0x4FE620, 0x4FE700, 0x4FE690);

void CCredits::PrintCreditText(float scaleX, float scaleY, wchar_t *text, unsigned int *lineOffset, float scrollOffset) {
    plugin::CallDynGlobal<float, float, wchar_t *, unsigned int *, float>(gaddrof(CCredits::PrintCreditText), scaleX, scaleY, text, lineOffset, scrollOffset);
}

int addrof(CCredits::Render) = ADDRESS_BY_VERSION(0x4FADF0, 0x4FAED0, 0x4FAE60);
int gaddrof(CCredits::Render) = GLOBAL_ADDRESS_BY_VERSION(0x4FADF0, 0x4FAED0, 0x4FAE60);

void CCredits::Render() {
    plugin::CallDynGlobal(gaddrof(CCredits::Render));
}

int addrof(CCredits::Start) = ADDRESS_BY_VERSION(0x4FE760, 0x4FE840, 0x4FE7D0);
int gaddrof(CCredits::Start) = GLOBAL_ADDRESS_BY_VERSION(0x4FE760, 0x4FE840, 0x4FE7D0);

void CCredits::Start() {
    plugin::CallDynGlobal(gaddrof(CCredits::Start));
}

int addrof(CCredits::Stop) = ADDRESS_BY_VERSION(0x4FE780, 0x4FE860, 0x4FE7F0);
int gaddrof(CCredits::Stop) = GLOBAL_ADDRESS_BY_VERSION(0x4FE780, 0x4FE860, 0x4FE7F0);

void CCredits::Stop() {
    plugin::CallDynGlobal(gaddrof(CCredits::Stop));
}
