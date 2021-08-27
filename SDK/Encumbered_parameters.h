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

// Function Encumbered.Encumbered_C.OnTierChanged
struct UEncumbered_C_OnTierChanged_Params
{
	int*                                               LastTier;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewTier;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Encumbered.Encumbered_C.OnApply
struct UEncumbered_C_OnApply_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
