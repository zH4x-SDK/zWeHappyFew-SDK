
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

// Function Walkabout2.Walkabout2_C.Deactivate
// (Public, BlueprintCallable, BlueprintEvent)

void UWalkabout2_C::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Walkabout2.Walkabout2_C.Deactivate");

	UWalkabout2_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
