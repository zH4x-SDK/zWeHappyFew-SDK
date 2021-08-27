
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

// Function ParadeShelter_Fashion1.ParadeShelter_Fashion1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AParadeShelter_Fashion1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParadeShelter_Fashion1.ParadeShelter_Fashion1_C.UserConstructionScript");

	AParadeShelter_Fashion1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParadeShelter_Fashion1.ParadeShelter_Fashion1_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AParadeShelter_Fashion1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParadeShelter_Fashion1.ParadeShelter_Fashion1_C.ReceiveBeginPlay");

	AParadeShelter_Fashion1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
