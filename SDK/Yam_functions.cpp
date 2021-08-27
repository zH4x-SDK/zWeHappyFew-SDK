
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

// Function Yam.Yam_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AYam_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Yam.Yam_C.UserConstructionScript");

	AYam_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yam.Yam_C.ReceiveOnCompleteUse
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  UseSource                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 UseTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void AYam_C::ReceiveOnCompleteUse(class APawn** UseSource, class AActor** UseTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yam.Yam_C.ReceiveOnCompleteUse");

	AYam_C_ReceiveOnCompleteUse_Params params;
	params.UseSource = UseSource;
	params.UseTarget = UseTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Yam.Yam_C.ExecuteUbergraph_Yam
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AYam_C::ExecuteUbergraph_Yam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Yam.Yam_C.ExecuteUbergraph_Yam");

	AYam_C_ExecuteUbergraph_Yam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
