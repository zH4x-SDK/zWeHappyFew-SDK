
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

// Function SkillCat_Given_Sally.SkillCat_Given_Sally_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillCat_Given_Sally_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillCat_Given_Sally.SkillCat_Given_Sally_C.Construct");

	USkillCat_Given_Sally_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillCat_Given_Sally.SkillCat_Given_Sally_C.ExecuteUbergraph_SkillCat_Given_Sally
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USkillCat_Given_Sally_C::ExecuteUbergraph_SkillCat_Given_Sally(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillCat_Given_Sally.SkillCat_Given_Sally_C.ExecuteUbergraph_SkillCat_Given_Sally");

	USkillCat_Given_Sally_C_ExecuteUbergraph_SkillCat_Given_Sally_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
