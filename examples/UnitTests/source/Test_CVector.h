#pragma once
#include <plugin.h>
#include "utest.h"
#include <CVector.h>

using namespace plugin;

constexpr float F_EPS = 0.00001f;
const float F_PI = (float)PI;
const float F_PI2 = (float)(PI/2);

// constructors

UTEST(CVector, ctor)
{
    auto v = CVector();
    EXPECT_EQ(v.x, 0.0f);
    EXPECT_EQ(v.y, 0.0f);
    EXPECT_EQ(v.z, 0.0f);
}

UTEST(CVector, ctor_F)
{
    auto v = CVector(2.0f);
    EXPECT_EQ(v.x, 2.0f);
    EXPECT_EQ(v.y, 2.0f);
    EXPECT_EQ(v.z, 2.0f);
}

UTEST(CVector, ctor_FFF)
{
    auto v = CVector(1.0f, 2.0f, 3.0f);
    EXPECT_EQ(v.x, 1.0f);
    EXPECT_EQ(v.y, 2.0f);
    EXPECT_EQ(v.z, 3.0f);
}

UTEST(CVector, ctor_CVector)
{
    CVector src;
    src.x = 1.0f;
    src.y = 2.0f;
    src.z = 3.0f;

    auto v = CVector(src);
    EXPECT_EQ(v.x, 1.0f);
    EXPECT_EQ(v.y, 2.0f);
    EXPECT_EQ(v.z, 3.0f);
}

UTEST(CVector, ctor_RwV3d)
{
    RwV3d src;
    src.x = 1.0f;
    src.y = 2.0f;
    src.z = 3.0f;

    auto v = CVector(src);
    EXPECT_EQ(v.x, 1.0f);
    EXPECT_EQ(v.y, 2.0f);
    EXPECT_EQ(v.z, 3.0f);
}

UTEST(CVector, ctor_CVector2D)
{
    CVector2D src;
    src.x = 1.0f;
    src.y = 2.0f;

    auto v = CVector(src, 3.0f);
    EXPECT_EQ(v.x, 1.0f);
    EXPECT_EQ(v.y, 2.0f);
    EXPECT_EQ(v.z, 3.0f);
}

// assignments

UTEST(CVector, Set_F)
{
    auto v = CVector();

    v.Set(2.0f);
    EXPECT_EQ(v.x, 2.0f);
    EXPECT_EQ(v.y, 2.0f);
    EXPECT_EQ(v.z, 2.0f);
}

UTEST(CVector, Set_FFF)
{
    auto v = CVector();

    v.Set(1.0f, 2.0f, 3.0f);
    EXPECT_EQ(v.x, 1.0f);
    EXPECT_EQ(v.y, 2.0f);
    EXPECT_EQ(v.z, 3.0f);
}

UTEST(CVector, operator_assign)
{
    CVector src;
    src.x = 1.0f;
    src.y = 2.0f;
    src.z = 3.0f;

    CVector v = src;
    EXPECT_EQ(v.x, 1.0f);
    EXPECT_EQ(v.y, 2.0f);
    EXPECT_EQ(v.z, 3.0f);
}

UTEST(CVector, FromRwV3d)
{
    RwV3d src;
    src.x = 1.0f;
    src.y = 2.0f;
    src.z = 3.0f;
    CVector v;

    v.FromRwV3d(src);
    EXPECT_EQ(v.x, 1.0f);
    EXPECT_EQ(v.y, 2.0f);
    EXPECT_EQ(v.z, 3.0f);
}

UTEST(CVector, From2D)
{
    CVector2D src;
    src.x = 1.0f;
    src.y = 2.0f;
    CVector v;

    v.From2D(src, 3.0f);
    EXPECT_EQ(v.x, 1.0f);
    EXPECT_EQ(v.y, 2.0f);
    EXPECT_EQ(v.z, 3.0f);
}

