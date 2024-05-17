/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Math.h"
#include "Vector4.h"
#include "Quaternion.h"

namespace rage {
    class Matrix44 {
    public:
        Vector4 right;
        Vector4 up;
        Vector4 at;
        Vector4 pos;

    public:
        Vector4& GetPosition() {
            return pos;
        }
        Vector4& GetRight() {
            return right;
        }
        Vector4& GetForward() {
            return up;
        }
        Vector4& GetUp() {
            return at;
        }

        const Vector4& GetPosition() const {
            return pos;
        }
        const Vector4& GetRight() const {
            return right;
        }
        const Vector4& GetForward() const {
            return up;
        }
        const Vector4& GetUp() const {
            return at;
        }

    public:
        Matrix44() = default;

        void Copy(const Matrix44& other) {
            right = other.right;
            up = other.up;
            at = other.at;
            pos = other.pos;
        }

        void Copy(const Matrix44* other) {
            right = other->right;
            up = other->up;
            at = other->at;
            pos = other->pos;
        }

        Matrix44 operator+(const Matrix44& other) const {
            Matrix44 result = {};
            result.right = right + other.right;
            result.up = up + other.up;
            result.at = at + other.at;
            result.pos = pos + other.pos;
            return result;
        }

        Matrix44 operator-(const Matrix44& other) const {
            Matrix44 result = {};
            result.right = right - other.right;
            result.up = up - other.up;
            result.at = at - other.at;
            result.pos = pos - other.pos;
            return result;
        }

        Matrix44& operator=(const Matrix44& other) {
            if (this != &other) {
                right = other.right;
                up = other.up;
                at = other.at;
                pos = other.pos;
            }
            return *this;
        }

        Matrix44& operator+=(const Matrix44& other) {
            right += other.right;
            up += other.up;
            at += other.at;
            pos += other.pos;
            return *this;
        }

        Matrix44& operator-=(const Matrix44& other) {
            right -= other.right;
            up -= other.up;
            at -= other.at;
            pos -= other.pos;
            return *this;
        }

        Matrix44 operator*(const Matrix44& other) const {
            Matrix44 result = {};

            result.right.x = this->right.x * other.right.x + this->right.y * other.up.x + this->right.z * other.at.x;
            result.right.y = this->right.x * other.right.y + this->right.y * other.up.y + this->right.z * other.at.y;
            result.right.z = this->right.x * other.right.z + this->right.y * other.up.z + this->right.z * other.at.z;

            result.up.x = this->up.x * other.right.x + this->up.y * other.up.x + this->up.z * other.at.x;
            result.up.y = this->up.x * other.right.y + this->up.y * other.up.y + this->up.z * other.at.y;
            result.up.z = this->up.x * other.right.z + this->up.y * other.up.z + this->up.z * other.at.z;

            result.at.x = this->at.x * other.right.x + this->at.y * other.up.x + this->at.z * other.at.x;
            result.at.y = this->at.x * other.right.y + this->at.y * other.up.y + this->at.z * other.at.y;
            result.at.z = this->at.x * other.right.z + this->at.y * other.up.z + this->at.z * other.at.z;

            result.pos.x = this->pos.x * other.right.x + this->pos.y * other.up.x + this->pos.z * other.at.x + other.pos.x;
            result.pos.y = this->pos.x * other.right.y + this->pos.y * other.up.y + this->pos.z * other.at.y + other.pos.y;
            result.pos.z = this->pos.x * other.right.z + this->pos.y * other.up.z + this->pos.z * other.at.z + other.pos.z;

            return result;
        }

