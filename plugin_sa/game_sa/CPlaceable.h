/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CSimpleTransform.h"
#include "CMatrixLink.h"
#include "CVector.h"
#include "CVector2D.h"

class PLUGIN_API CPlaceable {
protected:
    CPlaceable(plugin::dummy_func_t) {}
public:
    CSimpleTransform m_placement;
    CMatrixLink *m_matrix;

    virtual ~CPlaceable() {};
    
    CMatrixLink *GetMatrix();
    
    static void ShutdownMatrixArray();
    static void InitMatrixArray();
    
    CVector GetRightDirection();
    CVector GetTopDirection();
    CVector GetAtDirection();
    
    void FreeStaticMatrix();
    void SetPosn(float x, float y, float z);
    void SetPosn(CVector const& posn);
    void SetOrientation(float x, float y, float z);
    void GetOrientation(float& x, float& y, float& z);
    void SetHeading(float heading);
    float GetHeading();
    bool IsWithinArea(float x1, float y1, float x2, float y2);
    bool IsWithinArea(float x1, float y1, float z1, float x2, float y2, float z2);
    void RemoveMatrix();
    void AllocateStaticMatrix();
    void AllocateMatrix();
    void SetMatrix(CMatrix  const& matrix);
    
    inline CVector& GetRight() const { return m_matrix->GetRight(); }
    inline CVector& GetForward() const { return m_matrix->GetForward(); }
    inline CVector& GetUp() const { return m_matrix->GetUp(); }
    inline const CVector& GetPosition() const { return m_matrix ? m_matrix->GetPosition() : m_placement.m_vPosn; }
    inline CVector& GetPosition() { return m_matrix ? m_matrix->GetPosition() : m_placement.m_vPosn; }
    inline CVector2D GetPosition2D() { return { GetPosition() }; }
};

VALIDATE_SIZE(CPlaceable, 0x18);