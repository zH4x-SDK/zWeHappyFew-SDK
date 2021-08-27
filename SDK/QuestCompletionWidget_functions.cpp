
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

// Function QuestCompletionWidget.QuestCompletionWidget_C.FadeInSoundEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestCompletionWidget_C::FadeInSoundEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestCompletionWidget.QuestCompletionWidget_C.FadeInSoundEvent");

	UQuestCompletionWidget_C_FadeInSoundEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestCompletionWidget.QuestCompletionWidget_C.HasQuestRewards
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestCompletionWidget_C::HasQuestRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestCompletionWidget.QuestCompletionWidget_C.HasQuestRewards");

	UQuestCompletionWidget_C_HasQuestRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestCompletionWidget.QuestCompletionWidget_C.OnGetPlayerController_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpsePlayerController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AGlimpsePlayerController* UQuestCompletionWidget_C::OnGetPlayerController_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestCompletionWidget.QuestCompletionWidget_C.OnGetPlayerController_1");

	UQuestCompletionWidget_C_OnGetPlayerController_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function QuestCompletionWidget.QuestCompletionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestCompletionWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestCompletionWidget.QuestCompletionWidget_C.Construct");

	UQuestCompletionWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestCompletionWidget.QuestCompletionWidget_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UQuestCompletionWidget_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestCompletionWidget.QuestCompletionWidget_C.OnAnimationFinished");

	UQuestCompletionWidget_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestCompletionWidget.QuestCompletionWidget_C.OnAnimationStarted
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UQuestCompletionWidget_C::OnAnimationStarted(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestCompletionWidget.QuestCompletionWidget_C.OnAnimationStarted");

	UQuestCompletionWidget_C_OnAnimationStarted_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestCompletionWidget.QuestCompletionWidget_C.ExecuteUbergraph_QuestCompletionWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UQuestCompletionWidget_C::ExecuteUbergraph_QuestCompletionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestCompletionWidget.QuestCompletionWidget_C.ExecuteUbergraph_QuestCompletionWidget");

	UQuestCompletionWidget_C_ExecuteUbergraph_QuestCompletionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
