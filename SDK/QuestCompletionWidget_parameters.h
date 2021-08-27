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

// Function QuestCompletionWidget.QuestCompletionWidget_C.FadeInSoundEvent
struct UQuestCompletionWidget_C_FadeInSoundEvent_Params
{
};

// Function QuestCompletionWidget.QuestCompletionWidget_C.HasQuestRewards
struct UQuestCompletionWidget_C_HasQuestRewards_Params
{
};

// Function QuestCompletionWidget.QuestCompletionWidget_C.OnGetPlayerController_1
struct UQuestCompletionWidget_C_OnGetPlayerController_1_Params
{
	class AGlimpsePlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QuestCompletionWidget.QuestCompletionWidget_C.Construct
struct UQuestCompletionWidget_C_Construct_Params
{
};

// Function QuestCompletionWidget.QuestCompletionWidget_C.OnAnimationFinished
struct UQuestCompletionWidget_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestCompletionWidget.QuestCompletionWidget_C.OnAnimationStarted
struct UQuestCompletionWidget_C_OnAnimationStarted_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestCompletionWidget.QuestCompletionWidget_C.ExecuteUbergraph_QuestCompletionWidget
struct UQuestCompletionWidget_C_ExecuteUbergraph_QuestCompletionWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
