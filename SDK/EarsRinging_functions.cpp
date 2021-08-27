
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

// Function EarsRinging.EarsRinging_C.OnApply
// (Event, Protected, BlueprintEvent)

void UEarsRinging_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function EarsRinging.EarsRinging_C.OnApply");

	UEarsRinging_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EarsRinging.EarsRinging_C.ExecuteUbergraph_EarsRinging
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEarsRinging_C::ExecuteUbergraph_EarsRinging(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EarsRinging.EarsRinging_C.ExecuteUbergraph_EarsRinging");

	UEarsRinging_C_ExecuteUbergraph_EarsRinging_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
