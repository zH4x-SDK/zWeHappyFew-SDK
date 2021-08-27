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

// Function DrugParadiseOllie.DrugParadiseOllie_C.OnBought
struct UDrugParadiseOllie_C_OnBought_Params
{
	class AGlimpsePlayerCharacter**                    BuyerPlayerCharacter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugParadiseOllie.DrugParadiseOllie_C.ExecuteUbergraph_DrugParadiseOllie
struct UDrugParadiseOllie_C_ExecuteUbergraph_DrugParadiseOllie_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
