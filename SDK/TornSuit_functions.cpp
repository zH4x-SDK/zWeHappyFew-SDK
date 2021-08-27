
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

// Function TornSuit.TornSuit_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATornSuit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TornSuit.TornSuit_C.UserConstructionScript");

	ATornSuit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TornSuit.TornSuit_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ATornSuit_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TornSuit.TornSuit_C.ReceiveBeginPlay");

	ATornSuit_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TornSuit.TornSuit_C.ExecuteUbergraph_TornSuit
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATornSuit_C::ExecuteUbergraph_TornSuit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TornSuit.TornSuit_C.ExecuteUbergraph_TornSuit");

	ATornSuit_C_ExecuteUbergraph_TornSuit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
