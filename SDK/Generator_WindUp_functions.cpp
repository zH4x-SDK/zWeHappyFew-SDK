
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

// Function Generator_WindUp.Generator_WindUp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGenerator_WindUp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Generator_WindUp.Generator_WindUp_C.UserConstructionScript");

	AGenerator_WindUp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
