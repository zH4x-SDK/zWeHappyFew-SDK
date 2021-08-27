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

// Function LightHUDWidget.LightHUDWidget_C.UpdateInteractionTextColor
struct ULightHUDWidget_C_UpdateInteractionTextColor_Params
{
};

// Function LightHUDWidget.LightHUDWidget_C.Get_StatusEffectGrid_Visibility_1
struct ULightHUDWidget_C_Get_StatusEffectGrid_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LightHUDWidget.LightHUDWidget_C.Get_JoyIndicatorWidgetMade_Visibility_1
struct ULightHUDWidget_C_Get_JoyIndicatorWidgetMade_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LightHUDWidget.LightHUDWidget_C.Get_MainFillAndBase_Percent_1
struct ULightHUDWidget_C_Get_MainFillAndBase_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LightHUDWidget.LightHUDWidget_C.UpdateSafeZoneSizing
struct ULightHUDWidget_C_UpdateSafeZoneSizing_Params
{
};

// Function LightHUDWidget.LightHUDWidget_C.GetStealthVignetteVisibility
struct ULightHUDWidget_C_GetStealthVignetteVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LightHUDWidget.LightHUDWidget_C.Get_Level0_Brush_1
struct ULightHUDWidget_C_Get_Level0_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function LightHUDWidget.LightHUDWidget_C.Construct
struct ULightHUDWidget_C_Construct_Params
{
};

// Function LightHUDWidget.LightHUDWidget_C.UpdateCountdownWidget
struct ULightHUDWidget_C_UpdateCountdownWidget_Params
{
	bool*                                              Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      TimeString;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              danger;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightHUDWidget.LightHUDWidget_C.UpdatePlayerVisibility
struct ULightHUDWidget_C_UpdatePlayerVisibility_Params
{
	TEnumAsByte<EHUDPlayerVisibility>*                 CurrentVisibility;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightHUDWidget.LightHUDWidget_C.UpdatePlayerLoudness
struct ULightHUDWidget_C_UpdatePlayerLoudness_Params
{
	TEnumAsByte<EHUDPlayerLoudness>*                   CurrentLoudness;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightHUDWidget.LightHUDWidget_C.UpdatePlayerSuspicion
struct ULightHUDWidget_C_UpdatePlayerSuspicion_Params
{
	TEnumAsByte<EHUDPlayerSuspicion>*                  CurrentSuspicion;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightHUDWidget.LightHUDWidget_C.Tick
struct ULightHUDWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightHUDWidget.LightHUDWidget_C.OnViewportResize_Event_1
struct ULightHUDWidget_C_OnViewportResize_Event_1_Params
{
	struct FVector2D                                   NewSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightHUDWidget.LightHUDWidget_C.ExecuteUbergraph_LightHUDWidget
struct ULightHUDWidget_C_ExecuteUbergraph_LightHUDWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
