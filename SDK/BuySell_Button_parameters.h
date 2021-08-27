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

// Function BuySell_Button.BuySell_Button_C.SetHidden
struct UBuySell_Button_C_SetHidden_Params
{
	bool                                               Hidden;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuySell_Button.BuySell_Button_C.SetPressed
struct UBuySell_Button_C_SetPressed_Params
{
	bool                                               Pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuySell_Button.BuySell_Button_C.UpdateDisplay
struct UBuySell_Button_C_UpdateDisplay_Params
{
};

// Function BuySell_Button.BuySell_Button_C.SetEnabled
struct UBuySell_Button_C_SetEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuySell_Button.BuySell_Button_C.PushButton
struct UBuySell_Button_C_PushButton_Params
{
};

// Function BuySell_Button.BuySell_Button_C.SetBuySellText
struct UBuySell_Button_C_SetBuySellText_Params
{
	struct FText                                       ButtonText;                                               // (Parm)
};

// Function BuySell_Button.BuySell_Button_C.SetIsCurrentCategory
struct UBuySell_Button_C_SetIsCurrentCategory_Params
{
	bool                                               IsCurrent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuySell_Button.BuySell_Button_C.SetImage
struct UBuySell_Button_C_SetImage_Params
{
	class UTexture2D*                                  Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuySell_Button.BuySell_Button_C.Construct
struct UBuySell_Button_C_Construct_Params
{
};

// Function BuySell_Button.BuySell_Button_C.Tick
struct UBuySell_Button_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuySell_Button.BuySell_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UBuySell_Button_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BuySell_Button.BuySell_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UBuySell_Button_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BuySell_Button.BuySell_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
struct UBuySell_Button_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function BuySell_Button.BuySell_Button_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
struct UBuySell_Button_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function BuySell_Button.BuySell_Button_C.ExecuteUbergraph_BuySell_Button
struct UBuySell_Button_C_ExecuteUbergraph_BuySell_Button_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuySell_Button.BuySell_Button_C.OnReleased__DelegateSignature
struct UBuySell_Button_C_OnReleased__DelegateSignature_Params
{
};

// Function BuySell_Button.BuySell_Button_C.OnPressed__DelegateSignature
struct UBuySell_Button_C_OnPressed__DelegateSignature_Params
{
};

// Function BuySell_Button.BuySell_Button_C.OnClicked__DelegateSignature
struct UBuySell_Button_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
