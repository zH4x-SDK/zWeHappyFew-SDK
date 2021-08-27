
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

// Function HUDNotificationSmallWidget.HUDNotificationSmallWidget_C.Get_NotificationIcon_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UHUDNotificationSmallWidget_C::Get_NotificationIcon_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDNotificationSmallWidget.HUDNotificationSmallWidget_C.Get_NotificationIcon_Visibility_1");

	UHUDNotificationSmallWidget_C_Get_NotificationIcon_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUDNotificationSmallWidget.HUDNotificationSmallWidget_C.Get_CheckBox_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UHUDNotificationSmallWidget_C::Get_CheckBox_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDNotificationSmallWidget.HUDNotificationSmallWidget_C.Get_CheckBox_Visibility_1");

	UHUDNotificationSmallWidget_C_Get_CheckBox_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUDNotificationSmallWidget.HUDNotificationSmallWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUDNotificationSmallWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDNotificationSmallWidget.HUDNotificationSmallWidget_C.Construct");

	UHUDNotificationSmallWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDNotificationSmallWidget.HUDNotificationSmallWidget_C.ExecuteUbergraph_HUDNotificationSmallWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHUDNotificationSmallWidget_C::ExecuteUbergraph_HUDNotificationSmallWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDNotificationSmallWidget.HUDNotificationSmallWidget_C.ExecuteUbergraph_HUDNotificationSmallWidget");

	UHUDNotificationSmallWidget_C_ExecuteUbergraph_HUDNotificationSmallWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
