
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

// Function SkillDescription.SkillDescription_C.GetControllerVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> USkillDescription_C::GetControllerVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDescription.SkillDescription_C.GetControllerVisibility");

	USkillDescription_C_GetControllerVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillDescription.SkillDescription_C.GetPopUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void USkillDescription_C::GetPopUp(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDescription.SkillDescription_C.GetPopUp");

	USkillDescription_C_GetPopUp_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillDescription.SkillDescription_C.Get_SkillInfoNameFinal_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText USkillDescription_C::Get_SkillInfoNameFinal_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDescription.SkillDescription_C.Get_SkillInfoNameFinal_Text_1");

	USkillDescription_C_Get_SkillInfoNameFinal_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillDescription.SkillDescription_C.Get_SkillInfoName_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText USkillDescription_C::Get_SkillInfoName_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDescription.SkillDescription_C.Get_SkillInfoName_Text_1");

	USkillDescription_C_Get_SkillInfoName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillDescription.SkillDescription_C.GetInfoSpecsPanel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UVerticalBox*            Panel                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USkillDescription_C::GetInfoSpecsPanel(class UVerticalBox** Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDescription.SkillDescription_C.GetInfoSpecsPanel");

	USkillDescription_C_GetInfoSpecsPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Panel != nullptr)
		*Panel = params.Panel;
}


// Function SkillDescription.SkillDescription_C.Get_SkillInfoDescFinal_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText USkillDescription_C::Get_SkillInfoDescFinal_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDescription.SkillDescription_C.Get_SkillInfoDescFinal_Text_1");

	USkillDescription_C_Get_SkillInfoDescFinal_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillDescription.SkillDescription_C.Get_SkillInfoDesc_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText USkillDescription_C::Get_SkillInfoDesc_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDescription.SkillDescription_C.Get_SkillInfoDesc_Text_1");

	USkillDescription_C_Get_SkillInfoDesc_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillDescription.SkillDescription_C.UpdateDescriptionPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGlimpseSkill*           Skill                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   DescriptionNew                 (Parm)
// struct FText                   DescriptionOld                 (Parm)

void USkillDescription_C::UpdateDescriptionPanel(class UGlimpseSkill* Skill, const struct FText& DescriptionNew, const struct FText& DescriptionOld)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDescription.SkillDescription_C.UpdateDescriptionPanel");

	USkillDescription_C_UpdateDescriptionPanel_Params params;
	params.Skill = Skill;
	params.DescriptionNew = DescriptionNew;
	params.DescriptionOld = DescriptionOld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillDescription.SkillDescription_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillDescription_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDescription.SkillDescription_C.Construct");

	USkillDescription_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillDescription.SkillDescription_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void USkillDescription_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDescription.SkillDescription_C.Tick");

	USkillDescription_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillDescription.SkillDescription_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USkillDescription_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDescription.SkillDescription_C.OnAnimationFinished");

	USkillDescription_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillDescription.SkillDescription_C.OnAnimationStarted
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void USkillDescription_C::OnAnimationStarted(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDescription.SkillDescription_C.OnAnimationStarted");

	USkillDescription_C_OnAnimationStarted_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillDescription.SkillDescription_C.BndEvt__ConfirmationButton_Cancel_K2Node_ComponentBoundEvent_7_ButtonPushed__DelegateSignature
// (BlueprintEvent)

void USkillDescription_C::BndEvt__ConfirmationButton_Cancel_K2Node_ComponentBoundEvent_7_ButtonPushed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDescription.SkillDescription_C.BndEvt__ConfirmationButton_Cancel_K2Node_ComponentBoundEvent_7_ButtonPushed__DelegateSignature");

	USkillDescription_C_BndEvt__ConfirmationButton_Cancel_K2Node_ComponentBoundEvent_7_ButtonPushed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillDescription.SkillDescription_C.BndEvt__ConfirmationButton_Buy_K2Node_ComponentBoundEvent_8_ButtonPushed__DelegateSignature
// (BlueprintEvent)

void USkillDescription_C::BndEvt__ConfirmationButton_Buy_K2Node_ComponentBoundEvent_8_ButtonPushed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDescription.SkillDescription_C.BndEvt__ConfirmationButton_Buy_K2Node_ComponentBoundEvent_8_ButtonPushed__DelegateSignature");

	USkillDescription_C_BndEvt__ConfirmationButton_Buy_K2Node_ComponentBoundEvent_8_ButtonPushed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillDescription.SkillDescription_C.ButtonHovered
// (BlueprintCallable, BlueprintEvent)

void USkillDescription_C::ButtonHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDescription.SkillDescription_C.ButtonHovered");

	USkillDescription_C_ButtonHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillDescription.SkillDescription_C.ExecuteUbergraph_SkillDescription
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USkillDescription_C::ExecuteUbergraph_SkillDescription(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDescription.SkillDescription_C.ExecuteUbergraph_SkillDescription");

	USkillDescription_C_ExecuteUbergraph_SkillDescription_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillDescription.SkillDescription_C.BuyButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USkillDescription_C::BuyButtonHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDescription.SkillDescription_C.BuyButtonHovered__DelegateSignature");

	USkillDescription_C_BuyButtonHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillDescription.SkillDescription_C.CancelButtonPushed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USkillDescription_C::CancelButtonPushed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDescription.SkillDescription_C.CancelButtonPushed__DelegateSignature");

	USkillDescription_C_CancelButtonPushed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillDescription.SkillDescription_C.BuyButtonPushed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USkillDescription_C::BuyButtonPushed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillDescription.SkillDescription_C.BuyButtonPushed__DelegateSignature");

	USkillDescription_C_BuyButtonPushed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
