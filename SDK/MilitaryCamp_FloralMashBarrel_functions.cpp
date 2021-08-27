
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

// Function MilitaryCamp_FloralMashBarrel.MilitaryCamp_FloralMashBarrel_C.CanInteract
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   InteractSource                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EInteractionResult> AMilitaryCamp_FloralMashBarrel_C::CanInteract(class APawn* InteractSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function MilitaryCamp_FloralMashBarrel.MilitaryCamp_FloralMashBarrel_C.CanInteract");

	AMilitaryCamp_FloralMashBarrel_C_CanInteract_Params params;
	params.InteractSource = InteractSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MilitaryCamp_FloralMashBarrel.MilitaryCamp_FloralMashBarrel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMilitaryCamp_FloralMashBarrel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MilitaryCamp_FloralMashBarrel.MilitaryCamp_FloralMashBarrel_C.UserConstructionScript");

	AMilitaryCamp_FloralMashBarrel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
