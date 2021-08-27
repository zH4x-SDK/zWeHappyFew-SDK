
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

// Function Vomiting_ForCrash_Light.Vomiting_ForCrash_Light_C.EndVomitingBout
// (Public, BlueprintCallable, BlueprintEvent)

void UVomiting_ForCrash_Light_C::EndVomitingBout()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vomiting_ForCrash_Light.Vomiting_ForCrash_Light_C.EndVomitingBout");

	UVomiting_ForCrash_Light_C_EndVomitingBout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vomiting_ForCrash_Light.Vomiting_ForCrash_Light_C.BeginVomitingBout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParticleSocketName             (Parm, ZeroConstructor, IsPlainOldData)

void UVomiting_ForCrash_Light_C::BeginVomitingBout(float Duration, const struct FName& ParticleSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vomiting_ForCrash_Light.Vomiting_ForCrash_Light_C.BeginVomitingBout");

	UVomiting_ForCrash_Light_C_BeginVomitingBout_Params params;
	params.Duration = Duration;
	params.ParticleSocketName = ParticleSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vomiting_ForCrash_Light.Vomiting_ForCrash_Light_C.OnTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UVomiting_ForCrash_Light_C::OnTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vomiting_ForCrash_Light.Vomiting_ForCrash_Light_C.OnTick");

	UVomiting_ForCrash_Light_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
