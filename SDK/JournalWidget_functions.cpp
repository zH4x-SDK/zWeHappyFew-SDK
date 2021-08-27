
#include "../SDK.h"

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function JournalWidget.JournalWidget_C.Get Reward BG
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EQuestStatus>      QuestStatus                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             FGColor                        (Parm, OutParm)

void UJournalWidget_C::Get_Reward_BG(TEnumAsByte<EQuestStatus> QuestStatus, struct FSlateColor* FGColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.Get Reward BG");

	UJournalWidget_C_Get_Reward_BG_Params params;
	params.QuestStatus = QuestStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FGColor != nullptr)
		*FGColor = params.FGColor;
}


// Function JournalWidget.JournalWidget_C.Get Reward FG
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EQuestStatus>      QuestStatus                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             FGColor                        (Parm, OutParm)

void UJournalWidget_C::Get_Reward_FG(TEnumAsByte<EQuestStatus> QuestStatus, struct FSlateColor* FGColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.Get Reward FG");

	UJournalWidget_C_Get_Reward_FG_Params params;
	params.QuestStatus = QuestStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FGColor != nullptr)
		*FGColor = params.FGColor;
}


// Function JournalWidget.JournalWidget_C.IsTutorialShowing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UJournalWidget_C::IsTutorialShowing()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.IsTutorialShowing");

	UJournalWidget_C_IsTutorialShowing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JournalWidget.JournalWidget_C.IsPrimaryCategoryActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UJournalWidget_C::IsPrimaryCategoryActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.IsPrimaryCategoryActive");

	UJournalWidget_C_IsPrimaryCategoryActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JournalWidget.JournalWidget_C.UpdateSafeZone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UJournalWidget_C::UpdateSafeZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.UpdateSafeZone");

	UJournalWidget_C_UpdateSafeZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidget.JournalWidget_C.SetImageColorOld
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             Color                          (Parm)

