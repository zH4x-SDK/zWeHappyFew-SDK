#pragma once

#include "../SDK.h"

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function HUDNotificationSmallWidget.HUDNotificationSmallWidget_C.Get_NotificationIcon_Visibility_1
struct UHUDNotificationSmallWidget_C_Get_NotificationIcon_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUDNotificationSmallWidget.HUDNotificationSmallWidget_C.Get_CheckBox_Visibility_1
struct UHUDNotificationSmallWidget_C_Get_CheckBox_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUDNotificationSmallWidget.HUDNotificationSmallWidget_C.Construct
struct UHUDNotificationSmallWidget_C_Construct_Params
{
};

// Function HUDNotificationSmallWidget.HUDNotificationSmallWidget_C.ExecuteUbergraph_HUDNotificationSmallWidget
struct UHUDNotificationSmallWidget_C_ExecuteUbergraph_HUDNotificationSmallWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