UTEST(CVector, FromSum)
{
    const auto a = CVector(1.0f, 2.0f, 3.0f);
    const auto b = CVector(4.0f, 5.0f, 6.0f);
    CVector v;

    v.FromSum(a, b);
    EXPECT_EQ(v.x, 5.0f);
    EXPECT_EQ(v.y, 7.0f);
    EXPECT_EQ(v.z, 9.0f);
}

UTEST(CVector, FromDiff)
{
    const auto a = CVector(1.0f, 2.0f, 3.0f);
    const auto b = CVector(8.0f, 4.0f, 2.0f);
    CVector v;

    v.FromDiff(a, b);
    EXPECT_EQ(v.x, -7.0f);
    EXPECT_EQ(v.y, -2.0f);
    EXPECT_EQ(v.z, 1.0f);
}

UTEST(CVector, FromLerp)
{
    const auto a = CVector(1.0f, 2.0f, 3.0f);
    const auto b = CVector(8.0f, 4.0f, 2.0f);
    CVector v;

    v.FromLerp(a, b, 0.0f);
    EXPECT_NEAR(v.x, 1.0f, F_EPS);
    EXPECT_NEAR(v.y, 2.0f, F_EPS);
    EXPECT_NEAR(v.z, 3.0f, F_EPS);

    v.FromLerp(a, b, 1.0f);
    EXPECT_NEAR(v.x, 8.0f, F_EPS);
    EXPECT_NEAR(v.y, 4.0f, F_EPS);
    EXPECT_NEAR(v.z, 2.0f, F_EPS);

    v.FromLerp(a, b, 0.5f);
    EXPECT_NEAR(v.x, 4.5f, F_EPS);
    EXPECT_NEAR(v.y, 3.0f, F_EPS);
    EXPECT_NEAR(v.z, 2.5f, F_EPS);
}

UTEST(CVector, FromCross)
{
    const auto a = CVector(1.0f, 0.0f, 0.0f);
    const auto b = CVector(0.0f, 1.0f, 0.0f);
    CVector v;

    v.FromCross(a, b);
    EXPECT_NEAR(v.x, 0.0f, F_EPS);
    EXPECT_NEAR(v.y, 0.0f, F_EPS);
    EXPECT_NEAR(v.z, 1.0f, F_EPS);
}

UTEST(CVector, FromMultiply)
{
    CMatrix m;
    m.SetRotateZ(F_PI2); // 90 degrees
    m.Translate(2.0f, 4.0f, 8.0f);
    const auto a = CVector(1.0f, 0.0f, 0.0f);
    CVector v;

    v.FromMultiply(m, a); // rotate and translate
    EXPECT_NEAR(v.x, 2.0f, F_EPS);
    EXPECT_NEAR(v.y, 5.0f, F_EPS);
    EXPECT_NEAR(v.z, 8.0f, F_EPS);
}

UTEST(CVector, FromMultiply3x3)
{
    CMatrix m;
    m.SetRotateZ(F_PI2); // 90 degrees
    m.Translate(2.0f, 4.0f, 8.0f);
    const auto a = CVector(1.0f, 0.0f, 0.0f);
    CVector v;

    v.FromMultiply3x3(m, a); // just rotate
    EXPECT_NEAR(v.x, 0.0f, F_EPS);
    EXPECT_NEAR(v.y, 1.0f, F_EPS);
    EXPECT_NEAR(v.z, 0.0f, F_EPS);
}

// conversions

UTEST(CVector, ToRwV3d)
{
    CVector src;
    src.x = 1.0f;
    src.y = 2.0f;
    src.z = 3.0f;

    RwV3d v = src.ToRwV3d();
    EXPECT_EQ(v.x, 1.0f);
    EXPECT_EQ(v.y, 2.0f);
    EXPECT_EQ(v.z, 3.0f);
}

UTEST(CVector, To2D)
{
    CVector src;
    src.x = 1.0f;
    src.y = 2.0f;
    src.z = 3.0f;

    CVector2D v = src.To2D();
    EXPECT_EQ(v.x, 1.0f);
    EXPECT_EQ(v.y, 2.0f);
}

// properties

