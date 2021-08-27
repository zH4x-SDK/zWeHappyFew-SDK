
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

// Function ExplodingBonesaw.ExplodingBonesaw_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AExplodingBonesaw_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplodingBonesaw.ExplodingBonesaw_C.UserConstructionScript");

	AExplodingBonesaw_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplodingBonesaw.ExplodingBonesaw_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AExplodingBonesaw_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplodingBonesaw.ExplodingBonesaw_C.ReceiveBeginPlay");

	AExplodingBonesaw_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
