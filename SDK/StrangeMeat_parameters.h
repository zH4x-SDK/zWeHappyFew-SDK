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

// Function StrangeMeat.StrangeMeat_C.UserConstructionScript
struct AStrangeMeat_C_UserConstructionScript_Params
{
};

// Function StrangeMeat.StrangeMeat_C.CustomEvent_1
struct AStrangeMeat_C_CustomEvent_1_Params
{
};

// Function StrangeMeat.StrangeMeat_C.ReceiveOnCompleteUse
struct AStrangeMeat_C_ReceiveOnCompleteUse_Params
{
	class APawn**                                      UseSource;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     UseTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StrangeMeat.StrangeMeat_C.BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature
struct AStrangeMeat_C_BndEvt__InteractionComponent_K2Node_ComponentBoundEvent_24_InteractionSignature__DelegateSignature_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function StrangeMeat.StrangeMeat_C.ExecuteUbergraph_StrangeMeat
struct AStrangeMeat_C_ExecuteUbergraph_StrangeMeat_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
