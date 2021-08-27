
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

// Function Faraday_ShockPole.Faraday_ShockPole_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFaraday_ShockPole_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Faraday_ShockPole.Faraday_ShockPole_C.UserConstructionScript");

	AFaraday_ShockPole_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Faraday_ShockPole.Faraday_ShockPole_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AFaraday_ShockPole_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Faraday_ShockPole.Faraday_ShockPole_C.ReceiveBeginPlay");

	AFaraday_ShockPole_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
