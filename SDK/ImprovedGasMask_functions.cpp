
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

// Function ImprovedGasMask.ImprovedGasMask_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AImprovedGasMask_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovedGasMask.ImprovedGasMask_C.UserConstructionScript");

	AImprovedGasMask_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ImprovedGasMask.ImprovedGasMask_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AImprovedGasMask_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ImprovedGasMask.ImprovedGasMask_C.ReceiveBeginPlay");

	AImprovedGasMask_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
