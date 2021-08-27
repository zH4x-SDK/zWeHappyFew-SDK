
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

// Function PredicateTravelFractionCompleted.PredicateTravelFractionCompleted_C.ReceiveTest
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPredicateTravelFractionCompleted_C::ReceiveTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function PredicateTravelFractionCompleted.PredicateTravelFractionCompleted_C.ReceiveTest");

	UPredicateTravelFractionCompleted_C_ReceiveTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PredicateTravelFractionCompleted.PredicateTravelFractionCompleted_C.ReceiveBind
// (Event, Public, BlueprintEvent)

void UPredicateTravelFractionCompleted_C::ReceiveBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function PredicateTravelFractionCompleted.PredicateTravelFractionCompleted_C.ReceiveBind");

	UPredicateTravelFractionCompleted_C_ReceiveBind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PredicateTravelFractionCompleted.PredicateTravelFractionCompleted_C.ReceiveUnbind
// (Event, Public, BlueprintEvent)

void UPredicateTravelFractionCompleted_C::ReceiveUnbind()
{
	static auto fn = UObject::FindObject<UFunction>("Function PredicateTravelFractionCompleted.PredicateTravelFractionCompleted_C.ReceiveUnbind");

	UPredicateTravelFractionCompleted_C_ReceiveUnbind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
