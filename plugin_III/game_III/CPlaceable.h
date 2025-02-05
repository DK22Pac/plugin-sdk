/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CMatrix.h"

class PLUGIN_API CPlaceable {
    PLUGIN_NO_DEFAULT_CONSTRUCTION_VIRTUALBASE(CPlaceable)

public:
    CMatrix m_matrix;

    // virtual function #0 (destructor)


    SUPPORTED_10EN_11EN_STEAM CVector &GetPosition();
    SUPPORTED_10EN_11EN_STEAM bool IsWithinArea(float x1, float y1, float x2, float y2);
    SUPPORTED_10EN_11EN_STEAM bool IsWithinArea(float x1, float y1, float z1, float x2, float y2, float z2);
    SUPPORTED_10EN_11EN_STEAM void SetHeading(float angle);
    SUPPORTED_10EN_11EN_STEAM void SetPosition(float x, float y, float z);
	
	inline float GetHeading() {
        float angle = atan2f(-m_matrix.up.x, m_matrix.up.y) * 57.295776f;
        if (angle < 0.0f)
            angle += 360.0f;
        if (angle > 360.0f)
            angle -= 360.0f;
        return angle;
    }

    inline void SetPos(CVector &pos) {
        this->m_matrix.pos = pos;
    }

    inline void SetOrientation(float x, float y, float z) {
        CVector pos = this->m_matrix.pos;
        this->m_matrix.SetRotate(x, y, z);
        this->m_matrix.pos = pos;
    }

    inline void GetOrientation(float& x, float& y, float& z){

        x = asinf(this->m_matrix.up.z);

        float cosx = cosf(x);
        float cosy = this->m_matrix.at.z / cosx;
        y = acosf(cosy);
        float cosz = this->m_matrix.up.y / cosx;
        z = acosf(cosz);
    }

    CVector& GetRight() {
        return m_matrix.GetRight();
    }
    CVector& GetForward() {
        return m_matrix.GetForward();
    }
    CVector& GetUp() {
        return m_matrix.GetUp();
    }
    CMatrix& GetMatrix() {
        return m_matrix;
    }
};

VTABLE_DESC(CPlaceable, 0x5F6A28, 1);
VALIDATE_SIZE(CPlaceable, 0x4C);

#include "meta/meta.CPlaceable.h"
