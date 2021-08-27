
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

// Function AdvancedFirstAidKit.AdvancedFirstAidKit_C.ReceiveCanBeUsed
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APawn**                  UseSource                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 UseTarget                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUsageDeniedReason> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EUsageDeniedReason> AAdvancedFirstAidKit_C::ReceiveCanBeUsed(class APawn** UseSource, class AActor** UseTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedFirstAidKit.AdvancedFirstAidKit_C.ReceiveCanBeUsed");

	AAdvancedFirstAidKit_C_ReceiveCanBeUsed_Params params;
	params.UseSource = UseSource;
	params.UseTarget = UseTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AdvancedFirstAidKit.AdvancedFirstAidKit_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAdvancedFirstAidKit_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedFirstAidKit.AdvancedFirstAidKit_C.UserConstructionScript");

	AAdvancedFirstAidKit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
