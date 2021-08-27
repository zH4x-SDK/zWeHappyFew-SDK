
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

// Function Slowed.Slowed_C.OnApply
// (Event, Protected, BlueprintEvent)

void USlowed_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function Slowed.Slowed_C.OnApply");

	USlowed_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Slowed.Slowed_C.OnRemove
// (Event, Protected, BlueprintEvent)

void USlowed_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function Slowed.Slowed_C.OnRemove");

	USlowed_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Slowed.Slowed_C.ExecuteUbergraph_Slowed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USlowed_C::ExecuteUbergraph_Slowed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Slowed.Slowed_C.ExecuteUbergraph_Slowed");

	USlowed_C_ExecuteUbergraph_Slowed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
