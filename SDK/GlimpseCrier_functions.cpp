
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

// Function GlimpseCrier.GlimpseCrier_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGlimpseCrier_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlimpseCrier.GlimpseCrier_C.UserConstructionScript");

	AGlimpseCrier_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlimpseCrier.GlimpseCrier_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AGlimpseCrier_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlimpseCrier.GlimpseCrier_C.ReceiveBeginPlay");

	AGlimpseCrier_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlimpseCrier.GlimpseCrier_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAISuspicionState> OldState                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAISuspicionState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AGlimpseCrier_C::CustomEvent_1(TEnumAsByte<EAISuspicionState> OldState, TEnumAsByte<EAISuspicionState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlimpseCrier.GlimpseCrier_C.CustomEvent_1");

	AGlimpseCrier_C_CustomEvent_1_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
