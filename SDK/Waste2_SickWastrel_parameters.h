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

// Function Waste2_SickWastrel.Waste2_SickWastrel_C.ChooseAttack
struct AWaste2_SickWastrel_C_ChooseAttack_Params
{
	class AGlimpseCharacter**                          Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TargetDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseCombatRange>*                  CombatRange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Waste2_SickWastrel.Waste2_SickWastrel_C.UserConstructionScript
struct AWaste2_SickWastrel_C_UserConstructionScript_Params
{
};

// Function Waste2_SickWastrel.Waste2_SickWastrel_C.ReceiveBeginPlay
struct AWaste2_SickWastrel_C_ReceiveBeginPlay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
