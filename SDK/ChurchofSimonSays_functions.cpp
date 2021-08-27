
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

// Function ChurchofSimonSays.ChurchofSimonSays_C.Joy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UChurchofSimonSays_C::Joy(class AGlimpseCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChurchofSimonSays.ChurchofSimonSays_C.Joy");

	UChurchofSimonSays_C_Joy_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
