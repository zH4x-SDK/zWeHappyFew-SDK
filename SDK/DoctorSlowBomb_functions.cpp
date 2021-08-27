
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

// Function DoctorSlowBomb.DoctorSlowBomb_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADoctorSlowBomb_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DoctorSlowBomb.DoctorSlowBomb_C.UserConstructionScript");

	ADoctorSlowBomb_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
