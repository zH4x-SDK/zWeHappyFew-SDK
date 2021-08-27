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

// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.InitializeNativeVariables
struct UWidget_NPC_Indicator_C_InitializeNativeVariables_Params
{
};

// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.UpdateCriticalHealthStatus
struct UWidget_NPC_Indicator_C_UpdateCriticalHealthStatus_Params
{
};

// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.UpdateTiers
struct UWidget_NPC_Indicator_C_UpdateTiers_Params
{
	int                                                NewTier;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.ConvertAreaToHeightOfTriangle
struct UWidget_NPC_Indicator_C_ConvertAreaToHeightOfTriangle_Params
{
	float                                              InAreaFill;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTheta;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutFillHeight;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.ShouldShowHealthAndArmour
struct UWidget_NPC_Indicator_C_ShouldShowHealthAndArmour_Params
{
	bool                                               Show;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.Construct
struct UWidget_NPC_Indicator_C_Construct_Params
{
};

// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.Tick
struct UWidget_NPC_Indicator_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.OnSetSuspicionProgress
struct UWidget_NPC_Indicator_C_OnSetSuspicionProgress_Params
{
	float*                                             progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.OnSetAgressionProgress
struct UWidget_NPC_Indicator_C_OnSetAgressionProgress_Params
{
	float*                                             progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.OnSetIndicatorMode
struct UWidget_NPC_Indicator_C_OnSetIndicatorMode_Params
{
	TEnumAsByte<ENPCIndicatorState>*                   Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.OnSetNPCOffscreen
struct UWidget_NPC_Indicator_C_OnSetNPCOffscreen_Params
{
	bool*                                              offscreen;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.OnSetNPCDistance
struct UWidget_NPC_Indicator_C_OnSetNPCDistance_Params
{
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.OnSetNPCHealthAmount
struct UWidget_NPC_Indicator_C_OnSetNPCHealthAmount_Params
{
	float*                                             normalisedHealth;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             actualHealth;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InTier;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_NPC_Indicator.Widget_NPC_Indicator_C.ExecuteUbergraph_Widget_NPC_Indicator
struct UWidget_NPC_Indicator_C_ExecuteUbergraph_Widget_NPC_Indicator_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
