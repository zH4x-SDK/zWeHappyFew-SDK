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

// Function DefaultPlayerController.DefaultPlayerController_C.UserConstructionScript
struct ADefaultPlayerController_C_UserConstructionScript_Params
{
};

// Function DefaultPlayerController.DefaultPlayerController_C.OnCountdownComplete
struct ADefaultPlayerController_C_OnCountdownComplete_Params
{
	struct FName*                                      CountdownReference;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefaultPlayerController.DefaultPlayerController_C.OnCollectibleAwarded
struct ADefaultPlayerController_C_OnCollectibleAwarded_Params
{
	class UGlimpseCollectibleGroup**                   Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CollectibleKey;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefaultPlayerController.DefaultPlayerController_C.ExecuteUbergraph_DefaultPlayerController
struct ADefaultPlayerController_C_ExecuteUbergraph_DefaultPlayerController_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefaultPlayerController.DefaultPlayerController_C.CountdownCompletePassthrough__DelegateSignature
struct ADefaultPlayerController_C_CountdownCompletePassthrough__DelegateSignature_Params
{
	struct FName                                       CountdownReference;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefaultPlayerController.DefaultPlayerController_C.PituitaryExtractorPassthrough__DelegateSignature
struct ADefaultPlayerController_C_PituitaryExtractorPassthrough__DelegateSignature_Params
{
	TEnumAsByte<EPituitaryExtractorUse>                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
