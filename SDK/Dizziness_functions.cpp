
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

// Function Dizziness.Dizziness_C.OnApply
// (Event, Protected, BlueprintEvent)

void UDizziness_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dizziness.Dizziness_C.OnApply");

	UDizziness_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dizziness.Dizziness_C.OnRemove
// (Event, Protected, BlueprintEvent)

void UDizziness_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dizziness.Dizziness_C.OnRemove");

	UDizziness_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dizziness.Dizziness_C.ExecuteUbergraph_Dizziness
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDizziness_C::ExecuteUbergraph_Dizziness(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dizziness.Dizziness_C.ExecuteUbergraph_Dizziness");

	UDizziness_C_ExecuteUbergraph_Dizziness_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
