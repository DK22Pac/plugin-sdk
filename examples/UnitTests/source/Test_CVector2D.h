#pragma once
#include <plugin.h>
#include "utest.h"
#include "Shared.h"
#include <CVector2D.h>

using namespace plugin;

// constructors

UTEST(CVector2D, ctor)
{
    auto v = CVector2D();
    EXPECT_EQ(v.x, 0.0f);
    EXPECT_EQ(v.y, 0.0f);
}

UTEST(CVector2D, ctor_F)
{
    auto v = CVector2D(2.0f);
    EXPECT_EQ(v.x, 2.0f);
    EXPECT_EQ(v.y, 2.0f);
}

UTEST(CVector2D, ctor_FF)
{
    auto v = CVector2D(1.0f, 2.0f);
    EXPECT_EQ(v.x, 1.0f);
    EXPECT_EQ(v.y, 2.0f);
}

UTEST(CVector2D, ctor_CVector2D)
{
    CVector2D src;
    src.x = 1.0f;
    src.y = 2.0f;

    auto v = CVector2D(src);
    EXPECT_EQ(v.x, 1.0f);
    EXPECT_EQ(v.y, 2.0f);
}

UTEST(CVector2D, ctor_RwV2d)
{
    RwV2d src;
    src.x = 1.0f;
    src.y = 2.0f;

    auto v = CVector2D(src);
    EXPECT_EQ(v.x, 1.0f);
    EXPECT_EQ(v.y, 2.0f);
}

// assignments

UTEST(CVector2D, Reset)
{
    auto v = CVector2D(1.0f, 2.0f);

    v.Reset();
    EXPECT_EQ(v.x, 0.0f);
    EXPECT_EQ(v.y, 0.0f);
}

UTEST(CVector2D, Set_F)
{
    auto v = CVector2D();

    v.Set(2.0f);
    EXPECT_EQ(v.x, 2.0f);
    EXPECT_EQ(v.y, 2.0f);
}

UTEST(CVector2D, Set_FF)
{
    auto v = CVector2D();

    v.Set(1.0f, 2.0f);
    EXPECT_EQ(v.x, 1.0f);
    EXPECT_EQ(v.y, 2.0f);
}

UTEST(CVector2D, operator_assign)
{
    CVector2D src;
    src.x = 1.0f;
    src.y = 2.0f;

    CVector2D v = src;
    EXPECT_EQ(v.x, 1.0f);
    EXPECT_EQ(v.y, 2.0f);
}

UTEST(CVector2D, operator_assign_RwV2d)
{
    RwV2d src;
    src.x = 1.0f;
    src.y = 2.0f;
    CVector2D v;

    v = src;
    EXPECT_EQ(v.x, 1.0f);
    EXPECT_EQ(v.y, 2.0f);
}

UTEST(CVector2D, From3D)
{
    CVector src;
    src.x = 1.0f;
    src.y = 2.0f;
    src.z = 3.0f;
    CVector2D v;

    v.From3D(src);
    EXPECT_EQ(v.x, 1.0f);
    EXPECT_EQ(v.y, 2.0f);
}

UTEST(CVector2D, FromSum)
{
    const auto a = CVector2D(1.0f, 2.0f);
    const auto b = CVector2D(4.0f, 5.0f);
    CVector2D v;

    v.FromSum(a, b);
    EXPECT_EQ(v.x, 5.0f);
    EXPECT_EQ(v.y, 7.0f);
}

UTEST(CVector2D, FromDiff)
{
    const auto a = CVector2D(1.0f, 2.0f);
    const auto b = CVector2D(8.0f, 4.0f);
    CVector2D v;

    v.FromDiff(a, b);
    EXPECT_EQ(v.x, -7.0f);
    EXPECT_EQ(v.y, -2.0f);
}

