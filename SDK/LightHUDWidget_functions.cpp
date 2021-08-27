
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

// Function LightHUDWidget.LightHUDWidget_C.UpdateInteractionTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULightHUDWidget_C::UpdateInteractionTextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightHUDWidget.LightHUDWidget_C.UpdateInteractionTextColor");

	ULightHUDWidget_C_UpdateInteractionTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightHUDWidget.LightHUDWidget_C.Get_StatusEffectGrid_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> ULightHUDWidget_C::Get_StatusEffectGrid_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightHUDWidget.LightHUDWidget_C.Get_StatusEffectGrid_Visibility_1");

	ULightHUDWidget_C_Get_StatusEffectGrid_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LightHUDWidget.LightHUDWidget_C.Get_JoyIndicatorWidgetMade_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> ULightHUDWidget_C::Get_JoyIndicatorWidgetMade_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightHUDWidget.LightHUDWidget_C.Get_JoyIndicatorWidgetMade_Visibility_1");

	ULightHUDWidget_C_Get_JoyIndicatorWidgetMade_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LightHUDWidget.LightHUDWidget_C.Get_MainFillAndBase_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULightHUDWidget_C::Get_MainFillAndBase_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightHUDWidget.LightHUDWidget_C.Get_MainFillAndBase_Percent_1");

	ULightHUDWidget_C_Get_MainFillAndBase_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LightHUDWidget.LightHUDWidget_C.UpdateSafeZoneSizing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULightHUDWidget_C::UpdateSafeZoneSizing()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightHUDWidget.LightHUDWidget_C.UpdateSafeZoneSizing");

	ULightHUDWidget_C_UpdateSafeZoneSizing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightHUDWidget.LightHUDWidget_C.GetStealthVignetteVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> ULightHUDWidget_C::GetStealthVignetteVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightHUDWidget.LightHUDWidget_C.GetStealthVignetteVisibility");

	ULightHUDWidget_C_GetStealthVignetteVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LightHUDWidget.LightHUDWidget_C.Get_Level0_Brush_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush ULightHUDWidget_C::Get_Level0_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightHUDWidget.LightHUDWidget_C.Get_Level0_Brush_1");

	ULightHUDWidget_C_Get_Level0_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LightHUDWidget.LightHUDWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULightHUDWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightHUDWidget.LightHUDWidget_C.Construct");

	ULightHUDWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightHUDWidget.LightHUDWidget_C.UpdateCountdownWidget
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// bool*                          Show                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  TimeString                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          danger                         (Parm, ZeroConstructor, IsPlainOldData)

void ULightHUDWidget_C::UpdateCountdownWidget(bool* Show, struct FText* TimeString, bool* danger)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightHUDWidget.LightHUDWidget_C.UpdateCountdownWidget");

	ULightHUDWidget_C_UpdateCountdownWidget_Params params;
	params.Show = Show;
	params.TimeString = TimeString;
	params.danger = danger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightHUDWidget.LightHUDWidget_C.UpdatePlayerVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHUDPlayerVisibility>* CurrentVisibility              (Parm, ZeroConstructor, IsPlainOldData)

void ULightHUDWidget_C::UpdatePlayerVisibility(TEnumAsByte<EHUDPlayerVisibility>* CurrentVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightHUDWidget.LightHUDWidget_C.UpdatePlayerVisibility");

	ULightHUDWidget_C_UpdatePlayerVisibility_Params params;
	params.CurrentVisibility = CurrentVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightHUDWidget.LightHUDWidget_C.UpdatePlayerLoudness
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHUDPlayerLoudness>* CurrentLoudness                (Parm, ZeroConstructor, IsPlainOldData)

void ULightHUDWidget_C::UpdatePlayerLoudness(TEnumAsByte<EHUDPlayerLoudness>* CurrentLoudness)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightHUDWidget.LightHUDWidget_C.UpdatePlayerLoudness");

	ULightHUDWidget_C_UpdatePlayerLoudness_Params params;
	params.CurrentLoudness = CurrentLoudness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightHUDWidget.LightHUDWidget_C.UpdatePlayerSuspicion
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHUDPlayerSuspicion>* CurrentSuspicion               (Parm, ZeroConstructor, IsPlainOldData)

void ULightHUDWidget_C::UpdatePlayerSuspicion(TEnumAsByte<EHUDPlayerSuspicion>* CurrentSuspicion)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightHUDWidget.LightHUDWidget_C.UpdatePlayerSuspicion");

	ULightHUDWidget_C_UpdatePlayerSuspicion_Params params;
	params.CurrentSuspicion = CurrentSuspicion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightHUDWidget.LightHUDWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void ULightHUDWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightHUDWidget.LightHUDWidget_C.Tick");

	ULightHUDWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightHUDWidget.LightHUDWidget_C.OnViewportResize_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               NewSize                        (Parm, ZeroConstructor, IsPlainOldData)

void ULightHUDWidget_C::OnViewportResize_Event_1(const struct FVector2D& NewSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightHUDWidget.LightHUDWidget_C.OnViewportResize_Event_1");

	ULightHUDWidget_C_OnViewportResize_Event_1_Params params;
	params.NewSize = NewSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightHUDWidget.LightHUDWidget_C.ExecuteUbergraph_LightHUDWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULightHUDWidget_C::ExecuteUbergraph_LightHUDWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightHUDWidget.LightHUDWidget_C.ExecuteUbergraph_LightHUDWidget");

	ULightHUDWidget_C_ExecuteUbergraph_LightHUDWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
