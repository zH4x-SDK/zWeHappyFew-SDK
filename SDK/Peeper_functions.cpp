
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

// Function Peeper.Peeper_C.GetInquisitiveState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter**      Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGlimpseInquisitiveState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EGlimpseInquisitiveState> APeeper_C::GetInquisitiveState(class AGlimpseCharacter** Target, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Peeper.Peeper_C.GetInquisitiveState");

	APeeper_C_GetInquisitiveState_Params params;
	params.Target = Target;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Peeper.Peeper_C.OnInquisitiveRequest
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter**      Target                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESuspicionConformityRequest>* Request                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APeeper_C::OnInquisitiveRequest(class AGlimpseCharacter** Target, TEnumAsByte<ESuspicionConformityRequest>* Request)
{
	static auto fn = UObject::FindObject<UFunction>("Function Peeper.Peeper_C.OnInquisitiveRequest");

	APeeper_C_OnInquisitiveRequest_Params params;
	params.Target = Target;
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
