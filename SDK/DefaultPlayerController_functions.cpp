
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

// Function DefaultPlayerController.DefaultPlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADefaultPlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerController.DefaultPlayerController_C.UserConstructionScript");

	ADefaultPlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultPlayerController.DefaultPlayerController_C.OnCountdownComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  CountdownReference             (Parm, ZeroConstructor, IsPlainOldData)

void ADefaultPlayerController_C::OnCountdownComplete(struct FName* CountdownReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerController.DefaultPlayerController_C.OnCountdownComplete");

	ADefaultPlayerController_C_OnCountdownComplete_Params params;
	params.CountdownReference = CountdownReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultPlayerController.DefaultPlayerController_C.OnCollectibleAwarded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UGlimpseCollectibleGroup** Group                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CollectibleKey                 (Parm, ZeroConstructor, IsPlainOldData)

void ADefaultPlayerController_C::OnCollectibleAwarded(class UGlimpseCollectibleGroup** Group, struct FName* CollectibleKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerController.DefaultPlayerController_C.OnCollectibleAwarded");

	ADefaultPlayerController_C_OnCollectibleAwarded_Params params;
	params.Group = Group;
	params.CollectibleKey = CollectibleKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultPlayerController.DefaultPlayerController_C.ExecuteUbergraph_DefaultPlayerController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADefaultPlayerController_C::ExecuteUbergraph_DefaultPlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerController.DefaultPlayerController_C.ExecuteUbergraph_DefaultPlayerController");

	ADefaultPlayerController_C_ExecuteUbergraph_DefaultPlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultPlayerController.DefaultPlayerController_C.CountdownCompletePassthrough__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CountdownReference             (Parm, ZeroConstructor, IsPlainOldData)

void ADefaultPlayerController_C::CountdownCompletePassthrough__DelegateSignature(const struct FName& CountdownReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerController.DefaultPlayerController_C.CountdownCompletePassthrough__DelegateSignature");

	ADefaultPlayerController_C_CountdownCompletePassthrough__DelegateSignature_Params params;
	params.CountdownReference = CountdownReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultPlayerController.DefaultPlayerController_C.PituitaryExtractorPassthrough__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPituitaryExtractorUse> Type                           (Parm, ZeroConstructor, IsPlainOldData)

void ADefaultPlayerController_C::PituitaryExtractorPassthrough__DelegateSignature(TEnumAsByte<EPituitaryExtractorUse> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerController.DefaultPlayerController_C.PituitaryExtractorPassthrough__DelegateSignature");

	ADefaultPlayerController_C_PituitaryExtractorPassthrough__DelegateSignature_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
