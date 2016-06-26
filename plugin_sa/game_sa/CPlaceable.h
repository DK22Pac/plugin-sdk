#pragma once
#include "plbase/PluginBase_SA.h"
#include "CSimpleTransform.h"
#include "CMatrixLink.h"

#pragma pack(push, 4)
class PLUGIN_API CPlaceable {
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
    void SetHeading(float heading);
    float GetHeading();
    bool IsWithinArea(float x1, float y1, float x2, float y2);
    bool IsWithinArea(float x1, float y1, float z1, float x2, float y2, float z2);
    void RemoveMatrix();
    void AllocateStaticMatrix();
    void AllocateMatrix();
    void SetMatrix(CMatrix  const& matrix);
    
    inline CVector &GetPosition() {
        return m_matrix ? m_matrix->pos : m_placement.m_vPosn;
    }
};
#pragma pack(pop)

VALIDATE_SIZE(CPlaceable, 0x18);