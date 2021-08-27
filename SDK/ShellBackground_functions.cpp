
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

// Function ShellBackground.ShellBackground_C.ResetBackgroundPositions
// (Public, BlueprintCallable, BlueprintEvent)

void UShellBackground_C::ResetBackgroundPositions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShellBackground.ShellBackground_C.ResetBackgroundPositions");

	UShellBackground_C_ResetBackgroundPositions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
