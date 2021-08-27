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

// Function HealthBuff2.HealthBuff2_C.OnBought
struct UHealthBuff2_C_OnBought_Params
{
	class AGlimpsePlayerCharacter**                    BuyerPlayerCharacter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HealthBuff2.HealthBuff2_C.ExecuteUbergraph_HealthBuff2
struct UHealthBuff2_C_ExecuteUbergraph_HealthBuff2_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
