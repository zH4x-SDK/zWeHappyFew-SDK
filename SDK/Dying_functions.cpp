
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

// Function Dying.Dying_C.OnApply
// (Event, Protected, BlueprintEvent)

void UDying_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dying.Dying_C.OnApply");

	UDying_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dying.Dying_C.ExecuteUbergraph_Dying
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDying_C::ExecuteUbergraph_Dying(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dying.Dying_C.ExecuteUbergraph_Dying");

	UDying_C_ExecuteUbergraph_Dying_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
