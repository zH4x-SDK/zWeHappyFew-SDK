
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

// Function Atomizer_DONOTUSE.Atomizer_DONOTUSE_C.OnFire
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn**                  InstigatorPawn                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAtomizer_DONOTUSE_C::OnFire(class APawn** InstigatorPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Atomizer_DONOTUSE.Atomizer_DONOTUSE_C.OnFire");

	AAtomizer_DONOTUSE_C_OnFire_Params params;
	params.InstigatorPawn = InstigatorPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Atomizer_DONOTUSE.Atomizer_DONOTUSE_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAtomizer_DONOTUSE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Atomizer_DONOTUSE.Atomizer_DONOTUSE_C.UserConstructionScript");

	AAtomizer_DONOTUSE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Atomizer_DONOTUSE.Atomizer_DONOTUSE_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AAtomizer_DONOTUSE_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Atomizer_DONOTUSE.Atomizer_DONOTUSE_C.ReceiveBeginPlay");

	AAtomizer_DONOTUSE_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
