
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

// Function BerserkSyringe.BerserkSyringe_C.ReceiveCanBeUsed
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APawn**                  UseSource                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 UseTarget                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUsageDeniedReason> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EUsageDeniedReason> ABerserkSyringe_C::ReceiveCanBeUsed(class APawn** UseSource, class AActor** UseTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BerserkSyringe.BerserkSyringe_C.ReceiveCanBeUsed");

	ABerserkSyringe_C_ReceiveCanBeUsed_Params params;
	params.UseSource = UseSource;
	params.UseTarget = UseTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BerserkSyringe.BerserkSyringe_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABerserkSyringe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BerserkSyringe.BerserkSyringe_C.UserConstructionScript");

	ABerserkSyringe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
