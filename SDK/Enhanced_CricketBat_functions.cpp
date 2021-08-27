
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

// Function Enhanced_CricketBat.Enhanced_CricketBat_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEnhanced_CricketBat_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enhanced_CricketBat.Enhanced_CricketBat_C.UserConstructionScript");

	AEnhanced_CricketBat_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
