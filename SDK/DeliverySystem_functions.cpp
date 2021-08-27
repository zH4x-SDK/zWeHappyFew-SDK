
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

// Function DeliverySystem.DeliverySystem_C.CanUse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EInteractionResult> ADeliverySystem_C::CanUse(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeliverySystem.DeliverySystem_C.CanUse");

	ADeliverySystem_C_CanUse_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DeliverySystem.DeliverySystem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADeliverySystem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeliverySystem.DeliverySystem_C.UserConstructionScript");

	ADeliverySystem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
