
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

// Function POI_ShopKeeper.POI_ShopKeeper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APOI_ShopKeeper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_ShopKeeper.POI_ShopKeeper_C.UserConstructionScript");

	APOI_ShopKeeper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
