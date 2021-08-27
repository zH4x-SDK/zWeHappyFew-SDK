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

// Function DrugParadise.DrugParadise_C.OnBought
struct UDrugParadise_C_OnBought_Params
{
	class AGlimpsePlayerCharacter**                    BuyerPlayerCharacter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DrugParadise.DrugParadise_C.ExecuteUbergraph_DrugParadise
struct UDrugParadise_C_ExecuteUbergraph_DrugParadise_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
