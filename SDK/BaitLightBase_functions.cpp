
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

// Function BaitLightBase.BaitLightBase_C.SetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewVisibility                 (Parm, ZeroConstructor, IsPlainOldData)

void ABaitLightBase_C::SetVisibility(bool bNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaitLightBase.BaitLightBase_C.SetVisibility");

	ABaitLightBase_C_SetVisibility_Params params;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaitLightBase.BaitLightBase_C.SetIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData)

void ABaitLightBase_C::SetIntensity(float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaitLightBase.BaitLightBase_C.SetIntensity");

	ABaitLightBase_C_SetIntensity_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaitLightBase.BaitLightBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABaitLightBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaitLightBase.BaitLightBase_C.UserConstructionScript");

	ABaitLightBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaitLightBase.BaitLightBase_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABaitLightBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaitLightBase.BaitLightBase_C.ReceiveBeginPlay");

	ABaitLightBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
