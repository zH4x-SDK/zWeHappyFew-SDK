
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

// Function PatrolBase.PatrolBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APatrolBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PatrolBase.PatrolBase_C.UserConstructionScript");

	APatrolBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PatrolBase.PatrolBase_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void APatrolBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PatrolBase.PatrolBase_C.ReceiveBeginPlay");

	APatrolBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PatrolBase.PatrolBase_C.ExecuteUbergraph_PatrolBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APatrolBase_C::ExecuteUbergraph_PatrolBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PatrolBase.PatrolBase_C.ExecuteUbergraph_PatrolBase");

	APatrolBase_C_ExecuteUbergraph_PatrolBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
