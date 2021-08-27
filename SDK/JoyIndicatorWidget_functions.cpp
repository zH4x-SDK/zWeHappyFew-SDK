
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

// Function JoyIndicatorWidget.JoyIndicatorWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UJoyIndicatorWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoyIndicatorWidget.JoyIndicatorWidget_C.Construct");

	UJoyIndicatorWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoyIndicatorWidget.JoyIndicatorWidget_C.OnSetToxicityFill
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UJoyIndicatorWidget_C::OnSetToxicityFill(float* progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoyIndicatorWidget.JoyIndicatorWidget_C.OnSetToxicityFill");

	UJoyIndicatorWidget_C_OnSetToxicityFill_Params params;
	params.progress = progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoyIndicatorWidget.JoyIndicatorWidget_C.OnSetJoyFill
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UJoyIndicatorWidget_C::OnSetJoyFill(float* progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoyIndicatorWidget.JoyIndicatorWidget_C.OnSetJoyFill");

	UJoyIndicatorWidget_C_OnSetJoyFill_Params params;
	params.progress = progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoyIndicatorWidget.JoyIndicatorWidget_C.OnSetIndicatorMode
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHUDJoyIndicatorState>* Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void UJoyIndicatorWidget_C::OnSetIndicatorMode(TEnumAsByte<EHUDJoyIndicatorState>* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoyIndicatorWidget.JoyIndicatorWidget_C.OnSetIndicatorMode");

	UJoyIndicatorWidget_C_OnSetIndicatorMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoyIndicatorWidget.JoyIndicatorWidget_C.ExecuteUbergraph_JoyIndicatorWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UJoyIndicatorWidget_C::ExecuteUbergraph_JoyIndicatorWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoyIndicatorWidget.JoyIndicatorWidget_C.ExecuteUbergraph_JoyIndicatorWidget");

	UJoyIndicatorWidget_C_ExecuteUbergraph_JoyIndicatorWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
