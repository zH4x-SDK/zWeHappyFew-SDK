
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

// Function Jerky.Jerky_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AJerky_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Jerky.Jerky_C.UserConstructionScript");

	AJerky_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jerky.Jerky_C.ReceiveOnCompleteUse
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  UseSource                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 UseTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void AJerky_C::ReceiveOnCompleteUse(class APawn** UseSource, class AActor** UseTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jerky.Jerky_C.ReceiveOnCompleteUse");

	AJerky_C_ReceiveOnCompleteUse_Params params;
	params.UseSource = UseSource;
	params.UseTarget = UseTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Jerky.Jerky_C.ExecuteUbergraph_Jerky
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AJerky_C::ExecuteUbergraph_Jerky(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Jerky.Jerky_C.ExecuteUbergraph_Jerky");

	AJerky_C_ExecuteUbergraph_Jerky_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
