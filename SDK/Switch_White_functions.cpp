
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

// Function Switch_White.Switch_White_C.CanInteract
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   InteractSource                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EInteractionResult> ASwitch_White_C::CanInteract(class APawn* InteractSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function Switch_White.Switch_White_C.CanInteract");

	ASwitch_White_C_CanInteract_Params params;
	params.InteractSource = InteractSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Switch_White.Switch_White_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASwitch_White_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Switch_White.Switch_White_C.UserConstructionScript");

	ASwitch_White_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
