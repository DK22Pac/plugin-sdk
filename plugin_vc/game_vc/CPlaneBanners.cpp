
#include "CPlaneBanners.h"

void CPlaneBanners::Init()
{
    plugin::Call<0x54C660>();
}

void CPlaneBanners::Update()
{
    plugin::Call<0x54C630>();
}

void CPlaneBanners::RegisterPoint(CVector point, uint32_t bannerIndex)
{
    plugin::Call<0x54C5F0, CVector, uint32_t>(point, bannerIndex);
}