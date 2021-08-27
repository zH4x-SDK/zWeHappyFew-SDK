
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

// Function StatusWidget.StatusWidget_C.Get_ThirstDurationSeconds_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStatusWidget_C::Get_ThirstDurationSeconds_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.Get_ThirstDurationSeconds_Text_1");

	UStatusWidget_C_Get_ThirstDurationSeconds_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StatusWidget.StatusWidget_C.Get_ThirstDurationMinutes_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStatusWidget_C::Get_ThirstDurationMinutes_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.Get_ThirstDurationMinutes_Text_1");

	UStatusWidget_C_Get_ThirstDurationMinutes_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StatusWidget.StatusWidget_C.Get_HungerDurationSeconds_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStatusWidget_C::Get_HungerDurationSeconds_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.Get_HungerDurationSeconds_Text_1");

	UStatusWidget_C_Get_HungerDurationSeconds_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StatusWidget.StatusWidget_C.Get_HungerDurationMinutes_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStatusWidget_C::Get_HungerDurationMinutes_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.Get_HungerDurationMinutes_Text_1");

	UStatusWidget_C_Get_HungerDurationMinutes_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StatusWidget.StatusWidget_C.Get_SleepDurationMinute_Text_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStatusWidget_C::Get_SleepDurationMinute_Text_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.Get_SleepDurationMinute_Text_2");

	UStatusWidget_C_Get_SleepDurationMinute_Text_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StatusWidget.StatusWidget_C.Get_SleepDurationSeconds_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStatusWidget_C::Get_SleepDurationSeconds_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.Get_SleepDurationSeconds_Text_1");

	UStatusWidget_C_Get_SleepDurationSeconds_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StatusWidget.StatusWidget_C.Get_SleepDurationMinute_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UStatusWidget_C::Get_SleepDurationMinute_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.Get_SleepDurationMinute_Text_1");

	UStatusWidget_C_Get_SleepDurationMinute_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StatusWidget.StatusWidget_C.SetGlowAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State                          (Parm, ZeroConstructor, IsPlainOldData)

