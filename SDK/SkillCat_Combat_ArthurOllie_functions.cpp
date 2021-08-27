
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

// Function SkillCat_Combat_ArthurOllie.SkillCat_Combat_ArthurOllie_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillCat_Combat_ArthurOllie_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillCat_Combat_ArthurOllie.SkillCat_Combat_ArthurOllie_C.Construct");

	USkillCat_Combat_ArthurOllie_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillCat_Combat_ArthurOllie.SkillCat_Combat_ArthurOllie_C.ExecuteUbergraph_SkillCat_Combat_ArthurOllie
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USkillCat_Combat_ArthurOllie_C::ExecuteUbergraph_SkillCat_Combat_ArthurOllie(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillCat_Combat_ArthurOllie.SkillCat_Combat_ArthurOllie_C.ExecuteUbergraph_SkillCat_Combat_ArthurOllie");

	USkillCat_Combat_ArthurOllie_C_ExecuteUbergraph_SkillCat_Combat_ArthurOllie_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
