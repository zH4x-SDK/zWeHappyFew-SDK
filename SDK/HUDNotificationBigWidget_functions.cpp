
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

// Function HUDNotificationBigWidget.HUDNotificationBigWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUDNotificationBigWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDNotificationBigWidget.HUDNotificationBigWidget_C.Construct");

	UHUDNotificationBigWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUDNotificationBigWidget.HUDNotificationBigWidget_C.ExecuteUbergraph_HUDNotificationBigWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHUDNotificationBigWidget_C::ExecuteUbergraph_HUDNotificationBigWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDNotificationBigWidget.HUDNotificationBigWidget_C.ExecuteUbergraph_HUDNotificationBigWidget");

	UHUDNotificationBigWidget_C_ExecuteUbergraph_HUDNotificationBigWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
