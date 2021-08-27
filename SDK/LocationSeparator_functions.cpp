
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

// Function LocationSeparator.LocationSeparator_C.OnSetup
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  LocationName                   (ConstParm, Parm, OutParm, ReferenceParm)

void ULocationSeparator_C::OnSetup(struct FText* LocationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocationSeparator.LocationSeparator_C.OnSetup");

	ULocationSeparator_C_OnSetup_Params params;
	params.LocationName = LocationName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocationSeparator.LocationSeparator_C.ExecuteUbergraph_LocationSeparator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULocationSeparator_C::ExecuteUbergraph_LocationSeparator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocationSeparator.LocationSeparator_C.ExecuteUbergraph_LocationSeparator");

	ULocationSeparator_C_ExecuteUbergraph_LocationSeparator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
