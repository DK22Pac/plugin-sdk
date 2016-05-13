#pragma once

#include "plbase/PluginBase.h"

class PLUGIN_API CVector2D
{
public:
    float x, y;
    
    inline CVector2D() {

    }

    inline CVector2D(float X, float Y) {
        x = X;
        y = Y;
    }

	// Returns length of vector
	float Magnitude();

	void operator=(const CVector2D& right);

    inline CVector2D(CVector2D const& src) {
        x = src.x; y = src.y;
    }

    inline void Sum(CVector2D &a, CVector2D &b) {
        this->x = a.x + b.x;
        this->y = a.y + b.y;
    }

    inline void Difference(CVector2D &a, CVector2D &b) {
        this->x = a.x - b.x;
        this->y = a.y - b.y;
    }

    inline void operator+=(const CVector2D& right) {
        this->x += right.x;
        this->y += right.y;
    }

    inline void operator-=(const CVector2D& right) {
        this->x -= right.x;
        this->y -= right.y;
    }

    inline void operator *= (float multiplier) {
        this->x *= multiplier;
        this->y *= multiplier;
    }

    inline void operator /= (float divisor) {
        this->x /= divisor;
        this->y /= divisor;
    }

    inline CVector2D operator-(const CVector2D& right) {
        return CVector2D(x - right.x, y - right.y);
    }
};