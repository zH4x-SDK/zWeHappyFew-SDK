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

// Function AchievementsMenuWidgetEntry.AchievementsMenuWidgetEntry_C.Construct
struct UAchievementsMenuWidgetEntry_C_Construct_Params
{
};

// Function AchievementsMenuWidgetEntry.AchievementsMenuWidgetEntry_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UAchievementsMenuWidgetEntry_C_BndEvt__Button_6_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function AchievementsMenuWidgetEntry.AchievementsMenuWidgetEntry_C.SetupEntry
struct UAchievementsMenuWidgetEntry_C_SetupEntry_Params
{
	struct FText*                                      AchievementName;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText*                                      AchievementDescription;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UTexture2D**                                 AchievementIcon;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AchievementsMenuWidgetEntry.AchievementsMenuWidgetEntry_C.ExecuteUbergraph_AchievementsMenuWidgetEntry
struct UAchievementsMenuWidgetEntry_C_ExecuteUbergraph_AchievementsMenuWidgetEntry_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
