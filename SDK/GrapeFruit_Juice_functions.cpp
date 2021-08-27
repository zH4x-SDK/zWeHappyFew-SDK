
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

// Function GrapeFruit_Juice.GrapeFruit_Juice_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGrapeFruit_Juice_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrapeFruit_Juice.GrapeFruit_Juice_C.UserConstructionScript");

	AGrapeFruit_Juice_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrapeFruit_Juice.GrapeFruit_Juice_C.ReceiveOnCompleteUse
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  UseSource                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 UseTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void AGrapeFruit_Juice_C::ReceiveOnCompleteUse(class APawn** UseSource, class AActor** UseTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrapeFruit_Juice.GrapeFruit_Juice_C.ReceiveOnCompleteUse");

	AGrapeFruit_Juice_C_ReceiveOnCompleteUse_Params params;
	params.UseSource = UseSource;
	params.UseTarget = UseTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
