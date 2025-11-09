/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CVector2D {
public:
	float x, y;

public:
	CVector2D() = default;
	CVector2D(float x, float y) : x(x), y(y) {}

	CVector2D operator+(const CVector2D& other) const {
		return CVector2D(x + other.x, y + other.y);
	}

	CVector2D operator-(const CVector2D& other) const {
		return CVector2D(x - other.x, y - other.y);
	}

	CVector2D operator*(float scalar) const {
		return CVector2D(x * scalar, y * scalar);
	}

	CVector2D operator/(float scalar) const {
		if (scalar != 0.0f)
			return CVector2D(x / scalar, y / scalar);
		else
			throw std::runtime_error("Division by zero");
	}

	CVector2D& operator=(const CVector2D& other) {
		if (this != &other) {
			x = other.x;
			y = other.y;
		}
		return *this;
	}

	CVector2D& operator+=(const CVector2D& other) {
		x += other.x;
		y += other.y;
		return *this;
	}

	CVector2D& operator-=(const CVector2D& other) {
		x -= other.x;
		y -= other.y;
		return *this;
	}

	CVector2D& operator*=(float scalar) {
		x *= scalar;
		y *= scalar;
		return *this;
	}

	bool operator==(const CVector2D& other) const {
		return x == other.x && y == other.y;
	}

	bool operator!=(const CVector2D& other) const {
		return !(*this == other);
	}

	float Heading() const {
		return atan2f(-x, y);
	}

	float Magnitude() {
		return sqrt(x * x + y * y);
	}

	void Translate(float x, float y) {
		this->x += x;
		this->y += y;
	}
};