UTEST(CVector, operator_equal)
{
    const auto a = CVector(1.0f, 2.0f, 3.0f);
    const auto b = CVector(8.0f, 4.0f, 2.0f);
    const auto c = CVector(1.0f, 2.0f, 3.0f);

    EXPECT_TRUE(a == a);
    EXPECT_FALSE(a == b);
    EXPECT_TRUE(a == c);
}


UTEST(CVector, operator_inequal)
{
    const auto a = CVector(1.0f, 2.0f, 3.0f);
    const auto b = CVector(8.0f, 4.0f, 2.0f);
    const auto c = CVector(1.0f, 2.0f, 3.0f);

    EXPECT_FALSE(a != a);
    EXPECT_TRUE(a != b);
    EXPECT_FALSE(a != c);
}

UTEST(CVector, operator_unaryMinus)
{
    const auto a = CVector(1.0f, 2.0f, 3.0f);

    auto v = -a;
    EXPECT_EQ(v.x, -1.0f);
    EXPECT_EQ(v.y, -2.0f);
    EXPECT_EQ(v.z, -3.0f);
}

UTEST(CVector, Distance_CVector)
{
    const auto a = CVector(1.0f, 2.0f, 3.0f);
    const auto b = CVector(8.0f, 4.0f, 2.0f);

    auto distA = a.Distance(b);
    auto distB = b.Distance(a);
    EXPECT_NEAR(distA, 7.348469f, F_EPS);
    EXPECT_NEAR(distB, 7.348469f, F_EPS);
    EXPECT_EQ(distA, distB);
}

UTEST(CVector, Distance2D_CVector)
{
    const auto a = CVector(1.0f, 2.0f, 3.0f);
    const auto b = CVector(8.0f, 4.0f, 2.0f);

    auto distA = a.Distance2D(b);
    auto distB = b.Distance2D(a);
    EXPECT_NEAR(distA, 7.28011f, F_EPS);
    EXPECT_NEAR(distB, 7.28011f, F_EPS);
    EXPECT_EQ(distA, distB);
}

UTEST(CVector, Distance2D_CVector2D)
{
    const auto a = CVector(1.0f, 2.0f, 3.0f);
    const auto b = CVector2D(8.0f, 4.0f);

    auto dist = a.Distance2D(b);
    EXPECT_NEAR(dist, 7.28011f, F_EPS);
}

UTEST(CVector, Dot_CVector)
{
    const auto a = CVector(1.0f, 2.0f, 3.0f);
    const auto b = CVector(8.0f, 4.0f, 2.0f);

    auto d = a.Dot(b);
    EXPECT_NEAR(d, 22.0f, F_EPS);

    auto self = a.Dot(a);
    EXPECT_NEAR(self, 14.0f, F_EPS);
}

UTEST(CVector, Cross_CVector)
{
    const auto a = CVector(1.0f, 0.0f, 0.0f);
    const auto b = CVector(0.0f, 1.0f, 0.0f);

    CVector v = a.Cross(b);
    EXPECT_NEAR(0.0f, v.x, F_EPS);
    EXPECT_NEAR(0.0f, v.y, F_EPS);
    EXPECT_NEAR(1.0f, v.z, F_EPS);
}

UTEST(CVector, Heading)
{
    CVector v;
    float h;

    // north
    v.Set(F_EPS / 4, 1.0f, 0.0f); // slightly to the east
    h = v.Heading();
    EXPECT_NEAR(0.0f, h, F_EPS);

    // east
    v.Set(1.0f, 0.0f, 0.0f);
    h = v.Heading();
    EXPECT_NEAR(-F_PI2, h, F_EPS);

    // south
    v.Set(F_EPS / 4, -1.0f, 0.0f); // slightly to the east
    h = v.Heading();
    EXPECT_NEAR(-F_PI, h, F_EPS);

    // west
    v.Set(-1.0f, 0.0f, 0.0f);
    h = v.Heading();
    EXPECT_NEAR(F_PI2, h, F_EPS);
}

