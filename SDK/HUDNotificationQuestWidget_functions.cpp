
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

// Function HUDNotificationQuestWidget.HUDNotificationQuestWidget_C.Get_NotificationIcon_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UHUDNotificationQuestWidget_C::Get_NotificationIcon_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDNotificationQuestWidget.HUDNotificationQuestWidget_C.Get_NotificationIcon_Visibility_1");

	UHUDNotificationQuestWidget_C_Get_NotificationIcon_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUDNotificationQuestWidget.HUDNotificationQuestWidget_C.Get_CheckBox_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UHUDNotificationQuestWidget_C::Get_CheckBox_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDNotificationQuestWidget.HUDNotificationQuestWidget_C.Get_CheckBox_Visibility_1");

	UHUDNotificationQuestWidget_C_Get_CheckBox_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUDNotificationQuestWidget.HUDNotificationQuestWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUDNotificationQuestWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDNotificationQuestWidget.HUDNotificationQuestWidget_C.Construct");

	UHUDNotificationQuestWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDNotificationQuestWidget.HUDNotificationQuestWidget_C.ExecuteUbergraph_HUDNotificationQuestWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHUDNotificationQuestWidget_C::ExecuteUbergraph_HUDNotificationQuestWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDNotificationQuestWidget.HUDNotificationQuestWidget_C.ExecuteUbergraph_HUDNotificationQuestWidget");

	UHUDNotificationQuestWidget_C_ExecuteUbergraph_HUDNotificationQuestWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
