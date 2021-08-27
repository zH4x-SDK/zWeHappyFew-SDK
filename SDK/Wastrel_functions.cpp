
#include "../SDK.h"

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Wastrel.Wastrel_C.ChooseAttack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter**      Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TargetDistance                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGlimpseCombatRange>* CombatRange                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AWastrel_C::ChooseAttack(class AGlimpseCharacter** Target, float* TargetDistance, TEnumAsByte<EGlimpseCombatRange>* CombatRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wastrel.Wastrel_C.ChooseAttack");

	AWastrel_C_ChooseAttack_Params params;
	params.Target = Target;
	params.TargetDistance = TargetDistance;
	params.CombatRange = CombatRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Wastrel.Wastrel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWastrel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wastrel.Wastrel_C.UserConstructionScript");

	AWastrel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
