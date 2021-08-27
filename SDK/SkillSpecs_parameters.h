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

// Function SkillSpecs.SkillSpecs_C.On_SpecInfoText_GetPlayerController_1
struct USkillSpecs_C_On_SpecInfoText_GetPlayerController_1_Params
{
	class AGlimpsePlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SkillSpecs.SkillSpecs_C.Get_SpecInfoText_Text_1
struct USkillSpecs_C_Get_SpecInfoText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SkillSpecs.SkillSpecs_C.DisplayInfo
struct USkillSpecs_C_DisplayInfo_Params
{
	struct FText*                                      InfoText;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function SkillSpecs.SkillSpecs_C.ExecuteUbergraph_SkillSpecs
struct USkillSpecs_C_ExecuteUbergraph_SkillSpecs_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
