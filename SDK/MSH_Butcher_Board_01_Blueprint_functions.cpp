
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

// Function MSH_Butcher_Board_01_Blueprint.MSH_Butcher_Board_01_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMSH_Butcher_Board_01_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MSH_Butcher_Board_01_Blueprint.MSH_Butcher_Board_01_Blueprint_C.UserConstructionScript");

	AMSH_Butcher_Board_01_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MSH_Butcher_Board_01_Blueprint.MSH_Butcher_Board_01_Blueprint_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AMSH_Butcher_Board_01_Blueprint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MSH_Butcher_Board_01_Blueprint.MSH_Butcher_Board_01_Blueprint_C.ReceiveBeginPlay");

	AMSH_Butcher_Board_01_Blueprint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MSH_Butcher_Board_01_Blueprint.MSH_Butcher_Board_01_Blueprint_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AMSH_Butcher_Board_01_Blueprint_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MSH_Butcher_Board_01_Blueprint.MSH_Butcher_Board_01_Blueprint_C.ReceiveTick");

	AMSH_Butcher_Board_01_Blueprint_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
