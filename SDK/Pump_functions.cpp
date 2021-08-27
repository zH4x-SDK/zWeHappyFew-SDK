
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

// Function Pump.Pump_C.Explode
// (Public, BlueprintCallable, BlueprintEvent)

void APump_C::Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pump.Pump_C.Explode");

	APump_C_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
