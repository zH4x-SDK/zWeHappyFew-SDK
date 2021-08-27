
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

// Function Search_Medkit01.Search_Medkit01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASearch_Medkit01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Search_Medkit01.Search_Medkit01_C.UserConstructionScript");

	ASearch_Medkit01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