void UStatusWidget_C::SetGlowAnimation(int State)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.SetGlowAnimation");

	UStatusWidget_C_SetGlowAnimation_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.UpdateSafeZone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStatusWidget_C::UpdateSafeZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.UpdateSafeZone");

	UStatusWidget_C_UpdateSafeZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.SetTextValueScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ValueScale                     (Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              TextWidget                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatusWidget_C::SetTextValueScale(float CurrentValue, float ValueScale, class UTextBlock* TextWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.SetTextValueScale");

	UStatusWidget_C_SetTextValueScale_Params params;
	params.CurrentValue = CurrentValue;
	params.ValueScale = ValueScale;
	params.TextWidget = TextWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.UpdateEffectList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEffectListType>   NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void UStatusWidget_C::UpdateEffectList(TEnumAsByte<EEffectListType> NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.UpdateEffectList");

	UStatusWidget_C_UpdateEffectList_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.SetTextFraction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxValue                       (Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              TextWidget                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatusWidget_C::SetTextFraction(float CurrentValue, float MaxValue, class UTextBlock* TextWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.SetTextFraction");

	UStatusWidget_C_SetTextFraction_Params params;
	params.CurrentValue = CurrentValue;
	params.MaxValue = MaxValue;
	params.TextWidget = TextWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.SetTextPercent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxValue                       (Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              TextWidget                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatusWidget_C::SetTextPercent(float CurrentValue, float MaxValue, class UTextBlock* TextWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.SetTextPercent");

	UStatusWidget_C_SetTextPercent_Params params;
	params.CurrentValue = CurrentValue;
	params.MaxValue = MaxValue;
	params.TextWidget = TextWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStatusWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.Construct");

	UStatusWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.OnHungerChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         InCurrentValue                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InTotalValue                   (Parm, ZeroConstructor, IsPlainOldData)

void UStatusWidget_C::OnHungerChanged(float* InCurrentValue, float* InTotalValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.OnHungerChanged");

	UStatusWidget_C_OnHungerChanged_Params params;
	params.InCurrentValue = InCurrentValue;
	params.InTotalValue = InTotalValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.OnHealthChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         InCurrentValue                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InTotalValue                   (Parm, ZeroConstructor, IsPlainOldData)

void UStatusWidget_C::OnHealthChanged(float* InCurrentValue, float* InTotalValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.OnHealthChanged");

	UStatusWidget_C_OnHealthChanged_Params params;
	params.InCurrentValue = InCurrentValue;
	params.InTotalValue = InTotalValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.OnDrugLevelChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         InCurrentValue                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InTotalValue                   (Parm, ZeroConstructor, IsPlainOldData)

void UStatusWidget_C::OnDrugLevelChanged(float* InCurrentValue, float* InTotalValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.OnDrugLevelChanged");

	UStatusWidget_C_OnDrugLevelChanged_Params params;
	params.InCurrentValue = InCurrentValue;
	params.InTotalValue = InTotalValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.OnCrashLevelChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         CrashLevel                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatusWidget_C::OnCrashLevelChanged(float* CrashLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.OnCrashLevelChanged");

	UStatusWidget_C_OnCrashLevelChanged_Params params;
	params.CrashLevel = CrashLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.OnThirstChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         InCurrentValue                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InTotalValue                   (Parm, ZeroConstructor, IsPlainOldData)

void UStatusWidget_C::OnThirstChanged(float* InCurrentValue, float* InTotalValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.OnThirstChanged");

	UStatusWidget_C_OnThirstChanged_Params params;
	params.InCurrentValue = InCurrentValue;
	params.InTotalValue = InTotalValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.OnSleepChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         InCurrentValue                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InTotalValue                   (Parm, ZeroConstructor, IsPlainOldData)

void UStatusWidget_C::OnSleepChanged(float* InCurrentValue, float* InTotalValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.OnSleepChanged");

	UStatusWidget_C_OnSleepChanged_Params params;
	params.InCurrentValue = InCurrentValue;
	params.InTotalValue = InTotalValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.OnEncumberanceChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         InCurrentValue                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InTotalValue                   (Parm, ZeroConstructor, IsPlainOldData)

void UStatusWidget_C::OnEncumberanceChanged(float* InCurrentValue, float* InTotalValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.OnEncumberanceChanged");

	UStatusWidget_C_OnEncumberanceChanged_Params params;
	params.InCurrentValue = InCurrentValue;
	params.InTotalValue = InTotalValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.OnArmorChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         InCurrentValue                 (Parm, ZeroConstructor, IsPlainOldData)

void UStatusWidget_C::OnArmorChanged(float* InCurrentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.OnArmorChanged");

	UStatusWidget_C_OnArmorChanged_Params params;
	params.InCurrentValue = InCurrentValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.OnMoveSpeedChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         InCurrentValue                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InMaxValue                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatusWidget_C::OnMoveSpeedChanged(float* InCurrentValue, float* InMaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.OnMoveSpeedChanged");

	UStatusWidget_C_OnMoveSpeedChanged_Params params;
	params.InCurrentValue = InCurrentValue;
	params.InMaxValue = InMaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.BndEvt__Category_Button_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)

void UStatusWidget_C::BndEvt__Category_Button_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.BndEvt__Category_Button_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UStatusWidget_C_BndEvt__Category_Button_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.BndEvt__PassiveEffectsButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature
// (BlueprintEvent)

void UStatusWidget_C::BndEvt__PassiveEffectsButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.BndEvt__PassiveEffectsButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature");

	UStatusWidget_C_BndEvt__PassiveEffectsButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.OnEffectListChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEffectListType>*  InListType                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatusWidget_C::OnEffectListChanged(TEnumAsByte<EEffectListType>* InListType)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.OnEffectListChanged");

	UStatusWidget_C_OnEffectListChanged_Params params;
	params.InListType = InListType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.OnViewportResize_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               NewSize                        (Parm, ZeroConstructor, IsPlainOldData)

void UStatusWidget_C::OnViewportResize_Event_1(const struct FVector2D& NewSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.OnViewportResize_Event_1");

	UStatusWidget_C_OnViewportResize_Event_1_Params params;
	params.NewSize = NewSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusWidget.StatusWidget_C.ExecuteUbergraph_StatusWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStatusWidget_C::ExecuteUbergraph_StatusWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StatusWidget.StatusWidget_C.ExecuteUbergraph_StatusWidget");

	UStatusWidget_C_ExecuteUbergraph_StatusWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
