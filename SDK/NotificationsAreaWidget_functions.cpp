
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

// Function NotificationsAreaWidget.NotificationsAreaWidget_C.Get_NormalNotificationsBox_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UNotificationsAreaWidget_C::Get_NormalNotificationsBox_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationsAreaWidget.NotificationsAreaWidget_C.Get_NormalNotificationsBox_Visibility_1");

	UNotificationsAreaWidget_C_Get_NormalNotificationsBox_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NotificationsAreaWidget.NotificationsAreaWidget_C.SafeZone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNotificationsAreaWidget_C::SafeZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationsAreaWidget.NotificationsAreaWidget_C.SafeZone");

	UNotificationsAreaWidget_C_SafeZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotificationsAreaWidget.NotificationsAreaWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotificationsAreaWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationsAreaWidget.NotificationsAreaWidget_C.Construct");

	UNotificationsAreaWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotificationsAreaWidget.NotificationsAreaWidget_C.OnViewportResize_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               NewSize                        (Parm, ZeroConstructor, IsPlainOldData)

void UNotificationsAreaWidget_C::OnViewportResize_Event_1(const struct FVector2D& NewSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationsAreaWidget.NotificationsAreaWidget_C.OnViewportResize_Event_1");

	UNotificationsAreaWidget_C_OnViewportResize_Event_1_Params params;
	params.NewSize = NewSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotificationsAreaWidget.NotificationsAreaWidget_C.ExecuteUbergraph_NotificationsAreaWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UNotificationsAreaWidget_C::ExecuteUbergraph_NotificationsAreaWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotificationsAreaWidget.NotificationsAreaWidget_C.ExecuteUbergraph_NotificationsAreaWidget");

	UNotificationsAreaWidget_C_ExecuteUbergraph_NotificationsAreaWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
