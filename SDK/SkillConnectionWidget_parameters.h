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

// Function SkillConnectionWidget.SkillConnectionWidget_C.OnUpdateDisplay
struct USkillConnectionWidget_C_OnUpdateDisplay_Params
{
	bool*                                              ConnectedSkillAvailable;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ConnectedSkillBought;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillConnectionWidget.SkillConnectionWidget_C.ExecuteUbergraph_SkillConnectionWidget
struct USkillConnectionWidget_C_ExecuteUbergraph_SkillConnectionWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
