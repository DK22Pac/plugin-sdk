#pragma once

#include "plbase/PluginBase.h"
#include "CVector2D.h"

/* CRect class describes a rectangle.

	A(left;top)_____________________
	|                               |
	|                               |
	|                               |
	|_________________B(right;bottom)
	
*/

#pragma pack(push, 4)
class PLUGIN_API CRect
{
public:
	float m_fLeft;          // x1
	float m_fBottom;        // y1
	float m_fRight;         // x2
	float m_fTop;           // y2

	CRect(float left, float top, float right, float bottom);
	CRect();

	bool IsFlipped();
	void Restrict(CRect const& restriction);
	void Resize(float resizeX, float resizeY);
	bool IsPointInside(CVector2D const& point);
	bool IsCircleInside(CVector2D const& circleCenter, float circleRadius);
	void SetFromCenter(float x, float y, float size);
	void GetCenter(float *x, float *y);
	void StretchToPoint(float x, float y);
};
#pragma pack(pop)

VALIDATE_SIZE(CRect, 0x10);