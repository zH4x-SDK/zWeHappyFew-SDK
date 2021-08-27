
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

// Function PredicateGateOpened.PredicateGateOpened_C.ReceiveTest
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPredicateGateOpened_C::ReceiveTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function PredicateGateOpened.PredicateGateOpened_C.ReceiveTest");

	UPredicateGateOpened_C_ReceiveTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PredicateGateOpened.PredicateGateOpened_C.ReceiveBind
// (Event, Public, BlueprintEvent)

void UPredicateGateOpened_C::ReceiveBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function PredicateGateOpened.PredicateGateOpened_C.ReceiveBind");

	UPredicateGateOpened_C_ReceiveBind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PredicateGateOpened.PredicateGateOpened_C.ReceiveUnbind
// (Event, Public, BlueprintEvent)

void UPredicateGateOpened_C::ReceiveUnbind()
{
	static auto fn = UObject::FindObject<UFunction>("Function PredicateGateOpened.PredicateGateOpened_C.ReceiveUnbind");

	UPredicateGateOpened_C_ReceiveUnbind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
