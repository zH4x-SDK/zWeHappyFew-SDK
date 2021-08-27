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

// Function GlimpseDeformMesh.GlimpseDeformMeshComponent.SetControlPoint
struct UGlimpseDeformMeshComponent_SetControlPoint_Params
{
	struct FIntVector                                  Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartPos;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseDeformMesh.GlimpseDeformMeshComponent.GetControlPoint
struct UGlimpseDeformMeshComponent_GetControlPoint_Params
{
	struct FIntVector                                  Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
