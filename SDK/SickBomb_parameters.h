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

// Function SickBomb.SickBomb_C.UserConstructionScript
struct ASickBomb_C_UserConstructionScript_Params
{
};

// Function SickBomb.SickBomb_C.OnContinuousEffect
struct ASickBomb_C_OnContinuousEffect_Params
{
	class APawn**                                      Thrower;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter**                          AffectedCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
