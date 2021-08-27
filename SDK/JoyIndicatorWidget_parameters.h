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

// Function JoyIndicatorWidget.JoyIndicatorWidget_C.Construct
struct UJoyIndicatorWidget_C_Construct_Params
{
};

// Function JoyIndicatorWidget.JoyIndicatorWidget_C.OnSetToxicityFill
struct UJoyIndicatorWidget_C_OnSetToxicityFill_Params
{
	float*                                             progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JoyIndicatorWidget.JoyIndicatorWidget_C.OnSetJoyFill
struct UJoyIndicatorWidget_C_OnSetJoyFill_Params
{
	float*                                             progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JoyIndicatorWidget.JoyIndicatorWidget_C.OnSetIndicatorMode
struct UJoyIndicatorWidget_C_OnSetIndicatorMode_Params
{
	TEnumAsByte<EHUDJoyIndicatorState>*                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JoyIndicatorWidget.JoyIndicatorWidget_C.ExecuteUbergraph_JoyIndicatorWidget
struct UJoyIndicatorWidget_C_ExecuteUbergraph_JoyIndicatorWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
