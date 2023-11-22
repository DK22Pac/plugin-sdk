/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Vector3.h"

namespace rage {
    class Vector4 {
    public:
        float x, y, z, w;

    public:
        Vector4() = default;
        Vector4(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}
        Vector4(const Vector3& other) : x(other.x), y(other.y), z(other.z), w(0.0f) {}

        operator Vector3() const {
            return Vector3(x, y, z);
        }

        Vector4 operator+(const Vector4& other) const {
            return Vector4(x + other.x, y + other.y, z + other.z, w + other.w);
        }

        Vector4 operator-(const Vector4& other) const {
            return Vector4(x - other.x, y - other.y, z - other.z, w - other.w);
        }

        Vector4 operator*(float scalar) const {
            return Vector4(x * scalar, y * scalar, z * scalar, w * scalar);
        }

        Vector4 operator+(float scalar) const {
            return Vector4(x + scalar, y + scalar, z + scalar, w + scalar);
        }

        Vector4 operator-(float scalar) const {
            return Vector4(x - scalar, y - scalar, z - scalar, w - scalar);
        }

        friend Vector4 operator*(float scalar, const Vector4& vec) {
            Vector4 result;

            result.x = vec.x * scalar;
            result.y = vec.y * scalar;
            result.z = vec.z * scalar;
            result.w = vec.w * scalar;

            return result;
        }

        Vector4 operator/(float scalar) const {
            if (scalar != 0.0f)
                return Vector4(x / scalar, y / scalar, z / scalar, w / scalar);
            else
                throw std::runtime_error("Division by zero");
        }

        Vector4& operator=(const Vector4& other) {
            if (this != &other) {
                x = other.x;
                y = other.y;
                z = other.z;
                w = other.w;
            }
            return *this;
        }

        Vector4& operator+=(const Vector4& other) {
            x += other.x;
            y += other.y;
            z += other.z;
            w += other.w;
            return *this;
        }

        Vector4& operator-=(const Vector4& other) {
            x -= other.x;
            y -= other.y;
            z -= other.z;
            w -= other.w;
            return *this;
        }

        bool operator==(const Vector4& other) const {
            return x == other.x && y == other.y && z == other.z && w == other.w;
        }

        bool operator!=(const Vector4& other) const {
            return !(*this == other);
        }

        float Heading() const {
            return atan2f(-x, y);
        }

        float Magnitude() {
            return sqrt(x * x + y * y + z * z + w * w);
        }

        void Translate(float x, float y, float z, float w) {
            this->x += x;
            this->y += y;
            this->z += z;
            this->w += w;
        }

        void Translate(float x, float y) {
            this->x += x;
            this->y += y;
            this->z += x;
            this->w += y;
        }
    };

    static Vector3 operator+(const Vector3& v3, const Vector4& v4) {
        return Vector3(v3.x + v4.x, v3.y + v4.y, v3.z + v4.z);
    }

    static Vector3 operator+(const Vector4& v4, const Vector3& v3) {
        return Vector3(v4.x + v3.x, v4.y + v3.y, v4.z + v3.z);
    }
}
