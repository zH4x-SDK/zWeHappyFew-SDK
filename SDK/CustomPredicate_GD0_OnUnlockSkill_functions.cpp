
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

// Function CustomPredicate_GD0_OnUnlockSkill.CustomPredicate_GD0_OnUnlockSkill_C.ReceiveTest
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCustomPredicate_GD0_OnUnlockSkill_C::ReceiveTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomPredicate_GD0_OnUnlockSkill.CustomPredicate_GD0_OnUnlockSkill_C.ReceiveTest");

	UCustomPredicate_GD0_OnUnlockSkill_C_ReceiveTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomPredicate_GD0_OnUnlockSkill.CustomPredicate_GD0_OnUnlockSkill_C.ReceiveBind
// (Event, Public, BlueprintEvent)

void UCustomPredicate_GD0_OnUnlockSkill_C::ReceiveBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomPredicate_GD0_OnUnlockSkill.CustomPredicate_GD0_OnUnlockSkill_C.ReceiveBind");

	UCustomPredicate_GD0_OnUnlockSkill_C_ReceiveBind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomPredicate_GD0_OnUnlockSkill.CustomPredicate_GD0_OnUnlockSkill_C.ReceiveUnbind
// (Event, Public, BlueprintEvent)

void UCustomPredicate_GD0_OnUnlockSkill_C::ReceiveUnbind()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomPredicate_GD0_OnUnlockSkill.CustomPredicate_GD0_OnUnlockSkill_C.ReceiveUnbind");

	UCustomPredicate_GD0_OnUnlockSkill_C_ReceiveUnbind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
