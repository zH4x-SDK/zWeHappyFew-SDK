
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

// Function HUDNotifications_Secondary.HUDNotifications_Secondary_C.Get_NotificationIcon_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UHUDNotifications_Secondary_C::Get_NotificationIcon_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUDNotifications_Secondary.HUDNotifications_Secondary_C.Get_NotificationIcon_Visibility_1");

	UHUDNotifications_Secondary_C_Get_NotificationIcon_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
