
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

// Function GlimpseDeformMesh.GlimpseDeformMeshComponent.SetControlPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FIntVector              Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartPos                       (Parm, ZeroConstructor, IsPlainOldData)

void UGlimpseDeformMeshComponent::SetControlPoint(const struct FIntVector& Index, const struct FVector& StartPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlimpseDeformMesh.GlimpseDeformMeshComponent.SetControlPoint");

	UGlimpseDeformMeshComponent_SetControlPoint_Params params;
	params.Index = Index;
	params.StartPos = StartPos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlimpseDeformMesh.GlimpseDeformMeshComponent.GetControlPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FIntVector              Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UGlimpseDeformMeshComponent::GetControlPoint(const struct FIntVector& Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlimpseDeformMesh.GlimpseDeformMeshComponent.GetControlPoint");

	UGlimpseDeformMeshComponent_GetControlPoint_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
