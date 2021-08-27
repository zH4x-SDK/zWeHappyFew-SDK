
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

// Function SickBomb.SickBomb_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASickBomb_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SickBomb.SickBomb_C.UserConstructionScript");

	ASickBomb_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SickBomb.SickBomb_C.OnContinuousEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  Thrower                        (Parm, ZeroConstructor, IsPlainOldData)
// class AGlimpseCharacter**      AffectedCharacter              (Parm, ZeroConstructor, IsPlainOldData)

void ASickBomb_C::OnContinuousEffect(class APawn** Thrower, class AGlimpseCharacter** AffectedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function SickBomb.SickBomb_C.OnContinuousEffect");

	ASickBomb_C_OnContinuousEffect_Params params;
	params.Thrower = Thrower;
	params.AffectedCharacter = AffectedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
