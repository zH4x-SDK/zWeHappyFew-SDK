
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

// Function IronStomachEffect.IronStomachEffect_C.OnApply
// (Event, Protected, BlueprintEvent)

void UIronStomachEffect_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function IronStomachEffect.IronStomachEffect_C.OnApply");

	UIronStomachEffect_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IronStomachEffect.IronStomachEffect_C.ExecuteUbergraph_IronStomachEffect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIronStomachEffect_C::ExecuteUbergraph_IronStomachEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IronStomachEffect.IronStomachEffect_C.ExecuteUbergraph_IronStomachEffect");

	UIronStomachEffect_C_ExecuteUbergraph_IronStomachEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
