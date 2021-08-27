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

// Function DLCMenuWidget.DLCMenuWidget_C.Get_TXT_DLCDescription_Text_1
struct UDLCMenuWidget_C_Get_TXT_DLCDescription_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DLCMenuWidget.DLCMenuWidget_C.SetDLCRepresentationState
struct UDLCMenuWidget_C_SetDLCRepresentationState_Params
{
	class UDLCIcon_C*                                  IconWidget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NavigatingState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDLCTypeUI>                            DLCType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DLCMenuWidget.DLCMenuWidget_C.RefreshMenu
struct UDLCMenuWidget_C_RefreshMenu_Params
{
};

// Function DLCMenuWidget.DLCMenuWidget_C.BndEvt__NewGameStartButton_115_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature
struct UDLCMenuWidget_C_BndEvt__NewGameStartButton_115_K2Node_ComponentBoundEvent_0_OnClickedEvent__DelegateSignature_Params
{
};

// Function DLCMenuWidget.DLCMenuWidget_C.BndEvt__WGT_Nick_K2Node_ComponentBoundEvent_1_OnIconClicked__DelegateSignature
struct UDLCMenuWidget_C_BndEvt__WGT_Nick_K2Node_ComponentBoundEvent_1_OnIconClicked__DelegateSignature_Params
{
};

// Function DLCMenuWidget.DLCMenuWidget_C.BndEvt__WGT_Houseboys_K2Node_ComponentBoundEvent_2_OnIconClicked__DelegateSignature
struct UDLCMenuWidget_C_BndEvt__WGT_Houseboys_K2Node_ComponentBoundEvent_2_OnIconClicked__DelegateSignature_Params
{
};

// Function DLCMenuWidget.DLCMenuWidget_C.BndEvt__WGT_Victoria_K2Node_ComponentBoundEvent_3_OnIconClicked__DelegateSignature
struct UDLCMenuWidget_C_BndEvt__WGT_Victoria_K2Node_ComponentBoundEvent_3_OnIconClicked__DelegateSignature_Params
{
};

// Function DLCMenuWidget.DLCMenuWidget_C.OnDLCConfirmAttempt
struct UDLCMenuWidget_C_OnDLCConfirmAttempt_Params
{
};

// Function DLCMenuWidget.DLCMenuWidget_C.Construct
struct UDLCMenuWidget_C_Construct_Params
{
};

// Function DLCMenuWidget.DLCMenuWidget_C.ExecuteUbergraph_DLCMenuWidget
struct UDLCMenuWidget_C_ExecuteUbergraph_DLCMenuWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
