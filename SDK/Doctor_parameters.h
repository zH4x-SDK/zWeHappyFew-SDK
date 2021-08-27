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

// Function Doctor.Doctor_C.ChooseAttack
struct ADoctor_C_ChooseAttack_Params
{
	class AGlimpseCharacter**                          Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TargetDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseCombatRange>*                  CombatRange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Doctor.Doctor_C.UserConstructionScript
struct ADoctor_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
