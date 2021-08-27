
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

// Function GenericSecurityButton_BITSPAX.GenericSecurityButton_BITSPAX_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGenericSecurityButton_BITSPAX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericSecurityButton_BITSPAX.GenericSecurityButton_BITSPAX_C.UserConstructionScript");

	AGenericSecurityButton_BITSPAX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
