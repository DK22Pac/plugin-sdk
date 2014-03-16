#pragma once

#include <plugin/plugin.h>
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
	float m_fLeft;
	float m_fBottom;
	float m_fRight;
	float m_fTop;

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