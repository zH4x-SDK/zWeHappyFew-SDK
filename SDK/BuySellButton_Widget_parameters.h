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

// Function BuySellButton_Widget.BuySellButton_Widget_C.OnFocusReceived
struct UBuySellButton_Widget_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BuySellButton_Widget.BuySellButton_Widget_C.UnHoverReaction
struct UBuySellButton_Widget_C_UnHoverReaction_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BuySellButton_Widget.BuySellButton_Widget_C.HoverReaction
struct UBuySellButton_Widget_C_HoverReaction_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BuySellButton_Widget.BuySellButton_Widget_C.ReleaseReaction
struct UBuySellButton_Widget_C_ReleaseReaction_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BuySellButton_Widget.BuySellButton_Widget_C.PressReaction
struct UBuySellButton_Widget_C_PressReaction_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BuySellButton_Widget.BuySellButton_Widget_C.OnKeyUp
struct UBuySellButton_Widget_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BuySellButton_Widget.BuySellButton_Widget_C.OnMouseButtonDoubleClick
struct UBuySellButton_Widget_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry*                                  InMyGeometry;                                             // (Parm, IsPlainOldData)
	struct FPointerEvent*                              InMouseEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BuySellButton_Widget.BuySellButton_Widget_C.OnKeyDown
struct UBuySellButton_Widget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BuySellButton_Widget.BuySellButton_Widget_C.OnMouseButtonDown
struct UBuySellButton_Widget_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BuySellButton_Widget.BuySellButton_Widget_C.OnMouseButtonUp
struct UBuySellButton_Widget_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BuySellButton_Widget.BuySellButton_Widget_C.SetButtonText
struct UBuySellButton_Widget_C_SetButtonText_Params
{
	struct FText                                       BuyText;                                                  // (Parm)
	struct FText                                       SellText;                                                 // (Parm)
};

// Function BuySellButton_Widget.BuySellButton_Widget_C.SetButtonState
struct UBuySellButton_Widget_C_SetButtonState_Params
{
	bool                                               ShouldBeBuyState;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuySellButton_Widget.BuySellButton_Widget_C.OnFocusLost
struct UBuySellButton_Widget_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
};

// Function BuySellButton_Widget.BuySellButton_Widget_C.OnMouseLeave
struct UBuySellButton_Widget_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BuySellButton_Widget.BuySellButton_Widget_C.OnMouseEnter
struct UBuySellButton_Widget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function BuySellButton_Widget.BuySellButton_Widget_C.ExecuteUbergraph_BuySellButton_Widget
struct UBuySellButton_Widget_C_ExecuteUbergraph_BuySellButton_Widget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuySellButton_Widget.BuySellButton_Widget_C.Clicked__DelegateSignature
struct UBuySellButton_Widget_C_Clicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
