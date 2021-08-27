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

// Function BFL_Game.BFL_Game_C.PlayerFaceThing
struct UBFL_Game_C_PlayerFaceThing_Params
{
	class AGlimpseCharacter*                           Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Thing;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.PlayerFaceActor
struct UBFL_Game_C_PlayerFaceActor_Params
{
	class AGlimpseCharacter*                           Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.ReduceLockPickDuration
struct UBFL_Game_C_ReduceLockPickDuration_Params
{
	class APawn*                                       Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.PuppetFleeToActor
struct UBFL_Game_C_PuppetFleeToActor_Params
{
	class AGlimpseAICharacter*                         refAiCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      refDespawnPoint;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      refStatusEffect;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.LevelPlayerView
struct UBFL_Game_C_LevelPlayerView_Params
{
	float                                              Interp_Time;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.CheckDoorPlayerSide
struct UBFL_Game_C_CheckDoorPlayerSide_Params
{
	class AGlimpseLockable*                            refDoor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             frontTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             backTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       refPlayerCharacter;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayAnim;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.StartCutsceneFade
struct UBFL_Game_C_StartCutsceneFade_Params
{
	class AGlimpsePlayerController*                    refGlimpsePlayerController;                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FloatDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.SetPlayerLookAtPoint
struct UBFL_Game_C_SetPlayerLookAtPoint_Params
{
	class AController*                                 refPlayerController;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       refPlayerCharacter;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      refLookAtPoint;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.ShowDigSpotNotification
struct UBFL_Game_C_ShowDigSpotNotification_Params
{
	class UClass*                                      refMapType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpsePlayerController*                    refGlimpsePlayerController;                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.HasSuit
struct UBFL_Game_C_HasSuit_Params
{
	class AGlimpseCharacter*                           refCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              correctSuits;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasSuit;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.KnockDownPlayer
struct UBFL_Game_C_KnockDownPlayer_Params
{
	struct FVector                                     SourceLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.RandomArrayElemAvoidElem
struct UBFL_Game_C_RandomArrayElemAvoidElem_Params
{
	TArray<class UObject*>                             Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     ElemToAvoid;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     _;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.RandomRecipe
struct UBFL_Game_C_RandomRecipe_Params
{
	int                                                Island;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LockedOnly;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.RemoveAllWeaponsFromInv
struct UBFL_Game_C_RemoveAllWeaponsFromInv_Params
{
	class AGlimpseCharacter*                           NPC;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Melee;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               thrown;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.InstantSuspicionComplex
struct UBFL_Game_C_InstantSuspicionComplex_Params
{
	class AGlimpseCharacter*                           NPC;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAISuspicionState>                     State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseAICharacter*                         SuspectedCharacter;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.SetPuppetAI
struct UBFL_Game_C_SetPuppetAI_Params
{
	TArray<class AGlimpseAICharacter*>                 Target;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.StandardConversationModeSettings
struct UBFL_Game_C_StandardConversationModeSettings_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FConversationModeSettings                   NewParam;                                                 // (Parm, OutParm)
};

// Function BFL_Game.BFL_Game_C.AddHalfCapsuleToVector
struct UBFL_Game_C_AddHalfCapsuleToVector_Params
{
	struct FVector                                     _;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseAICharacter*                         NPC;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     __;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.GetExplicitCondition
struct UBFL_Game_C_GetExplicitCondition_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               _;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.SetAcceptableGift
struct UBFL_Game_C_SetAcceptableGift_Params
{
	class AGlimpseAICharacter*                         Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.ActorsDistance2D
struct UBFL_Game_C_ActorsDistance2D_Params
{
	class AActor*                                      ActorA;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorB;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              _;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.KnockBackPawn
struct UBFL_Game_C_KnockBackPawn_Params
{
	class AGlimpseCharacter*                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SourceLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.RandomManual
struct UBFL_Game_C_RandomManual_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.InstantSuspicion
struct UBFL_Game_C_InstantSuspicion_Params
{
	class AGlimpseAICharacter*                         NPC;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAISuspicionState>                     State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.GetAIController
struct UBFL_Game_C_GetAIController_Params
{
	class AGlimpseAICharacter*                         _;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseAIController*                        __;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.SetExplicitCondition
struct UBFL_Game_C_SetExplicitCondition_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.PrintString
struct UBFL_Game_C_PrintString_Params
{
	struct FString                                     inString;                                                 // (Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.ShowInGameTip
struct UBFL_Game_C_ShowInGameTip_Params
{
	struct FName                                       TipKey;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.IfIsAlive
struct UBFL_Game_C_IfIsAlive_Params
{
	class AGlimpseCharacter*                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.RandomArrayElem
struct UBFL_Game_C_RandomArrayElem_Params
{
	TArray<class UObject*>                             Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     _;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.Roll
struct UBFL_Game_C_Roll_Params
{
	float                                              Chance;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               _;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.ActorOverlapsPlayer
struct UBFL_Game_C_ActorOverlapsPlayer_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               _;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.RemovePickup
struct UBFL_Game_C_RemovePickup_Params
{
	class UClass*                                      PickupClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.AddPickup
struct UBFL_Game_C_AddPickup_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.NPCSetCollisionEnabled
struct UBFL_Game_C_NPCSetCollisionEnabled_Params
{
	class ACharacter*                                  Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.SetTriggerActive
struct UBFL_Game_C_SetTriggerActive_Params
{
	class ATriggerBase*                                Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.RefreshTargeting
struct UBFL_Game_C_RefreshTargeting_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.TurnPawnTowardsActor
struct UBFL_Game_C_TurnPawnTowardsActor_Params
{
	class AGlimpseCharacter*                           Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.CurrentTimeOfDayIsEnabledInStruct
struct UBFL_Game_C_CurrentTimeOfDayIsEnabledInStruct_Params
{
	struct FsTimeOfDay                                 sTimeOfDay;                                               // (Parm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               _;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.GetWorldRS
struct UBFL_Game_C_GetWorldRS_Params
{
	int                                                sgEdSeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BFL_Game.BFL_Game_C.RegisterEditorSeed
struct UBFL_Game_C_RegisterEditorSeed_Params
{
	int                                                sgSeed;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               sgFirstTimeOBP;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.CompleteObjective
struct UBFL_Game_C_CompleteObjective_Params
{
	class UClass*                                      Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.ClassIsProjectile
struct UBFL_Game_C_ClassIsProjectile_Params
{
	class AActor*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               _;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.StopPolishLayer
struct UBFL_Game_C_StopPolishLayer_Params
{
	class AGlimpseAICharacter*                         NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StopBarks;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StopAnim;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.StatusEffectShouldInteruptNPC
struct UBFL_Game_C_StatusEffectShouldInteruptNPC_Params
{
	class UClass*                                      StatusEffect;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               _;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.GetPlayerPawn
struct UBFL_Game_C_GetPlayerPawn_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpsePlayerCharacter*                     _;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.SetIdleBarks
struct UBFL_Game_C_SetIdleBarks_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.RandomIntInRangeFromStream
struct UBFL_Game_C_RandomIntInRangeFromStream_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                _;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.MoveActorsToRandomPoints
struct UBFL_Game_C_MoveActorsToRandomPoints_Params
{
	TArray<class AActor*>                              Actors;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              Points;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                sgEdSeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.GetPlayerPawnAndController
struct UBFL_Game_C_GetPlayerPawnAndController_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ADefaultPlayerCharacter_C*                   PlayerPawn;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AGlimpsePlayerController*                    Controller;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.StopCutscene
struct UBFL_Game_C_StopCutscene_Params
{
	class AGlimpsePlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class ASkeletalMeshActor*                          CutsceneBody;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BFL_Game.BFL_Game_C.PlayCutscene
struct UBFL_Game_C_PlayCutscene_Params
{
	class ACameraActor*                                CutsceneCamera;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ASkeletalMeshActor*                          CutsceneBody;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           CutsceneAnim;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OnCompleteEvent;                                          // (Parm, ZeroConstructor)
	float                                              CustomDuration;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                TimerHandle;                                              // (Parm, OutParm)
};

// Function BFL_Game.BFL_Game_C.GetPlayerController
struct UBFL_Game_C_GetPlayerController_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpsePlayerController*                    _;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
