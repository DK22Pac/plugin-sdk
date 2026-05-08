/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CBike.h"
#include "CAnimBlendAssociation.h"

enum eBmxNodes {
    BMX_NODE_NONE = 0,
    BMX_CHASSIS = 1,
    BMX_FORKS_FRONT = 2,
    BMX_FORKS_REAR = 3,
    BMX_WHEEL_FRONT = 4,
    BMX_WHEEL_REAR = 5,
    BMX_HANDLEBARS = 6,
    BMX_CHAINSET = 7,
    BMX_PEDAL_R = 8,
    BMX_PEDAL_L = 9,
    BMX_NUM_NODES
};

class CBmx : public CBike {
protected:
    CBmx(plugin::dummy_func_t) : CBike(plugin::dummy) {}
public:
    float m_fBunnyHopCharge;
    float field_818;
    float m_fSprintLeanAngle;
    float field_820;
    float m_fPedalAngleL;
    float m_fPedalAngleR;
    float m_fDistanceBetweenWheels;
    float m_fWheelsBalance;
    unsigned char field_834;
    char _pad[3];

    //funcs

    CBmx(int modelIndex, unsigned char createdBy);
 
    void GetFrameOffset(float& arg0, float& arg1);
    void ProcessBunnyHop();

    static void LaunchBunnyHopCB(CAnimBlendAssociation* blendAssoc, void* data); // data is a ptr to CBmx
};
VALIDATE_OFFSET(CBmx, m_fBunnyHopCharge, 0x814);
VALIDATE_OFFSET(CBmx, field_818, 0x818);
VALIDATE_OFFSET(CBmx, m_fSprintLeanAngle, 0x81C);
VALIDATE_OFFSET(CBmx, field_820, 0x820);
VALIDATE_OFFSET(CBmx, m_fPedalAngleL, 0x824);
VALIDATE_OFFSET(CBmx, m_fPedalAngleR, 0x828);
VALIDATE_OFFSET(CBmx, m_fDistanceBetweenWheels, 0x82C);
VALIDATE_OFFSET(CBmx, m_fWheelsBalance, 0x830);
VALIDATE_OFFSET(CBmx, field_834, 0x834);
VALIDATE_OFFSET(CBmx, _pad, 0x835);
VALIDATE_SIZE(CBmx, 0x838);