UTEST(CVector, Magnitude)
{
    CVector v;
    float m;

    v.Set(0.0f, 0.0f, 0.0f);
    m = v.Magnitude();
    EXPECT_NEAR(0.0f, m, F_EPS);

    v.Set(1.0f, 0.0f, 0.0f);
    m = v.Magnitude();
    EXPECT_NEAR(1.0f, m, F_EPS);

    v.Set(1.0f, 2.0f, 3.0f);
    m = v.Magnitude();
    EXPECT_NEAR(3.741657f, m, F_EPS);
}

UTEST(CVector, MagnitudeSqr)
{
    CVector v;
    float m;

    v.Set(0.0f, 0.0f, 0.0f);
    m = v.MagnitudeSqr();
    EXPECT_NEAR(0.0f, m, F_EPS);

    v.Set(1.0f, 0.0f, 0.0f);
    m = v.MagnitudeSqr();
    EXPECT_NEAR(1.0f, m, F_EPS);

    v.Set(1.0f, 2.0f, 3.0f);
    m = v.MagnitudeSqr();
    EXPECT_NEAR(14.0f, m, F_EPS);
}

UTEST(CVector, Magnitude2D)
{
    CVector v;
    float m;

    v.Set(0.0f, 0.0f, 0.0f);
    m = v.Magnitude2D();
    EXPECT_NEAR(0.0f, m, F_EPS);

    v.Set(1.0f, 0.0f, 0.0f);
    m = v.Magnitude2D();
    EXPECT_NEAR(1.0f, m, F_EPS);

    v.Set(1.0f, 2.0f, 3.0f);
    m = v.Magnitude2D();
    EXPECT_NEAR(2.236068f, m, F_EPS);
}

UTEST(CVector, MagnitudeSqr2D)
{
    CVector v;
    float m;

    v.Set(0.0f, 0.0f, 0.0f);
    m = v.MagnitudeSqr2D();
    EXPECT_NEAR(0.0f, m, F_EPS);

    v.Set(1.0f, 0.0f, 0.0f);
    m = v.MagnitudeSqr2D();
    EXPECT_NEAR(1.0f, m, F_EPS);

    v.Set(1.0f, 2.0f, 3.0f);
    m = v.MagnitudeSqr2D();
    EXPECT_NEAR(5.0f, m, F_EPS);
}

UTEST(CVector, IsNormalized)
{
    CVector v;

    v.Set(0.0f, 0.0f, 0.0f);
    EXPECT_FALSE(v.IsNormalized());

    v.Set(1.0f, 0.0f, 0.0f);
    EXPECT_TRUE(v.IsNormalized());

    v.Set(1.0f, 2.0f, 3.0f);
    EXPECT_FALSE(v.IsNormalized());

    v.Set(0.267261f, 0.534522f, 0.801784f);
    EXPECT_TRUE(v.IsNormalized());
}

UTEST(CVector, IsZero)
{
    CVector v;

    v.Set(0.0f, 0.0f, 0.0f);
    EXPECT_TRUE(v.IsZero());

    v.Set(F_EPS, 0.0f, 0.0f);
    EXPECT_FALSE(v.IsZero());

    v.Set(0.0f, F_EPS, 0.0f);
    EXPECT_FALSE(v.IsZero());

    v.Set(0.0f, 0.0f, F_EPS);
    EXPECT_FALSE(v.IsZero());
}

// modifiers

UTEST(CVector, operator_compoundPlus_F)
{
    auto v = CVector(1.0f, 2.0f, 3.0f);

    v += 2.0f;
    EXPECT_EQ(v.x, 3.0f);
    EXPECT_EQ(v.y, 4.0f);
    EXPECT_EQ(v.z, 5.0f);
}

UTEST(CVector, operator_compoundPlus_CVector)
{
    auto v = CVector(1.0f, 2.0f, 3.0f);

    v += CVector(4.0f, 5.0f, 6.0f);
    EXPECT_EQ(v.x, 5.0f);
    EXPECT_EQ(v.y, 7.0f);
    EXPECT_EQ(v.z, 9.0f);
}