UTEST(CVector2D, FromLerp)
{
    const auto a = CVector2D(1.0f, 2.0f);
    const auto b = CVector2D(8.0f, 4.0f);
    CVector2D v;

    v.FromLerp(a, b, 0.0f);
    EXPECT_NEAR(v.x, 1.0f, F_EPS);
    EXPECT_NEAR(v.y, 2.0f, F_EPS);

    v.FromLerp(a, b, 1.0f);
    EXPECT_NEAR(v.x, 8.0f, F_EPS);
    EXPECT_NEAR(v.y, 4.0f, F_EPS);

    v.FromLerp(a, b, 0.5f);
    EXPECT_NEAR(v.x, 4.5f, F_EPS);
    EXPECT_NEAR(v.y, 3.0f, F_EPS);
}

// conversions

UTEST(CVector2D, ToRwV2d)
{
    CVector2D src;
    src.x = 1.0f;
    src.y = 2.0f;

    RwV2d v = src;
    EXPECT_EQ(v.x, 1.0f);
    EXPECT_EQ(v.y, 2.0f);
}

UTEST(CVector2D, To3D)
{
    CVector2D src;
    src.x = 1.0f;
    src.y = 2.0f;

    CVector v = src.To3D();
    EXPECT_EQ(v.x, 1.0f);
    EXPECT_EQ(v.y, 2.0f);
    EXPECT_EQ(v.z, 0.0f);
}

// properties

UTEST(CVector2D, operator_equal)
{
    const auto a = CVector2D(1.0f, 2.0f);
    const auto b = CVector2D(8.0f, 4.0f);
    const auto c = CVector2D(1.0f, 2.0f);

    EXPECT_TRUE(a == a);
    EXPECT_FALSE(a == b);
    EXPECT_TRUE(a == c);
}


UTEST(CVector2D, operator_inequal)
{
    const auto a = CVector2D(1.0f, 2.0f);
    const auto b = CVector2D(8.0f, 4.0f);
    const auto c = CVector2D(1.0f, 2.0f);

    EXPECT_FALSE(a != a);
    EXPECT_TRUE(a != b);
    EXPECT_FALSE(a != c);
}

UTEST(CVector2D, operator_unaryMinus)
{
    const auto a = CVector2D(1.0f, 2.0f);

    auto v = -a;
    EXPECT_EQ(v.x, -1.0f);
    EXPECT_EQ(v.y, -2.0f);
}

UTEST(CVector2D, Distance_CVector2D)
{
    const auto a = CVector2D(1.0f, 2.0f);
    const auto b = CVector2D(8.0f, 4.0f);

    auto distA = a.Distance(b);
    auto distB = b.Distance(a);
    EXPECT_NEAR(distA, 7.2801099f, F_EPS);
    EXPECT_NEAR(distB, 7.2801099f, F_EPS);
    EXPECT_EQ(distA, distB);
}

UTEST(CVector2D, Dot_CVector2D)
{
    const auto a = CVector2D(1.0f, 2.0f);
    const auto b = CVector2D(8.0f, 4.0f);

    auto d = a.Dot(b);
    EXPECT_NEAR(d, 16.0f, F_EPS);

    auto self = a.Dot(a);
    EXPECT_NEAR(self, 5.0f, F_EPS);
}

UTEST(CVector2D, Cross_CVector2D)
{
    const auto a = CVector2D(1.0f, 2.0f);
    const auto b = CVector2D(8.0f, 4.0f);

    auto d = a.Cross(b);
    EXPECT_NEAR(-12.0f, d, F_EPS);

    d = a.Cross(a);
    EXPECT_NEAR(0.0f, d, F_EPS);
}

UTEST(CVector2D, Heading)
{
    CVector2D v;
    float h;

    // north
    v.Set(F_EPS / 4, 1.0f); // slightly to the east
    h = v.Heading();
    EXPECT_NEAR(0.0f, h, F_EPS);

    // east
    v.Set(1.0f, 0.0f);
    h = v.Heading();
    EXPECT_NEAR(-F_PI2, h, F_EPS);

    // south
    v.Set(F_EPS / 4, -1.0f); // slightly to the east
    h = v.Heading();
    EXPECT_NEAR(-F_PI, h, F_EPS);

    // west
    v.Set(-1.0f, 0.0f);
    h = v.Heading();
    EXPECT_NEAR(F_PI2, h, F_EPS);
}

