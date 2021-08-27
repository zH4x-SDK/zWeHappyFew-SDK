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

// Function CommunityMessageBoard_SpeakersCorner.CommunityMessageBoard_SpeakersCorner_C.CanInteract
struct ACommunityMessageBoard_SpeakersCorner_C_CanInteract_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionResult>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommunityMessageBoard_SpeakersCorner.CommunityMessageBoard_SpeakersCorner_C.UserConstructionScript
struct ACommunityMessageBoard_SpeakersCorner_C_UserConstructionScript_Params
{
};

// Function CommunityMessageBoard_SpeakersCorner.CommunityMessageBoard_SpeakersCorner_C.ReceiveBeginPlay
struct ACommunityMessageBoard_SpeakersCorner_C_ReceiveBeginPlay_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