UTEST(CVector, operator_compoundMinus_F)
{
    auto v = CVector(1.0f, 2.0f, 3.0f);

    v -= 2.0f;
    EXPECT_EQ(v.x, -1.0f);
    EXPECT_EQ(v.y, 0.0f);
    EXPECT_EQ(v.z, 1.0f);
}

UTEST(CVector, operator_compoundMinus_CVector)
{
    auto v = CVector(1.0f, 2.0f, 3.0f);

    v -= CVector(2.0f, 4.0f, 8.0f);
    EXPECT_EQ(v.x, -1.0f);
    EXPECT_EQ(v.y, -2.0f);
    EXPECT_EQ(v.z, -5.0f);
}

UTEST(CVector, operator_compoundAsterix_F)
{
    auto v = CVector(1.0f, 2.0f, 3.0f);

    v *= 2.0f;
    EXPECT_EQ(v.x, 2.0f);
    EXPECT_EQ(v.y, 4.0f);
    EXPECT_EQ(v.z, 6.0f);
}

UTEST(CVector, operator_compoundSlash_F)
{
    auto v = CVector(1.0f, 2.0f, 3.0f);

    v /= 2.0f;
    EXPECT_EQ(v.x, 0.5f);
    EXPECT_EQ(v.y, 1.0f);
    EXPECT_EQ(v.z, 1.5f);
}

UTEST(CVector, Normalize)
{
    CVector v;

    v.Set(0.1f, 0.0f, 0.0f);
    v.Normalise();
    EXPECT_NEAR(1.0f, v.x, F_EPS);
    EXPECT_NEAR(0.0f, v.y, F_EPS);
    EXPECT_NEAR(0.0f, v.z, F_EPS);

    v.Set(0.0f, 2.0f, 0.0f);
    v.Normalise();
    EXPECT_NEAR(0.0f, v.x, F_EPS);
    EXPECT_NEAR(1.0f, v.y, F_EPS);
    EXPECT_NEAR(0.0f, v.z, F_EPS);

    v.Set(1.0f, 2.0f, 3.0f);
    v.Normalise();
    EXPECT_NEAR(0.267261f, v.x, F_EPS);
    EXPECT_NEAR(0.534522f, v.y, F_EPS);
    EXPECT_NEAR(0.801784f, v.z, F_EPS);
}

UTEST(CVector, NormaliseAndMag)
{
    CVector v;
    float m;

    v.Set(0.1f, 0.0f, 0.0f);
    m = v.NormaliseAndMag();
    EXPECT_NEAR(0.1f, m, F_EPS);
    EXPECT_NEAR(1.0f, v.x, F_EPS);
    EXPECT_NEAR(0.0f, v.y, F_EPS);
    EXPECT_NEAR(0.0f, v.z, F_EPS);

    v.Set(0.0f, 2.0f, 0.0f);
    m = v.NormaliseAndMag();
    EXPECT_NEAR(2.0f, m, F_EPS);
    EXPECT_NEAR(0.0f, v.x, F_EPS);
    EXPECT_NEAR(1.0f, v.y, F_EPS);
    EXPECT_NEAR(0.0f, v.z, F_EPS);

    v.Set(1.0f, 2.0f, 3.0f);
    m = v.NormaliseAndMag();
    EXPECT_NEAR(3.741657f, m, F_EPS);
    EXPECT_NEAR(0.267261f, v.x, F_EPS);
    EXPECT_NEAR(0.534522f, v.y, F_EPS);
    EXPECT_NEAR(0.801784f, v.z, F_EPS);
}

// static functions

UTEST(CVector, Sum)
{
    const auto a = CVector(1.0f, 2.0f, 3.0f);
    const auto b = CVector(4.0f, 5.0f, 6.0f);

    CVector v = CVector::Sum(a, b);
    EXPECT_EQ(v.x, 5.0f);
    EXPECT_EQ(v.y, 7.0f);
    EXPECT_EQ(v.z, 9.0f);
}

