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

// Function Wastrel.Wastrel_C.ChooseAttack
struct AWastrel_C_ChooseAttack_Params
{
	class AGlimpseCharacter**                          Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TargetDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseCombatRange>*                  CombatRange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Wastrel.Wastrel_C.UserConstructionScript
struct AWastrel_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
