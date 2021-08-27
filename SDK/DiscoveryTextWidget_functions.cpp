
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

// Function DiscoveryTextWidget.DiscoveryTextWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDiscoveryTextWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DiscoveryTextWidget.DiscoveryTextWidget_C.Construct");

	UDiscoveryTextWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiscoveryTextWidget.DiscoveryTextWidget_C.ExecuteUbergraph_DiscoveryTextWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDiscoveryTextWidget_C::ExecuteUbergraph_DiscoveryTextWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DiscoveryTextWidget.DiscoveryTextWidget_C.ExecuteUbergraph_DiscoveryTextWidget");

	UDiscoveryTextWidget_C_ExecuteUbergraph_DiscoveryTextWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
