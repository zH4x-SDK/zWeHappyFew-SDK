
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

// Function DickTheNaughtyDuck.DickTheNaughtyDuck_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADickTheNaughtyDuck_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DickTheNaughtyDuck.DickTheNaughtyDuck_C.UserConstructionScript");

	ADickTheNaughtyDuck_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DickTheNaughtyDuck.DickTheNaughtyDuck_C.Deactivate
// (Protected, BlueprintCallable, BlueprintEvent)

void ADickTheNaughtyDuck_C::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DickTheNaughtyDuck.DickTheNaughtyDuck_C.Deactivate");

	ADickTheNaughtyDuck_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DickTheNaughtyDuck.DickTheNaughtyDuck_C.Activate
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn**                  Thrower                        (Parm, ZeroConstructor, IsPlainOldData)

void ADickTheNaughtyDuck_C::Activate(class APawn** Thrower)
{
	static auto fn = UObject::FindObject<UFunction>("Function DickTheNaughtyDuck.DickTheNaughtyDuck_C.Activate");

	ADickTheNaughtyDuck_C_Activate_Params params;
	params.Thrower = Thrower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