UTEST(CVector, Diff)
{
    const auto a = CVector(1.0f, 2.0f, 3.0f);
    const auto b = CVector(8.0f, 4.0f, 2.0f);

    CVector v = CVector::Diff(a, b);
    EXPECT_EQ(v.x, -7.0f);
    EXPECT_EQ(v.y, -2.0f);
    EXPECT_EQ(v.z, 1.0f);
}

UTEST(CVector, Distance_CVectorCVector)
{
    const auto a = CVector(1.0f, 2.0f, 3.0f);
    const auto b = CVector(8.0f, 4.0f, 2.0f);

    auto dist = CVector::Distance(a, b);
    EXPECT_NEAR(dist, 7.348469f, F_EPS);
}

UTEST(CVector, Distance2D_CVectorCVector)
{
    const auto a = CVector(1.0f, 2.0f, 3.0f);
    const auto b = CVector(8.0f, 4.0f, 2.0f);

    auto dist = CVector::Distance2D(a, b);
    EXPECT_NEAR(dist, 7.28011f, F_EPS);
}

UTEST(CVector, Distance2D_CVectorCVector2D)
{
    const auto a = CVector(1.0f, 2.0f, 3.0f);
    const auto b = CVector2D(8.0f, 4.0f);

    auto dist = CVector::Distance2D(a, b);
    EXPECT_NEAR(dist, 7.28011f, F_EPS);
}

UTEST(CVector, Lerp)
{
    const auto a = CVector(1.0f, 2.0f, 3.0f);
    const auto b = CVector(8.0f, 4.0f, 2.0f);
    CVector v;

    v = CVector::Lerp(a, b, 0.0f);
    EXPECT_NEAR(v.x, 1.0f, F_EPS);
    EXPECT_NEAR(v.y, 2.0f, F_EPS);
    EXPECT_NEAR(v.z, 3.0f, F_EPS);

    v = CVector::Lerp(a, b, 1.0f);
    EXPECT_NEAR(v.x, 8.0f, F_EPS);
    EXPECT_NEAR(v.y, 4.0f, F_EPS);
    EXPECT_NEAR(v.z, 2.0f, F_EPS);

    v = CVector::Lerp(a, b, 0.5f);
    EXPECT_NEAR(v.x, 4.5f, F_EPS);
    EXPECT_NEAR(v.y, 3.0f, F_EPS);
    EXPECT_NEAR(v.z, 2.5f, F_EPS);
}

UTEST(CVector, Dot_CVectorCVector)
{
    const auto a = CVector(1.0f, 2.0f, 3.0f);
    const auto b = CVector(8.0f, 4.0f, 2.0f);

    auto d = CVector::Dot(a, b);
    EXPECT_NEAR(d, 22.0f, F_EPS);
}

UTEST(CVector, Cross_CVectorCVector)
{
    const auto a = CVector(1.0f, 0.0f, 0.0f);
    const auto b = CVector(0.0f, 1.0f, 0.0f);

    auto v = CVector::Cross(a, b);
    EXPECT_NEAR(0.0f, v.x, F_EPS);
    EXPECT_NEAR(0.0f, v.y, F_EPS);
    EXPECT_NEAR(1.0f, v.z, F_EPS);
}

UTEST(CVector, Multiply)
{
    CMatrix m;
    m.SetRotateZ(F_PI2); // 90 degrees
    m.Translate(2.0f, 4.0f, 8.0f);
    const auto a = CVector(1.0f, 0.0f, 0.0f);

    CVector v = CVector::Multiply(m, a); // rotate and translate
    EXPECT_NEAR(v.x, 2.0f, F_EPS);
    EXPECT_NEAR(v.y, 5.0f, F_EPS);
    EXPECT_NEAR(v.z, 8.0f, F_EPS);
}

