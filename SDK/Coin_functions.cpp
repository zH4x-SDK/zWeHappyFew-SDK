
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

// Function Coin.Coin_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACoin_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Coin.Coin_C.UserConstructionScript");

	ACoin_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Coin.Coin_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ACoin_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Coin.Coin_C.ReceiveBeginPlay");

	ACoin_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
