
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

// Function AchievementsMenuWidgetEntry.AchievementsMenuWidgetEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAchievementsMenuWidgetEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AchievementsMenuWidgetEntry.AchievementsMenuWidgetEntry_C.Construct");

	UAchievementsMenuWidgetEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AchievementsMenuWidgetEntry.AchievementsMenuWidgetEntry_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAchievementsMenuWidgetEntry_C::BndEvt__Button_6_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AchievementsMenuWidgetEntry.AchievementsMenuWidgetEntry_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UAchievementsMenuWidgetEntry_C_BndEvt__Button_6_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AchievementsMenuWidgetEntry.AchievementsMenuWidgetEntry_C.SetupEntry
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  AchievementName                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText*                  AchievementDescription         (ConstParm, Parm, OutParm, ReferenceParm)
// class UTexture2D**             AchievementIcon                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAchievementsMenuWidgetEntry_C::SetupEntry(struct FText* AchievementName, struct FText* AchievementDescription, class UTexture2D** AchievementIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function AchievementsMenuWidgetEntry.AchievementsMenuWidgetEntry_C.SetupEntry");

	UAchievementsMenuWidgetEntry_C_SetupEntry_Params params;
	params.AchievementName = AchievementName;
	params.AchievementDescription = AchievementDescription;
	params.AchievementIcon = AchievementIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AchievementsMenuWidgetEntry.AchievementsMenuWidgetEntry_C.ExecuteUbergraph_AchievementsMenuWidgetEntry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAchievementsMenuWidgetEntry_C::ExecuteUbergraph_AchievementsMenuWidgetEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AchievementsMenuWidgetEntry.AchievementsMenuWidgetEntry_C.ExecuteUbergraph_AchievementsMenuWidgetEntry");

	UAchievementsMenuWidgetEntry_C_ExecuteUbergraph_AchievementsMenuWidgetEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
