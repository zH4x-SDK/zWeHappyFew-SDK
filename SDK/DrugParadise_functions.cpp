
#include "../SDK.h"

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function DrugParadise.DrugParadise_C.OnBought
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGlimpsePlayerCharacter** BuyerPlayerCharacter           (Parm, ZeroConstructor, IsPlainOldData)

void UDrugParadise_C::OnBought(class AGlimpsePlayerCharacter** BuyerPlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugParadise.DrugParadise_C.OnBought");

	UDrugParadise_C_OnBought_Params params;
	params.BuyerPlayerCharacter = BuyerPlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugParadise.DrugParadise_C.ExecuteUbergraph_DrugParadise
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDrugParadise_C::ExecuteUbergraph_DrugParadise(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugParadise.DrugParadise_C.ExecuteUbergraph_DrugParadise");

	UDrugParadise_C_ExecuteUbergraph_DrugParadise_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
