
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

// Function SimpleInteractiveActor.SimpleInteractiveActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASimpleInteractiveActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleInteractiveActor.SimpleInteractiveActor_C.UserConstructionScript");

	ASimpleInteractiveActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimpleInteractiveActor.SimpleInteractiveActor_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ASimpleInteractiveActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimpleInteractiveActor.SimpleInteractiveActor_C.ReceiveBeginPlay");

	ASimpleInteractiveActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
