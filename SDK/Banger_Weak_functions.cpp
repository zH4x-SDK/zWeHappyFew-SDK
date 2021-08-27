
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

// Function Banger_Weak.Banger_Weak_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABanger_Weak_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Banger_Weak.Banger_Weak_C.UserConstructionScript");

	ABanger_Weak_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
