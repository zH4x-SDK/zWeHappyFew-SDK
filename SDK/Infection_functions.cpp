
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

// Function Infection.Infection_C.OnApply
// (Event, Protected, BlueprintEvent)

void UInfection_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function Infection.Infection_C.OnApply");

	UInfection_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Infection.Infection_C.ExecuteUbergraph_Infection
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UInfection_C::ExecuteUbergraph_Infection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Infection.Infection_C.ExecuteUbergraph_Infection");

	UInfection_C_ExecuteUbergraph_Infection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
