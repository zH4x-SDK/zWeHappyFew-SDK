
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

// Function BFL_Game.BFL_Game_C.PlayerFaceThing
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Thing                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_PlayerFaceThing(class AGlimpseCharacter* Pawn, class USceneComponent* Thing, const struct FVector& Offset, float Duration, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.PlayerFaceThing");

	UBFL_Game_C_PlayerFaceThing_Params params;
	params.Pawn = Pawn;
	params.Thing = Thing;
	params.Offset = Offset;
	params.Duration = Duration;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.PlayerFaceActor
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_PlayerFaceActor(class AGlimpseCharacter* Pawn, class AActor* Actor, const struct FVector& Offset, float Duration, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.PlayerFaceActor");

	UBFL_Game_C_PlayerFaceActor_Params params;
	params.Pawn = Pawn;
	params.Actor = Actor;
	params.Offset = Offset;
	params.Duration = Duration;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.ReduceLockPickDuration
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Object                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_ReduceLockPickDuration(class APawn* Object, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.ReduceLockPickDuration");

	UBFL_Game_C_ReduceLockPickDuration_Params params;
	params.Object = Object;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.PuppetFleeToActor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseAICharacter*     refAiCharacter                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  refDespawnPoint                (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  refStatusEffect                (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_PuppetFleeToActor(class AGlimpseAICharacter* refAiCharacter, class AActor* refDespawnPoint, class UClass* refStatusEffect, class UObject* __WorldContext, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.PuppetFleeToActor");

	UBFL_Game_C_PuppetFleeToActor_Params params;
	params.refAiCharacter = refAiCharacter;
	params.refDespawnPoint = refDespawnPoint;
	params.refStatusEffect = refStatusEffect;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BFL_Game.BFL_Game_C.LevelPlayerView
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Interp_Time                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_LevelPlayerView(float Interp_Time, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.LevelPlayerView");

	UBFL_Game_C_LevelPlayerView_Params params;
	params.Interp_Time = Interp_Time;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.CheckDoorPlayerSide
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseLockable*        refDoor                        (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         frontTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         backTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   refPlayerCharacter             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayAnim                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_CheckDoorPlayerSide(class AGlimpseLockable* refDoor, class USceneComponent* frontTarget, class USceneComponent* backTarget, class APawn* refPlayerCharacter, bool PlayAnim, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.CheckDoorPlayerSide");

	UBFL_Game_C_CheckDoorPlayerSide_Params params;
	params.refDoor = refDoor;
	params.frontTarget = frontTarget;
	params.backTarget = backTarget;
	params.refPlayerCharacter = refPlayerCharacter;
	params.PlayAnim = PlayAnim;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.StartCutsceneFade
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpsePlayerController* refGlimpsePlayerController     (Parm, ZeroConstructor, IsPlainOldData)
// float                          FloatDuration                  (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_StartCutsceneFade(class AGlimpsePlayerController* refGlimpsePlayerController, float FloatDuration, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.StartCutsceneFade");

	UBFL_Game_C_StartCutsceneFade_Params params;
	params.refGlimpsePlayerController = refGlimpsePlayerController;
	params.FloatDuration = FloatDuration;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.SetPlayerLookAtPoint
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             refPlayerController            (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   refPlayerCharacter             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  refLookAtPoint                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_SetPlayerLookAtPoint(class AController* refPlayerController, class APawn* refPlayerCharacter, class AActor* refLookAtPoint, float BlendTime, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.SetPlayerLookAtPoint");

	UBFL_Game_C_SetPlayerLookAtPoint_Params params;
	params.refPlayerController = refPlayerController;
	params.refPlayerCharacter = refPlayerCharacter;
	params.refLookAtPoint = refLookAtPoint;
	params.BlendTime = BlendTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.ShowDigSpotNotification
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  refMapType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AGlimpsePlayerController* refGlimpsePlayerController     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_ShowDigSpotNotification(class UClass* refMapType, class AGlimpsePlayerController* refGlimpsePlayerController, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.ShowDigSpotNotification");

	UBFL_Game_C_ShowDigSpotNotification_Params params;
	params.refMapType = refMapType;
	params.refGlimpsePlayerController = refGlimpsePlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.HasSuit
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AGlimpseCharacter*       refCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          correctSuits                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasSuit                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_HasSuit(class AGlimpseCharacter* refCharacter, class UObject* __WorldContext, TArray<class UClass*>* correctSuits, bool* HasSuit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.HasSuit");

	UBFL_Game_C_HasSuit_Params params;
	params.refCharacter = refCharacter;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (correctSuits != nullptr)
		*correctSuits = params.correctSuits;
	if (HasSuit != nullptr)
		*HasSuit = params.HasSuit;
}


// Function BFL_Game.BFL_Game_C.KnockDownPlayer
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 SourceLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_KnockDownPlayer(const struct FVector& SourceLocation, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.KnockDownPlayer");

	UBFL_Game_C_KnockDownPlayer_Params params;
	params.SourceLocation = SourceLocation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.RandomArrayElemAvoidElem
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UObject*>         Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 ElemToAvoid                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 _                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_RandomArrayElemAvoidElem(TArray<class UObject*> Array, class UObject* ElemToAvoid, class UObject* Object, class UObject* __WorldContext, class UObject** _, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.RandomArrayElemAvoidElem");

	UBFL_Game_C_RandomArrayElemAvoidElem_Params params;
	params.Array = Array;
	params.ElemToAvoid = ElemToAvoid;
	params.Object = Object;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_ != nullptr)
		*_ = params._;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function BFL_Game.BFL_Game_C.RandomRecipe
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Island                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           LockedOnly                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBFL_Game_C::STATIC_RandomRecipe(int Island, bool LockedOnly, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.RandomRecipe");

	UBFL_Game_C_RandomRecipe_Params params;
	params.Island = Island;
	params.LockedOnly = LockedOnly;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BFL_Game.BFL_Game_C.RemoveAllWeaponsFromInv
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       NPC                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Melee                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           thrown                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_RemoveAllWeaponsFromInv(class AGlimpseCharacter* NPC, bool Melee, bool thrown, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.RemoveAllWeaponsFromInv");

	UBFL_Game_C_RemoveAllWeaponsFromInv_Params params;
	params.NPC = NPC;
	params.Melee = Melee;
	params.thrown = thrown;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.InstantSuspicionComplex
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       NPC                            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAISuspicionState> State                          (Parm, ZeroConstructor, IsPlainOldData)
// class AGlimpseAICharacter*     SuspectedCharacter             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_InstantSuspicionComplex(class AGlimpseCharacter* NPC, TEnumAsByte<EAISuspicionState> State, class AGlimpseAICharacter* SuspectedCharacter, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.InstantSuspicionComplex");

	UBFL_Game_C_InstantSuspicionComplex_Params params;
	params.NPC = NPC;
	params.State = State;
	params.SuspectedCharacter = SuspectedCharacter;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.SetPuppetAI
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AGlimpseAICharacter*> Target                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_SetPuppetAI(class UObject* __WorldContext, TArray<class AGlimpseAICharacter*>* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.SetPuppetAI");

	UBFL_Game_C_SetPuppetAI_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function BFL_Game.BFL_Game_C.StandardConversationModeSettings
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FConversationModeSettings NewParam                       (Parm, OutParm)

void UBFL_Game_C::STATIC_StandardConversationModeSettings(class UObject* __WorldContext, struct FConversationModeSettings* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.StandardConversationModeSettings");

	UBFL_Game_C_StandardConversationModeSettings_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BFL_Game.BFL_Game_C.AddHalfCapsuleToVector
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 _                              (Parm, ZeroConstructor, IsPlainOldData)
// class AGlimpseAICharacter*     NPC                            (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 __                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_AddHalfCapsuleToVector(const struct FVector& _, class AGlimpseAICharacter* NPC, class UObject* __WorldContext, struct FVector* __)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.AddHalfCapsuleToVector");

	UBFL_Game_C_AddHalfCapsuleToVector_Params params;
	params._ = _;
	params.NPC = NPC;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (__ != nullptr)
		*__ = params.__;
}


// Function BFL_Game.BFL_Game_C.GetExplicitCondition
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           _                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_GetExplicitCondition(class AActor* Actor, class UObject* __WorldContext, bool* _)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.GetExplicitCondition");

	UBFL_Game_C_GetExplicitCondition_Params params;
	params.Actor = Actor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_ != nullptr)
		*_ = params._;
}


// Function BFL_Game.BFL_Game_C.SetAcceptableGift
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseAICharacter*     Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_SetAcceptableGift(class AGlimpseAICharacter* Target, class UClass* Class, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.SetAcceptableGift");

	UBFL_Game_C_SetAcceptableGift_Params params;
	params.Target = Target;
	params.Class = Class;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.ActorsDistance2D
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  ActorA                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorB                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          _                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_ActorsDistance2D(class AActor* ActorA, class AActor* ActorB, class UObject* __WorldContext, float* _)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.ActorsDistance2D");

	UBFL_Game_C_ActorsDistance2D_Params params;
	params.ActorA = ActorA;
	params.ActorB = ActorB;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_ != nullptr)
		*_ = params._;
}


// Function BFL_Game.BFL_Game_C.KnockBackPawn
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SourceLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_KnockBackPawn(class AGlimpseCharacter* Target, float Amount, const struct FVector& SourceLocation, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.KnockBackPawn");

	UBFL_Game_C_KnockBackPawn_Params params;
	params.Target = Target;
	params.Amount = Amount;
	params.SourceLocation = SourceLocation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.RandomManual
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBFL_Game_C::STATIC_RandomManual(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.RandomManual");

	UBFL_Game_C_RandomManual_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BFL_Game.BFL_Game_C.InstantSuspicion
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseAICharacter*     NPC                            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAISuspicionState> State                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_InstantSuspicion(class AGlimpseAICharacter* NPC, TEnumAsByte<EAISuspicionState> State, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.InstantSuspicion");

	UBFL_Game_C_InstantSuspicion_Params params;
	params.NPC = NPC;
	params.State = State;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.GetAIController
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AGlimpseAICharacter*     _                              (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class AGlimpseAIController*    __                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_GetAIController(class AGlimpseAICharacter* _, class UObject* __WorldContext, class AGlimpseAIController** __)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.GetAIController");

	UBFL_Game_C_GetAIController_Params params;
	params._ = _;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (__ != nullptr)
		*__ = params.__;
}


// Function BFL_Game.BFL_Game_C.SetExplicitCondition
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_SetExplicitCondition(class AActor* Actor, bool bEnabled, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.SetExplicitCondition");

	UBFL_Game_C_SetExplicitCondition_Params params;
	params.Actor = Actor;
	params.bEnabled = bEnabled;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.PrintString
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 inString                       (Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_PrintString(const struct FString& inString, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.PrintString");

	UBFL_Game_C_PrintString_Params params;
	params.inString = inString;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.ShowInGameTip
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TipKey                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_ShowInGameTip(const struct FName& TipKey, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.ShowInGameTip");

	UBFL_Game_C_ShowInGameTip_Params params;
	params.TipKey = TipKey;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.IfIsAlive
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_IfIsAlive(class AGlimpseCharacter* Target, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.IfIsAlive");

	UBFL_Game_C_IfIsAlive_Params params;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.RandomArrayElem
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UObject*>         Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 _                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_RandomArrayElem(TArray<class UObject*> Array, class UObject* __WorldContext, class UObject** _)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.RandomArrayElem");

	UBFL_Game_C_RandomArrayElem_Params params;
	params.Array = Array;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_ != nullptr)
		*_ = params._;
}


// Function BFL_Game.BFL_Game_C.Roll
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Chance                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           _                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_Roll(float Chance, class UObject* __WorldContext, bool* _)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.Roll");

	UBFL_Game_C_Roll_Params params;
	params.Chance = Chance;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_ != nullptr)
		*_ = params._;
}


// Function BFL_Game.BFL_Game_C.ActorOverlapsPlayer
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           _                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_ActorOverlapsPlayer(class AActor* Target, class UObject* __WorldContext, bool* _)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.ActorOverlapsPlayer");

	UBFL_Game_C_ActorOverlapsPlayer_Params params;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_ != nullptr)
		*_ = params._;
}


// Function BFL_Game.BFL_Game_C.RemovePickup
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  PickupClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_RemovePickup(class UClass* PickupClass, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.RemovePickup");

	UBFL_Game_C_RemovePickup_Params params;
	params.PickupClass = PickupClass;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.AddPickup
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_AddPickup(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.AddPickup");

	UBFL_Game_C_AddPickup_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.NPCSetCollisionEnabled
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_NPCSetCollisionEnabled(class ACharacter* Target, bool Enabled, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.NPCSetCollisionEnabled");

	UBFL_Game_C_NPCSetCollisionEnabled_Params params;
	params.Target = Target;
	params.Enabled = Enabled;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.SetTriggerActive
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATriggerBase*            Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_SetTriggerActive(class ATriggerBase* Target, bool Active, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.SetTriggerActive");

	UBFL_Game_C_SetTriggerActive_Params params;
	params.Target = Target;
	params.Active = Active;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.RefreshTargeting
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_RefreshTargeting(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.RefreshTargeting");

	UBFL_Game_C_RefreshTargeting_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.TurnPawnTowardsActor
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseCharacter*       Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_TurnPawnTowardsActor(class AGlimpseCharacter* Pawn, class AActor* Actor, float Duration, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.TurnPawnTowardsActor");

	UBFL_Game_C_TurnPawnTowardsActor_Params params;
	params.Pawn = Pawn;
	params.Actor = Actor;
	params.Duration = Duration;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.CurrentTimeOfDayIsEnabledInStruct
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FsTimeOfDay             sTimeOfDay                     (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           _                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_CurrentTimeOfDayIsEnabledInStruct(const struct FsTimeOfDay& sTimeOfDay, class UObject* __WorldContext, bool* _)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.CurrentTimeOfDayIsEnabledInStruct");

	UBFL_Game_C_CurrentTimeOfDayIsEnabledInStruct_Params params;
	params.sTimeOfDay = sTimeOfDay;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_ != nullptr)
		*_ = params._;
}


// Function BFL_Game.BFL_Game_C.GetWorldRS
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            sgEdSeed                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FRandomStream           NewParam                       (Parm, OutParm, ZeroConstructor)

void UBFL_Game_C::STATIC_GetWorldRS(int sgEdSeed, class UObject* __WorldContext, struct FRandomStream* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.GetWorldRS");

	UBFL_Game_C_GetWorldRS_Params params;
	params.sgEdSeed = sgEdSeed;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BFL_Game.BFL_Game_C.RegisterEditorSeed
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            sgSeed                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           sgFirstTimeOBP                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_RegisterEditorSeed(bool sgFirstTimeOBP, class UObject* __WorldContext, int* sgSeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.RegisterEditorSeed");

	UBFL_Game_C_RegisterEditorSeed_Params params;
	params.sgFirstTimeOBP = sgFirstTimeOBP;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (sgSeed != nullptr)
		*sgSeed = params.sgSeed;
}


// Function BFL_Game.BFL_Game_C.CompleteObjective
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Quest                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Objective                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_CompleteObjective(class UClass* Quest, const struct FName& Objective, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.CompleteObjective");

	UBFL_Game_C_CompleteObjective_Params params;
	params.Quest = Quest;
	params.Objective = Objective;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.ClassIsProjectile
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           _                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_ClassIsProjectile(class AActor* Class, class UObject* __WorldContext, bool* _)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.ClassIsProjectile");

	UBFL_Game_C_ClassIsProjectile_Params params;
	params.Class = Class;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_ != nullptr)
		*_ = params._;
}


// Function BFL_Game.BFL_Game_C.StopPolishLayer
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpseAICharacter*     NewParam                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           StopBarks                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           StopAnim                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_StopPolishLayer(class AGlimpseAICharacter* NewParam, bool StopBarks, bool StopAnim, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.StopPolishLayer");

	UBFL_Game_C_StopPolishLayer_Params params;
	params.NewParam = NewParam;
	params.StopBarks = StopBarks;
	params.StopAnim = StopAnim;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.StatusEffectShouldInteruptNPC
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  StatusEffect                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           _                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_StatusEffectShouldInteruptNPC(class UClass* StatusEffect, class UObject* __WorldContext, bool* _)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.StatusEffectShouldInteruptNPC");

	UBFL_Game_C_StatusEffectShouldInteruptNPC_Params params;
	params.StatusEffect = StatusEffect;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_ != nullptr)
		*_ = params._;
}


// Function BFL_Game.BFL_Game_C.GetPlayerPawn
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class AGlimpsePlayerCharacter* _                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_GetPlayerPawn(class UObject* __WorldContext, class AGlimpsePlayerCharacter** _)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.GetPlayerPawn");

	UBFL_Game_C_GetPlayerPawn_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_ != nullptr)
		*_ = params._;
}


// Function BFL_Game.BFL_Game_C.SetIdleBarks
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_SetIdleBarks(bool Enabled, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.SetIdleBarks");

	UBFL_Game_C_SetIdleBarks_Params params;
	params.Enabled = Enabled;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.RandomIntInRangeFromStream
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Min                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            _                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_RandomIntInRangeFromStream(class UObject* Object, int Min, int Max, class UObject* __WorldContext, int* _)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.RandomIntInRangeFromStream");

	UBFL_Game_C_RandomIntInRangeFromStream_Params params;
	params.Object = Object;
	params.Min = Min;
	params.Max = Max;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_ != nullptr)
		*_ = params._;
}


// Function BFL_Game.BFL_Game_C.MoveActorsToRandomPoints
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Actors                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          Points                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            sgEdSeed                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_MoveActorsToRandomPoints(TArray<class AActor*> Points, int sgEdSeed, class UObject* __WorldContext, TArray<class AActor*>* Actors)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.MoveActorsToRandomPoints");

	UBFL_Game_C_MoveActorsToRandomPoints_Params params;
	params.Points = Points;
	params.sgEdSeed = sgEdSeed;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
}


// Function BFL_Game.BFL_Game_C.GetPlayerPawnAndController
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class ADefaultPlayerCharacter_C* PlayerPawn                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AGlimpsePlayerController* Controller                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_GetPlayerPawnAndController(class AActor* Actor, class UObject* WorldContext, class UObject* __WorldContext, class ADefaultPlayerCharacter_C** PlayerPawn, class AGlimpsePlayerController** Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.GetPlayerPawnAndController");

	UBFL_Game_C_GetPlayerPawnAndController_Params params;
	params.Actor = Actor;
	params.WorldContext = WorldContext;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerPawn != nullptr)
		*PlayerPawn = params.PlayerPawn;
	if (Controller != nullptr)
		*Controller = params.Controller;
}


// Function BFL_Game.BFL_Game_C.StopCutscene
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGlimpsePlayerController* PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// class ASkeletalMeshActor*      CutsceneBody                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_StopCutscene(class AGlimpsePlayerController* PlayerController, class ASkeletalMeshActor* CutsceneBody, float BlendTime, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.StopCutscene");

	UBFL_Game_C_StopCutscene_Params params;
	params.PlayerController = PlayerController;
	params.CutsceneBody = CutsceneBody;
	params.BlendTime = BlendTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BFL_Game.BFL_Game_C.PlayCutscene
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACameraActor*            CutsceneCamera                 (Parm, ZeroConstructor, IsPlainOldData)
// class ASkeletalMeshActor*      CutsceneBody                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase*       CutsceneAnim                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OnCompleteEvent                (Parm, ZeroConstructor)
// float                          CustomDuration                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTimerHandle            TimerHandle                    (Parm, OutParm)

void UBFL_Game_C::STATIC_PlayCutscene(class ACameraActor* CutsceneCamera, class ASkeletalMeshActor* CutsceneBody, class UAnimSequenceBase* CutsceneAnim, const struct FString& OnCompleteEvent, float CustomDuration, class UObject* __WorldContext, struct FTimerHandle* TimerHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.PlayCutscene");

	UBFL_Game_C_PlayCutscene_Params params;
	params.CutsceneCamera = CutsceneCamera;
	params.CutsceneBody = CutsceneBody;
	params.CutsceneAnim = CutsceneAnim;
	params.OnCompleteEvent = OnCompleteEvent;
	params.CustomDuration = CustomDuration;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimerHandle != nullptr)
		*TimerHandle = params.TimerHandle;
}


// Function BFL_Game.BFL_Game_C.GetPlayerController
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class AGlimpsePlayerController* _                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBFL_Game_C::STATIC_GetPlayerController(class UObject* __WorldContext, class AGlimpsePlayerController** _)
{
	static auto fn = UObject::FindObject<UFunction>("Function BFL_Game.BFL_Game_C.GetPlayerController");

	UBFL_Game_C_GetPlayerController_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_ != nullptr)
		*_ = params._;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
