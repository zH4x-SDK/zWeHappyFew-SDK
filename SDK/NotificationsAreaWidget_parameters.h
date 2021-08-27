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

// Function NotificationsAreaWidget.NotificationsAreaWidget_C.Get_NormalNotificationsBox_Visibility_1
struct UNotificationsAreaWidget_C_Get_NormalNotificationsBox_Visibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NotificationsAreaWidget.NotificationsAreaWidget_C.SafeZone
struct UNotificationsAreaWidget_C_SafeZone_Params
{
};

// Function NotificationsAreaWidget.NotificationsAreaWidget_C.Construct
struct UNotificationsAreaWidget_C_Construct_Params
{
};

// Function NotificationsAreaWidget.NotificationsAreaWidget_C.OnViewportResize_Event_1
struct UNotificationsAreaWidget_C_OnViewportResize_Event_1_Params
{
	struct FVector2D                                   NewSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NotificationsAreaWidget.NotificationsAreaWidget_C.ExecuteUbergraph_NotificationsAreaWidget
struct UNotificationsAreaWidget_C_ExecuteUbergraph_NotificationsAreaWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