UTEST(CVector2D, Magnitude)
{
    CVector2D v;
    float m;

    v.Set(0.0f, 0.0f);
    m = v.Magnitude();
    EXPECT_NEAR(0.0f, m, F_EPS);

    v.Set(1.0f, 0.0f);
    m = v.Magnitude();
    EXPECT_NEAR(1.0f, m, F_EPS);

    v.Set(1.0f, 2.0f);
    m = v.Magnitude();
    EXPECT_NEAR(2.236068f, m, F_EPS);
}

UTEST(CVector2D, MagnitudeSqr)
{
    CVector2D v;
    float m;

    v.Set(0.0f, 0.0f);
    m = v.MagnitudeSqr();
    EXPECT_NEAR(0.0f, m, F_EPS);

    v.Set(1.0f, 0.0f);
    m = v.MagnitudeSqr();
    EXPECT_NEAR(1.0f, m, F_EPS);

    v.Set(1.0f, 2.0f);
    m = v.MagnitudeSqr();
    EXPECT_NEAR(5.0f, m, F_EPS);
}

UTEST(CVector2D, Normalized)
{
    CVector2D v;

    v.Set(0.1f, 0.0f);
    CVector2D b = v.Normalized();

    EXPECT_NEAR(0.1f, v.x, F_EPS);
    EXPECT_NEAR(0.0f, v.y, F_EPS);

    EXPECT_NEAR(1.0f, b.x, F_EPS);
    EXPECT_NEAR(0.0f, b.y, F_EPS);
}

UTEST(CVector2D, IsNormalized)
{
    CVector2D v;

    v.Set(0.0f, 0.0f);
    EXPECT_FALSE(v.IsNormalized());

    v.Set(1.0f, 0.0f);
    EXPECT_TRUE(v.IsNormalized());

    v.Set(1.0f, 2.0f);
    EXPECT_FALSE(v.IsNormalized());

    v.Set(0.5350f, 0.8448f);
    EXPECT_TRUE(v.IsNormalized());
}

UTEST(CVector2D, IsZero)
{
    CVector2D v;

    v.Set(0.0f, 0.0f);
    EXPECT_TRUE(v.IsZero());

    v.Set(F_EPS, 0.0f);
    EXPECT_FALSE(v.IsZero());

    v.Set(0.0f, F_EPS);
    EXPECT_FALSE(v.IsZero());
}

// modifiers

UTEST(CVector2D, operator_compoundPlus_F)
{
    auto v = CVector2D(1.0f, 2.0f);

    v += 2.0f;
    EXPECT_EQ(v.x, 3.0f);
    EXPECT_EQ(v.y, 4.0f);
}

UTEST(CVector2D, operator_compoundPlus_CVector2D)
{
    auto v = CVector2D(1.0f, 2.0f);

    v += CVector2D(4.0f, 5.0f);
    EXPECT_EQ(v.x, 5.0f);
    EXPECT_EQ(v.y, 7.0f);
}

UTEST(CVector2D, operator_compoundMinus_F)
{
    auto v = CVector2D(1.0f, 2.0f);

    v -= 2.0f;
    EXPECT_EQ(v.x, -1.0f);
    EXPECT_EQ(v.y, 0.0f);
}

UTEST(CVector2D, operator_compoundMinus_CVector2D)
{
    auto v = CVector2D(1.0f, 2.0f);

    v -= CVector2D(2.0f, 4.0f);
    EXPECT_EQ(v.x, -1.0f);
    EXPECT_EQ(v.y, -2.0f);
}

