/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include <d3d9.h>


namespace rage {
    enum rageRenderState {
       RENDERSTATE_LIGHTINGMODE = 1,
       RENDERSTATE_CULLMODE = 0,
       RENDERSTATE_DEPTHWRITE = 6,
       RENDERSTATE_DEPTHBIAS = 11,
    };

    class rs;
    extern int32_t& screenWidth;
    extern int32_t& screenHeight;
    extern HWND GetHWnd();
    extern IDirect3DDevice9* GetD3DDevice();
    extern uint32_t GetHashKey(const char* str, uint32_t arg2);

    class sysMemAllocator {
    public:
        virtual ~sysMemAllocator() { plugin::CallVirtualMethod<0>(this, 0); }

        virtual void m_1() { plugin::CallVirtualMethod<1>(this); }
        virtual void* allocate(size_t size, size_t align, int subAllocator) { plugin::CallVirtualMethod<2>(this, size, align, subAllocator); }
        virtual void free(void* pointer) { plugin::CallVirtualMethod<3>(this, pointer); }
    };

    class sysUseAllocator {
    public:
        uint32_t* ptr;
    };

    class pgStreamableBase : public sysUseAllocator {
    public:

    };

    template<typename T>
    class pgPtr : pgStreamableBase {
    private:

    public:
        T* Get() { return (T*)ptr; }
    };

    template<typename T>
    class sysArray {
    private:
        pgPtr<T>* data;
        int16_t count;
        int16_t size;

    public:
        pgPtr<T> operator[](uint32_t index) {
            return data[index];
        }

        pgPtr<T> At(uint32_t index) {
            return data[index];
        }

        int16_t Size() {
            return size;
        }

        int16_t Count() {
            return count;
        }
    };

    class crmtObserver {
    public:
        int32_t field_2;
        int32_t field_4;
        int32_t field_8;
        int32_t field_C;
    };

    class crFrame {
    public:
        int32_t field_2;
        int32_t field_4;
        int32_t field_8;
        sysArray<uint32_t> field_C;
    };

    class crFrameBuffer : crFrame {
    public:
        int32_t field_14;
        int8_t gap_18[8];
        int8_t field_20;
        int8_t field_21[3];
    };

    class grcVertexBuffer {
    public:
        float x;
        float y;
        float z;
        float u;
        float v;
        float clip;
        int32_t color;
        float min;
        float max;
    };

    class grcTexturePC;
    class Color32;

    extern grcVertexBuffer* vertexBuffer;
    extern void ResetViewport(bool force);
    extern int SetRenderState(uint32_t state, uint32_t value);
    extern void SetTexture(grcTexturePC* tex);
    extern void Begin(int32_t x, int32_t y);
    extern void SetVertex(float x, float y, float z, float u, float v, float clip, Color32 const& col, float min, float max);
    extern void End();

    class Color32 {
    public:
        uint8_t b, g, r, a;

        Color32() = default;
        Color32(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha = 255)
            : r(red), g(green), b(blue), a(alpha) {}

        uint32_t GetARGB() const {
            uint32_t argb = (static_cast<int>(a) << 24) |
                (static_cast<int>(r) << 16) |
                (static_cast<int>(g) << 8) |
                static_cast<int>(b);
            return argb;
        }

        bool operator==(const Color32& other) const {
            return r == other.r && g == other.g &&
                b == other.b && a == other.a;
        }

        Color32& operator+=(const Color32& other) {
            r = static_cast<uint8_t>(min(static_cast<uint16_t>(r) + other.r, static_cast<uint16_t>(255)));
            g = static_cast<uint8_t>(min(static_cast<uint16_t>(g) + other.g, static_cast<uint16_t>(255)));
            b = static_cast<uint8_t>(min(static_cast<uint16_t>(b) + other.b, static_cast<uint16_t>(255)));
            a = static_cast<uint8_t>(min(static_cast<uint16_t>(a) + other.a, static_cast<uint16_t>(255)));
            return *this;
        }

        Color32& operator-=(const Color32& other) {
            r = static_cast<uint8_t>(max(static_cast<int>(r) - other.r, 0));
            g = static_cast<uint8_t>(max(static_cast<int>(g) - other.g, 0));
            b = static_cast<uint8_t>(max(static_cast<int>(b) - other.b, 0));
            a = static_cast<uint8_t>(max(static_cast<int>(a) - other.a, 0));
            return *this;
        }

        Color32 operator-(const Color32& other) const {
            Color32 result(*this);
            result -= other;
            return result;
        }

        Color32 operator+(const Color32& other) const {
            Color32 result(*this);
            result += other;
            return result;
        }

        Color32& operator=(const Color32& other) {
            if (this != &other) {
                r = other.r;
                g = other.g;
                b = other.b;
                a = other.a;
            }
            return *this;
        }
    };

    class Vector3;
    class Vector4;

    class Vector2 {
    public:
        float x, y;

    public:
        Vector2() : x(0.0f), y(0.0f) {};
        Vector2(float x, float y) : x(x), y(y) {}

        Vector2 operator+(const Vector2& other) const {
            return Vector2(x + other.x, y + other.y);
        }

