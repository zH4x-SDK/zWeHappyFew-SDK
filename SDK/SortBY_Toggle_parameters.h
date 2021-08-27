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

// Function SortBY_Toggle.SortBY_Toggle_C.Get_InputBindingDisplay_18_Visibility_1
struct USortBY_Toggle_C_Get_InputBindingDisplay_18_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SortBY_Toggle.SortBY_Toggle_C.OnKeyUp
struct USortBY_Toggle_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SortBY_Toggle.SortBY_Toggle_C.OnKeyDown
struct USortBY_Toggle_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SortBY_Toggle.SortBY_Toggle_C.ReleaseReaction
struct USortBY_Toggle_C_ReleaseReaction_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SortBY_Toggle.SortBY_Toggle_C.PressReaction
struct USortBY_Toggle_C_PressReaction_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SortBY_Toggle.SortBY_Toggle_C.UnHoverReaction
struct USortBY_Toggle_C_UnHoverReaction_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SortBY_Toggle.SortBY_Toggle_C.OnMouseButtonDoubleClick
struct USortBY_Toggle_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry*                                  InMyGeometry;                                             // (Parm, IsPlainOldData)
	struct FPointerEvent*                              InMouseEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SortBY_Toggle.SortBY_Toggle_C.HoverReaction
struct USortBY_Toggle_C_HoverReaction_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SortBY_Toggle.SortBY_Toggle_C.OnFocusReceived
struct USortBY_Toggle_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SortBY_Toggle.SortBY_Toggle_C.OnMouseButtonUp
struct USortBY_Toggle_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SortBY_Toggle.SortBY_Toggle_C.OnMouseButtonDown
struct USortBY_Toggle_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SortBY_Toggle.SortBY_Toggle_C.SetSortedByWeight
struct USortBY_Toggle_C_SetSortedByWeight_Params
{
	bool                                               SortByWeight;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SortBY_Toggle.SortBY_Toggle_C.OnMouseEnter
struct USortBY_Toggle_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function SortBY_Toggle.SortBY_Toggle_C.OnMouseLeave
struct USortBY_Toggle_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function SortBY_Toggle.SortBY_Toggle_C.OnFocusLost
struct USortBY_Toggle_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
};

// Function SortBY_Toggle.SortBY_Toggle_C.ExecuteUbergraph_SortBY_Toggle
struct USortBY_Toggle_C_ExecuteUbergraph_SortBY_Toggle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SortBY_Toggle.SortBY_Toggle_C.FocusHovered__DelegateSignature
struct USortBY_Toggle_C_FocusHovered__DelegateSignature_Params
{
};

// Function SortBY_Toggle.SortBY_Toggle_C.Clicked__DelegateSignature
struct USortBY_Toggle_C_Clicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
