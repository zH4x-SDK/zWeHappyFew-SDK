
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

// Function Enhanced_Cleaver.Enhanced_Cleaver_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEnhanced_Cleaver_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enhanced_Cleaver.Enhanced_Cleaver_C.UserConstructionScript");

	AEnhanced_Cleaver_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
