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

// Function LocationSeparator.LocationSeparator_C.OnSetup
struct ULocationSeparator_C_OnSetup_Params
{
	struct FText*                                      LocationName;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function LocationSeparator.LocationSeparator_C.ExecuteUbergraph_LocationSeparator
struct ULocationSeparator_C_ExecuteUbergraph_LocationSeparator_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
