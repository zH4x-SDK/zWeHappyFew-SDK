
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

// Function TemporaryRunSpeed.TemporaryRunSpeed_C.OnApply
// (Event, Protected, BlueprintEvent)

void UTemporaryRunSpeed_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function TemporaryRunSpeed.TemporaryRunSpeed_C.OnApply");

	UTemporaryRunSpeed_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TemporaryRunSpeed.TemporaryRunSpeed_C.ExecuteUbergraph_TemporaryRunSpeed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTemporaryRunSpeed_C::ExecuteUbergraph_TemporaryRunSpeed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TemporaryRunSpeed.TemporaryRunSpeed_C.ExecuteUbergraph_TemporaryRunSpeed");

	UTemporaryRunSpeed_C_ExecuteUbergraph_TemporaryRunSpeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
