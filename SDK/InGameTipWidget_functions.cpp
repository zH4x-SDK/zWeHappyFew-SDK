
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

// Function InGameTipWidget.InGameTipWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInGameTipWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameTipWidget.InGameTipWidget_C.Construct");

	UInGameTipWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameTipWidget.InGameTipWidget_C.ExecuteUbergraph_InGameTipWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UInGameTipWidget_C::ExecuteUbergraph_InGameTipWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameTipWidget.InGameTipWidget_C.ExecuteUbergraph_InGameTipWidget");

	UInGameTipWidget_C_ExecuteUbergraph_InGameTipWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
