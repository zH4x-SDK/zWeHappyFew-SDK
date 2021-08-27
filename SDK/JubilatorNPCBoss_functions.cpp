
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

// Function JubilatorNPCBoss.JubilatorNPCBoss_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AJubilatorNPCBoss_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function JubilatorNPCBoss.JubilatorNPCBoss_C.UserConstructionScript");

	AJubilatorNPCBoss_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JubilatorNPCBoss.JubilatorNPCBoss_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AJubilatorNPCBoss_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function JubilatorNPCBoss.JubilatorNPCBoss_C.ReceiveBeginPlay");

	AJubilatorNPCBoss_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JubilatorNPCBoss.JubilatorNPCBoss_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AJubilatorNPCBoss_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function JubilatorNPCBoss.JubilatorNPCBoss_C.ReceiveTick");

	AJubilatorNPCBoss_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
