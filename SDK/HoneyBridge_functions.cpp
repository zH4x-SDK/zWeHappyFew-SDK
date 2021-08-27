
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

// Function HoneyBridge.HoneyBridge_C.ReceiveQuestUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGlimpsePlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EQuestStatus>*     status                         (Parm, ZeroConstructor, IsPlainOldData)

void UHoneyBridge_C::ReceiveQuestUpdated(class AGlimpsePlayerController** Controller, TEnumAsByte<EQuestStatus>* status)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoneyBridge.HoneyBridge_C.ReceiveQuestUpdated");

	UHoneyBridge_C_ReceiveQuestUpdated_Params params;
	params.Controller = Controller;
	params.status = status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
