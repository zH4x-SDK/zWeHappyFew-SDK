
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

// Function SkillCat_SurvivalSally.SkillCat_SurvivalSally_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillCat_SurvivalSally_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillCat_SurvivalSally.SkillCat_SurvivalSally_C.Construct");

	USkillCat_SurvivalSally_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillCat_SurvivalSally.SkillCat_SurvivalSally_C.ExecuteUbergraph_SkillCat_SurvivalSally
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USkillCat_SurvivalSally_C::ExecuteUbergraph_SkillCat_SurvivalSally(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillCat_SurvivalSally.SkillCat_SurvivalSally_C.ExecuteUbergraph_SkillCat_SurvivalSally");

	USkillCat_SurvivalSally_C_ExecuteUbergraph_SkillCat_SurvivalSally_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
