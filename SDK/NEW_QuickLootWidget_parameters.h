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

// Function NEW_QuickLootWidget.NEW_QuickLootWidget_C.GetVisibility_1
struct UNEW_QuickLootWidget_C_GetVisibility_1_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NEW_QuickLootWidget.NEW_QuickLootWidget_C.OnGetPlayerController_1
struct UNEW_QuickLootWidget_C_OnGetPlayerController_1_Params
{
	class AGlimpsePlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NEW_QuickLootWidget.NEW_QuickLootWidget_C.Construct
struct UNEW_QuickLootWidget_C_Construct_Params
{
};

// Function NEW_QuickLootWidget.NEW_QuickLootWidget_C.ExecuteUbergraph_NEW_QuickLootWidget
struct UNEW_QuickLootWidget_C_ExecuteUbergraph_NEW_QuickLootWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
