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

// Function DLCIcon.DLCIcon_C.SetIconColourOpacity
struct UDLCIcon_C_SetIconColourOpacity_Params
{
	struct FLinearColor                                Colour;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLCIcon.DLCIcon_C.SetImage
struct UDLCIcon_C_SetImage_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm)
};

// Function DLCIcon.DLCIcon_C.SetStatusText
struct UDLCIcon_C_SetStatusText_Params
{
	struct FText                                       StatusText;                                               // (Parm)
};

// Function DLCIcon.DLCIcon_C.Construct
struct UDLCIcon_C_Construct_Params
{
};

// Function DLCIcon.DLCIcon_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UDLCIcon_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DLCIcon.DLCIcon_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UDLCIcon_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DLCIcon.DLCIcon_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UDLCIcon_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DLCIcon.DLCIcon_C.OnSelected
struct UDLCIcon_C_OnSelected_Params
{
	bool                                               IsSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLCIcon.DLCIcon_C.ChangeIconState
struct UDLCIcon_C_ChangeIconState_Params
{
};

// Function DLCIcon.DLCIcon_C.ExecuteUbergraph_DLCIcon
struct UDLCIcon_C_ExecuteUbergraph_DLCIcon_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLCIcon.DLCIcon_C.OnIconClicked__DelegateSignature
struct UDLCIcon_C_OnIconClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
