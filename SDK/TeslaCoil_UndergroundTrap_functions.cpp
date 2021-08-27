
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

// Function TeslaCoil_UndergroundTrap.TeslaCoil_UndergroundTrap_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATeslaCoil_UndergroundTrap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeslaCoil_UndergroundTrap.TeslaCoil_UndergroundTrap_C.UserConstructionScript");

	ATeslaCoil_UndergroundTrap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeslaCoil_UndergroundTrap.TeslaCoil_UndergroundTrap_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ATeslaCoil_UndergroundTrap_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeslaCoil_UndergroundTrap.TeslaCoil_UndergroundTrap_C.ReceiveTick");

	ATeslaCoil_UndergroundTrap_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
