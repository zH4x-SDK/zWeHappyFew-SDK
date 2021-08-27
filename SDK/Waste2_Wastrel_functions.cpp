
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

// Function Waste2_Wastrel.Waste2_Wastrel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWaste2_Wastrel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Waste2_Wastrel.Waste2_Wastrel_C.UserConstructionScript");

	AWaste2_Wastrel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
