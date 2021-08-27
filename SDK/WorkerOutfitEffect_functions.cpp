
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

// Function WorkerOutfitEffect.WorkerOutfitEffect_C.OnApply
// (Event, Protected, BlueprintEvent)

void UWorkerOutfitEffect_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorkerOutfitEffect.WorkerOutfitEffect_C.OnApply");

	UWorkerOutfitEffect_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WorkerOutfitEffect.WorkerOutfitEffect_C.OnRemove
// (Event, Protected, BlueprintEvent)

void UWorkerOutfitEffect_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function WorkerOutfitEffect.WorkerOutfitEffect_C.OnRemove");

	UWorkerOutfitEffect_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
