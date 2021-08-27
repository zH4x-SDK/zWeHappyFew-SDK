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

// Function TutorialToolTipPanel.TutorialToolTipPanel_C.GetKeyboardVisibility
struct UTutorialToolTipPanel_C_GetKeyboardVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TutorialToolTipPanel.TutorialToolTipPanel_C.GetControllerVisibility
struct UTutorialToolTipPanel_C_GetControllerVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TutorialToolTipPanel.TutorialToolTipPanel_C.On_Gamepad_TutorialText_GetPlayerController_1
struct UTutorialToolTipPanel_C_On_Gamepad_TutorialText_GetPlayerController_1_Params
{
	class AGlimpsePlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TutorialToolTipPanel.TutorialToolTipPanel_C.Get_Title_Text_1
struct UTutorialToolTipPanel_C_Get_Title_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TutorialToolTipPanel.TutorialToolTipPanel_C.Construct
struct UTutorialToolTipPanel_C_Construct_Params
{
};

// Function TutorialToolTipPanel.TutorialToolTipPanel_C.BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_6_ButtonPushed__DelegateSignature
struct UTutorialToolTipPanel_C_BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_6_ButtonPushed__DelegateSignature_Params
{
};

// Function TutorialToolTipPanel.TutorialToolTipPanel_C.ExecuteUbergraph_TutorialToolTipPanel
struct UTutorialToolTipPanel_C_ExecuteUbergraph_TutorialToolTipPanel_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