UTEST(CVector2D, operator_compoundAsterix_F)
{
    auto v = CVector2D(1.0f, 2.0f);

    v *= 2.0f;
    EXPECT_EQ(v.x, 2.0f);
    EXPECT_EQ(v.y, 4.0f);
}

UTEST(CVector2D, operator_compoundSlash_F)
{
    auto v = CVector2D(1.0f, 2.0f);

    v /= 2.0f;
    EXPECT_EQ(v.x, 0.5f);
    EXPECT_EQ(v.y, 1.0f);
}

UTEST(CVector2D, Normalize)
{
    CVector2D v;

    v.Set(0.1f, 0.0f);
    v.Normalize();
    EXPECT_NEAR(1.0f, v.x, F_EPS);
    EXPECT_NEAR(0.0f, v.y, F_EPS);

    v.Set(0.0f, 2.0f);
    v.Normalize();
    EXPECT_NEAR(0.0f, v.x, F_EPS);
    EXPECT_NEAR(1.0f, v.y, F_EPS);

    v.Set(1.0f, 2.0f);
    v.Normalize();
    EXPECT_NEAR(0.447214f, v.x, F_EPS);
    EXPECT_NEAR(0.894427f, v.y, F_EPS);
}

UTEST(CVector2D, NormalizeAndMag)
{
    CVector2D v;
    float m;

    v.Set(0.1f, 0.0f);
    m = v.NormalizeAndMag();
    EXPECT_NEAR(0.1f, m, F_EPS);
    EXPECT_NEAR(1.0f, v.x, F_EPS);
    EXPECT_NEAR(0.0f, v.y, F_EPS);

    v.Set(0.0f, 2.0f);
    m = v.NormalizeAndMag();
    EXPECT_NEAR(2.0f, m, F_EPS);
    EXPECT_NEAR(0.0f, v.x, F_EPS);
    EXPECT_NEAR(1.0f, v.y, F_EPS);

    v.Set(1.0f, 2.0f);
    m = v.NormalizeAndMag();
    EXPECT_NEAR(2.236068f, m, F_EPS);
    EXPECT_NEAR(0.447213f, v.x, F_EPS);
    EXPECT_NEAR(0.894427f, v.y, F_EPS);
}

// static functions

UTEST(CVector2D, Sum)
{
    const auto a = CVector2D(1.0f, 2.0f);
    const auto b = CVector2D(4.0f, 5.0f);

    CVector2D v = CVector2D::Sum(a, b);
    EXPECT_EQ(v.x, 5.0f);
    EXPECT_EQ(v.y, 7.0f);
}

UTEST(CVector2D, Diff)
{
    const auto a = CVector2D(1.0f, 2.0f);
    const auto b = CVector2D(8.0f, 4.0f);

    CVector2D v = CVector2D::Diff(a, b);
    EXPECT_EQ(v.x, -7.0f);
    EXPECT_EQ(v.y, -2.0f);
}

UTEST(CVector2D, Distance_CVector2DCVector2D)
{
    const auto a = CVector2D(1.0f, 2.0f);
    const auto b = CVector2D(8.0f, 4.0f);

    auto dist = CVector2D::Distance(a, b);
    EXPECT_NEAR(dist, 7.28011f, F_EPS);
}

UTEST(CVector2D, Lerp)
{
    const auto a = CVector2D(1.0f, 2.0f);
    const auto b = CVector2D(8.0f, 4.0f);
    CVector2D v;

    v = CVector2D::Lerp(a, b, 0.0f);
    EXPECT_NEAR(v.x, 1.0f, F_EPS);
    EXPECT_NEAR(v.y, 2.0f, F_EPS);

    v = CVector2D::Lerp(a, b, 1.0f);
    EXPECT_NEAR(v.x, 8.0f, F_EPS);
    EXPECT_NEAR(v.y, 4.0f, F_EPS);

    v = CVector2D::Lerp(a, b, 0.5f);
    EXPECT_NEAR(v.x, 4.5f, F_EPS);
    EXPECT_NEAR(v.y, 3.0f, F_EPS);
}

