
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

// Function Gift_TEMPLATE.Gift_TEMPLATE_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGift_TEMPLATE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gift_TEMPLATE.Gift_TEMPLATE_C.UserConstructionScript");

	AGift_TEMPLATE_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gift_TEMPLATE.Gift_TEMPLATE_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AGift_TEMPLATE_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gift_TEMPLATE.Gift_TEMPLATE_C.ReceiveBeginPlay");

	AGift_TEMPLATE_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gift_TEMPLATE.Gift_TEMPLATE_C.OnGiftedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)
// class AGlimpseCharacter*       Giver                          (Parm, ZeroConstructor, IsPlainOldData)
// class AGlimpseCharacter*       Receiver                       (Parm, ZeroConstructor, IsPlainOldData)

void AGift_TEMPLATE_C::OnGiftedEvent(bool bSuccess, class AGlimpseCharacter* Giver, class AGlimpseCharacter* Receiver)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gift_TEMPLATE.Gift_TEMPLATE_C.OnGiftedEvent");

	AGift_TEMPLATE_C_OnGiftedEvent_Params params;
	params.bSuccess = bSuccess;
	params.Giver = Giver;
	params.Receiver = Receiver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gift_TEMPLATE.Gift_TEMPLATE_C.ExecuteUbergraph_Gift_TEMPLATE
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGift_TEMPLATE_C::ExecuteUbergraph_Gift_TEMPLATE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gift_TEMPLATE.Gift_TEMPLATE_C.ExecuteUbergraph_Gift_TEMPLATE");

	AGift_TEMPLATE_C_ExecuteUbergraph_Gift_TEMPLATE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