        void operator*=(const Matrix44& other) {
            float tempX, tempY, tempZ;

            tempX = this->right.x * other.right.x + this->right.y * other.up.x + this->right.z * other.at.x;
            tempY = this->right.x * other.right.y + this->right.y * other.up.y + this->right.z * other.at.y;
            tempZ = this->right.x * other.right.z + this->right.y * other.up.z + this->right.z * other.at.z;
            right = { tempX, tempY, tempZ, 0.0f };

            tempX = this->up.x * other.right.x + this->up.y * other.up.x + this->up.z * other.at.x;
            tempY = this->up.x * other.right.y + this->up.y * other.up.y + this->up.z * other.at.y;
            tempZ = this->up.x * other.right.z + this->up.y * other.up.z + this->up.z * other.at.z;
            up = { tempX, tempY, tempZ, 0.0f };

            tempX = this->at.x * other.right.x + this->at.y * other.up.x + this->at.z * other.at.x;
            tempY = this->at.x * other.right.y + this->at.y * other.up.y + this->at.z * other.at.y;
            tempZ = this->at.x * other.right.z + this->at.y * other.up.z + this->at.z * other.at.z;
            at = { tempX, tempY, tempZ, 0.0f };

            tempX = this->pos.x * other.right.x + this->pos.y * other.up.x + this->pos.z * other.at.x + other.pos.x;
            tempY = this->pos.x * other.right.y + this->pos.y * other.up.y + this->pos.z * other.at.y + other.pos.y;
            tempZ = this->pos.x * other.right.z + this->pos.y * other.up.z + this->pos.z * other.at.z + other.pos.z;
            pos = { tempX, tempY, tempZ, 1.0f };
        }

        void SetRotate(const Vector3& angle) {
            float cX = cos(angle.x);
            float sX = sin(angle.x);
            float cY = cos(angle.y);
            float sY = sin(angle.y);
            float cZ = cos(angle.z);
            float sZ = sin(angle.z);

            right.x = cZ * cY - (sZ * sX) * sY;
            right.y = (cZ * sX) * sY + sZ * cY;
            right.z = -cX * sY;

            up.x = -sZ * cX;
            up.y = cZ * cX;
            up.z = sX;

            at.x = (sZ * sX) * cY + cZ * sY;
            at.y = sZ * sY - (cZ * sX) * cY;
            at.z = cX * cY;
        }

        Vector3 GetRotation() const {
            Quaternion quat = MatrixToQuaternion();
            return QuaternionToEulerAngles(quat);
        }

        Quaternion MatrixToQuaternion() const {
            float trace = right.x + up.y + at.z;
            float qx, qy, qz, qw;

            if (trace > 0) {
                float S = sqrt(trace + 1.0f) * 2.0f;
                qw = 0.25f * S;
                qx = (up.z - at.y) / S;
                qy = (at.x - right.z) / S;
                qz = (right.y - up.x) / S;
            }
            else if (right.x > up.y && right.x > at.z) {
                float S = sqrt(1.0f + right.x - up.y - at.z) * 2.0f;
                qw = (up.z - at.y) / S;
                qx = 0.25f * S;
                qy = (up.x + right.y) / S;
                qz = (at.x + right.z) / S;
            }
            else if (up.y > at.z) {
                float S = sqrt(1.0f + up.y - right.x - at.z) * 2.0f;
                qw = (at.x - right.z) / S;
                qx = (up.x + right.y) / S;
                qy = 0.25f * S;
                qz = (at.y + up.z) / S;
            }
            else {
                float S = sqrt(1.0f + at.z - right.x - up.y) * 2.0f;
                qw = (right.y - up.x) / S;
                qx = (at.x + right.z) / S;
                qy = (at.y + up.z) / S;
                qz = 0.25f * S;
            }

            return Quaternion(qx, qy, qz, qw);
        }

        Vector3 QuaternionToEulerAngles(const Quaternion& quat) const {
            Vector3 angles;

            float sinr_cosp = 2.0f * (quat.w * quat.x + quat.y * quat.z);
            float cosr_cosp = 1.0f - 2.0f * (quat.x * quat.x + quat.y * quat.y);
            angles.x = atan2(sinr_cosp, cosr_cosp);

            float sinp = 2.0f * (quat.w * quat.y - quat.z * quat.x);
            if (fabs(sinp) >= 1)
                angles.y = copysign(pi() / 2, sinp);
            else
                angles.y = asin(sinp);

            float siny_cosp = 2.0f * (quat.w * quat.z + quat.x * quat.y);
            float cosy_cosp = 1.0f - 2.0f * (quat.y * quat.y + quat.z * quat.z);
            angles.z = atan2(siny_cosp, cosy_cosp);

            return angles;
        }
    };

    static inline Vector3 operator*(const Matrix44& mat, const Vector3& vec) {
        return Vector3(mat.right.x * vec.x + mat.up.x * vec.y + mat.at.x * vec.z + mat.pos.x,
                       mat.right.y * vec.x + mat.up.y * vec.y + mat.at.y * vec.z + mat.pos.y,
                       mat.right.z * vec.x + mat.up.z * vec.y + mat.at.z * vec.z + mat.pos.z);
    }
}
