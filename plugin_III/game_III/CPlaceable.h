/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CMatrix.h"

class CPlaceable {
public:
	CMatrix m_matrix;
    CPlaceable(plugin::dummy_func_t) : m_matrix(plugin::dummy) {}
    CPlaceable();
    bool IsWithinArea(float x1, float y1, float z1, float x2, float y2, float z2);
    bool IsWithinArea(float x1, float y1, float x2, float y2);
    void SetHeading(float heading);

    inline float GetHeading() {
        float angle = atan2f(-m_matrix.up.x, m_matrix.up.y) * 57.295776f;
        if (angle < 0.0f)
            angle += 360.0f;
        if (angle > 360.0f)
            angle -= 360.0f;
        return angle;
    }

    inline void SetPosition(float x, float y, float z) {
        this->m_matrix.pos.x = x;
        this->m_matrix.pos.y = y;
        this->m_matrix.pos.z = z;
    }

    inline void SetPosition(CVector &pos) {
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

   // CPlaceable virtual table: destructor only

    virtual ~CPlaceable();
};

VALIDATE_SIZE(CPlaceable, 0x4C);