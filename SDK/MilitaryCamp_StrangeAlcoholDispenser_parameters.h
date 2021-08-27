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

// Function MilitaryCamp_StrangeAlcoholDispenser.MilitaryCamp_StrangeAlcoholDispenser_C.CanInteract
struct AMilitaryCamp_StrangeAlcoholDispenser_C_CanInteract_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionResult>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MilitaryCamp_StrangeAlcoholDispenser.MilitaryCamp_StrangeAlcoholDispenser_C.UserConstructionScript
struct AMilitaryCamp_StrangeAlcoholDispenser_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
