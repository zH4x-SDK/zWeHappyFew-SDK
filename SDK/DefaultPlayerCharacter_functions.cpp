
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

// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.EvaluateStatusEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          EffectType                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          vfxTimelinePosition            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADefaultPlayerCharacter_C::EvaluateStatusEffect(TArray<class UClass*>* EffectType, float* vfxTimelinePosition, bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.EvaluateStatusEffect");

	ADefaultPlayerCharacter_C_EvaluateStatusEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EffectType != nullptr)
		*EffectType = params.EffectType;
	if (vfxTimelinePosition != nullptr)
		*vfxTimelinePosition = params.vfxTimelinePosition;
	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}


// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.ComputeTooCloseDistance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          TraceRadius                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          TraceHeight                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDrawDebugTrace>   DrawDebug                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADefaultPlayerCharacter_C::ComputeTooCloseDistance(const struct FName& BoneName, float TraceRadius, float TraceHeight, TEnumAsByte<EDrawDebugTrace> DrawDebug, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.ComputeTooCloseDistance");

	ADefaultPlayerCharacter_C_ComputeTooCloseDistance_Params params;
	params.BoneName = BoneName;
	params.TraceRadius = TraceRadius;
	params.TraceHeight = TraceHeight;
	params.DrawDebug = DrawDebug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADefaultPlayerCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.UserConstructionScript");

	ADefaultPlayerCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Mushroom_VFX_Strength__FinishedFunc
// (BlueprintEvent)

void ADefaultPlayerCharacter_C::Mushroom_VFX_Strength__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Mushroom_VFX_Strength__FinishedFunc");

	ADefaultPlayerCharacter_C_Mushroom_VFX_Strength__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Mushroom_VFX_Strength__UpdateFunc
// (BlueprintEvent)

void ADefaultPlayerCharacter_C::Mushroom_VFX_Strength__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Mushroom_VFX_Strength__UpdateFunc");

	ADefaultPlayerCharacter_C_Mushroom_VFX_Strength__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Chrono_VFX_Strength__FinishedFunc
// (BlueprintEvent)

void ADefaultPlayerCharacter_C::Chrono_VFX_Strength__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Chrono_VFX_Strength__FinishedFunc");

	ADefaultPlayerCharacter_C_Chrono_VFX_Strength__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Chrono_VFX_Strength__UpdateFunc
// (BlueprintEvent)

void ADefaultPlayerCharacter_C::Chrono_VFX_Strength__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Chrono_VFX_Strength__UpdateFunc");

	ADefaultPlayerCharacter_C_Chrono_VFX_Strength__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Phlash_VFX_Strength__FinishedFunc
// (BlueprintEvent)

void ADefaultPlayerCharacter_C::Phlash_VFX_Strength__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Phlash_VFX_Strength__FinishedFunc");

	ADefaultPlayerCharacter_C_Phlash_VFX_Strength__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Phlash_VFX_Strength__UpdateFunc
// (BlueprintEvent)

void ADefaultPlayerCharacter_C::Phlash_VFX_Strength__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Phlash_VFX_Strength__UpdateFunc");

	ADefaultPlayerCharacter_C_Phlash_VFX_Strength__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Sunshine_VFX_Strength__FinishedFunc
// (BlueprintEvent)

void ADefaultPlayerCharacter_C::Sunshine_VFX_Strength__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Sunshine_VFX_Strength__FinishedFunc");

	ADefaultPlayerCharacter_C_Sunshine_VFX_Strength__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Sunshine_VFX_Strength__UpdateFunc
// (BlueprintEvent)

void ADefaultPlayerCharacter_C::Sunshine_VFX_Strength__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.Sunshine_VFX_Strength__UpdateFunc");

	ADefaultPlayerCharacter_C_Sunshine_VFX_Strength__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADefaultPlayerCharacter_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.ReceiveTick");

	ADefaultPlayerCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ADefaultPlayerCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.ReceiveBeginPlay");

	ADefaultPlayerCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.BndEvt__StatusEffectComponent_K2Node_ComponentBoundEvent_6_StatusEffectSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGlimpseStatusEffectBase* Effect                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADefaultPlayerCharacter_C::BndEvt__StatusEffectComponent_K2Node_ComponentBoundEvent_6_StatusEffectSignature__DelegateSignature(class UGlimpseStatusEffectBase* Effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.BndEvt__StatusEffectComponent_K2Node_ComponentBoundEvent_6_StatusEffectSignature__DelegateSignature");

	ADefaultPlayerCharacter_C_BndEvt__StatusEffectComponent_K2Node_ComponentBoundEvent_6_StatusEffectSignature__DelegateSignature_Params params;
	params.Effect = Effect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.BndEvt__StatusEffectComponent_K2Node_ComponentBoundEvent_7_StatusEffectSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGlimpseStatusEffectBase* Effect                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ADefaultPlayerCharacter_C::BndEvt__StatusEffectComponent_K2Node_ComponentBoundEvent_7_StatusEffectSignature__DelegateSignature(class UGlimpseStatusEffectBase* Effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.BndEvt__StatusEffectComponent_K2Node_ComponentBoundEvent_7_StatusEffectSignature__DelegateSignature");

	ADefaultPlayerCharacter_C_BndEvt__StatusEffectComponent_K2Node_ComponentBoundEvent_7_StatusEffectSignature__DelegateSignature_Params params;
	params.Effect = Effect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.ForceAddMushroom
// (BlueprintCallable, BlueprintEvent)

void ADefaultPlayerCharacter_C::ForceAddMushroom()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.ForceAddMushroom");

	ADefaultPlayerCharacter_C_ForceAddMushroom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.ForceAddChrono
// (BlueprintCallable, BlueprintEvent)

void ADefaultPlayerCharacter_C::ForceAddChrono()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.ForceAddChrono");

	ADefaultPlayerCharacter_C_ForceAddChrono_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.ExecuteUbergraph_DefaultPlayerCharacter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADefaultPlayerCharacter_C::ExecuteUbergraph_DefaultPlayerCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.ExecuteUbergraph_DefaultPlayerCharacter");

	ADefaultPlayerCharacter_C_ExecuteUbergraph_DefaultPlayerCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.VFX_Strength__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          VFX_Strength                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Filter                         (Parm, ZeroConstructor, IsPlainOldData)

void ADefaultPlayerCharacter_C::VFX_Strength__DelegateSignature(float VFX_Strength, int Filter)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.VFX_Strength__DelegateSignature");

	ADefaultPlayerCharacter_C_VFX_Strength__DelegateSignature_Params params;
	params.VFX_Strength = VFX_Strength;
	params.Filter = Filter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.OnThrowableHitSurface__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ADefaultPlayerCharacter_C::OnThrowableHitSurface__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultPlayerCharacter.DefaultPlayerCharacter_C.OnThrowableHitSurface__DelegateSignature");

	ADefaultPlayerCharacter_C_OnThrowableHitSurface__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
