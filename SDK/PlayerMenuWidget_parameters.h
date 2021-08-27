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

// Function PlayerMenuWidget.PlayerMenuWidget_C.GetNumUnreadNotesText
struct UPlayerMenuWidget_C_GetNumUnreadNotesText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlayerMenuWidget.PlayerMenuWidget_C.GetNumSkillPointsText
struct UPlayerMenuWidget_C_GetNumSkillPointsText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlayerMenuWidget.PlayerMenuWidget_C.SafeZone
struct UPlayerMenuWidget_C_SafeZone_Params
{
};

// Function PlayerMenuWidget.PlayerMenuWidget_C.OnClosePlayerMenu
struct UPlayerMenuWidget_C_OnClosePlayerMenu_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlayerMenuWidget.PlayerMenuWidget_C.Construct
struct UPlayerMenuWidget_C_Construct_Params
{
};

// Function PlayerMenuWidget.PlayerMenuWidget_C.Tick
struct UPlayerMenuWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonInventory_K2Node_ComponentBoundEvent_547_OnButtonClickedEvent__DelegateSignature
struct UPlayerMenuWidget_C_BndEvt__IconButtonInventory_K2Node_ComponentBoundEvent_547_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonStatus_K2Node_ComponentBoundEvent_564_OnButtonClickedEvent__DelegateSignature
struct UPlayerMenuWidget_C_BndEvt__IconButtonStatus_K2Node_ComponentBoundEvent_564_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonCrafting_K2Node_ComponentBoundEvent_572_OnButtonClickedEvent__DelegateSignature
struct UPlayerMenuWidget_C_BndEvt__IconButtonCrafting_K2Node_ComponentBoundEvent_572_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonJournal_K2Node_ComponentBoundEvent_581_OnButtonClickedEvent__DelegateSignature
struct UPlayerMenuWidget_C_BndEvt__IconButtonJournal_K2Node_ComponentBoundEvent_581_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonMap_K2Node_ComponentBoundEvent_355_OnButtonClickedEvent__DelegateSignature
struct UPlayerMenuWidget_C_BndEvt__IconButtonMap_K2Node_ComponentBoundEvent_355_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonStatus_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature
struct UPlayerMenuWidget_C_BndEvt__IconButtonStatus_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonInventory_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature
struct UPlayerMenuWidget_C_BndEvt__IconButtonInventory_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonCrafting_K2Node_ComponentBoundEvent_93_OnButtonHoverEvent__DelegateSignature
struct UPlayerMenuWidget_C_BndEvt__IconButtonCrafting_K2Node_ComponentBoundEvent_93_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonMap_K2Node_ComponentBoundEvent_114_OnButtonHoverEvent__DelegateSignature
struct UPlayerMenuWidget_C_BndEvt__IconButtonMap_K2Node_ComponentBoundEvent_114_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonJournal_K2Node_ComponentBoundEvent_136_OnButtonHoverEvent__DelegateSignature
struct UPlayerMenuWidget_C_BndEvt__IconButtonJournal_K2Node_ComponentBoundEvent_136_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonSkills_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature
struct UPlayerMenuWidget_C_BndEvt__IconButtonSkills_K2Node_ComponentBoundEvent_142_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__IconButtonSkills_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
struct UPlayerMenuWidget_C_BndEvt__IconButtonSkills_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerMenuWidget.PlayerMenuWidget_C.OnSubMenuChanged
struct UPlayerMenuWidget_C_OnSubMenuChanged_Params
{
	TEnumAsByte<EPlayerMenu>*                          MenuType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerMenuWidget.PlayerMenuWidget_C.OnViewportResize_Event_1
struct UPlayerMenuWidget_C_OnViewportResize_Event_1_Params
{
	struct FVector2D                                   NewSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__Icon_Button_notes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UPlayerMenuWidget_C_BndEvt__Icon_Button_notes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__Icon_Button_notes_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UPlayerMenuWidget_C_BndEvt__Icon_Button_notes_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PlayerMenuWidget.PlayerMenuWidget_C.BndEvt__Icon_Button_upgrade_K2Node_ComponentBoundEvent_184_OnButtonPressedEvent__DelegateSignature
struct UPlayerMenuWidget_C_BndEvt__Icon_Button_upgrade_K2Node_ComponentBoundEvent_184_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function PlayerMenuWidget.PlayerMenuWidget_C.ExecuteUbergraph_PlayerMenuWidget
struct UPlayerMenuWidget_C_ExecuteUbergraph_PlayerMenuWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
