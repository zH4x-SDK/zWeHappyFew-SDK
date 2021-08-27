
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

// Function StaminaBarMarker.StaminaBarMarker_C.OnDisplay
// (Event, Public, BlueprintEvent)

void UStaminaBarMarker_C::OnDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StaminaBarMarker.StaminaBarMarker_C.OnDisplay");

	UStaminaBarMarker_C_OnDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StaminaBarMarker.StaminaBarMarker_C.ExecuteUbergraph_StaminaBarMarker
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStaminaBarMarker_C::ExecuteUbergraph_StaminaBarMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StaminaBarMarker.StaminaBarMarker_C.ExecuteUbergraph_StaminaBarMarker");

	UStaminaBarMarker_C_ExecuteUbergraph_StaminaBarMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
