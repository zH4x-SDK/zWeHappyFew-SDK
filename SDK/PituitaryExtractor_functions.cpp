
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

// Function PituitaryExtractor.PituitaryExtractor_C.ReceiveCanBeUsed
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APawn**                  UseSource                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 UseTarget                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUsageDeniedReason> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EUsageDeniedReason> APituitaryExtractor_C::ReceiveCanBeUsed(class APawn** UseSource, class AActor** UseTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PituitaryExtractor.PituitaryExtractor_C.ReceiveCanBeUsed");

	APituitaryExtractor_C_ReceiveCanBeUsed_Params params;
	params.UseSource = UseSource;
	params.UseTarget = UseTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PituitaryExtractor.PituitaryExtractor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APituitaryExtractor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PituitaryExtractor.PituitaryExtractor_C.UserConstructionScript");

	APituitaryExtractor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PituitaryExtractor.PituitaryExtractor_C.ReceiveOnCompleteUse
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  UseSource                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 UseTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void APituitaryExtractor_C::ReceiveOnCompleteUse(class APawn** UseSource, class AActor** UseTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PituitaryExtractor.PituitaryExtractor_C.ReceiveOnCompleteUse");

	APituitaryExtractor_C_ReceiveOnCompleteUse_Params params;
	params.UseSource = UseSource;
	params.UseTarget = UseTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PituitaryExtractor.PituitaryExtractor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void APituitaryExtractor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PituitaryExtractor.PituitaryExtractor_C.ReceiveTick");

	APituitaryExtractor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