UTEST(CVector2D, Dot_CVector2DCVector2D)
{
    const auto a = CVector2D(1.0f, 2.0f);
    const auto b = CVector2D(8.0f, 4.0f);

    auto d = CVector2D::Dot(a, b);
    EXPECT_NEAR(d, 16.0f, F_EPS);
}

UTEST(CVector2D, Cross_CVector2DCVector2D)
{
    const auto a = CVector2D(1.0f, 2.0f);
    const auto b = CVector2D(8.0f, 4.0f);

    auto v = CVector2D::Cross(a, b);
    EXPECT_NEAR(-12.0f, v, F_EPS);
}

// static operators

UTEST(CVector2D, operator_plus_FCVector2D)
{
    const auto v = CVector2D(1.0f, 2.0f);
    const auto f = 2.0f;

    auto result = f + v;
    EXPECT_EQ(result.x, 3.0f);
    EXPECT_EQ(result.y, 4.0f);
}

UTEST(CVector2D, operator_plus_CVector2DF)
{
    const auto v = CVector2D(1.0f, 2.0f);
    const auto f = 2.0f;

    auto result = v + f;
    EXPECT_EQ(result.x, 3.0f);
    EXPECT_EQ(result.y, 4.0f);
}

UTEST(CVector2D, operator_plus_CVector2DCVector2D)
{
    const auto a = CVector2D(1.0f, 2.0f);
    const auto b = CVector2D(4.0f, 5.0f);

    auto v = a + b;
    EXPECT_EQ(v.x, 5.0f);
    EXPECT_EQ(v.y, 7.0f);
}

UTEST(CVector2D, operator_minus_FCVector2D)
{
    const auto v = CVector2D(1.0f, 2.0f);
    const auto f = 2.0f;

    auto result = f - v;
    EXPECT_EQ(result.x, 1.0f);
    EXPECT_EQ(result.y, 0.0f);
}

UTEST(CVector2D, operator_minus_CVector2DF)
{
    const auto v = CVector2D(1.0f, 2.0f);
    const auto f = 2.0f;

    auto result = v - f;
    EXPECT_EQ(result.x, -1.0f);
    EXPECT_EQ(result.y, 0.0f);
}

UTEST(CVector2D, operator_minus_CVector2DCVector2D)
{
    const auto a = CVector2D(1.0f, 2.0f);
    const auto b = CVector2D(8.0f, 4.0f);

    auto v = a - b;
    EXPECT_EQ(v.x, -7.0f);
    EXPECT_EQ(v.y, -2.0f);
}

UTEST(CVector2D, operator_Asterix_FCVector2D)
{
    auto v = CVector2D(1.0f, 2.0f);
    const auto f = 2.0f;

    auto result = f * v;
    EXPECT_EQ(result.x, 2.0f);
    EXPECT_EQ(result.y, 4.0f);
}

UTEST(CVector2D, operator_Asterix_CVector2DF)
{
    auto v = CVector2D(1.0f, 2.0f);
    const auto f = 2.0f;

    auto result = v * f;
    EXPECT_EQ(result.x, 2.0f);
    EXPECT_EQ(result.y, 4.0f);
}

UTEST(CVector2D, operator_compoundSlash_FCVector2D)
{
    auto v = CVector2D(1.0f, 2.0f);
    const auto f = 2.0f;

    auto result = f / v;
    EXPECT_EQ(result.x, 2.0f);
    EXPECT_EQ(result.y, 1.0f);
}

UTEST(CVector2D, operator_compoundSlash_CVector2DF)
{
    auto v = CVector2D(1.0f, 2.0f);
    const auto f = 2.0f;

    auto result = v / f;
    EXPECT_EQ(result.x, 0.5f);
    EXPECT_EQ(result.y, 1.0f);
}
