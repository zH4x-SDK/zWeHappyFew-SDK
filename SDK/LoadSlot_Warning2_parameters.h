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

// Function LoadSlot_Warning2.LoadSlot_Warning2_C.GetSpaceRequired
struct ULoadSlot_Warning2_C_GetSpaceRequired_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LoadSlot_Warning2.LoadSlot_Warning2_C.GetSpaceUsed
struct ULoadSlot_Warning2_C_GetSpaceUsed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LoadSlot_Warning2.LoadSlot_Warning2_C.GetSpaceDeleted
struct ULoadSlot_Warning2_C_GetSpaceDeleted_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LoadSlot_Warning2.LoadSlot_Warning2_C.Get_NewGameButtonBoxReverse
struct ULoadSlot_Warning2_C_Get_NewGameButtonBoxReverse_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LoadSlot_Warning2.LoadSlot_Warning2_C.GetMessageDependingOnState
struct ULoadSlot_Warning2_C_GetMessageDependingOnState_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function LoadSlot_Warning2.LoadSlot_Warning2_C.Get_NewGameButtonBox_Visibility_1
struct ULoadSlot_Warning2_C_Get_NewGameButtonBox_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LoadSlot_Warning2.LoadSlot_Warning2_C.Tick
struct ULoadSlot_Warning2_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoadSlot_Warning2.LoadSlot_Warning2_C.BndEvt__NewGameStartButton_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature
struct ULoadSlot_Warning2_C_BndEvt__NewGameStartButton_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature_Params
{
};

// Function LoadSlot_Warning2.LoadSlot_Warning2_C.ExecuteUbergraph_LoadSlot_Warning2
struct ULoadSlot_Warning2_C_ExecuteUbergraph_LoadSlot_Warning2_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
