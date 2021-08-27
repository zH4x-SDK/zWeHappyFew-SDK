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

// Function DefaultCutsceneWidget.DefaultCutsceneWidget_C.UpdateSkipProgress
struct UDefaultCutsceneWidget_C_UpdateSkipProgress_Params
{
	float                                              progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefaultCutsceneWidget.DefaultCutsceneWidget_C.SetSkipProgress
struct UDefaultCutsceneWidget_C_SetSkipProgress_Params
{
	float*                                             progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefaultCutsceneWidget.DefaultCutsceneWidget_C.ExecuteUbergraph_DefaultCutsceneWidget
struct UDefaultCutsceneWidget_C_ExecuteUbergraph_DefaultCutsceneWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
