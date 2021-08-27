
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

// Function GasMask.GasMask_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGasMask_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasMask.GasMask_C.UserConstructionScript");

	AGasMask_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasMask.GasMask_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AGasMask_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasMask.GasMask_C.ReceiveBeginPlay");

	AGasMask_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
