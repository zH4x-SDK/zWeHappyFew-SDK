
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

// Function OllieCharacter.OllieCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOllieCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OllieCharacter.OllieCharacter_C.UserConstructionScript");

	AOllieCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OllieCharacter.OllieCharacter_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AOllieCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OllieCharacter.OllieCharacter_C.ReceiveBeginPlay");

	AOllieCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OllieCharacter.OllieCharacter_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (Parm, ZeroConstructor, IsPlainOldData)

void AOllieCharacter_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function OllieCharacter.OllieCharacter_C.ReceivePossessed");

	AOllieCharacter_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
