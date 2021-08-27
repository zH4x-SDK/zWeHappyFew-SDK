#pragma once

#include "../SDK.h"

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Peeper.Peeper_C.GetInquisitiveState
struct APeeper_C_GetInquisitiveState_Params
{
	class AGlimpseCharacter**                          Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseInquisitiveState>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Peeper.Peeper_C.OnInquisitiveRequest
struct APeeper_C_OnInquisitiveRequest_Params
{
	class AGlimpseCharacter**                          Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESuspicionConformityRequest>*          Request;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
