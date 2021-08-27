
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

// Function HallucinogenicMushroom_PermanentNPC.HallucinogenicMushroom_PermanentNPC_C.OnRemove
// (Event, Protected, BlueprintEvent)

void UHallucinogenicMushroom_PermanentNPC_C::OnRemove()
{
	static auto fn = UObject::FindObject<UFunction>("Function HallucinogenicMushroom_PermanentNPC.HallucinogenicMushroom_PermanentNPC_C.OnRemove");

	UHallucinogenicMushroom_PermanentNPC_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HallucinogenicMushroom_PermanentNPC.HallucinogenicMushroom_PermanentNPC_C.OnTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UHallucinogenicMushroom_PermanentNPC_C::OnTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HallucinogenicMushroom_PermanentNPC.HallucinogenicMushroom_PermanentNPC_C.OnTick");

	UHallucinogenicMushroom_PermanentNPC_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
