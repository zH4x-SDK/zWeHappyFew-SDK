
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

// Function ExplosionActor.ExplosionActor_C.Explode
// (Public, BlueprintCallable, BlueprintEvent)

void AExplosionActor_C::Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosionActor.ExplosionActor_C.Explode");

	AExplosionActor_C_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplosionActor.ExplosionActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AExplosionActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosionActor.ExplosionActor_C.UserConstructionScript");

	AExplosionActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