        Vector2 operator-(const Vector2& other) const {
            return Vector2(x - other.x, y - other.y);
        }

        Vector2 operator*(float scalar) const {
            return Vector2(x * scalar, y * scalar);
        }

        Vector2 operator/(float scalar) const {
            if (scalar != 0.0f)
                return Vector2(x / scalar, y / scalar);
            else
                throw std::runtime_error("Division by zero");
        }

        Vector2& operator=(const Vector2& other) {
            if (this != &other) {
                x = other.x;
                y = other.y;
            }
            return *this;
        }

        Vector2& operator+=(const Vector2& other) {
            x += other.x;
            y += other.y;
            return *this;
        }

        Vector2& operator-=(const Vector2& other) {
            x -= other.x;
            y -= other.y;
            return *this;
        }

        bool operator==(const Vector2& other) const {
            return x == other.x && y == other.y;
        }

        bool operator!=(const Vector2& other) const {
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

    class Vector3 {
    public:
        float x, y, z;

    public:
        Vector3() = default;
        Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

        Vector3 operator+(const Vector3& other) const {
            return Vector3(x + other.x, y + other.y, z + other.z);
        }

        Vector3 operator-(const Vector3& other) const {
            return Vector3(x - other.x, y - other.y, z - other.z);
        }

        Vector3 operator*(float scalar) const {
            return Vector3(x * scalar, y * scalar, z * scalar);
        }

        Vector3 operator/(float scalar) const {
            if (scalar != 0.0f)
                return Vector3(x / scalar, y / scalar, z / scalar);
            else
                throw std::runtime_error("Division by zero");
        }

        Vector3& operator=(const Vector3& other) {
            if (this != &other) {
                x = other.x;
                y = other.y;
                z = other.z;
            }
            return *this;
        }

        Vector3& operator+=(const Vector3& other) {
            x += other.x;
            y += other.y;
            z += other.z;
            return *this;
        }

        Vector3& operator-=(const Vector3& other) {
            x -= other.x;
            y -= other.y;
            z -= other.z;
            return *this;
        }

        bool operator==(const Vector3& other) const {
            return x == other.x && y == other.y && z == other.z;
        }

        bool operator!=(const Vector3& other) const {
            return !(*this == other);
        }

        float Heading() const {
            return atan2f(-x, y);
        }
    
        float Magnitude() {
            return sqrt(x * x + y * y + z * z);
        }

        void Translate(float x, float y, float z) {
            this->x += x;
            this->y += y;
            this->z += z;
        }
    };

    class Vector4 {
    public:
        union { float x, left; };
        union { float y, top; };
        union { float z, right; };
        union { float w, bottom; };

    public:
        Vector4() = default;
        Vector4(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}
        Vector4(const Vector3& other) : x(other.x), y(other.y), z(other.z), w(0.0f) {}

        Vector4 operator+(const Vector4& other) const {
            return Vector4(x + other.x, y + other.y, z + other.z, w + other.w);
        }

        Vector4 operator-(const Vector4& other) const {
            return Vector4(x - other.x, y - other.y, z - other.z, w - other.w);
        }

        Vector4 operator*(float scalar) const {
            return Vector4(x * scalar, y * scalar, z * scalar, w * scalar);
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

    class Matrix34 {
    public:
        Vector3 right;
        Vector3 up;
        Vector3 at;
        Vector3 pos;

    public:
        Matrix34() = default;

        void Copy(const Matrix34& other) {
            right = other.right;
            up = other.up;
            at = other.at;
            pos = other.pos;
        }

        Matrix34 operator+(const Matrix34& other) const {
            Matrix34 result = {};
            result.right = right + other.right;
            result.up = up + other.up;
            result.at = at + other.at;
            result.pos = pos + other.pos;
            return result;
        }

        Matrix34 operator-(const Matrix34& other) const {
            Matrix34 result = {};
            result.right = right - other.right;
            result.up = up - other.up;
            result.at = at - other.at;
            result.pos = pos - other.pos;
            return result;
        }

        Matrix34& operator=(const Matrix34& other) {
            if (this != &other) {
                right = other.right;
                up = other.up;
                at = other.at;
                pos = other.pos;
            }
            return *this;
        }

        Matrix34& operator+=(const Matrix34& other) {
            right += other.right;
            up += other.up;
            at += other.at;
            pos += other.pos;
            return *this;
        }

        Matrix34& operator-=(const Matrix34& other) {
            right -= other.right;
            up -= other.up;
            at -= other.at;
            pos -= other.pos;
            return *this;
        }

        Vector3 operator*(const Vector3& vec) const {
            Vector3 result = {};
            result.x = right.x * vec.x + up.x * vec.y + at.x * vec.z + pos.x;
            result.y = right.y * vec.x + up.y * vec.y + at.y * vec.z + pos.y;
            result.z = right.z * vec.x + up.z * vec.y + at.z * vec.z + pos.z;
            return result;
        }
    };

    class Matrix44 {
    public:
        Vector4 right;
        Vector4 up;
        Vector4 at;
        Vector4 pos;

    public:
        Matrix44() = default;

        void Copy(const Matrix44& other) {
            right = other.right;
            up = other.up;
            at = other.at;
            pos = other.pos;
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

        Vector4 operator*(const Vector4& vec) const {
            Vector4 result = {};
            result.x = right.x * vec.x + up.x * vec.y + at.x * vec.z + pos.x * vec.w;
            result.y = right.y * vec.x + up.y * vec.y + at.y * vec.z + pos.y * vec.w;
            result.z = right.z * vec.x + up.z * vec.y + at.z * vec.z + pos.z * vec.w;
            result.w = right.w * vec.x + up.w * vec.y + at.w * vec.z + pos.w * vec.w;
            return result;
        }
    };

    struct BlockMap : public pgStreamableBase {

    };

    class datBase {
    public:

    public:
        virtual ~datBase() {}
    };

    class pgBase : datBase {
    public:
        pgPtr<BlockMap> blockMap;
    };

    VALIDATE_SIZE(pgBase, 0x8);

    template <typename T>
    class pgDictionary : public pgBase {
    public:
        pgDictionary<T>* parentDict;
        uint32_t count;
        sysArray<uint32_t> hashes;
        sysArray<T> data;

    public:
        T* Get(int32_t hash);
    };

    VALIDATE_SIZE(pgDictionary<void>, 0x20);

    class grcTexture : pgBase {
    public:
        int8_t field_8;
        int8_t depth;
        int16_t field_A;
        int32_t field_C;
        int32_t field_10;
        char* textureName;
        IDirect3DTexture9* texture;
        int16_t width;
        int16_t height;
        int32_t pixelFormat;
        int16_t stride;
        int8_t textureType;
        int8_t levels;

    public:
        grcTexture() = delete;
        virtual ~grcTexture() { plugin::CallVirtualMethod<0>(this, 1); }
    };

    VALIDATE_SIZE(grcTexture, 0x28);

    class grcTexturePC : public grcTexture {
    private:
        Vector3 field_28;
        Vector3 field_34;
        void* prevTexture;
        void* nextTexture;
        void* pixelData;
        char field_4C;
        char field_4D;
        char field_4E;
        char field_4F;

    public:
        grcTexturePC() = default;

        int32_t getWidth() { return this->width; }
        int32_t getHeight() { return this->height; }
        const char* getName() { return this->textureName; }
    };

    VALIDATE_SIZE(grcTexturePC, 0x50);

    class grcTextureFactory {
    public:
        virtual ~grcTextureFactory() {}
    };

    struct grcTextureDef {
        uint32_t field_1;
        uint32_t field_2;
        uint32_t field_3;
        uint32_t field_4;
        uint32_t field_5;
    };

    class grcTextureFactoryPC : public grcTextureFactory {
    public:
        char field_1;
        uint8_t field_3[3];
        int32_t field_8;
        int32_t field_C;
        int32_t field_10;
        int32_t field_14;
        int32_t field_18;
        int32_t field_1C;
        int32_t field_20;
        int32_t field_24;
        int32_t renderTargets[4];
        int32_t field_38;
        int32_t field_3C;
        int32_t field_40;
        int32_t field_44;
        int32_t depthStencilSurface;
        int32_t field_4C;
        int32_t field_50;
        int32_t field_54;
        int32_t field_58;
        int32_t field_5C;
        int32_t field_60;
        int32_t field_64;
        int32_t field_68;
        int32_t field_6C;

    public:
        grcTextureFactoryPC();

        grcTexturePC* CreateTexture(uint16_t width, uint16_t height, uint32_t format, uint32_t arg4, uint32_t arg5) {
            return plugin::CallVirtualMethodAndReturn<grcTexturePC*, 0>(width, height, format, arg4, arg5);
        }
    };

    extern grcTextureFactoryPC* textureFactoryPC;

    class atReferenceCounter : datBase {

    };

    class ptxRule : atReferenceCounter {

    };

    class ptxSprite : ptxRule {

    };

    class phInst : datBase {
    public:
        int32_t field_4;
        int16_t field_8;
        int16_t field_A;
        int32_t field_C;
        Matrix44 field_10;
    };

    class phInstGta : phInst {
    public:
        int field_50;
        int field_54;
        int field_58;
        int field_5C;
    };

    class audEntity {
    public:
        int16_t field_4;
        int16_t field_6;

    public:
        virtual ~audEntity() {}
    };

    template<typename T>
    class pgCollection {
    private:
        T* data;
        uint16_t count;
        uint16_t size;

    public:
        T* Begin() {
            return data;
        }

        T* End() {
            return (data + count);
        }

        T* At(uint16_t index) {
            return &data[index];
        }
    };

    template<typename T>
    class pgPtrCollection {
    private:
        T** data;
        uint16_t count;
        uint16_t size;

    public:
        T** Begin() {
            return data;
        }

        T** End() {
            return (data + count);
        }

        T* At(uint16_t index) {
            return data[index];
        }

        int16_t Count() {
            return count;
        }

        void Set(uint16_t index, T* ptr) {
            data[index] = ptr;
        }
    };
}
