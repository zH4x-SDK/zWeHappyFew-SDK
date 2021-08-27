
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

// Function Rock.Rock_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARock_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Rock.Rock_C.UserConstructionScript");

	ARock_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rock.Rock_C.ReceiveOnHitThrow
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  InstigatorPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void ARock_C::ReceiveOnHitThrow(class APawn** InstigatorPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rock.Rock_C.ReceiveOnHitThrow");

	ARock_C_ReceiveOnHitThrow_Params params;
	params.InstigatorPawn = InstigatorPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Rock.Rock_C.ExecuteUbergraph_Rock
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARock_C::ExecuteUbergraph_Rock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rock.Rock_C.ExecuteUbergraph_Rock");

	ARock_C_ExecuteUbergraph_Rock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
