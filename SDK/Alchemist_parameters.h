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

// Function Alchemist.Alchemist_C.OnBought
struct UAlchemist_C_OnBought_Params
{
	class AGlimpsePlayerCharacter**                    BuyerPlayerCharacter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Alchemist.Alchemist_C.ExecuteUbergraph_Alchemist
struct UAlchemist_C_ExecuteUbergraph_Alchemist_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
