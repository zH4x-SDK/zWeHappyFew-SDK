
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

// Function PredicateTravelFractionCompletedVector.PredicateTravelFractionCompletedVector_C.ReceiveTest
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPredicateTravelFractionCompletedVector_C::ReceiveTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function PredicateTravelFractionCompletedVector.PredicateTravelFractionCompletedVector_C.ReceiveTest");

	UPredicateTravelFractionCompletedVector_C_ReceiveTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PredicateTravelFractionCompletedVector.PredicateTravelFractionCompletedVector_C.ReceiveBind
// (Event, Public, BlueprintEvent)

void UPredicateTravelFractionCompletedVector_C::ReceiveBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function PredicateTravelFractionCompletedVector.PredicateTravelFractionCompletedVector_C.ReceiveBind");

	UPredicateTravelFractionCompletedVector_C_ReceiveBind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PredicateTravelFractionCompletedVector.PredicateTravelFractionCompletedVector_C.ReceiveUnbind
// (Event, Public, BlueprintEvent)

void UPredicateTravelFractionCompletedVector_C::ReceiveUnbind()
{
	static auto fn = UObject::FindObject<UFunction>("Function PredicateTravelFractionCompletedVector.PredicateTravelFractionCompletedVector_C.ReceiveUnbind");

	UPredicateTravelFractionCompletedVector_C_ReceiveUnbind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