void UJournalWidget_C::SetImageColorOld(class UImage* Image, const struct FSlateColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.SetImageColorOld");

	UJournalWidget_C_SetImageColorOld_Params params;
	params.Image = Image;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidget.JournalWidget_C.UpdateCategoryButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EQuestListCategory> NewCategory                    (Parm, ZeroConstructor, IsPlainOldData)

void UJournalWidget_C::UpdateCategoryButtons(TEnumAsByte<EQuestListCategory> NewCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.UpdateCategoryButtons");

	UJournalWidget_C_UpdateCategoryButtons_Params params;
	params.NewCategory = NewCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidget.JournalWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UJournalWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.Construct");

	UJournalWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidget.JournalWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UJournalWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.Tick");

	UJournalWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidget.JournalWidget_C.BndEvt__PrimaryCategoryButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
// (BlueprintEvent)

void UJournalWidget_C::BndEvt__PrimaryCategoryButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.BndEvt__PrimaryCategoryButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature");

	UJournalWidget_C_BndEvt__PrimaryCategoryButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidget.JournalWidget_C.BndEvt__SecondaryCategoryButton_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature
// (BlueprintEvent)

void UJournalWidget_C::BndEvt__SecondaryCategoryButton_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.BndEvt__SecondaryCategoryButton_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature");

	UJournalWidget_C_BndEvt__SecondaryCategoryButton_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidget.JournalWidget_C.BndEvt__LoreCategoryButton_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature
// (BlueprintEvent)

void UJournalWidget_C::BndEvt__LoreCategoryButton_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.BndEvt__LoreCategoryButton_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature");

	UJournalWidget_C_BndEvt__LoreCategoryButton_K2Node_ComponentBoundEvent_24_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidget.JournalWidget_C.OnQuestListCategoryChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EQuestListCategory>* Category                       (Parm, ZeroConstructor, IsPlainOldData)

void UJournalWidget_C::OnQuestListCategoryChanged(TEnumAsByte<EQuestListCategory>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.OnQuestListCategoryChanged");

	UJournalWidget_C_OnQuestListCategoryChanged_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidget.JournalWidget_C.OnSetQuestData
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  InJournalTitle                 (ConstParm, Parm, OutParm, ReferenceParm)
// float*                         QuestProgress                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EQuestStatus>*     QuestStatus                    (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NumSkillPoints                 (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NumCurrency                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bHasLoot                       (Parm, ZeroConstructor, IsPlainOldData)

void UJournalWidget_C::OnSetQuestData(struct FText* InJournalTitle, float* QuestProgress, TEnumAsByte<EQuestStatus>* QuestStatus, int* NumSkillPoints, int* NumCurrency, bool* bHasLoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.OnSetQuestData");

	UJournalWidget_C_OnSetQuestData_Params params;
	params.InJournalTitle = InJournalTitle;
	params.QuestProgress = QuestProgress;
	params.QuestStatus = QuestStatus;
	params.NumSkillPoints = NumSkillPoints;
	params.NumCurrency = NumCurrency;
	params.bHasLoot = bHasLoot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidget.JournalWidget_C.OnPrimaryListEnabled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void UJournalWidget_C::OnPrimaryListEnabled(bool* bInEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.OnPrimaryListEnabled");

	UJournalWidget_C_OnPrimaryListEnabled_Params params;
	params.bInEnabled = bInEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidget.JournalWidget_C.OnSecondaryListEnabled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void UJournalWidget_C::OnSecondaryListEnabled(bool* bInEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.OnSecondaryListEnabled");

	UJournalWidget_C_OnSecondaryListEnabled_Params params;
	params.bInEnabled = bInEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidget.JournalWidget_C.OnLoreListEnabled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void UJournalWidget_C::OnLoreListEnabled(bool* bInEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.OnLoreListEnabled");

	UJournalWidget_C_OnLoreListEnabled_Params params;
	params.bInEnabled = bInEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidget.JournalWidget_C.OnShowTutorial
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  TutorialKey                    (Parm, ZeroConstructor, IsPlainOldData)

void UJournalWidget_C::OnShowTutorial(struct FName* TutorialKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.OnShowTutorial");

	UJournalWidget_C_OnShowTutorial_Params params;
	params.TutorialKey = TutorialKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidget.JournalWidget_C.OnHideTutorial
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  TutorialKey                    (Parm, ZeroConstructor, IsPlainOldData)

void UJournalWidget_C::OnHideTutorial(struct FName* TutorialKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.OnHideTutorial");

	UJournalWidget_C_OnHideTutorial_Params params;
	params.TutorialKey = TutorialKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidget.JournalWidget_C.BndEvt__Tutorial_ConfirmButton_K2Node_ComponentBoundEvent_6_OnReleased__DelegateSignature
// (BlueprintEvent)

void UJournalWidget_C::BndEvt__Tutorial_ConfirmButton_K2Node_ComponentBoundEvent_6_OnReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.BndEvt__Tutorial_ConfirmButton_K2Node_ComponentBoundEvent_6_OnReleased__DelegateSignature");

	UJournalWidget_C_BndEvt__Tutorial_ConfirmButton_K2Node_ComponentBoundEvent_6_OnReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidget.JournalWidget_C.OnViewportResize_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               NewSize                        (Parm, ZeroConstructor, IsPlainOldData)

void UJournalWidget_C::OnViewportResize_Event_1(const struct FVector2D& NewSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.OnViewportResize_Event_1");

	UJournalWidget_C_OnViewportResize_Event_1_Params params;
	params.NewSize = NewSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidget.JournalWidget_C.BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_6_ButtonPushed__DelegateSignature
// (BlueprintEvent)

void UJournalWidget_C::BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_6_ButtonPushed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_6_ButtonPushed__DelegateSignature");

	UJournalWidget_C_BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_6_ButtonPushed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalWidget.JournalWidget_C.ExecuteUbergraph_JournalWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UJournalWidget_C::ExecuteUbergraph_JournalWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.ExecuteUbergraph_JournalWidget");

	UJournalWidget_C_ExecuteUbergraph_JournalWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
