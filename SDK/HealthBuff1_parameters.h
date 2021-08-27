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

// Function HealthBuff1.HealthBuff1_C.OnBought
struct UHealthBuff1_C_OnBought_Params
{
	class AGlimpsePlayerCharacter**                    BuyerPlayerCharacter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HealthBuff1.HealthBuff1_C.ExecuteUbergraph_HealthBuff1
struct UHealthBuff1_C_ExecuteUbergraph_HealthBuff1_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