UTEST(CVector, Multiply3x3)
{
    CMatrix m;
    m.SetRotateZ(F_PI2); // 90 degrees
    m.Translate(2.0f, 4.0f, 8.0f);
    const auto a = CVector(1.0f, 0.0f, 0.0f);

    CVector v = CVector::Multiply3x3(m, a); // just rotate
    EXPECT_NEAR(v.x, 0.0f, F_EPS);
    EXPECT_NEAR(v.y, 1.0f, F_EPS);
    EXPECT_NEAR(v.z, 0.0f, F_EPS);
}

// static operators

UTEST(CVector, operator_plus_FCVector)
{
    const auto v = CVector(1.0f, 2.0f, 3.0f);
    const auto f = 2.0f;

    auto result = f + v;
    EXPECT_EQ(result.x, 3.0f);
    EXPECT_EQ(result.y, 4.0f);
    EXPECT_EQ(result.z, 5.0f);
}

UTEST(CVector, operator_plus_CVectorF)
{
    const auto v = CVector(1.0f, 2.0f, 3.0f);
    const auto f = 2.0f;

    auto result = v + f;
    EXPECT_EQ(result.x, 3.0f);
    EXPECT_EQ(result.y, 4.0f);
    EXPECT_EQ(result.z, 5.0f);
}

UTEST(CVector, operator_plus_CVectorCVector)
{
    const auto a = CVector(1.0f, 2.0f, 3.0f);
    const auto b = CVector(4.0f, 5.0f, 6.0f);

    auto v = a + b;
    EXPECT_EQ(v.x, 5.0f);
    EXPECT_EQ(v.y, 7.0f);
    EXPECT_EQ(v.z, 9.0f);
}

UTEST(CVector, operator_minus_FCVector)
{
    const auto v = CVector(1.0f, 2.0f, 3.0f);
    const auto f = 2.0f;

    auto result = f - v;
    EXPECT_EQ(result.x, 1.0f);
    EXPECT_EQ(result.y, 0.0f);
    EXPECT_EQ(result.z, -1.0f);
}

UTEST(CVector, operator_minus_CVectorF)
{
    const auto v = CVector(1.0f, 2.0f, 3.0f);
    const auto f = 2.0f;

    auto result = v - f;
    EXPECT_EQ(result.x, -1.0f);
    EXPECT_EQ(result.y, 0.0f);
    EXPECT_EQ(result.z, 1.0f);
}

UTEST(CVector, operator_minus_CVectorCVector)
{
    const auto a = CVector(1.0f, 2.0f, 3.0f);
    const auto b = CVector(8.0f, 4.0f, 2.0f);

    auto v = a - b;
    EXPECT_EQ(v.x, -7.0f);
    EXPECT_EQ(v.y, -2.0f);
    EXPECT_EQ(v.z, 1.0f);
}

UTEST(CVector, operator_Asterix_FCVector)
{
    auto v = CVector(1.0f, 2.0f, 3.0f);
    const auto f = 2.0f;

    auto result = f * v;
    EXPECT_EQ(result.x, 2.0f);
    EXPECT_EQ(result.y, 4.0f);
    EXPECT_EQ(result.z, 6.0f);
}

UTEST(CVector, operator_Asterix_CVectorF)
{
    auto v = CVector(1.0f, 2.0f, 3.0f);
    const auto f = 2.0f;

    auto result = v * f;
    EXPECT_EQ(result.x, 2.0f);
    EXPECT_EQ(result.y, 4.0f);
    EXPECT_EQ(result.z, 6.0f);
}

UTEST(CVector, operator_compoundSlash_FCVector)
{
    auto v = CVector(1.0f, 2.0f, 3.0f);
    const auto f = 2.0f;

    auto result = f / v;
    EXPECT_EQ(result.x, 2.0f);
    EXPECT_EQ(result.y, 1.0f);
    EXPECT_NEAR(result.z, 0.66666f, F_EPS);
}

UTEST(CVector, operator_compoundSlash_CVectorF)
{
    auto v = CVector(1.0f, 2.0f, 3.0f);
    const auto f = 2.0f;

    auto result = v / f;
    EXPECT_EQ(result.x, 0.5f);
    EXPECT_EQ(result.y, 1.0f);
    EXPECT_EQ(result.z, 1.5f);
}
