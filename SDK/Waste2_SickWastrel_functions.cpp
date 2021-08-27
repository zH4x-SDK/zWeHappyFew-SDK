
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

// Function Waste2_SickWastrel.Waste2_SickWastrel_C.ChooseAttack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter**      Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TargetDistance                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGlimpseCombatRange>* CombatRange                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AWaste2_SickWastrel_C::ChooseAttack(class AGlimpseCharacter** Target, float* TargetDistance, TEnumAsByte<EGlimpseCombatRange>* CombatRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Waste2_SickWastrel.Waste2_SickWastrel_C.ChooseAttack");

	AWaste2_SickWastrel_C_ChooseAttack_Params params;
	params.Target = Target;
	params.TargetDistance = TargetDistance;
	params.CombatRange = CombatRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Waste2_SickWastrel.Waste2_SickWastrel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWaste2_SickWastrel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Waste2_SickWastrel.Waste2_SickWastrel_C.UserConstructionScript");

	AWaste2_SickWastrel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Waste2_SickWastrel.Waste2_SickWastrel_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AWaste2_SickWastrel_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Waste2_SickWastrel.Waste2_SickWastrel_C.ReceiveBeginPlay");

	AWaste2_SickWastrel_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
