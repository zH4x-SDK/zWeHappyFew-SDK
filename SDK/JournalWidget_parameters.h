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

// Function JournalWidget.JournalWidget_C.Get Reward BG
struct UJournalWidget_C_Get_Reward_BG_Params
{
	TEnumAsByte<EQuestStatus>                          QuestStatus;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 FGColor;                                                  // (Parm, OutParm)
};

// Function JournalWidget.JournalWidget_C.Get Reward FG
struct UJournalWidget_C_Get_Reward_FG_Params
{
	TEnumAsByte<EQuestStatus>                          QuestStatus;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 FGColor;                                                  // (Parm, OutParm)
};

// Function JournalWidget.JournalWidget_C.IsTutorialShowing
struct UJournalWidget_C_IsTutorialShowing_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JournalWidget.JournalWidget_C.IsPrimaryCategoryActive
struct UJournalWidget_C_IsPrimaryCategoryActive_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function JournalWidget.JournalWidget_C.UpdateSafeZone
struct UJournalWidget_C_UpdateSafeZone_Params
{
};

// Function JournalWidget.JournalWidget_C.SetImageColorOld
struct UJournalWidget_C_SetImageColorOld_Params
{
	class UImage*                                      Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 Color;                                                    // (Parm)
};

// Function JournalWidget.JournalWidget_C.UpdateCategoryButtons
struct UJournalWidget_C_UpdateCategoryButtons_Params
{
	TEnumAsByte<EQuestListCategory>                    NewCategory;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JournalWidget.JournalWidget_C.Construct
struct UJournalWidget_C_Construct_Params
{
};

// Function JournalWidget.JournalWidget_C.Tick
struct UJournalWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JournalWidget.JournalWidget_C.BndEvt__PrimaryCategoryButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
struct UJournalWidget_C_BndEvt__PrimaryCategoryButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params
{
};

// Function JournalWidget.JournalWidget_C.BndEvt__SecondaryCategoryButton_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature
struct UJournalWidget_C_BndEvt__SecondaryCategoryButton_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature_Params
{
};

// Function JournalWidget.JournalWidget_C.BndEvt__LoreCategoryButton_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature
struct UJournalWidget_C_BndEvt__LoreCategoryButton_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature_Params
{
};

// Function JournalWidget.JournalWidget_C.OnQuestListCategoryChanged
struct UJournalWidget_C_OnQuestListCategoryChanged_Params
{
	TEnumAsByte<EQuestListCategory>*                   Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JournalWidget.JournalWidget_C.OnSetQuestData
struct UJournalWidget_C_OnSetQuestData_Params
{
	struct FText*                                      InJournalTitle;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float*                                             QuestProgress;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EQuestStatus>*                         QuestStatus;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumSkillPoints;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumCurrency;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHasLoot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JournalWidget.JournalWidget_C.OnPrimaryListEnabled
struct UJournalWidget_C_OnPrimaryListEnabled_Params
{
	bool*                                              bInEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JournalWidget.JournalWidget_C.OnSecondaryListEnabled
struct UJournalWidget_C_OnSecondaryListEnabled_Params
{
	bool*                                              bInEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JournalWidget.JournalWidget_C.OnLoreListEnabled
struct UJournalWidget_C_OnLoreListEnabled_Params
{
	bool*                                              bInEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JournalWidget.JournalWidget_C.OnShowTutorial
struct UJournalWidget_C_OnShowTutorial_Params
{
	struct FName*                                      TutorialKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JournalWidget.JournalWidget_C.OnHideTutorial
struct UJournalWidget_C_OnHideTutorial_Params
{
	struct FName*                                      TutorialKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JournalWidget.JournalWidget_C.BndEvt__Tutorial_ConfirmButton_K2Node_ComponentBoundEvent_6_OnReleased__DelegateSignature
struct UJournalWidget_C_BndEvt__Tutorial_ConfirmButton_K2Node_ComponentBoundEvent_6_OnReleased__DelegateSignature_Params
{
};

// Function JournalWidget.JournalWidget_C.OnViewportResize_Event_1
struct UJournalWidget_C_OnViewportResize_Event_1_Params
{
	struct FVector2D                                   NewSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function JournalWidget.JournalWidget_C.BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_6_ButtonPushed__DelegateSignature
struct UJournalWidget_C_BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_6_ButtonPushed__DelegateSignature_Params
{
};

// Function JournalWidget.JournalWidget_C.ExecuteUbergraph_JournalWidget
struct UJournalWidget_C_ExecuteUbergraph_JournalWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
