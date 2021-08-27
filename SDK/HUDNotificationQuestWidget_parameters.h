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

// Function HUDNotificationQuestWidget.HUDNotificationQuestWidget_C.Get_NotificationIcon_Visibility_1
struct UHUDNotificationQuestWidget_C_Get_NotificationIcon_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUDNotificationQuestWidget.HUDNotificationQuestWidget_C.Get_CheckBox_Visibility_1
struct UHUDNotificationQuestWidget_C_Get_CheckBox_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HUDNotificationQuestWidget.HUDNotificationQuestWidget_C.Construct
struct UHUDNotificationQuestWidget_C_Construct_Params
{
};

// Function HUDNotificationQuestWidget.HUDNotificationQuestWidget_C.ExecuteUbergraph_HUDNotificationQuestWidget
struct UHUDNotificationQuestWidget_C_ExecuteUbergraph_HUDNotificationQuestWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
