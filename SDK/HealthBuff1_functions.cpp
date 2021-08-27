
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

// Function HealthBuff1.HealthBuff1_C.OnBought
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGlimpsePlayerCharacter** BuyerPlayerCharacter           (Parm, ZeroConstructor, IsPlainOldData)

void UHealthBuff1_C::OnBought(class AGlimpsePlayerCharacter** BuyerPlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthBuff1.HealthBuff1_C.OnBought");

	UHealthBuff1_C_OnBought_Params params;
	params.BuyerPlayerCharacter = BuyerPlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HealthBuff1.HealthBuff1_C.ExecuteUbergraph_HealthBuff1
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHealthBuff1_C::ExecuteUbergraph_HealthBuff1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthBuff1.HealthBuff1_C.ExecuteUbergraph_HealthBuff1");

	UHealthBuff1_C_ExecuteUbergraph_HealthBuff1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
