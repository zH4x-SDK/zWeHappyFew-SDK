
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

// Function PhysicsLantern.PhysicsLantern_C.SetIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData)

void APhysicsLantern_C::SetIntensity(float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhysicsLantern.PhysicsLantern_C.SetIntensity");

	APhysicsLantern_C_SetIntensity_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
