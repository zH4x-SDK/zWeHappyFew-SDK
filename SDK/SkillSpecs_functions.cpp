
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

// Function SkillSpecs.SkillSpecs_C.On_SpecInfoText_GetPlayerController_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpsePlayerController* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AGlimpsePlayerController* USkillSpecs_C::On_SpecInfoText_GetPlayerController_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSpecs.SkillSpecs_C.On_SpecInfoText_GetPlayerController_1");

	USkillSpecs_C_On_SpecInfoText_GetPlayerController_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillSpecs.SkillSpecs_C.Get_SpecInfoText_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText USkillSpecs_C::Get_SpecInfoText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSpecs.SkillSpecs_C.Get_SpecInfoText_Text_1");

	USkillSpecs_C_Get_SpecInfoText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkillSpecs.SkillSpecs_C.DisplayInfo
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  InfoText                       (ConstParm, Parm, OutParm, ReferenceParm)

void USkillSpecs_C::DisplayInfo(struct FText* InfoText)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSpecs.SkillSpecs_C.DisplayInfo");

	USkillSpecs_C_DisplayInfo_Params params;
	params.InfoText = InfoText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillSpecs.SkillSpecs_C.ExecuteUbergraph_SkillSpecs
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USkillSpecs_C::ExecuteUbergraph_SkillSpecs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillSpecs.SkillSpecs_C.ExecuteUbergraph_SkillSpecs");

	USkillSpecs_C_ExecuteUbergraph_SkillSpecs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
