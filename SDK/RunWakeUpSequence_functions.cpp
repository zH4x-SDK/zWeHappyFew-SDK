
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

// Function RunWakeUpSequence.RunWakeUpSequence_C.RunWakeUpSequence
// (Public, BlueprintCallable, BlueprintEvent)

void URunWakeUpSequence_C::RunWakeUpSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function RunWakeUpSequence.RunWakeUpSequence_C.RunWakeUpSequence");

	URunWakeUpSequence_C_RunWakeUpSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
