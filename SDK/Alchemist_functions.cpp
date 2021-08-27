
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

// Function Alchemist.Alchemist_C.OnBought
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGlimpsePlayerCharacter** BuyerPlayerCharacter           (Parm, ZeroConstructor, IsPlainOldData)

void UAlchemist_C::OnBought(class AGlimpsePlayerCharacter** BuyerPlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Alchemist.Alchemist_C.OnBought");

	UAlchemist_C_OnBought_Params params;
	params.BuyerPlayerCharacter = BuyerPlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Alchemist.Alchemist_C.ExecuteUbergraph_Alchemist
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAlchemist_C::ExecuteUbergraph_Alchemist(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Alchemist.Alchemist_C.ExecuteUbergraph_Alchemist");

	UAlchemist_C_ExecuteUbergraph_Alchemist_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
