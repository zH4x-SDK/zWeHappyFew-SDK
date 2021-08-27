
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

// Function TearGas.TearGas_C.OnApply
// (Event, Protected, BlueprintEvent)

void UTearGas_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function TearGas.TearGas_C.OnApply");

	UTearGas_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
