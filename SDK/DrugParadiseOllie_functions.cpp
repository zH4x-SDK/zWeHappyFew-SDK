
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

// Function DrugParadiseOllie.DrugParadiseOllie_C.OnBought
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGlimpsePlayerCharacter** BuyerPlayerCharacter           (Parm, ZeroConstructor, IsPlainOldData)

void UDrugParadiseOllie_C::OnBought(class AGlimpsePlayerCharacter** BuyerPlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugParadiseOllie.DrugParadiseOllie_C.OnBought");

	UDrugParadiseOllie_C_OnBought_Params params;
	params.BuyerPlayerCharacter = BuyerPlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DrugParadiseOllie.DrugParadiseOllie_C.ExecuteUbergraph_DrugParadiseOllie
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDrugParadiseOllie_C::ExecuteUbergraph_DrugParadiseOllie(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DrugParadiseOllie.DrugParadiseOllie_C.ExecuteUbergraph_DrugParadiseOllie");

	UDrugParadiseOllie_C_ExecuteUbergraph_DrugParadiseOllie_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
