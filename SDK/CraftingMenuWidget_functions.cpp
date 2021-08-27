
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

// Function CraftingMenuWidget.CraftingMenuWidget_C.Get_InputBindingDisplays_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UCraftingMenuWidget_C::Get_InputBindingDisplays_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.Get_InputBindingDisplays_Visibility_1");

	UCraftingMenuWidget_C_Get_InputBindingDisplays_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.Get_TutorialCategoryGlow_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UCraftingMenuWidget_C::Get_TutorialCategoryGlow_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.Get_TutorialCategoryGlow_Visibility_1");

	UCraftingMenuWidget_C_Get_TutorialCategoryGlow_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.HideCraftingTutorial
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  TutorialKey                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCraftingMenuWidget_C::HideCraftingTutorial(struct FName* TutorialKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.HideCraftingTutorial");

	UCraftingMenuWidget_C_HideCraftingTutorial_Params params;
	params.TutorialKey = TutorialKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.UpdateSafeZone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCraftingMenuWidget_C::UpdateSafeZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.UpdateSafeZone");

	UCraftingMenuWidget_C_UpdateSafeZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.GetCraftingProgress
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCraftingMenuWidget_C::GetCraftingProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.GetCraftingProgress");

	UCraftingMenuWidget_C_GetCraftingProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.Get_RecipeStatusEffectSizeBox_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UCraftingMenuWidget_C::Get_RecipeStatusEffectSizeBox_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.Get_RecipeStatusEffectSizeBox_Visibility_1");

	UCraftingMenuWidget_C_Get_RecipeStatusEffectSizeBox_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.Get_RecipeSpecSizeBox_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UCraftingMenuWidget_C::Get_RecipeSpecSizeBox_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.Get_RecipeSpecSizeBox_Visibility_1");

	UCraftingMenuWidget_C_Get_RecipeSpecSizeBox_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.UpdateCategoryButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPickupCategory>   NewCategory                    (Parm, ZeroConstructor, IsPlainOldData)

void UCraftingMenuWidget_C::UpdateCategoryButtons(TEnumAsByte<EPickupCategory> NewCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.UpdateCategoryButtons");

	UCraftingMenuWidget_C_UpdateCategoryButtons_Params params;
	params.NewCategory = NewCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCraftingMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.Construct");

	UCraftingMenuWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__CategoryButtonSurvival_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
// (BlueprintEvent)

void UCraftingMenuWidget_C::BndEvt__CategoryButtonSurvival_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__CategoryButtonSurvival_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature");

	UCraftingMenuWidget_C_BndEvt__CategoryButtonSurvival_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.OnCategoryChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPickupCategory>*  Category                       (Parm, ZeroConstructor, IsPlainOldData)

void UCraftingMenuWidget_C::OnCategoryChanged(TEnumAsByte<EPickupCategory>* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.OnCategoryChanged");

	UCraftingMenuWidget_C_OnCategoryChanged_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__CategoryButtonWearable_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature
// (BlueprintEvent)

void UCraftingMenuWidget_C::BndEvt__CategoryButtonWearable_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__CategoryButtonWearable_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature");

	UCraftingMenuWidget_C_BndEvt__CategoryButtonWearable_K2Node_ComponentBoundEvent_33_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__CategoryButtonTool_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature
// (BlueprintEvent)

void UCraftingMenuWidget_C::BndEvt__CategoryButtonTool_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__CategoryButtonTool_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature");

	UCraftingMenuWidget_C_BndEvt__CategoryButtonTool_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__CategoryButtonWeapon_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature
// (BlueprintEvent)

void UCraftingMenuWidget_C::BndEvt__CategoryButtonWeapon_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__CategoryButtonWeapon_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature");

	UCraftingMenuWidget_C_BndEvt__CategoryButtonWeapon_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__CategoryButtonChemical_K2Node_ComponentBoundEvent_45_OnClicked__DelegateSignature
// (BlueprintEvent)

void UCraftingMenuWidget_C::BndEvt__CategoryButtonChemical_K2Node_ComponentBoundEvent_45_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__CategoryButtonChemical_K2Node_ComponentBoundEvent_45_OnClicked__DelegateSignature");

	UCraftingMenuWidget_C_BndEvt__CategoryButtonChemical_K2Node_ComponentBoundEvent_45_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.OnSetCanCraft
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// bool*                          bCanCraft                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bWarning                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  CraftError                     (ConstParm, Parm, OutParm, ReferenceParm)

void UCraftingMenuWidget_C::OnSetCanCraft(bool* bCanCraft, bool* bWarning, struct FText* CraftError)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.OnSetCanCraft");

	UCraftingMenuWidget_C_OnSetCanCraft_Params params;
	params.bCanCraft = bCanCraft;
	params.bWarning = bWarning;
	params.CraftError = CraftError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.OnCraftingError
// (Event, Protected, BlueprintEvent)

void UCraftingMenuWidget_C::OnCraftingError()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.OnCraftingError");

	UCraftingMenuWidget_C_OnCraftingError_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.OnItemChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  ItemName                       (ConstParm, Parm, OutParm, ReferenceParm)
// int*                           AmountInInventory              (Parm, ZeroConstructor, IsPlainOldData)

void UCraftingMenuWidget_C::OnItemChanged(struct FText* ItemName, int* AmountInInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.OnItemChanged");

	UCraftingMenuWidget_C_OnItemChanged_Params params;
	params.ItemName = ItemName;
	params.AmountInInventory = AmountInInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__Crafting_button_K2Node_ComponentBoundEvent_46_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UCraftingMenuWidget_C::BndEvt__Crafting_button_K2Node_ComponentBoundEvent_46_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__Crafting_button_K2Node_ComponentBoundEvent_46_OnButtonPressedEvent__DelegateSignature");

	UCraftingMenuWidget_C_BndEvt__Crafting_button_K2Node_ComponentBoundEvent_46_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__Crafting_button_K2Node_ComponentBoundEvent_65_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UCraftingMenuWidget_C::BndEvt__Crafting_button_K2Node_ComponentBoundEvent_65_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__Crafting_button_K2Node_ComponentBoundEvent_65_OnButtonReleasedEvent__DelegateSignature");

	UCraftingMenuWidget_C_BndEvt__Crafting_button_K2Node_ComponentBoundEvent_65_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UCraftingMenuWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.Tick");

	UCraftingMenuWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.ShowCraftingTutorial
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  TutorialKey                    (Parm, ZeroConstructor, IsPlainOldData)

void UCraftingMenuWidget_C::ShowCraftingTutorial(struct FName* TutorialKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.ShowCraftingTutorial");

	UCraftingMenuWidget_C_ShowCraftingTutorial_Params params;
	params.TutorialKey = TutorialKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.OnViewportResize_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               NewSize                        (Parm, ZeroConstructor, IsPlainOldData)

void UCraftingMenuWidget_C::OnViewportResize_Event_1(const struct FVector2D& NewSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.OnViewportResize_Event_1");

	UCraftingMenuWidget_C_OnViewportResize_Event_1_Params params;
	params.NewSize = NewSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_7_ButtonPushed__DelegateSignature
// (BlueprintEvent)

void UCraftingMenuWidget_C::BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_7_ButtonPushed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_7_ButtonPushed__DelegateSignature");

	UCraftingMenuWidget_C_BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_7_ButtonPushed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__ConfirmationButton_C_0_K2Node_ComponentBoundEvent_8_ButtonPushed__DelegateSignature
// (BlueprintEvent)

void UCraftingMenuWidget_C::BndEvt__ConfirmationButton_C_0_K2Node_ComponentBoundEvent_8_ButtonPushed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.BndEvt__ConfirmationButton_C_0_K2Node_ComponentBoundEvent_8_ButtonPushed__DelegateSignature");

	UCraftingMenuWidget_C_BndEvt__ConfirmationButton_C_0_K2Node_ComponentBoundEvent_8_ButtonPushed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.OnCraftingSuccess
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FName*                  RecipeKey                      (Parm, ZeroConstructor, IsPlainOldData)

void UCraftingMenuWidget_C::OnCraftingSuccess(struct FName* RecipeKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.OnCraftingSuccess");

	UCraftingMenuWidget_C_OnCraftingSuccess_Params params;
	params.RecipeKey = RecipeKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftingMenuWidget.CraftingMenuWidget_C.ExecuteUbergraph_CraftingMenuWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCraftingMenuWidget_C::ExecuteUbergraph_CraftingMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftingMenuWidget.CraftingMenuWidget_C.ExecuteUbergraph_CraftingMenuWidget");

	UCraftingMenuWidget_C_ExecuteUbergraph_CraftingMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
