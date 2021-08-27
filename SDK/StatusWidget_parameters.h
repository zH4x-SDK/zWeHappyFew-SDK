#pragma once

#include "../SDK.h"

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function StatusWidget.StatusWidget_C.Get_ThirstDurationSeconds_Text_1
struct UStatusWidget_C_Get_ThirstDurationSeconds_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StatusWidget.StatusWidget_C.Get_ThirstDurationMinutes_Text_1
struct UStatusWidget_C_Get_ThirstDurationMinutes_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StatusWidget.StatusWidget_C.Get_HungerDurationSeconds_Text_1
struct UStatusWidget_C_Get_HungerDurationSeconds_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StatusWidget.StatusWidget_C.Get_HungerDurationMinutes_Text_1
struct UStatusWidget_C_Get_HungerDurationMinutes_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StatusWidget.StatusWidget_C.Get_SleepDurationMinute_Text_2
struct UStatusWidget_C_Get_SleepDurationMinute_Text_2_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StatusWidget.StatusWidget_C.Get_SleepDurationSeconds_Text_1
struct UStatusWidget_C_Get_SleepDurationSeconds_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StatusWidget.StatusWidget_C.Get_SleepDurationMinute_Text_1
struct UStatusWidget_C_Get_SleepDurationMinute_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function StatusWidget.StatusWidget_C.SetGlowAnimation
struct UStatusWidget_C_SetGlowAnimation_Params
{
	int                                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusWidget.StatusWidget_C.UpdateSafeZone
struct UStatusWidget_C_UpdateSafeZone_Params
{
};

// Function StatusWidget.StatusWidget_C.SetTextValueScale
struct UStatusWidget_C_SetTextValueScale_Params
{
	float                                              CurrentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ValueScale;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  TextWidget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusWidget.StatusWidget_C.UpdateEffectList
struct UStatusWidget_C_UpdateEffectList_Params
{
	TEnumAsByte<EEffectListType>                       NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusWidget.StatusWidget_C.SetTextFraction
struct UStatusWidget_C_SetTextFraction_Params
{
	float                                              CurrentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  TextWidget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusWidget.StatusWidget_C.SetTextPercent
struct UStatusWidget_C_SetTextPercent_Params
{
	float                                              CurrentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  TextWidget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusWidget.StatusWidget_C.Construct
struct UStatusWidget_C_Construct_Params
{
};

// Function StatusWidget.StatusWidget_C.OnHungerChanged
struct UStatusWidget_C_OnHungerChanged_Params
{
	float*                                             InCurrentValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InTotalValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusWidget.StatusWidget_C.OnHealthChanged
struct UStatusWidget_C_OnHealthChanged_Params
{
	float*                                             InCurrentValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InTotalValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusWidget.StatusWidget_C.OnDrugLevelChanged
struct UStatusWidget_C_OnDrugLevelChanged_Params
{
	float*                                             InCurrentValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InTotalValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusWidget.StatusWidget_C.OnCrashLevelChanged
struct UStatusWidget_C_OnCrashLevelChanged_Params
{
	float*                                             CrashLevel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusWidget.StatusWidget_C.OnThirstChanged
struct UStatusWidget_C_OnThirstChanged_Params
{
	float*                                             InCurrentValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InTotalValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusWidget.StatusWidget_C.OnSleepChanged
struct UStatusWidget_C_OnSleepChanged_Params
{
	float*                                             InCurrentValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InTotalValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusWidget.StatusWidget_C.OnEncumberanceChanged
struct UStatusWidget_C_OnEncumberanceChanged_Params
{
	float*                                             InCurrentValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InTotalValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusWidget.StatusWidget_C.OnArmorChanged
struct UStatusWidget_C_OnArmorChanged_Params
{
	float*                                             InCurrentValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusWidget.StatusWidget_C.OnMoveSpeedChanged
struct UStatusWidget_C_OnMoveSpeedChanged_Params
{
	float*                                             InCurrentValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InMaxValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusWidget.StatusWidget_C.BndEvt__Category_Button_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UStatusWidget_C_BndEvt__Category_Button_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function StatusWidget.StatusWidget_C.BndEvt__PassiveEffectsButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature
struct UStatusWidget_C_BndEvt__PassiveEffectsButton_K2Node_ComponentBoundEvent_27_OnClicked__DelegateSignature_Params
{
};

// Function StatusWidget.StatusWidget_C.OnEffectListChanged
struct UStatusWidget_C_OnEffectListChanged_Params
{
	TEnumAsByte<EEffectListType>*                      InListType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusWidget.StatusWidget_C.OnViewportResize_Event_1
struct UStatusWidget_C_OnViewportResize_Event_1_Params
{
	struct FVector2D                                   NewSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StatusWidget.StatusWidget_C.ExecuteUbergraph_StatusWidget
struct UStatusWidget_C_ExecuteUbergraph_StatusWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
