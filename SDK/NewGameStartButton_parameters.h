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

// Function NewGameStartButton.NewGameStartButton_C.SetActiveOption
struct UNewGameStartButton_C_SetActiveOption_Params
{
	bool                                               IsActiveOption;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewGameStartButton.NewGameStartButton_C.SetButtonText
struct UNewGameStartButton_C_SetButtonText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function NewGameStartButton.NewGameStartButton_C.Construct
struct UNewGameStartButton_C_Construct_Params
{
};

// Function NewGameStartButton.NewGameStartButton_C.BndEvt__Button_26_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
struct UNewGameStartButton_C_BndEvt__Button_26_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function NewGameStartButton.NewGameStartButton_C.OnSetActiveOption
struct UNewGameStartButton_C_OnSetActiveOption_Params
{
	bool*                                              bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewGameStartButton.NewGameStartButton_C.BndEvt__Button_26_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UNewGameStartButton_C_BndEvt__Button_26_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function NewGameStartButton.NewGameStartButton_C.ExecuteUbergraph_NewGameStartButton
struct UNewGameStartButton_C_ExecuteUbergraph_NewGameStartButton_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewGameStartButton.NewGameStartButton_C.OnClickedEvent__DelegateSignature
struct UNewGameStartButton_C_OnClickedEvent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
