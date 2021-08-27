
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

// Function BoneSawTargeting.BoneSawTargeting_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABoneSawTargeting_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneSawTargeting.BoneSawTargeting_C.UserConstructionScript");

	ABoneSawTargeting_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BoneSawTargeting.BoneSawTargeting_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABoneSawTargeting_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BoneSawTargeting.BoneSawTargeting_C.ReceiveBeginPlay");

	ABoneSawTargeting_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
