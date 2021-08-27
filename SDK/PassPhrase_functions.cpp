
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

// Function PassPhrase.PassPhrase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APassPhrase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassPhrase.PassPhrase_C.UserConstructionScript");

	APassPhrase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
