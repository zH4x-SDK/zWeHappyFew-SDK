
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

// Function Map_DigSpot.Map_DigSpot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMap_DigSpot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_DigSpot.Map_DigSpot_C.UserConstructionScript");

	AMap_DigSpot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_DigSpot.Map_DigSpot_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AMap_DigSpot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_DigSpot.Map_DigSpot_C.ReceiveBeginPlay");

	AMap_DigSpot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_DigSpot.Map_DigSpot_C.ExecuteUbergraph_Map_DigSpot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMap_DigSpot_C::ExecuteUbergraph_Map_DigSpot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_DigSpot.Map_DigSpot_C.ExecuteUbergraph_Map_DigSpot");

	AMap_DigSpot_C_ExecuteUbergraph_Map_DigSpot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
