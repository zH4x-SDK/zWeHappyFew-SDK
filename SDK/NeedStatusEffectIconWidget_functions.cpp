
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

// Function NeedStatusEffectIconWidget.NeedStatusEffectIconWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNeedStatusEffectIconWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NeedStatusEffectIconWidget.NeedStatusEffectIconWidget_C.Construct");

	UNeedStatusEffectIconWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NeedStatusEffectIconWidget.NeedStatusEffectIconWidget_C.ExecuteUbergraph_NeedStatusEffectIconWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UNeedStatusEffectIconWidget_C::ExecuteUbergraph_NeedStatusEffectIconWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeedStatusEffectIconWidget.NeedStatusEffectIconWidget_C.ExecuteUbergraph_NeedStatusEffectIconWidget");

	UNeedStatusEffectIconWidget_C_ExecuteUbergraph_NeedStatusEffectIconWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
