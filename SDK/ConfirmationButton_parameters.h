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

// Function ConfirmationButton.ConfirmationButton_C.ShowButton
struct UConfirmationButton_C_ShowButton_Params
{
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Key;                                                      // (Parm)
};

// Function ConfirmationButton.ConfirmationButton_C.OpenToolTip
struct UConfirmationButton_C_OpenToolTip_Params
{
};

// Function ConfirmationButton.ConfirmationButton_C.Update Display
struct UConfirmationButton_C_Update_Display_Params
{
};

// Function ConfirmationButton.ConfirmationButton_C.Set Enabled
struct UConfirmationButton_C_Set_Enabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConfirmationButton.ConfirmationButton_C.Hidden
struct UConfirmationButton_C_Hidden_Params
{
	bool                                               Hidden;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConfirmationButton.ConfirmationButton_C.SetConfirmationText
struct UConfirmationButton_C_SetConfirmationText_Params
{
	struct FText                                       Confirmation_Text;                                        // (Parm)
};

// Function ConfirmationButton.ConfirmationButton_C.Construct
struct UConfirmationButton_C_Construct_Params
{
};

// Function ConfirmationButton.ConfirmationButton_C.BndEvt__ApplyChangesKB_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UConfirmationButton_C_BndEvt__ApplyChangesKB_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ConfirmationButton.ConfirmationButton_C.ExecuteUbergraph_ConfirmationButton
struct UConfirmationButton_C_ExecuteUbergraph_ConfirmationButton_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConfirmationButton.ConfirmationButton_C.ButtonPushed__DelegateSignature
struct UConfirmationButton_C_ButtonPushed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
