
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

// Function Wellette_Lovebirds.Wellette_Lovebirds_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWellette_Lovebirds_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wellette_Lovebirds.Wellette_Lovebirds_C.UserConstructionScript");

	AWellette_Lovebirds_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wellette_Lovebirds.Wellette_Lovebirds_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AWellette_Lovebirds_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wellette_Lovebirds.Wellette_Lovebirds_C.ReceiveBeginPlay");

	AWellette_Lovebirds_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
