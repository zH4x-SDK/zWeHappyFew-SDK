#pragma once

#include "../SDK.h"

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TieredHealthBoost.TieredHealthBoost_C.OnApply
struct UTieredHealthBoost_C_OnApply_Params
{
};

// Function TieredHealthBoost.TieredHealthBoost_C.OnTierChanged
struct UTieredHealthBoost_C_OnTierChanged_Params
{
	int*                                               LastTier;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewTier;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
