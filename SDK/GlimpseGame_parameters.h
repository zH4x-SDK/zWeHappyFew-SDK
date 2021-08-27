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

// Function GlimpseGame.ActivePuppetShow.OnSkipCutscene
struct UActivePuppetShow_OnSkipCutscene_Params
{
};

// Function GlimpseGame.ActorSensingComponent.SetPeripheralVisionAngle
struct UActorSensingComponent_SetPeripheralVisionAngle_Params
{
	float                                              NewPeripheralVisionAngle;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.ActorSensingComponent.OnTimeOfDayChange
struct UActorSensingComponent_OnTimeOfDayChange_Params
{
};

// Function GlimpseGame.ActorSensingComponent.GetVerticalVisionAngle
struct UActorSensingComponent_GetVerticalVisionAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActorSensingComponent.GetSightVisionRadius
struct UActorSensingComponent_GetSightVisionRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActorSensingComponent.GetProximityVisionRadius
struct UActorSensingComponent_GetProximityVisionRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActorSensingComponent.GetProximityVisionAngle
struct UActorSensingComponent_GetProximityVisionAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActorSensingComponent.GetPeripheralVisionAngle
struct UActorSensingComponent_GetPeripheralVisionAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActorSensingComponent.GetParacentralVisionAngle
struct UActorSensingComponent_GetParacentralVisionAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActorSensingComponent.GetNearFrontVisionFactor
struct UActorSensingComponent_GetNearFrontVisionFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActorSensingComponent.GetNearAsideVisionFactor
struct UActorSensingComponent_GetNearAsideVisionFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActorSensingComponent.GetMaximumHearingRadius
struct UActorSensingComponent_GetMaximumHearingRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActorSensingComponent.GetFurtherVisionRadius
struct UActorSensingComponent_GetFurtherVisionRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActorSensingComponent.GetFurtherFrontVisionFactor
struct UActorSensingComponent_GetFurtherFrontVisionFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActorSensingComponent.GetFarFrontVisionFactor
struct UActorSensingComponent_GetFarFrontVisionFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActorSensingComponent.GetFarAsideVisionFactor
struct UActorSensingComponent_GetFarAsideVisionFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActorSensingComponent.GetCombatVisionRadius
struct UActorSensingComponent_GetCombatVisionRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.AffectsDrugIntensityInterface.GetDrugIntensity
struct UAffectsDrugIntensityInterface_GetDrugIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAudioVolume.OnEndOverlap
struct AGlimpseAudioVolume_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAudioVolume.OnBeginOverlap
struct AGlimpseAudioVolume_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GlimpseGame.NeedPOIComponent.SetSlotMontage
struct UNeedPOIComponent_SetSlotMontage_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.NeedPOIComponent.OnConversationFinished
struct UNeedPOIComponent_OnConversationFinished_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.NeedPOIComponent.IsReserved
struct UNeedPOIComponent_IsReserved_Params
{
	class AGlimpseAICharacter*                         UserCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.NeedPOIComponent.IsInUse
struct UNeedPOIComponent_IsInUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.NeedPOIComponent.IsBlocked
struct UNeedPOIComponent_IsBlocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.NeedPOIComponent.GetSlotLocation
struct UNeedPOIComponent_GetSlotLocation_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.UseAlternateLookAtWeights
struct AGlimpseAIController_UseAlternateLookAtWeights_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.SwitchRootBehaviour_Specific
struct AGlimpseAIController_SwitchRootBehaviour_Specific_Params
{
	class UBehaviorTree*                               Behaviour;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.SwitchRootBehaviour
struct AGlimpseAIController_SwitchRootBehaviour_Params
{
	TEnumAsByte<EAICustomBehaviour>                    Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.SwitchBehaviour
struct AGlimpseAIController_SwitchBehaviour_Params
{
	TEnumAsByte<EAICustomBehaviour>                    Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UBehaviorTree*                               Behaviour;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.SuspendBehaviour
struct AGlimpseAIController_SuspendBehaviour_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.SetTargetLocation
struct AGlimpseAIController_SetTargetLocation_Params
{
	struct FVector                                     NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.SetTargetActor
struct AGlimpseAIController_SetTargetActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.SetSuspicionValue
struct AGlimpseAIController_SetSuspicionValue_Params
{
	float                                              InSuspicionValue;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.SetSuspicionState
struct AGlimpseAIController_SetSuspicionState_Params
{
	TEnumAsByte<EAISuspicionState>                     InSuspicionState;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.SetSpawner
struct AGlimpseAIController_SetSpawner_Params
{
	class AGlimpseAISpawner*                           Spawner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.SetPatrolActor
struct AGlimpseAIController_SetPatrolActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.SetMovementSpeed
struct AGlimpseAIController_SetMovementSpeed_Params
{
	TEnumAsByte<EWalkPace>                             Pace;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.SetMoraleState
struct AGlimpseAIController_SetMoraleState_Params
{
	TEnumAsByte<EAIMoraleState>                        InMoraleState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.SetLookAtOverride
struct AGlimpseAIController_SetLookAtOverride_Params
{
	class UObject*                                     Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      LookAtActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.SetLookAtActorKey
struct AGlimpseAIController_SetLookAtActorKey_Params
{
	struct FBlackboardKeySelector                      BBKey;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GlimpseGame.GlimpseAIController.SetDetectionTarget
struct AGlimpseAIController_SetDetectionTarget_Params
{
	class AActor*                                      InDetectionTarget;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.SetDefaultRootBehaviour
struct AGlimpseAIController_SetDefaultRootBehaviour_Params
{
	class UBehaviorTree*                               Behaviour;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.SenseActor_Vision
struct AGlimpseAIController_SenseActor_Vision_Params
{
	class AActor*                                      InSensePawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.SenseActor_Hearing
struct AGlimpseAIController_SenseActor_Hearing_Params
{
	class AActor*                                      InSensePawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanSee;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.SenseActor_Direct
struct AGlimpseAIController_SenseActor_Direct_Params
{
	class AActor*                                      InSensePawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DirectRange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.ResumeRootBehaviour
struct AGlimpseAIController_ResumeRootBehaviour_Params
{
};

// Function GlimpseGame.GlimpseAIController.ResumeBehaviour
struct AGlimpseAIController_ResumeBehaviour_Params
{
	class UObject*                                     ContextObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.OnCharacterTakeDamage
struct AGlimpseAIController_OnCharacterTakeDamage_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.OnCharacterShoved
struct AGlimpseAIController_OnCharacterShoved_Params
{
	class AGlimpseCharacter*                           ShoveSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ShoveMoveName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.HaveLineOfSightOnTarget
struct AGlimpseAIController_HaveLineOfSightOnTarget_Params
{
	float                                              Tolerance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.GetTargetCooldownEndTime
struct AGlimpseAIController_GetTargetCooldownEndTime_Params
{
	class AGlimpseCharacter*                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                CooldownTag;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.GetTargetActor
struct AGlimpseAIController_GetTargetActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.GetSuspicionValue
struct AGlimpseAIController_GetSuspicionValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.GetSuspicionState
struct AGlimpseAIController_GetSuspicionState_Params
{
	TEnumAsByte<EAISuspicionState>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.GetPatrolActor
struct AGlimpseAIController_GetPatrolActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.GetMoraleState
struct AGlimpseAIController_GetMoraleState_Params
{
	TEnumAsByte<EAIMoraleState>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.GetLookAtLocation
struct AGlimpseAIController_GetLookAtLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.GetLookAtActor
struct AGlimpseAIController_GetLookAtActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.GetDetectionTarget
struct AGlimpseAIController_GetDetectionTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.GetDefaultRootBehaviour
struct AGlimpseAIController_GetDefaultRootBehaviour_Params
{
	class UBehaviorTree*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.FaceLookAtActor
struct AGlimpseAIController_FaceLookAtActor_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.ClearSuspicion
struct AGlimpseAIController_ClearSuspicion_Params
{
};

// Function GlimpseGame.GlimpseAIController.ClearPatrolActor
struct AGlimpseAIController_ClearPatrolActor_Params
{
	bool                                               TestNavMesh;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.ClearLookAtOverride
struct AGlimpseAIController_ClearLookAtOverride_Params
{
	class UObject*                                     Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.AddSuspicionValue
struct AGlimpseAIController_AddSuspicionValue_Params
{
	float                                              InSuspicionValue;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIController.AddCooldownTargetDuration
struct AGlimpseAIController_AddCooldownTargetDuration_Params
{
	class AGlimpseCharacter*                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                CooldownTag;                                              // (Parm)
	float                                              CooldownDuration;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToExistingDuration;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLayoutActor.RandomStream
struct AGlimpseLayoutActor_RandomStream_Params
{
	struct FGlimpseRandomStream                        Stream;                                                   // (Parm, OutParm)
	struct FGlimpseRandomStream                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseLayoutActor.RandomInt
struct AGlimpseLayoutActor_RandomInt_Params
{
	struct FGlimpseRandomStream                        Stream;                                                   // (Parm, OutParm)
	int                                                MinValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxValuePlusOne;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLayoutActor.RandomFloat
struct AGlimpseLayoutActor_RandomFloat_Params
{
	struct FGlimpseRandomStream                        Stream;                                                   // (Parm, OutParm)
	float                                              MinValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLayoutActor.RandomDirection
struct AGlimpseLayoutActor_RandomDirection_Params
{
	struct FGlimpseRandomStream                        Stream;                                                   // (Parm, OutParm)
	float                                              MeanAngle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaAngle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StandardDeviation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLayoutActor.OnWorldBuilderComplete
struct AGlimpseLayoutActor_OnWorldBuilderComplete_Params
{
	bool                                               bLoadingSaveGame;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLayoutActor.OnPlayerPlaced
struct AGlimpseLayoutActor_OnPlayerPlaced_Params
{
	bool                                               bLoadingSaveGame;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLayoutActor.GetComponentRelativeRotation
struct AGlimpseLayoutActor_GetComponentRelativeRotation_Params
{
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLayoutActor.GetComponentRelativeLocation
struct AGlimpseLayoutActor_GetComponentRelativeLocation_Params
{
	class USceneComponent*                             Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayVolume.OnEndOverlap
struct AGlimpseGameplayVolume_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayVolume.OnBeginOverlap
struct AGlimpseGameplayVolume_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayVolume.ChangeTrespassingFlag
struct AGlimpseGameplayVolume_ChangeTrespassingFlag_Params
{
	bool                                               bNewFlag;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayVolume.ChangeStealingFlag
struct AGlimpseGameplayVolume_ChangeStealingFlag_Params
{
	bool                                               bNewFlag;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayVolume.ChangeNoWaitingFlag
struct AGlimpseGameplayVolume_ChangeNoWaitingFlag_Params
{
	bool                                               bNewFlag;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayVolume.ChangeNoSavingFlag
struct AGlimpseGameplayVolume_ChangeNoSavingFlag_Params
{
	bool                                               bNewFlag;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayVolume.ChangeNoFastTravelFlag
struct AGlimpseGameplayVolume_ChangeNoFastTravelFlag_Params
{
	bool                                               bNewFlag;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickup.OnOverlapCallback
struct AGlimpsePickup_OnOverlapCallback_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickup.OnHitCallback
struct AGlimpsePickup_OnHitCallback_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickup.OnEnterInventory
struct AGlimpsePickup_OnEnterInventory_Params
{
	class UInventoryComponent*                         NewOwner;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bRestoringInventory;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickup.OnEndInteraction
struct AGlimpsePickup_OnEndInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickup.OnDropped
struct AGlimpsePickup_OnDropped_Params
{
	class AGlimpseCharacter*                           DroppingCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickup.OnCompleteInteraction
struct AGlimpsePickup_OnCompleteInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickup.OnCanInteract
struct AGlimpsePickup_OnCanInteract_Params
{
	class APawn*                                       InteractSource;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionResult>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickup.OnBeginInteraction
struct AGlimpsePickup_OnBeginInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickup.IsEquipped
struct AGlimpsePickup_IsEquipped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickup.IsBeingUnequipped
struct AGlimpsePickup_IsBeingUnequipped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickup.IsBeingEquipped
struct AGlimpsePickup_IsBeingEquipped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickup.GetUseEquipText
struct AGlimpsePickup_GetUseEquipText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpsePickup.GetMovementTypeWhenEquipped
struct AGlimpsePickup_GetMovementTypeWhenEquipped_Params
{
	TEnumAsByte<EStandardAnimationMovement>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickup.GetLastCharacterOwner
struct AGlimpsePickup_GetLastCharacterOwner_Params
{
	class AGlimpseCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickup.GetItemStats
struct AGlimpsePickup_GetItemStats_Params
{
	TArray<struct FInventoryItemStat>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GlimpseGame.GlimpsePickup.GetCharacterOwner
struct AGlimpsePickup_GetCharacterOwner_Params
{
	class AGlimpseCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickup.DelayedDestroy
struct AGlimpsePickup_DelayedDestroy_Params
{
};

// Function GlimpseGame.GlimpsePickup.DamageDurability
struct AGlimpsePickup_DamageDurability_Params
{
	float                                              DurabilityCost;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayFX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyDurabilityTags;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickup.CanInteractWhenEquipped
struct AGlimpsePickup_CanInteractWhenEquipped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickup.CanCrouchWhenEquipped
struct AGlimpsePickup_CanCrouchWhenEquipped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickup.AbandonPickupSpawner
struct AGlimpsePickup_AbandonPickupSpawner_Params
{
};

// Function GlimpseGame.Quest.SetQuestState
struct UQuest_SetQuestState_Params
{
	struct FName                                       State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.Quest.SetObjectiveStatus
struct UQuest_SetObjectiveStatus_Params
{
	struct FName                                       ObjectiveKey;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveStatus>                      InStatus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceActivate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.Quest.SetObjectiveCounter
struct UQuest_SetObjectiveCounter_Params
{
	struct FName                                       ObjectiveKey;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceActivate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.Quest.ResetQuest
struct UQuest_ResetQuest_Params
{
};

// Function GlimpseGame.Quest.ReceiveQuestUpdated
struct UQuest_ReceiveQuestUpdated_Params
{
	class AGlimpsePlayerController*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EQuestStatus>                          status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.Quest.ReceiveQuestUnbound
struct UQuest_ReceiveQuestUnbound_Params
{
};

// Function GlimpseGame.Quest.ReceiveQuestBound
struct UQuest_ReceiveQuestBound_Params
{
	class AGlimpsePlayerController*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.Quest.ReceiveObjectiveUpdated
struct UQuest_ReceiveObjectiveUpdated_Params
{
	class AGlimpsePlayerController*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FObjective                                  Objective;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EObjectiveStatus>                      status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.Quest.IsVariableBound
struct UQuest_IsVariableBound_Params
{
	struct FName                                       Variable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.Quest.IsContextBound
struct UQuest_IsContextBound_Params
{
	struct FName                                       BindContext;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.Quest.IsBound
struct UQuest_IsBound_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.Quest.IncrementObjectiveCounter
struct UQuest_IncrementObjectiveCounter_Params
{
	struct FName                                       ObjectiveKey;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Increment;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceActivate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.Quest.GetQuestStatus
struct UQuest_GetQuestStatus_Params
{
	TEnumAsByte<EQuestStatus>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.Quest.GetQuestState
struct UQuest_GetQuestState_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.Quest.GetQuestKey
struct UQuest_GetQuestKey_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.Quest.GetObjectivesWithStatus
struct UQuest_GetObjectivesWithStatus_Params
{
	TEnumAsByte<EObjectiveStatus>                      status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GlimpseGame.Quest.GetObjectiveStatus
struct UQuest_GetObjectiveStatus_Params
{
	struct FName                                       ObjectiveKey;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveStatus>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.Quest.GetObjectiveCounter
struct UQuest_GetObjectiveCounter_Params
{
	struct FName                                       ObjectiveKey;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.Quest.GetCurrentObjective
struct UQuest_GetCurrentObjective_Params
{
	struct FName                                       ObjectiveName;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               MultipleObjectives;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.Quest.FailQuest
struct UQuest_FailQuest_Params
{
};

// Function GlimpseGame.Quest.DeactivateObjective
struct UQuest_DeactivateObjective_Params
{
	struct FName                                       ObjectiveKey;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.Quest.CompleteQuest
struct UQuest_CompleteQuest_Params
{
};

// Function GlimpseGame.Quest.ActivateQuest
struct UQuest_ActivateQuest_Params
{
};

// Function GlimpseGame.GlimpseStreamingLevel.OnLevelUnloaded
struct UGlimpseStreamingLevel_OnLevelUnloaded_Params
{
};

// Function GlimpseGame.GlimpseStreamingLevel.OnLevelShown
struct UGlimpseStreamingLevel_OnLevelShown_Params
{
};

// Function GlimpseGame.GlimpseStreamingLevel.OnLevelLoaded
struct UGlimpseStreamingLevel_OnLevelLoaded_Params
{
};

// Function GlimpseGame.GlimpseStreamingLevel.OnLevelHidden
struct UGlimpseStreamingLevel_OnLevelHidden_Params
{
};

// Function GlimpseGame.GlimpseStreamingManager.GetFeatureInstanceNameFromLevel
struct UGlimpseStreamingManager_GetFeatureInstanceNameFromLevel_Params
{
	class ULevel*                                      Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStreamingManager.GetFeatureInstanceNameFromActor
struct UGlimpseStreamingManager_GetFeatureInstanceNameFromActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAIManager.OnMorning
struct UGlimpseAIManager_OnMorning_Params
{
};

// Function GlimpseGame.GlimpseAIManager.OnEvening
struct UGlimpseAIManager_OnEvening_Params
{
};

// Function GlimpseGame.SecurityNodeComponent.ToggleNode
struct USecurityNodeComponent_ToggleNode_Params
{
	class APawn*                                       Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.SecurityNodeComponent.RestoreNode
struct USecurityNodeComponent_RestoreNode_Params
{
	class APawn*                                       Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.SecurityNodeComponent.IsNodeActive
struct USecurityNodeComponent_IsNodeActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SecurityNodeComponent.DisableNode
struct USecurityNodeComponent_DisableNode_Params
{
	class APawn*                                       Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.SecurityNodeComponent.DeactivateNode
struct USecurityNodeComponent_DeactivateNode_Params
{
	class APawn*                                       Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.SecurityNodeComponent.ActivateNode
struct USecurityNodeComponent_ActivateNode_Params
{
	class APawn*                                       Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSecurityAlarm.OnNodeDeactivated
struct AGlimpseSecurityAlarm_OnNodeDeactivated_Params
{
	class USecurityNodeComponent*                      InSecurityNode;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APawn*                                       InInstigator;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSecurityAlarm.OnNodeActivated
struct AGlimpseSecurityAlarm_OnNodeActivated_Params
{
	class USecurityNodeComponent*                      InSecurityNode;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APawn*                                       InInstigator;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USecurityNodeComponent*                      TriggerNode;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSecurityAlarm.IsActive
struct AGlimpseSecurityAlarm_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSecurityAlarm.Deactivate
struct AGlimpseSecurityAlarm_Deactivate_Params
{
	class APawn*                                       InInstigator;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSecurityAlarm.Activate
struct AGlimpseSecurityAlarm_Activate_Params
{
	class APawn*                                       InInstigator;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USecurityNodeComponent*                      TriggerNode;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSuspicionCharacter.SetSuspicionState
struct UGlimpseSuspicionCharacter_SetSuspicionState_Params
{
	class AGlimpseAIController*                        Agent;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAISuspicionState>                     State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseSuspicionReason>               Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSuspicionCharacter.GetNumAgents
struct UGlimpseSuspicionCharacter_GetNumAgents_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSuspicionCharacter.GetConformityType
struct UGlimpseSuspicionCharacter_GetConformityType_Params
{
	TEnumAsByte<ESuspicionConformityRequest>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSuspicionCharacter.ClearSuspicionState
struct UGlimpseSuspicionCharacter_ClearSuspicionState_Params
{
	class AGlimpseAIController*                        Agent;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseResignReason>                  Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSuspicionCharacter.AnyAgentHasLineOfSight
struct UGlimpseSuspicionCharacter_AnyAgentHasLineOfSight_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSuspicionCharacter.AgentHasLineOfSight
struct UGlimpseSuspicionCharacter_AgentHasLineOfSight_Params
{
	class AGlimpseAIController*                        Agent;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSuspicionManager.SpawnEnemyForFight
struct UGlimpseSuspicionManager_SpawnEnemyForFight_Params
{
	struct FName                                       FightTag;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  EnemyTransform;                                           // (Parm, IsPlainOldData)
	class UClass*                                      EnemyClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UBehaviorTree*                               EnemyBehavior;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseAICharacter*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSuspicionManager.IgnoreSuspicionForTarget
struct UGlimpseSuspicionManager_IgnoreSuspicionForTarget_Params
{
	bool                                               NoSuspicion;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SuspicionTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSuspicionManager.ForceSuspicionForTarget
struct UGlimpseSuspicionManager_ForceSuspicionForTarget_Params
{
	TEnumAsByte<EAISuspicionState>                     SuspicionState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SuspicionTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SuspicionIsLocked;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseAIController*                        Agent;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSuspicionManager.ForceSuspicion
struct UGlimpseSuspicionManager_ForceSuspicion_Params
{
	class AGlimpseAIController*                        AgentController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAISuspicionState>                     SuspicionState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SuspicionIsLocked;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSuspicionManager.CreateAttractorForTarget
struct UGlimpseSuspicionManager_CreateAttractorForTarget_Params
{
	TEnumAsByte<EGlimpseSuspicionPriority>             SuspicionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SuspicionTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseSuspicionContext*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSuspicionManager.CreateAttractorForSearch
struct UGlimpseSuspicionManager_CreateAttractorForSearch_Params
{
	struct FName                                       AlarmTag;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSuspicionManager.ClearSuspicionForTarget
struct UGlimpseSuspicionManager_ClearSuspicionForTarget_Params
{
	class AActor*                                      SuspicionTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSuspicionManager.ClearAttractorFromSearch
struct UGlimpseSuspicionManager_ClearAttractorFromSearch_Params
{
};

// Function GlimpseGame.GlimpseSuspicionManager.ClearAttractorForTarget
struct UGlimpseSuspicionManager_ClearAttractorForTarget_Params
{
	class AActor*                                      SuspicionTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSuspicionManager.AgentIgnoreSuspicionForTarget
struct UGlimpseSuspicionManager_AgentIgnoreSuspicionForTarget_Params
{
	bool                                               NoSuspicion;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseAIController*                        Agent;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SuspicionTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.ToggleHandsTooClose
struct AGlimpseGameMode_ToggleHandsTooClose_Params
{
};

// Function GlimpseGame.GlimpseGameMode.ToggleCombatToken
struct AGlimpseGameMode_ToggleCombatToken_Params
{
};

// Function GlimpseGame.GlimpseGameMode.TimeSinceAttackUsedGlobally
struct AGlimpseGameMode_TimeSinceAttackUsedGlobally_Params
{
	struct FName                                       AttackName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.StartCustomBroadcast
struct AGlimpseGameMode_StartCustomBroadcast_Params
{
	struct FName                                       BroadcastKey;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTV;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRadio;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPA;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.ShowVisionRanges
struct AGlimpseGameMode_ShowVisionRanges_Params
{
};

// Function GlimpseGame.GlimpseGameMode.ShowSuspicionHistory
struct AGlimpseGameMode_ShowSuspicionHistory_Params
{
};

// Function GlimpseGame.GlimpseGameMode.ShowSmell
struct AGlimpseGameMode_ShowSmell_Params
{
};

// Function GlimpseGame.GlimpseGameMode.ShowPOI
struct AGlimpseGameMode_ShowPOI_Params
{
};

// Function GlimpseGame.GlimpseGameMode.ShowNoise
struct AGlimpseGameMode_ShowNoise_Params
{
};

// Function GlimpseGame.GlimpseGameMode.ShowNeedsIcons
struct AGlimpseGameMode_ShowNeedsIcons_Params
{
};

// Function GlimpseGame.GlimpseGameMode.ShowDebugHandsTooClose
struct AGlimpseGameMode_ShowDebugHandsTooClose_Params
{
};

// Function GlimpseGame.GlimpseGameMode.ShowCombat
struct AGlimpseGameMode_ShowCombat_Params
{
};

// Function GlimpseGame.GlimpseGameMode.ShowCharge
struct AGlimpseGameMode_ShowCharge_Params
{
};

// Function GlimpseGame.GlimpseGameMode.SetTime
struct AGlimpseGameMode_SetTime_Params
{
	int                                                Hours;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Minutes;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNotifyObservers;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.SetGameFlagValue
struct AGlimpseGameMode_SetGameFlagValue_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.SetGameFlag
struct AGlimpseGameMode_SetGameFlag_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.SetDayAndTime
struct AGlimpseGameMode_SetDayAndTime_Params
{
	int                                                InDay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InHours;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InMinutes;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.SetDay
struct AGlimpseGameMode_SetDay_Params
{
	int                                                InDay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.ResetTimeScaleOverride
struct AGlimpseGameMode_ResetTimeScaleOverride_Params
{
};

// Function GlimpseGame.GlimpseGameMode.ResetGameFlags
struct AGlimpseGameMode_ResetGameFlags_Params
{
};

// Function GlimpseGame.GlimpseGameMode.RealTimeToGameTime
struct AGlimpseGameMode_RealTimeToGameTime_Params
{
	float                                              InRealTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.OverrideTimeScale
struct AGlimpseGameMode_OverrideTimeScale_Params
{
	float                                              InTimeScaleOverride;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.NoSuspicion
struct AGlimpseGameMode_NoSuspicion_Params
{
};

// Function GlimpseGame.GlimpseGameMode.NoMusic
struct AGlimpseGameMode_NoMusic_Params
{
};

// Function GlimpseGame.GlimpseGameMode.NoAISpawns
struct AGlimpseGameMode_NoAISpawns_Params
{
};

// Function GlimpseGame.GlimpseGameMode.MarkDLCIntegrated
struct AGlimpseGameMode_MarkDLCIntegrated_Params
{
	struct FName                                       DLCName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   Version;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.LogGameFlags
struct AGlimpseGameMode_LogGameFlags_Params
{
};

// Function GlimpseGame.GlimpseGameMode.ListBroadcasts
struct AGlimpseGameMode_ListBroadcasts_Params
{
};

// Function GlimpseGame.GlimpseGameMode.IsPermadeath
struct AGlimpseGameMode_IsPermadeath_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.IsGameFlagSet
struct AGlimpseGameMode_IsGameFlagSet_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.IsDLCIntegrated
struct AGlimpseGameMode_IsDLCIntegrated_Params
{
	struct FName                                       DLCName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.GetTimestamp
struct AGlimpseGameMode_GetTimestamp_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GlimpseGame.GlimpseGameMode.GetTimeScale
struct AGlimpseGameMode_GetTimeScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.GetTimeOfDayTime
struct AGlimpseGameMode_GetTimeOfDayTime_Params
{
	TEnumAsByte<ETimeOfDay>                            InTimeOfDay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OutHours;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OutMinutes;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OutSeconds;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.GetTimeOfDaySerial
struct AGlimpseGameMode_GetTimeOfDaySerial_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.GetTimeOfDayFraction
struct AGlimpseGameMode_GetTimeOfDayFraction_Params
{
	TEnumAsByte<ETimeOfDay>                            InTimeOfDay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.GetTimeOfDay
struct AGlimpseGameMode_GetTimeOfDay_Params
{
	TEnumAsByte<ETimeOfDay>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.GetTimeFraction
struct AGlimpseGameMode_GetTimeFraction_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.GetTime
struct AGlimpseGameMode_GetTime_Params
{
	unsigned char                                      OutHours;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OutMinutes;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OutSeconds;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.GetSuspicionDifficulty
struct AGlimpseGameMode_GetSuspicionDifficulty_Params
{
	TEnumAsByte<EGlimpseGameDifficulty>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.GetSurvivalDifficulty
struct AGlimpseGameMode_GetSurvivalDifficulty_Params
{
	TEnumAsByte<EGlimpseGameDifficulty>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.GetSandboxStatistics
struct AGlimpseGameMode_GetSandboxStatistics_Params
{
	struct FSandboxStatistics                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseGameMode.GetNewspaper
struct AGlimpseGameMode_GetNewspaper_Params
{
	class UGlimpseNewspaper*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.GetIntegratedDLCVersion
struct AGlimpseGameMode_GetIntegratedDLCVersion_Params
{
	struct FName                                       DLCName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.GetGameFlag
struct AGlimpseGameMode_GetGameFlag_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.GetGameDifficulty
struct AGlimpseGameMode_GetGameDifficulty_Params
{
	TEnumAsByte<EGlimpseGameDifficulty>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.GetDay
struct AGlimpseGameMode_GetDay_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.GetDateTime
struct AGlimpseGameMode_GetDateTime_Params
{
	bool                                               ReturnNowIfTimeDoesntMove;                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GlimpseGame.GlimpseGameMode.GetCurrentCharacterType
struct AGlimpseGameMode_GetCurrentCharacterType_Params
{
	TEnumAsByte<EStoryCharacter>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.GetCombatDifficulty
struct AGlimpseGameMode_GetCombatDifficulty_Params
{
	TEnumAsByte<EGlimpseGameDifficulty>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.GetBroadcaster
struct AGlimpseGameMode_GetBroadcaster_Params
{
	class UGlimpseBroadcaster*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.GameTimeToRealTime
struct AGlimpseGameMode_GameTimeToRealTime_Params
{
	float                                              InGameTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.EnableSpawnWithinLiveness
struct AGlimpseGameMode_EnableSpawnWithinLiveness_Params
{
};

// Function GlimpseGame.GlimpseGameMode.DoesDifficultyRequireNeed
struct AGlimpseGameMode_DoesDifficultyRequireNeed_Params
{
	TEnumAsByte<ESurvivalNeed>                         SurvivalNeed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.DisableSpawnWithinLiveness
struct AGlimpseGameMode_DisableSpawnWithinLiveness_Params
{
};

// Function GlimpseGame.GlimpseGameMode.ClearGameFlag
struct AGlimpseGameMode_ClearGameFlag_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.AlwaysShowSuspicion
struct AGlimpseGameMode_AlwaysShowSuspicion_Params
{
};

// Function GlimpseGame.GlimpseGameMode.AdvanceToTime
struct AGlimpseGameMode_AdvanceToTime_Params
{
	int                                                Hours;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Minutes;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNotifyObservers;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.AdvanceOneDay
struct AGlimpseGameMode_AdvanceOneDay_Params
{
	bool                                               bNotifyObservers;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.AddTimespanObserver
struct AGlimpseGameMode_AddTimespanObserver_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
	struct FTimespan                                   InTime;                                                   // (Parm, ZeroConstructor)
	bool                                               bOnce;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.AddTimeOfDayObserver
struct AGlimpseGameMode_AddTimeOfDayObserver_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
	TEnumAsByte<ETimeOfDay>                            InTimeOfDay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnce;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.AddTimeObserver
struct AGlimpseGameMode_AddTimeObserver_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
	int                                                InHours;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InMinutes;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InSeconds;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnce;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.AddTimeDelayObserver
struct AGlimpseGameMode_AddTimeDelayObserver_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
	int                                                InDelayHours;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InDelayMinutes;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.AddTime
struct AGlimpseGameMode_AddTime_Params
{
	int                                                Hours;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Minutes;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNotifyObservers;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameMode.AddAutoApplyEffect
struct AGlimpseGameMode_AddAutoApplyEffect_Params
{
	class UClass*                                      StatusEffect;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseBroadcaster.RemoveBroadcastsObserver
struct UGlimpseBroadcaster_RemoveBroadcastsObserver_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseBroadcaster.RemoveBroadcastActor
struct UGlimpseBroadcaster_RemoveBroadcastActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseBroadcaster.IsBroadcastActor
struct UGlimpseBroadcaster_IsBroadcastActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseBroadcaster.GetBroadcastVideoTexture
struct UGlimpseBroadcaster_GetBroadcastVideoTexture_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseBroadcaster.GetBroadcastVideoMaterialByName
struct UGlimpseBroadcaster_GetBroadcastVideoMaterialByName_Params
{
	struct FString                                     MaterialName;                                             // (Parm, ZeroConstructor)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseBroadcaster.GetBroadcastVideoMaterialByIndex
struct UGlimpseBroadcaster_GetBroadcastVideoMaterialByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseBroadcaster.EndPlayBroadcastActor
struct UGlimpseBroadcaster_EndPlayBroadcastActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseBroadcaster.AddManualBroadcastActor
struct UGlimpseBroadcaster_AddManualBroadcastActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseBroadcastType>                 BroadcastType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLongRange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDontPlayIntermissionAudio;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseBroadcaster.AddBroadcastsObserver
struct UGlimpseBroadcaster_AddBroadcastsObserver_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseBroadcaster.AddBroadcastActor
struct UGlimpseBroadcaster_AddBroadcastActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseBroadcastType>                 BroadcastType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLongRange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDontPlayIntermissionAudio;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerSpawn.UnlockAsShelterSpawn
struct AGlimpsePlayerSpawn_UnlockAsShelterSpawn_Params
{
	struct FName                                       ShelterName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerSpawn.OnRespawn
struct AGlimpsePlayerSpawn_OnRespawn_Params
{
	class AGlimpsePlayerCharacter*                     PlayerCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.RecurringTaskComponent.SetTaskPerformed
struct URecurringTaskComponent_SetTaskPerformed_Params
{
	struct FName                                       TaskName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.RecurringTaskComponent.RemoveTimeModifier
struct URecurringTaskComponent_RemoveTimeModifier_Params
{
	struct FName                                       ModifierName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.RecurringTaskComponent.RemoveRecurringTask
struct URecurringTaskComponent_RemoveRecurringTask_Params
{
	struct FName                                       TaskName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.RecurringTaskComponent.GetTimeUntilTaskDue
struct URecurringTaskComponent_GetTimeUntilTaskDue_Params
{
	struct FName                                       TaskName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimespan                                   OutTimeUntilTaskDue;                                      // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.RecurringTaskComponent.AddOrUpdateTimeModifier
struct URecurringTaskComponent_AddOrUpdateTimeModifier_Params
{
	struct FName                                       ModifierName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimespan                                   DurationUntilDue;                                         // (Parm, ZeroConstructor)
	float                                              ModifierPercentage;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.RecurringTaskComponent.AddOrUpdateRecurringTask
struct URecurringTaskComponent_AddOrUpdateRecurringTask_Params
{
	struct FName                                       TaskName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimespan                                   DurationUntilDue;                                         // (Parm, ZeroConstructor)
	bool                                               bPermanent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.ViewNextLore
struct AGlimpsePlayerController_ViewNextLore_Params
{
	struct FName                                       LoreKey;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.ViewLore
struct AGlimpsePlayerController_ViewLore_Params
{
	struct FName                                       LoreKey;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LoreIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.UpdateAchievementProgress
struct AGlimpsePlayerController_UpdateAchievementProgress_Params
{
	struct FString                                     AchievementName;                                          // (Parm, ZeroConstructor)
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.UnlockRecipe
struct AGlimpsePlayerController_UnlockRecipe_Params
{
	class UClass*                                      RecipeType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.ToggleWeapon
struct AGlimpsePlayerController_ToggleWeapon_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.SuspendNotifications
struct AGlimpsePlayerController_SuspendNotifications_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.Suicide
struct AGlimpsePlayerController_Suicide_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.StartExplictInteraction
struct AGlimpsePlayerController_StartExplictInteraction_Params
{
	class UInteractionComponent*                       Interaction;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSkipCheck;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.ShowTutorialWidget
struct AGlimpsePlayerController_ShowTutorialWidget_Params
{
	struct FName                                       TipKey;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.ShowStashMenu
struct AGlimpsePlayerController_ShowStashMenu_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.ShowSleepDurationBox
struct AGlimpsePlayerController_ShowSleepDurationBox_Params
{
	class UObject*                                     Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.ShowPlayerMenuWithContext
struct AGlimpsePlayerController_ShowPlayerMenuWithContext_Params
{
	TEnumAsByte<EPlayerMenu>                           MenuType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ContextKey;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.ShowPlayerMenu
struct AGlimpsePlayerController_ShowPlayerMenu_Params
{
	TEnumAsByte<EPlayerMenu>                           MenuType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.ShowNotificationByKeyWithContext
struct AGlimpsePlayerController_ShowNotificationByKeyWithContext_Params
{
	struct FName                                       NotificationKey;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPlayerMenu>                           Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCheckmark;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.ShowNotificationByKeyWithArgs
struct AGlimpsePlayerController_ShowNotificationByKeyWithArgs_Params
{
	struct FName                                       NotificationKey;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ArgKeys;                                                  // (Parm, ZeroConstructor)
	TArray<struct FText>                               ArgText;                                                  // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpsePlayerController.ShowNotificationByKey
struct AGlimpsePlayerController_ShowNotificationByKey_Params
{
	struct FName                                       NotificationKey;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.ShowNotification
struct AGlimpsePlayerController_ShowNotification_Params
{
	struct FNotification                               InNotification;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GlimpseGame.GlimpsePlayerController.ShowMessageBoxConfirm
struct AGlimpsePlayerController_ShowMessageBoxConfirm_Params
{
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       Body;                                                     // (Parm)
	struct FScriptDelegate                             ConfirmCallback;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             CancelCallback;                                           // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpsePlayerController.ShowInGameTipByKey
struct AGlimpsePlayerController_ShowInGameTipByKey_Params
{
	struct FName                                       TipKey;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.ShowInGameTip
struct AGlimpsePlayerController_ShowInGameTip_Params
{
	struct FInGameTip                                  InGameTip;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GlimpseGame.GlimpsePlayerController.ShowDeathMenu
struct AGlimpsePlayerController_ShowDeathMenu_Params
{
	TEnumAsByte<EDeathScreen>                          DeathType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             MenuHiddenCallback;                                       // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpsePlayerController.ShouldDisableHeadBobbing
struct AGlimpsePlayerController_ShouldDisableHeadBobbing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.SetTutorialStep
struct AGlimpsePlayerController_SetTutorialStep_Params
{
	int                                                step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.SetTargetLocked
struct AGlimpsePlayerController_SetTargetLocked_Params
{
	bool                                               bLocked;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.SetTargetActor
struct AGlimpsePlayerController_SetTargetActor_Params
{
	class AActor*                                      NewTargetActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.SetShowMainSheltersOnMap
struct AGlimpsePlayerController_SetShowMainSheltersOnMap_Params
{
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.SetProfileFlagValue
struct AGlimpsePlayerController_SetProfileFlagValue_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.SetProfileFlag
struct AGlimpsePlayerController_SetProfileFlag_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.SetPlayerSubMenuEnabled
struct AGlimpsePlayerController_SetPlayerSubMenuEnabled_Params
{
	TEnumAsByte<EPlayerMenu>                           MenuType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.SetPlayerMaxCarryWeightOffset
struct AGlimpsePlayerController_SetPlayerMaxCarryWeightOffset_Params
{
	float                                              Val;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.SetEnableOverrideConformityRequests
struct AGlimpsePlayerController_SetEnableOverrideConformityRequests_Params
{
	bool                                               bInEnable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.SetCutsceneInputMode
struct AGlimpsePlayerController_SetCutsceneInputMode_Params
{
	bool                                               bActivate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuppressLetterbox;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.SetConversationTargetActor
struct AGlimpsePlayerController_SetConversationTargetActor_Params
{
	class AActor*                                      InTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.SetConversationTarget
struct AGlimpsePlayerController_SetConversationTarget_Params
{
	class AGlimpseCharacter*                           InTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.SetConversationModeSettings
struct AGlimpsePlayerController_SetConversationModeSettings_Params
{
	struct FConversationModeSettings                   InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GlimpseGame.GlimpsePlayerController.SetConformityAnnoyedReasonOverride
struct AGlimpsePlayerController_SetConformityAnnoyedReasonOverride_Params
{
	struct FName                                       InAnnoyedReason;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.SetCanUseHandsForEquippablesOrItems
struct AGlimpsePlayerController_SetCanUseHandsForEquippablesOrItems_Params
{
	bool                                               CanUse;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.SetCanCraftWithStash
struct AGlimpsePlayerController_SetCanCraftWithStash_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.SetCanAccessPlayerMenu
struct AGlimpsePlayerController_SetCanAccessPlayerMenu_Params
{
	bool                                               CanAccess;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.SetBridgeChallengeComplete
struct AGlimpsePlayerController_SetBridgeChallengeComplete_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.SetAllowGameModeMenu
struct AGlimpsePlayerController_SetAllowGameModeMenu_Params
{
	bool                                               NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.ResumeNotifications
struct AGlimpsePlayerController_ResumeNotifications_Params
{
	bool                                               bCatchUp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NotSecondary;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.ResetViewedInGameTips
struct AGlimpsePlayerController_ResetViewedInGameTips_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.ResetCutscene
struct AGlimpsePlayerController_ResetCutscene_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.ResetCompletedBridges
struct AGlimpsePlayerController_ResetCompletedBridges_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.ResetCollectibles
struct AGlimpsePlayerController_ResetCollectibles_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.ResetCinematicMode
struct AGlimpsePlayerController_ResetCinematicMode_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.ResetAchievements
struct AGlimpsePlayerController_ResetAchievements_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.RemoveOverrideConformityRequest
struct AGlimpsePlayerController_RemoveOverrideConformityRequest_Params
{
	struct FName                                       InRequest;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.RemoveGameplayCountdown
struct AGlimpsePlayerController_RemoveGameplayCountdown_Params
{
	struct FName                                       CountdownReference;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.RemoveAllGameplayCountdowns
struct AGlimpsePlayerController_RemoveAllGameplayCountdowns_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.RefreshTargetInteraction
struct AGlimpsePlayerController_RefreshTargetInteraction_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.RebuildInventoryFromDump
struct AGlimpsePlayerController_RebuildInventoryFromDump_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.QuickSave
struct AGlimpsePlayerController_QuickSave_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.QuickLoad
struct AGlimpsePlayerController_QuickLoad_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.PushConversationModeWithSkip
struct AGlimpsePlayerController_PushConversationModeWithSkip_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.PushConversationModeWithoutSkip
struct AGlimpsePlayerController_PushConversationModeWithoutSkip_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.PushConversationMode
struct AGlimpsePlayerController_PushConversationMode_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.PopConversationMode
struct AGlimpsePlayerController_PopConversationMode_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.OnStatusEffectRemoved
struct AGlimpsePlayerController_OnStatusEffectRemoved_Params
{
	class UGlimpseStatusEffectBase*                    Effect;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.OnStatusEffectApplied
struct AGlimpsePlayerController_OnStatusEffectApplied_Params
{
	class UGlimpseStatusEffectBase*                    Effect;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.OnCountdownComplete
struct AGlimpsePlayerController_OnCountdownComplete_Params
{
	struct FName                                       CountdownReference;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.OnCollectibleAwarded
struct AGlimpsePlayerController_OnCollectibleAwarded_Params
{
	class UGlimpseCollectibleGroup*                    Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CollectibleKey;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.OnCharacterEndUsableInteraction
struct AGlimpsePlayerController_OnCharacterEndUsableInteraction_Params
{
	class APawn*                                       UseSource;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      UseTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.OnCharacterCompleteUsableInteraction
struct AGlimpsePlayerController_OnCharacterCompleteUsableInteraction_Params
{
	class APawn*                                       UseSource;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      UseTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.OnCharacterCompleteInteraction
struct AGlimpsePlayerController_OnCharacterCompleteInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.MoveInventoryToStash
struct AGlimpsePlayerController_MoveInventoryToStash_Params
{
	bool                                               includeHolster;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               includeClothing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               includeQuest;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.MarkQuestTracked
struct AGlimpsePlayerController_MarkQuestTracked_Params
{
	class UQuest*                                      Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.ListQuests
struct AGlimpsePlayerController_ListQuests_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpsePlayerController.IsTutorialWidgetDisplayed
struct AGlimpsePlayerController_IsTutorialWidgetDisplayed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.IsRecipeUnlocked
struct AGlimpsePlayerController_IsRecipeUnlocked_Params
{
	class UClass*                                      RecipeType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.IsProfileFlagSet
struct AGlimpsePlayerController_IsProfileFlagSet_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.IsPlayerMenuVisible
struct AGlimpsePlayerController_IsPlayerMenuVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.IsPlayerInputEnabled
struct AGlimpsePlayerController_IsPlayerInputEnabled_Params
{
	TEnumAsByte<EGlimpsePlayerInput>                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.IsLoreViewed
struct AGlimpsePlayerController_IsLoreViewed_Params
{
	struct FName                                       LoreKey;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.IsInGameTipViewed
struct AGlimpsePlayerController_IsInGameTipViewed_Params
{
	struct FName                                       TipKey;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.IsCollectibleAwarded
struct AGlimpsePlayerController_IsCollectibleAwarded_Params
{
	class UGlimpseCollectibleGroup*                    Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CollectibleKey;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.HideQuestCompletionWidget
struct AGlimpsePlayerController_HideQuestCompletionWidget_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.HidePlayerMenu
struct AGlimpsePlayerController_HidePlayerMenu_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.HideInGameTipByKey
struct AGlimpsePlayerController_HideInGameTipByKey_Params
{
	struct FName                                       TipKey;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.HideInGameTip
struct AGlimpsePlayerController_HideInGameTip_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.HideDeathMenu
struct AGlimpsePlayerController_HideDeathMenu_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.GetTutorialStep
struct AGlimpsePlayerController_GetTutorialStep_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.GetTargetLocked
struct AGlimpsePlayerController_GetTargetLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.GetTargetInteraction
struct AGlimpsePlayerController_GetTargetInteraction_Params
{
	TEnumAsByte<EInteraction>                          InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UInteractionComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.GetStash
struct AGlimpsePlayerController_GetStash_Params
{
	class UInventoryComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.GetQuestInstance
struct AGlimpsePlayerController_GetQuestInstance_Params
{
	class UClass*                                      QuestType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuest*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.GetProfileFlag
struct AGlimpsePlayerController_GetProfileFlag_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.GetPlayerSuspicionLevel
struct AGlimpsePlayerController_GetPlayerSuspicionLevel_Params
{
	TEnumAsByte<EPlayerSuspicionLevel>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.GetPlayerMaxCarryWeightOffset
struct AGlimpsePlayerController_GetPlayerMaxCarryWeightOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.GetPlayerCarriedWeightWarningLimit
struct AGlimpsePlayerController_GetPlayerCarriedWeightWarningLimit_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.GetPlayerAnnoyedReason
struct AGlimpsePlayerController_GetPlayerAnnoyedReason_Params
{
	TEnumAsByte<EGlimpseAnnoyingEvent>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.GetObjectiveMapMarkerLocationAndRadius
struct AGlimpsePlayerController_GetObjectiveMapMarkerLocationAndRadius_Params
{
	class UClass*                                      QuestType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       QuestState;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             MapMarkerLocations;                                       // (Parm, OutParm, ZeroConstructor)
	TArray<float>                                      MapMarkersAreaRadius;                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               Get3DPosition;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.GetObjectiveMapMarkerLocation
struct AGlimpsePlayerController_GetObjectiveMapMarkerLocation_Params
{
	class UClass*                                      QuestType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       QuestState;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             MapMarkerLocations;                                       // (Parm, OutParm, ZeroConstructor)
	bool                                               Get3DPosition;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.GetMaxPlayerCarriedWeight
struct AGlimpsePlayerController_GetMaxPlayerCarriedWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.GetGlimpsePlayerCameraManager
struct AGlimpsePlayerController_GetGlimpsePlayerCameraManager_Params
{
	class AGlimpsePlayerCameraManager*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.GetGlimpseHUD
struct AGlimpsePlayerController_GetGlimpseHUD_Params
{
	class AGlimpseHUD*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.GetGlimpseCharacter
struct AGlimpsePlayerController_GetGlimpseCharacter_Params
{
	class AGlimpsePlayerCharacter*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.GetGameplayCountdownTimeRemaining
struct AGlimpsePlayerController_GetGameplayCountdownTimeRemaining_Params
{
	struct FName                                       CountdownReference;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.GetCurrentInputDeviceIsController
struct AGlimpsePlayerController_GetCurrentInputDeviceIsController_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.GetCanUseHandsForEquippablesOrItems
struct AGlimpsePlayerController_GetCanUseHandsForEquippablesOrItems_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.GetCanCraftWithStash
struct AGlimpsePlayerController_GetCanCraftWithStash_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.Flashback
struct AGlimpsePlayerController_Flashback_Params
{
	class UGlimpseCollectibleGroup*                    Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CollectibleKey;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EaseOutTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	struct FLinearColor                                FadeColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.EnablePlayerInput
struct AGlimpsePlayerController_EnablePlayerInput_Params
{
	TEnumAsByte<EGlimpsePlayerInput>                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActivate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.EnableCombatInput
struct AGlimpsePlayerController_EnableCombatInput_Params
{
	bool                                               bActivate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.DumpGlimpseStats
struct AGlimpsePlayerController_DumpGlimpseStats_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.DebugShowTutorialWidget
struct AGlimpsePlayerController_DebugShowTutorialWidget_Params
{
	struct FName                                       TipKey;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.DebugShowDeathMenu
struct AGlimpsePlayerController_DebugShowDeathMenu_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.DebugQuest
struct AGlimpsePlayerController_DebugQuest_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpsePlayerController.ClearProfileFlag
struct AGlimpsePlayerController_ClearProfileFlag_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.ClearOverrideConformityRequests
struct AGlimpsePlayerController_ClearOverrideConformityRequests_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.CanShowPlayerMenu
struct AGlimpsePlayerController_CanShowPlayerMenu_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.AwardCollectible
struct AGlimpsePlayerController_AwardCollectible_Params
{
	class UGlimpseCollectibleGroup*                    Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CollectibleKey;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.AwardAchievement
struct AGlimpsePlayerController_AwardAchievement_Params
{
	struct FString                                     AchievementName;                                          // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpsePlayerController.AutoSave
struct AGlimpsePlayerController_AutoSave_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.AutoLoad
struct AGlimpsePlayerController_AutoLoad_Params
{
};

// Function GlimpseGame.GlimpsePlayerController.AllowShowSkipBoxInCutsceneWidget
struct AGlimpsePlayerController_AllowShowSkipBoxInCutsceneWidget_Params
{
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.AddOverrideConformityRequest
struct AGlimpsePlayerController_AddOverrideConformityRequest_Params
{
	struct FName                                       InRequest;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerController.AddGameplayCountdown
struct AGlimpsePlayerController_AddGameplayCountdown_Params
{
	struct FName                                       CountdownReference;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.CharacterStateCarryCorpse.OnCorpseHitCallback
struct UCharacterStateCarryCorpse_OnCorpseHitCallback_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GlimpseGame.InteractionComponent.TickInteraction
struct UInteractionComponent_TickInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.InteractionComponent.ShouldShowPrompt
struct UInteractionComponent_ShouldShowPrompt_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.InteractionComponent.SetToggleableSecondaryInteractionEnabled
struct UInteractionComponent_SetToggleableSecondaryInteractionEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.InteractionComponent.IsBeingInteracted
struct UInteractionComponent_IsBeingInteracted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.InteractionComponent.EndInteraction
struct UInteractionComponent_EndInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.InteractionComponent.DenyInteraction
struct UInteractionComponent_DenyInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.InteractionComponent.CompleteInteraction
struct UInteractionComponent_CompleteInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSoundFeedback;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.InteractionComponent.CanTarget
struct UInteractionComponent_CanTarget_Params
{
	class AController*                                 TargetSource;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.InteractionComponent.CanInteract
struct UInteractionComponent_CanInteract_Params
{
	class APawn*                                       InteractSource;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionResult>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.InteractionComponent.BeginInteraction
struct UInteractionComponent_BeginInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupUsable.ReceiveOnEndUse
struct AGlimpsePickupUsable_ReceiveOnEndUse_Params
{
	class APawn*                                       UseSource;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      UseTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupUsable.ReceiveOnCompleteUse
struct AGlimpsePickupUsable_ReceiveOnCompleteUse_Params
{
	class APawn*                                       UseSource;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      UseTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupUsable.ReceiveOnBeginUse
struct AGlimpsePickupUsable_ReceiveOnBeginUse_Params
{
	class APawn*                                       UseSource;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      UseTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupUsable.ReceiveCanBeUsed
struct AGlimpsePickupUsable_ReceiveCanBeUsed_Params
{
	class APawn*                                       UseSource;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      UseTarget;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUsageDeniedReason>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupUsable.OnBeginUseInteraction
struct AGlimpsePickupUsable_OnBeginUseInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkeletalMeshComponent.RandomizeVariant
struct UGlimpseSkeletalMeshComponent_RandomizeVariant_Params
{
};

// Function GlimpseGame.GlimpseSkeletalMeshComponent.RandomizeGender
struct UGlimpseSkeletalMeshComponent_RandomizeGender_Params
{
};

// Function GlimpseGame.GlimpseSkeletalMeshComponent.ApplyVariantData
struct UGlimpseSkeletalMeshComponent_ApplyVariantData_Params
{
};

// Function GlimpseGame.GlimpseStatusEffectBase.ShouldAutoRemove
struct UGlimpseStatusEffectBase_ShouldAutoRemove_Params
{
	class UStatusEffectComponent*                      Component;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusEffectBase.ShouldAutoApply
struct UGlimpseStatusEffectBase_ShouldAutoApply_Params
{
	class UStatusEffectComponent*                      Component;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusEffectBase.SetAutoNatives
struct UGlimpseStatusEffectBase_SetAutoNatives_Params
{
};

// Function GlimpseGame.GlimpseStatusEffectBase.Remove
struct UGlimpseStatusEffectBase_Remove_Params
{
};

// Function GlimpseGame.GlimpseStatusEffectBase.OnTick
struct UGlimpseStatusEffectBase_OnTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusEffectBase.OnSuspend
struct UGlimpseStatusEffectBase_OnSuspend_Params
{
};

// Function GlimpseGame.GlimpseStatusEffectBase.OnResume
struct UGlimpseStatusEffectBase_OnResume_Params
{
};

// Function GlimpseGame.GlimpseStatusEffectBase.OnRemove
struct UGlimpseStatusEffectBase_OnRemove_Params
{
};

// Function GlimpseGame.GlimpseStatusEffectBase.OnGetCustomPercent
struct UGlimpseStatusEffectBase_OnGetCustomPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusEffectBase.OnDifficultyChanged
struct UGlimpseStatusEffectBase_OnDifficultyChanged_Params
{
};

// Function GlimpseGame.GlimpseStatusEffectBase.OnBeginPlay
struct UGlimpseStatusEffectBase_OnBeginPlay_Params
{
};

// Function GlimpseGame.GlimpseStatusEffectBase.OnApply
struct UGlimpseStatusEffectBase_OnApply_Params
{
};

// Function GlimpseGame.GlimpseStatusEffectBase.GetPeriodicFloatingTextInterval
struct UGlimpseStatusEffectBase_GetPeriodicFloatingTextInterval_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusEffectBase.GetPeriodicFloatingText
struct UGlimpseStatusEffectBase_GetPeriodicFloatingText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseStatusEffectBase.GetOwnerComponent
struct UGlimpseStatusEffectBase_GetOwnerComponent_Params
{
	class UStatusEffectComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusEffectBase.GetOwnerCharacter
struct UGlimpseStatusEffectBase_GetOwnerCharacter_Params
{
	class AGlimpseCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusEffectBase.GetGlimpseGameMode
struct UGlimpseStatusEffectBase_GetGlimpseGameMode_Params
{
	class UStatusEffectComponent*                      Component;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGlimpseGameMode*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusEffectBase.ApplyStatusDamage
struct UGlimpseStatusEffectBase_ApplyStatusDamage_Params
{
	float                                              BaseDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusEffectBase.Apply
struct UGlimpseStatusEffectBase_Apply_Params
{
	class AController*                                 Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusEffectBase.AddValueModifier
struct UGlimpseStatusEffectBase_AddValueModifier_Params
{
	struct FGameplayTag                                ValueType;                                                // (Parm)
	TEnumAsByte<EValueModifierApplication>             Application;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Modifier;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.ReceiveOnHitThrow
struct AGlimpsePickupWeapon_ReceiveOnHitThrow_Params
{
	class APawn*                                       InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.ReceiveOnHitMelee
struct AGlimpsePickupWeapon_ReceiveOnHitMelee_Params
{
	class APawn*                                       InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              VictimDamageTaken;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.ReceiveOnHitBlock
struct AGlimpsePickupWeapon_ReceiveOnHitBlock_Params
{
	class APawn*                                       InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.OnWeaponUnequipped
struct AGlimpsePickupWeapon_OnWeaponUnequipped_Params
{
	class APawn*                                       WeaponUser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.OnWeaponThrown
struct AGlimpsePickupWeapon_OnWeaponThrown_Params
{
	class APawn*                                       ThrowerPawn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.OnWeaponEquipped
struct AGlimpsePickupWeapon_OnWeaponEquipped_Params
{
	class APawn*                                       WeaponUser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.OnWeaponCombatMove
struct AGlimpsePickupWeapon_OnWeaponCombatMove_Params
{
	class APawn*                                       WeaponUser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.OnTrailDeactivated
struct AGlimpsePickupWeapon_OnTrailDeactivated_Params
{
};

// Function GlimpseGame.GlimpsePickupWeapon.OnTrailActivated
struct AGlimpsePickupWeapon_OnTrailActivated_Params
{
};

// Function GlimpseGame.GlimpsePickupWeapon.OnThrowablePickedUp
struct AGlimpsePickupWeapon_OnThrowablePickedUp_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.OnPressInteractionAction
struct AGlimpsePickupWeapon_OnPressInteractionAction_Params
{
	class APawn*                                       InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteraction>                          InteractionType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.OnFire
struct AGlimpsePickupWeapon_OnFire_Params
{
	class APawn*                                       InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.OnEndFireAction
struct AGlimpsePickupWeapon_OnEndFireAction_Params
{
	class APawn*                                       InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.OnEndBlockAction
struct AGlimpsePickupWeapon_OnEndBlockAction_Params
{
	class APawn*                                       InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.OnEndBlock
struct AGlimpsePickupWeapon_OnEndBlock_Params
{
	class APawn*                                       InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.OnContinuousEffect
struct AGlimpsePickupWeapon_OnContinuousEffect_Params
{
	class APawn*                                       Thrower;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           AffectedCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.OnCharging
struct AGlimpsePickupWeapon_OnCharging_Params
{
	class APawn*                                       InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ChargePercent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.OnChargeComplete
struct AGlimpsePickupWeapon_OnChargeComplete_Params
{
	class APawn*                                       InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.OnChargeCancelled
struct AGlimpsePickupWeapon_OnChargeCancelled_Params
{
	class APawn*                                       InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.OnChargeBegin
struct AGlimpsePickupWeapon_OnChargeBegin_Params
{
	class APawn*                                       InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.OnBeginFireAction
struct AGlimpsePickupWeapon_OnBeginFireAction_Params
{
	class APawn*                                       InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.OnBeginBlockAction
struct AGlimpsePickupWeapon_OnBeginBlockAction_Params
{
	class APawn*                                       InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.OnBeginBlock
struct AGlimpsePickupWeapon_OnBeginBlock_Params
{
	class APawn*                                       InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.Explode
struct AGlimpsePickupWeapon_Explode_Params
{
};

// Function GlimpseGame.GlimpsePickupWeapon.CanFire
struct AGlimpsePickupWeapon_CanFire_Params
{
	class APawn*                                       InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.CancelCharge
struct AGlimpsePickupWeapon_CancelCharge_Params
{
	class APawn*                                       InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.CanBeUnequippedAndSwapped
struct AGlimpsePickupWeapon_CanBeUnequippedAndSwapped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupWeapon.ApplyOnFireHitDamage
struct AGlimpsePickupWeapon_ApplyOnFireHitDamage_Params
{
	class APawn*                                       InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, IsPlainOldData)
	bool                                               bIsChargedShot;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OverrideDamageType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ChargeValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ProjectileActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BonusDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterMovement.MoveUpdatedComponentInterp
struct UGlimpseCharacterMovement_MoveUpdatedComponentInterp_Params
{
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollision;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStayInCustomMove;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterMovement.IsSprinting
struct UGlimpseCharacterMovement_IsSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterMovement.IsRunning
struct UGlimpseCharacterMovement_IsRunning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterMovement.IsMantling
struct UGlimpseCharacterMovement_IsMantling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterMovement.IsInterpMoving
struct UGlimpseCharacterMovement_IsInterpMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterMovement.GetStrafingAngle
struct UGlimpseCharacterMovement_GetStrafingAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterMovement.GetSpeedRatio
struct UGlimpseCharacterMovement_GetSpeedRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterMovement.GetLocalInputVector
struct UGlimpseCharacterMovement_GetLocalInputVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterMovement.GetEstAccelerationMagnitude
struct UGlimpseCharacterMovement_GetEstAccelerationMagnitude_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterMovement.GetEstAcceleration
struct UGlimpseCharacterMovement_GetEstAcceleration_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterMovement.ConsumeLocalInputVector
struct UGlimpseCharacterMovement_ConsumeLocalInputVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterMovement.AddLocalInputVector
struct UGlimpseCharacterMovement_AddLocalInputVector_Params
{
	struct FVector                                     InputVector;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.Vomit
struct AGlimpseCharacter_Vomit_Params
{
	class UAnimMontage*                                VomitMontage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.UseCircumventTool
struct AGlimpseCharacter_UseCircumventTool_Params
{
	class UClass*                                      PickupClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.UseAttackFullBodyBlend
struct AGlimpseCharacter_UseAttackFullBodyBlend_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.UnequipPickup
struct AGlimpseCharacter_UnequipPickup_Params
{
	bool                                               bNoSound;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNoCheck;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNoAnimation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.UnequipAccessory
struct AGlimpseCharacter_UnequipAccessory_Params
{
	class AGlimpsePickup*                              Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.TurnInPickup
struct AGlimpseCharacter_TurnInPickup_Params
{
	class UClass*                                      PickupClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.TryAddPickup
struct AGlimpseCharacter_TryAddPickup_Params
{
	class UClass*                                      PickupClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.ThrowWeapon
struct AGlimpseCharacter_ThrowWeapon_Params
{
	class AGlimpsePickupWeapon*                        Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.SuspendStatusEffects
struct AGlimpseCharacter_SuspendStatusEffects_Params
{
};

// Function GlimpseGame.GlimpseCharacter.StopStandardAnimation
struct AGlimpseCharacter_StopStandardAnimation_Params
{
	struct FName                                       OutroSectionName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.StopAnimationChain
struct AGlimpseCharacter_StopAnimationChain_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.StartCombatMove
struct AGlimpseCharacter_StartCombatMove_Params
{
	struct FName                                       MoveName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfAttacks;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AutoReleaseTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.ShoveTargetCharacter
struct AGlimpseCharacter_ShoveTargetCharacter_Params
{
	class AGlimpseCharacter*                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHitReactionCategory>                  Reaction;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ShoveMoveName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.ShouldTakeDamageImpulse
struct AGlimpseCharacter_ShouldTakeDamageImpulse_Params
{
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.SetGasMask
struct AGlimpseCharacter_SetGasMask_Params
{
	bool                                               bOn;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.ResumeStatusEffects
struct AGlimpseCharacter_ResumeStatusEffects_Params
{
};

// Function GlimpseGame.GlimpseCharacter.RequestBark
struct AGlimpseCharacter_RequestBark_Params
{
	class UAkAudioEvent*                               Bark;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RandomChance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.RemovePickup
struct AGlimpseCharacter_RemovePickup_Params
{
	class UClass*                                      PickupClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyOnRemove;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.RemoveLightingSource
struct AGlimpseCharacter_RemoveLightingSource_Params
{
	class AActor*                                      Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.RemoveFoliageVolume
struct AGlimpseCharacter_RemoveFoliageVolume_Params
{
	class AActor*                                      Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.RemoveCurrency
struct AGlimpseCharacter_RemoveCurrency_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.ReceiveTakeDamage
struct AGlimpseCharacter_ReceiveTakeDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ActualDamage;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseDamageCategory>                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.PlayStandardAnimation
struct AGlimpseCharacter_PlayStandardAnimation_Params
{
	TEnumAsByte<EStandardAnimation>                    Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStandardAnimationMode>                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStandardAnimationMovement>            MovementType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Focus;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.PlayHitReactionAnimation
struct AGlimpseCharacter_PlayHitReactionAnimation_Params
{
	struct FVector                                     DamageDirection;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bKnockback;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.PlayAnimationChain
struct AGlimpseCharacter_PlayAnimationChain_Params
{
	class UGlimpseAnimationChain*                      AnimationChain;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.OnLootInteractionIndex
struct AGlimpseCharacter_OnLootInteractionIndex_Params
{
	class APawn*                                       InteractSource;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.OnEndCarryInteraction
struct AGlimpseCharacter_OnEndCarryInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.OnCorpseHitSound
struct AGlimpseCharacter_OnCorpseHitSound_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.OnCompleteLootInteraction
struct AGlimpseCharacter_OnCompleteLootInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.OnCompleteCarryInteraction
struct AGlimpseCharacter_OnCompleteCarryInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.OnCanCarryInteraction
struct AGlimpseCharacter_OnCanCarryInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionResult>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.OnBeginCarryInteraction
struct AGlimpseCharacter_OnBeginCarryInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.MoveOutOfInteractiveObject
struct AGlimpseCharacter_MoveOutOfInteractiveObject_Params
{
	class AActor*                                      RelativeActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             PossibleRelativeLocations;                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FRotator                                    RelativeRotation;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.MoveIntoInteractiveObject
struct AGlimpseCharacter_MoveIntoInteractiveObject_Params
{
	class AActor*                                      RelativeActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.Kill
struct AGlimpseCharacter_Kill_Params
{
};

// Function GlimpseGame.GlimpseCharacter.JumpCurrentMontageSection
struct AGlimpseCharacter_JumpCurrentMontageSection_Params
{
	struct FName                                       SectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsZiplining
struct AGlimpseCharacter_IsZiplining_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsWalking
struct AGlimpseCharacter_IsWalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsUsingPickup
struct AGlimpseCharacter_IsUsingPickup_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsTalking
struct AGlimpseCharacter_IsTalking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsSprinting
struct AGlimpseCharacter_IsSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsSlowPaced
struct AGlimpseCharacter_IsSlowPaced_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsRunning
struct AGlimpseCharacter_IsRunning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsRecoiling
struct AGlimpseCharacter_IsRecoiling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsPlayingSuspicionReaction
struct AGlimpseCharacter_IsPlayingSuspicionReaction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsPlayingStandardAnimation
struct AGlimpseCharacter_IsPlayingStandardAnimation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsPlayingMontage
struct AGlimpseCharacter_IsPlayingMontage_Params
{
	class UAnimMontage*                                ThisMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsParrying
struct AGlimpseCharacter_IsParrying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsMoving
struct AGlimpseCharacter_IsMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsMantling
struct AGlimpseCharacter_IsMantling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsLeaningRight
struct AGlimpseCharacter_IsLeaningRight_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsLeaningLeft
struct AGlimpseCharacter_IsLeaningLeft_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsLeaning
struct AGlimpseCharacter_IsLeaning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsLanding
struct AGlimpseCharacter_IsLanding_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsInteracting
struct AGlimpseCharacter_IsInteracting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsInMidAir
struct AGlimpseCharacter_IsInMidAir_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsInHitReaction
struct AGlimpseCharacter_IsInHitReaction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsInCombatMove
struct AGlimpseCharacter_IsInCombatMove_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsHitWhileStunned
struct AGlimpseCharacter_IsHitWhileStunned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsHeadBone
struct AGlimpseCharacter_IsHeadBone_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsDrugLevelLowerThan
struct AGlimpseCharacter_IsDrugLevelLowerThan_Params
{
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsDodging
struct AGlimpseCharacter_IsDodging_Params
{
	class AGlimpseCharacter*                           Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsDead
struct AGlimpseCharacter_IsDead_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsCrouching
struct AGlimpseCharacter_IsCrouching_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsCarrying
struct AGlimpseCharacter_IsCarrying_Params
{
	bool                                               bOnlyDeadCorpse;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsBusy
struct AGlimpseCharacter_IsBusy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsBlocking
struct AGlimpseCharacter_IsBlocking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsBarkPlaying
struct AGlimpseCharacter_IsBarkPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.IsAlive
struct AGlimpseCharacter_IsAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.InvestigateCharacter
struct AGlimpseCharacter_InvestigateCharacter_Params
{
	float                                              Ratio;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.InterruptConversation
struct AGlimpseCharacter_InterruptConversation_Params
{
	bool                                               bForceSuccess;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.InterruptBark
struct AGlimpseCharacter_InterruptBark_Params
{
};

// Function GlimpseGame.GlimpseCharacter.Interrupt
struct AGlimpseCharacter_Interrupt_Params
{
};

// Function GlimpseGame.GlimpseCharacter.InFoliageCover
struct AGlimpseCharacter_InFoliageCover_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.HasWeaponEquipped
struct AGlimpseCharacter_HasWeaponEquipped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.HasPickupFromSelector
struct AGlimpseCharacter_HasPickupFromSelector_Params
{
	struct FPickupSelector                             PickupSelector;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      OutMatchedType;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.HasPickupFromList
struct AGlimpseCharacter_HasPickupFromList_Params
{
	class UGlimpsePickupList*                          PickupList;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutMatchedType;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.HasPickup
struct AGlimpseCharacter_HasPickup_Params
{
	class UClass*                                      PickupClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.HasHealth
struct AGlimpseCharacter_HasHealth_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.HalfAngleCheck2D
struct AGlimpseCharacter_HalfAngleCheck2D_Params
{
	struct FVector                                     TargetPos;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfAngle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.HalfAngleCheck
struct AGlimpseCharacter_HalfAngleCheck_Params
{
	struct FVector                                     TargetPos;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HalfAngle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetUpperBodyBlendWeight
struct AGlimpseCharacter_GetUpperBodyBlendWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetTarget
struct AGlimpseCharacter_GetTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetStandardAnimationType
struct AGlimpseCharacter_GetStandardAnimationType_Params
{
	TEnumAsByte<EStandardAnimation>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetSpeedModifier
struct AGlimpseCharacter_GetSpeedModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetQuickslotUsablePickup
struct AGlimpseCharacter_GetQuickslotUsablePickup_Params
{
	class AGlimpsePickupUsable*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetNumPickups
struct AGlimpseCharacter_GetNumPickups_Params
{
	class UClass*                                      PickupClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetNormalizedControlRotation
struct AGlimpseCharacter_GetNormalizedControlRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetMovementMagnitude
struct AGlimpseCharacter_GetMovementMagnitude_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetMovementHeading
struct AGlimpseCharacter_GetMovementHeading_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetMeleeAttackChargeMultiplier
struct AGlimpseCharacter_GetMeleeAttackChargeMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetLastHoldPoseSequence
struct AGlimpseCharacter_GetLastHoldPoseSequence_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetLastHoldPoseAlpha
struct AGlimpseCharacter_GetLastHoldPoseAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetLastDamageTime
struct AGlimpseCharacter_GetLastDamageTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetLastDamageNonLethal
struct AGlimpseCharacter_GetLastDamageNonLethal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetLastDamageInstigator
struct AGlimpseCharacter_GetLastDamageInstigator_Params
{
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetLastDamageInCombat
struct AGlimpseCharacter_GetLastDamageInCombat_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetLastDamageCauser
struct AGlimpseCharacter_GetLastDamageCauser_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetLastDamageCategory
struct AGlimpseCharacter_GetLastDamageCategory_Params
{
	TEnumAsByte<EGlimpseDamageCategory>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetLastDamageBaseValue
struct AGlimpseCharacter_GetLastDamageBaseValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetLastDamageActualValue
struct AGlimpseCharacter_GetLastDamageActualValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetLastCombatDamageTime
struct AGlimpseCharacter_GetLastCombatDamageTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetInteractionMode
struct AGlimpseCharacter_GetInteractionMode_Params
{
	TEnumAsByte<EStandardAnimationMode>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetIdleAnimOverride
struct AGlimpseCharacter_GetIdleAnimOverride_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetHoldPoseSequence
struct AGlimpseCharacter_GetHoldPoseSequence_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetHoldPoseAlpha
struct AGlimpseCharacter_GetHoldPoseAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetHoldPose
struct AGlimpseCharacter_GetHoldPose_Params
{
	TEnumAsByte<EHoldPose>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetGender
struct AGlimpseCharacter_GetGender_Params
{
	TEnumAsByte<ECharacterGender>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetEstAccelerationMagnitude
struct AGlimpseCharacter_GetEstAccelerationMagnitude_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetEstAcceleration
struct AGlimpseCharacter_GetEstAcceleration_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetEquippedWeapon
struct AGlimpseCharacter_GetEquippedWeapon_Params
{
	class AGlimpsePickupWeapon*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetEquippedThrowableWeapon
struct AGlimpseCharacter_GetEquippedThrowableWeapon_Params
{
	class AGlimpsePickupWeapon*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetEquippedPickup
struct AGlimpseCharacter_GetEquippedPickup_Params
{
	class AGlimpsePickup*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetEquippedOutfit
struct AGlimpseCharacter_GetEquippedOutfit_Params
{
	class AGlimpsePickupOutfit*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetEquippedMeleeWeapon
struct AGlimpseCharacter_GetEquippedMeleeWeapon_Params
{
	class AGlimpsePickupWeapon*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetDeathPose
struct AGlimpseCharacter_GetDeathPose_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetDamageWindowReached
struct AGlimpseCharacter_GetDamageWindowReached_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetCharacterContext
struct AGlimpseCharacter_GetCharacterContext_Params
{
	class UGlimpseSuspicionCharacter*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetCarriedCorpse
struct AGlimpseCharacter_GetCarriedCorpse_Params
{
	class AGlimpseCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetAttractorContext
struct AGlimpseCharacter_GetAttractorContext_Params
{
	TEnumAsByte<EGlimpseSuspicionPriority>             Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseSuspicionAttractor*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetAnimationState
struct AGlimpseCharacter_GetAnimationState_Params
{
	TEnumAsByte<ECharacterAnimationState>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetAngleToDetectionTarget
struct AGlimpseCharacter_GetAngleToDetectionTarget_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.GetAngleToActor
struct AGlimpseCharacter_GetAngleToActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.ForceBark
struct AGlimpseCharacter_ForceBark_Params
{
	class UAkAudioEvent*                               Bark;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnBarkFinished;                                           // (Parm, ZeroConstructor)
	bool                                               bUninterruptible;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseAnimationChain*                      AnimationChain;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.FindPickup
struct AGlimpseCharacter_FindPickup_Params
{
	class UClass*                                      PickupClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpsePickup*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.EquipPickupFromClass
struct AGlimpseCharacter_EquipPickupFromClass_Params
{
	class UClass*                                      PickupClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.EquipPickup
struct AGlimpseCharacter_EquipPickup_Params
{
	class AGlimpsePickup*                              Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNoAnimation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.EquipAccessory
struct AGlimpseCharacter_EquipAccessory_Params
{
	class AGlimpsePickup*                              Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.DropPickup
struct AGlimpseCharacter_DropPickup_Params
{
	class AGlimpsePickup*                              Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.CanInterruptAttack
struct AGlimpseCharacter_CanInterruptAttack_Params
{
	struct FName                                       AttackName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseDamageCategory>                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.CanDoWaitAction
struct AGlimpseCharacter_CanDoWaitAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.CanAddPickup
struct AGlimpseCharacter_CanAddPickup_Params
{
	class UClass*                                      PickupClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECanAddResult>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.BarkWithDelay
struct AGlimpseCharacter_BarkWithDelay_Params
{
	class UAkAudioEvent*                               Bark;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUninterruptible;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseAnimationChain*                      AnimationChain;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.Bark
struct AGlimpseCharacter_Bark_Params
{
	class UAkAudioEvent*                               Bark;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUninterruptible;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseAnimationChain*                      AnimationChain;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function GlimpseGame.GlimpseCharacter.AwardPickup
struct AGlimpseCharacter_AwardPickup_Params
{
	class UClass*                                      PickupClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.AreStatusEffectsSuspended
struct AGlimpseCharacter_AreStatusEffectsSuspended_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.AreInventoriesInitialized
struct AGlimpseCharacter_AreInventoriesInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.AddPickup
struct AGlimpseCharacter_AddPickup_Params
{
	class UClass*                                      PickupClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FillStacks;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpsePickup*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.AddLightingSource
struct AGlimpseCharacter_AddLightingSource_Params
{
	class AActor*                                      Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.AddFoliageVolume
struct AGlimpseCharacter_AddFoliageVolume_Params
{
	class AActor*                                      Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacter.AddCurrency
struct AGlimpseCharacter_AddCurrency_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseWeatherExclusionVolume.OnEndOverlap
struct AGlimpseWeatherExclusionVolume_OnEndOverlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseWeatherExclusionVolume.OnBeginOverlap
struct AGlimpseWeatherExclusionVolume_OnBeginOverlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.TryUncrouch
struct AGlimpsePlayerCharacter_TryUncrouch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.TryGetCaptionParameterOverrides
struct AGlimpsePlayerCharacter_TryGetCaptionParameterOverrides_Params
{
	float                                              OutMaxDistance;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutMaxHalfAngle;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.TeleportToCamera
struct AGlimpsePlayerCharacter_TeleportToCamera_Params
{
	class AActor*                                      CameraActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.SetPlayerSeen
struct AGlimpsePlayerCharacter_SetPlayerSeen_Params
{
	bool                                               bSeen;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.SetPlayerArmsOverride
struct AGlimpsePlayerCharacter_SetPlayerArmsOverride_Params
{
	struct FName                                       OverrideVariantName;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.RequestPlayerFogIntensity
struct AGlimpsePlayerCharacter_RequestPlayerFogIntensity_Params
{
	class AActor*                                      RequestingActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.ReleasePlayerFogIntensity
struct AGlimpsePlayerCharacter_ReleasePlayerFogIntensity_Params
{
	class AActor*                                      RequestingActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.PlaceCorpse
struct AGlimpsePlayerCharacter_PlaceCorpse_Params
{
	struct FVector                                     TargetLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.OnTimeOfDayChanged
struct AGlimpsePlayerCharacter_OnTimeOfDayChanged_Params
{
};

// Function GlimpseGame.GlimpsePlayerCharacter.OnStatusEffectApplied
struct AGlimpsePlayerCharacter_OnStatusEffectApplied_Params
{
	class UGlimpseStatusEffectBase*                    Effect;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.OnEndUseCorpseItemInteraction
struct AGlimpsePlayerCharacter_OnEndUseCorpseItemInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.OnCompleteUseCorpseItemInteraction
struct AGlimpsePlayerCharacter_OnCompleteUseCorpseItemInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.OnClothingChanged
struct AGlimpsePlayerCharacter_OnClothingChanged_Params
{
	class AGlimpsePickup*                              Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.OnCanUseCorpseItemInteraction
struct AGlimpsePlayerCharacter_OnCanUseCorpseItemInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionResult>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.OnBeginUseCorpseItemInteraction
struct AGlimpsePlayerCharacter_OnBeginUseCorpseItemInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.MakeClimbingSounds
struct AGlimpsePlayerCharacter_MakeClimbingSounds_Params
{
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.IsPlayerInCombatMode
struct AGlimpsePlayerCharacter_IsPlayerInCombatMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.IsOutfitSlotEmpty
struct AGlimpsePlayerCharacter_IsOutfitSlotEmpty_Params
{
	TEnumAsByte<EOutfitSlot>                           OutfitSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.IsJoyed
struct AGlimpsePlayerCharacter_IsJoyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.IsInCombat
struct AGlimpsePlayerCharacter_IsInCombat_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.IsEquippedOutfitType
struct AGlimpsePlayerCharacter_IsEquippedOutfitType_Params
{
	TEnumAsByte<EGlimpseOutfitType>                    OutfitType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.IsDying
struct AGlimpsePlayerCharacter_IsDying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.IsBeingSeen
struct AGlimpsePlayerCharacter_IsBeingSeen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.InstantCraft
struct AGlimpsePlayerCharacter_InstantCraft_Params
{
	struct FName                                       RecipeKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.GetWaitingStatChange
struct AGlimpsePlayerCharacter_GetWaitingStatChange_Params
{
	TEnumAsByte<ESurvivalNeed>                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WaitHours;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.GetTimeSinceLastSeen
struct AGlimpsePlayerCharacter_GetTimeSinceLastSeen_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.GetStatChangePerHourOfSleep
struct AGlimpsePlayerCharacter_GetStatChangePerHourOfSleep_Params
{
	TEnumAsByte<ESurvivalNeed>                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.GetPlayerFogIntensity
struct AGlimpsePlayerCharacter_GetPlayerFogIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.GetPlayerDrugState
struct AGlimpsePlayerCharacter_GetPlayerDrugState_Params
{
	TEnumAsByte<EPlayerDrugState>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.GetInventoryCount
struct AGlimpsePlayerCharacter_GetInventoryCount_Params
{
	bool                                               ExcludeClothing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeHolster;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExcludeQuestItems;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.GetFogVolumeIntensity
struct AGlimpsePlayerCharacter_GetFogVolumeIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.GetBloodSugarLevelChangePerHourOfWaiting
struct AGlimpsePlayerCharacter_GetBloodSugarLevelChangePerHourOfWaiting_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.GetBloodSugarLevelChangePerHourOfSleep
struct AGlimpsePlayerCharacter_GetBloodSugarLevelChangePerHourOfSleep_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.ForceWalk
struct AGlimpsePlayerCharacter_ForceWalk_Params
{
};

// Function GlimpseGame.GlimpsePlayerCharacter.ForceGhost
struct AGlimpsePlayerCharacter_ForceGhost_Params
{
};

// Function GlimpseGame.GlimpsePlayerCharacter.EquipOutfit
struct AGlimpsePlayerCharacter_EquipOutfit_Params
{
	class UClass*                                      OutfitClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReplaceCurrentOutfit;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.DropCorpse
struct AGlimpsePlayerCharacter_DropCorpse_Params
{
	bool                                               bThrow;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstantDrop;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.ClearPlayerArmsOverride
struct AGlimpsePlayerCharacter_ClearPlayerArmsOverride_Params
{
};

// Function GlimpseGame.GlimpsePlayerCharacter.CanSeeNPCFootprints
struct AGlimpsePlayerCharacter_CanSeeNPCFootprints_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.CanPlaySystemicBark
struct AGlimpsePlayerCharacter_CanPlaySystemicBark_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.CanInstantCraft
struct AGlimpsePlayerCharacter_CanInstantCraft_Params
{
	struct FName                                       RecipeKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.BarkReactionToSeeingNPC
struct AGlimpsePlayerCharacter_BarkReactionToSeeingNPC_Params
{
	class AGlimpseAICharacter*                         NPC;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SoundEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCharacter.ActivateHeartbeat
struct AGlimpsePlayerCharacter_ActivateHeartbeat_Params
{
	TEnumAsByte<EHeartbeat>                            Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkill.OnBought
struct UGlimpseSkill_OnBought_Params
{
	class AGlimpsePlayerCharacter*                     BuyerPlayerCharacter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkill.GetSkillVideoURL
struct UGlimpseSkill_GetSkillVideoURL_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GlimpseGame.GlimpseSkill.GetSkillKey
struct UGlimpseSkill_GetSkillKey_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SkillComponent.SpendSkillPoints
struct USkillComponent_SpendSkillPoints_Params
{
	int                                                SkillPointsCount;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.SkillComponent.IsSkillBought
struct USkillComponent_IsSkillBought_Params
{
	class UClass*                                      SkillType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SkillComponent.IsSkillAvailable
struct USkillComponent_IsSkillAvailable_Params
{
	class UClass*                                      SkillType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SkillComponent.GetSkillDescription
struct USkillComponent_GetSkillDescription_Params
{
	class UGlimpseSkill*                               Skill;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function GlimpseGame.SkillComponent.GetSkillCost
struct USkillComponent_GetSkillCost_Params
{
	class UClass*                                      SkillType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SkillComponent.GetSkill
struct USkillComponent_GetSkill_Params
{
	class UClass*                                      SkillType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseSkill*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.SkillComponent.GainSkillPoints
struct USkillComponent_GainSkillPoints_Params
{
	int                                                SkillPointsCount;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.SkillComponent.CanBuySkill
struct USkillComponent_CanBuySkill_Params
{
	class UGlimpseSkill*                               UnlockedSkill;                                            // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SkillComponent.BuySkill
struct USkillComponent_BuySkill_Params
{
	class UGlimpseSkill*                               UnlockedSkill;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.Unlock
struct AGlimpseLockable_Unlock_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.SetLockableState
struct AGlimpseLockable_SetLockableState_Params
{
	TEnumAsByte<ELockableState>                        InLockableState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.Rattle
struct AGlimpseLockable_Rattle_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.Open
struct AGlimpseLockable_Open_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.OnRotationCurve
struct AGlimpseLockable_OnRotationCurve_Params
{
	struct FVector                                     Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.OnOpenInteractionPromptIndex
struct AGlimpseLockable_OnOpenInteractionPromptIndex_Params
{
	class APawn*                                       InteractSource;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.OnLocationCurve
struct AGlimpseLockable_OnLocationCurve_Params
{
	struct FVector                                     Translation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.OnEndCircumventInteraction
struct AGlimpseLockable_OnEndCircumventInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.OnCompleteCircumventInteraction
struct AGlimpseLockable_OnCompleteCircumventInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.OnCanUnlockInteract
struct AGlimpseLockable_OnCanUnlockInteract_Params
{
	class APawn*                                       InteractSource;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionResult>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.OnCanOpenInteract
struct AGlimpseLockable_OnCanOpenInteract_Params
{
	class APawn*                                       InteractSource;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionResult>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.OnCanLockInteract
struct AGlimpseLockable_OnCanLockInteract_Params
{
	class APawn*                                       InteractSource;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionResult>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.OnCanCloseInteract
struct AGlimpseLockable_OnCanCloseInteract_Params
{
	class APawn*                                       InteractSource;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionResult>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.OnCanCircumventInteract
struct AGlimpseLockable_OnCanCircumventInteract_Params
{
	class APawn*                                       InteractSource;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionResult>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.OnCanBashInteract
struct AGlimpseLockable_OnCanBashInteract_Params
{
	class APawn*                                       InteractSource;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionResult>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.OnBeginCircumventInteraction
struct AGlimpseLockable_OnBeginCircumventInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.Lock
struct AGlimpseLockable_Lock_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.K2_RefreshPose
struct AGlimpseLockable_K2_RefreshPose_Params
{
};

// Function GlimpseGame.GlimpseLockable.GetOpenInteraction
struct AGlimpseLockable_GetOpenInteraction_Params
{
	class UInteractionComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.GetLockInteraction
struct AGlimpseLockable_GetLockInteraction_Params
{
	class UInteractionComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.GetLockableState
struct AGlimpseLockable_GetLockableState_Params
{
	TEnumAsByte<ELockableState>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.Close
struct AGlimpseLockable_Close_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.CanUnlock
struct AGlimpseLockable_CanUnlock_Params
{
	class APawn*                                       InteractSource;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECanUnlock>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.CanLock
struct AGlimpseLockable_CanLock_Params
{
	class APawn*                                       InteractSource;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECanUnlock>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLockable.Bash
struct AGlimpseLockable_Bash_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLootable.UpdateLootableState
struct AGlimpseLootable_UpdateLootableState_Params
{
	bool                                               bIsLooted;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLootable.SetPickupSelector
struct AGlimpseLootable_SetPickupSelector_Params
{
	struct FPickupSelector                             NewSelector;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GlimpseGame.GlimpseLootable.SetPickups
struct AGlimpseLootable_SetPickups_Params
{
	TArray<class UClass*>                              Pickups;                                                  // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseLootable.SetPickupListAsset
struct AGlimpseLootable_SetPickupListAsset_Params
{
	class UGlimpsePickupList*                          PickupList;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLootable.SetPickupList
struct AGlimpseLootable_SetPickupList_Params
{
	struct FPickupList                                 PickupList;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GlimpseGame.GlimpseLootable.ResetLootable
struct AGlimpseLootable_ResetLootable_Params
{
};

// Function GlimpseGame.GlimpseLootable.RefreshLootableState
struct AGlimpseLootable_RefreshLootableState_Params
{
};

// Function GlimpseGame.GlimpseLootable.OnLoot
struct AGlimpseLootable_OnLoot_Params
{
	class AGlimpsePlayerController*                    PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLootable.Loot
struct AGlimpseLootable_Loot_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLootable.IsLooted
struct AGlimpseLootable_IsLooted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLootable.CanTarget
struct AGlimpseLootable_CanTarget_Params
{
	class AController*                                 TargetSource;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.BTService_CharacterAwareness.IsCharacterAcceptable
struct UBTService_CharacterAwareness_IsCharacterAcceptable_Params
{
	class AGlimpseCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.InventoryComponent.Remove
struct UInventoryComponent_Remove_Params
{
	class UClass*                                      PickupClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyOnRemove;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.InventoryComponent.Contains
struct UInventoryComponent_Contains_Params
{
	class UClass*                                      PickupClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.InventoryComponent.Clear
struct UInventoryComponent_Clear_Params
{
	bool                                               bDestroyOnClear;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.InventoryComponent.Add
struct UInventoryComponent_Add_Params
{
	class UClass*                                      PickupClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFillExistingStacks;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpsePickup*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.TimeSinceLastAttack
struct AGlimpseAICharacter_TimeSinceLastAttack_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.TimeSinceAttackUsed
struct AGlimpseAICharacter_TimeSinceAttackUsed_Params
{
	struct FName                                       AttackName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.SetTargetActor
struct AGlimpseAICharacter_SetTargetActor_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.SetPatrolActor
struct AGlimpseAICharacter_SetPatrolActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.SetNoSuspicion
struct AGlimpseAICharacter_SetNoSuspicion_Params
{
	bool                                               bFlag;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.SetCorpseState
struct AGlimpseAICharacter_SetCorpseState_Params
{
	TEnumAsByte<ECorpseState>                          State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.SetConversationResponse
struct AGlimpseAICharacter_SetConversationResponse_Params
{
	class UGlimpseConversationAsset*                   Conversation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.SetBlinkState
struct AGlimpseAICharacter_SetBlinkState_Params
{
	bool                                               bOpen;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.SetAnimationData
struct AGlimpseAICharacter_SetAnimationData_Params
{
	class UGlimpseAnimationData*                       InMale;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseAnimationData*                       InFemale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseArchetype>                     InArchetype;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.Resurrect
struct AGlimpseAICharacter_Resurrect_Params
{
	struct FVector                                     ResurrectLocation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TestCorpse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WithoutAnim;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.RequestSuspicionBark
struct AGlimpseAICharacter_RequestSuspicionBark_Params
{
	TEnumAsByte<EAISuspicionState>                     State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckIfAtLeastInState;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.OnSuspicionStateChanged
struct AGlimpseAICharacter_OnSuspicionStateChanged_Params
{
	TEnumAsByte<EAISuspicionState>                     OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAISuspicionState>                     NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.OnLivenessPhysicsEnable
struct AGlimpseAICharacter_OnLivenessPhysicsEnable_Params
{
};

// Function GlimpseGame.GlimpseAICharacter.OnLivenessPhysicsDisable
struct AGlimpseAICharacter_OnLivenessPhysicsDisable_Params
{
};

// Function GlimpseGame.GlimpseAICharacter.OnInquisitiveRequest
struct AGlimpseAICharacter_OnInquisitiveRequest_Params
{
	class AGlimpseCharacter*                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESuspicionConformityRequest>           Request;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.OnGiftMontageBlendingOut
struct AGlimpseAICharacter_OnGiftMontageBlendingOut_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.OnGiftEndInteraction
struct AGlimpseAICharacter_OnGiftEndInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.OnGiftCompleteInteraction
struct AGlimpseAICharacter_OnGiftCompleteInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.OnGiftBeginInteraction
struct AGlimpseAICharacter_OnGiftBeginInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.OnDroppedGiftHit
struct AGlimpseAICharacter_OnDroppedGiftHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.OnCanGiftInteract
struct AGlimpseAICharacter_OnCanGiftInteract_Params
{
	class APawn*                                       InteractSource;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionResult>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.OnCanBarterInteract
struct AGlimpseAICharacter_OnCanBarterInteract_Params
{
	class APawn*                                       InteractSource;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionResult>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.OnBeginLootInteraction
struct AGlimpseAICharacter_OnBeginLootInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.OnBarterCompleteInteraction
struct AGlimpseAICharacter_OnBarterCompleteInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.MarkAttackUsed
struct AGlimpseAICharacter_MarkAttackUsed_Params
{
	struct FName                                       AttackName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.MarkAIAsImportant
struct AGlimpseAICharacter_MarkAIAsImportant_Params
{
};

// Function GlimpseGame.GlimpseAICharacter.IsOutOfPlayerSight
struct AGlimpseAICharacter_IsOutOfPlayerSight_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.IsInPlayerVolume
struct AGlimpseAICharacter_IsInPlayerVolume_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.IsCharacterLive
struct AGlimpseAICharacter_IsCharacterLive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.IsAttackViable
struct AGlimpseAICharacter_IsAttackViable_Params
{
	struct FName                                       Attack;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.HasCustomBehavior
struct AGlimpseAICharacter_HasCustomBehavior_Params
{
	TEnumAsByte<EAICustomBehaviour>                    Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UBehaviorTree*                               InBehavior;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.GetPuppetBrain
struct AGlimpseAICharacter_GetPuppetBrain_Params
{
	class UPuppetBrain*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.GetInquisitiveState
struct AGlimpseAICharacter_GetInquisitiveState_Params
{
	class AGlimpseCharacter*                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseInquisitiveState>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.GetDefaultCombatMoveSelection
struct AGlimpseAICharacter_GetDefaultCombatMoveSelection_Params
{
	TArray<struct FCombatMoveSelection>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GlimpseGame.GlimpseAICharacter.GetBlinkAnimParameters
struct AGlimpseAICharacter_GetBlinkAnimParameters_Params
{
	struct FRotator                                    OrientationMask;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ClosingAngle_Top;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ClosingAngle_Bot;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentRatio;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.GetAnkleIKOffset
struct AGlimpseAICharacter_GetAnkleIKOffset_Params
{
	bool                                               bLeftRight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.FindAIInView
struct AGlimpseAICharacter_FindAIInView_Params
{
	float                                              MaxDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ConeHalfAngleDegrees;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AGlimpseAICharacter*>                 OutAIs;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseAICharacter.FindAIInCone
struct AGlimpseAICharacter_FindAIInCone_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ConeHalfAngleDegrees;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AGlimpseAICharacter*>                 OutAIs;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseAICharacter.DropAllInventory
struct AGlimpseAICharacter_DropAllInventory_Params
{
};

// Function GlimpseGame.GlimpseAICharacter.ChooseSpecialMove
struct AGlimpseAICharacter_ChooseSpecialMove_Params
{
	TArray<class AGlimpseAICharacter*>                 DeadAgents;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FCombatAgent>                        CombatAgents;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       out_MoveName;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                out_DeadIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                out_CombatIndex;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.ChooseAttackFromList
struct AGlimpseAICharacter_ChooseAttackFromList_Params
{
	TArray<struct FCombatMoveSelection>                InCombatMoves;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AGlimpseCharacter*                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.ChooseAttack
struct AGlimpseAICharacter_ChooseAttack_Params
{
	class AGlimpseCharacter*                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TargetDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseCombatRange>                   CombatRange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.ChangeStimulusResponseBark
struct AGlimpseAICharacter_ChangeStimulusResponseBark_Params
{
	TEnumAsByte<EAISuspicionStimulusType>              Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.ChangeBehaviourBark
struct AGlimpseAICharacter_ChangeBehaviourBark_Params
{
	TEnumAsByte<EAIBehaviourBark>                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.Blink
struct AGlimpseAICharacter_Blink_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAICharacter.AddSuspicionOverride
struct AGlimpseAICharacter_AddSuspicionOverride_Params
{
	struct FSuspicionEffectOverride                    NewSuspicionOverride;                                     // (Parm)
};

// Function GlimpseGame.CombatRingComponent.CollisionUnBumped
struct UCombatRingComponent_CollisionUnBumped_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.CombatRingComponent.CollisionBumped
struct UCombatRingComponent_CollisionBumped_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OverlapInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GlimpseGame.ConditionalComponent.RefreshConditionAny
struct UConditionalComponent_RefreshConditionAny_Params
{
};

// Function GlimpseGame.ConditionalComponent.OnPickupOwnerPickedUp
struct UConditionalComponent_OnPickupOwnerPickedUp_Params
{
	class APawn*                                       PickupSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.ConditionalComponent.IsConditionMet
struct UConditionalComponent_IsConditionMet_Params
{
	class AGlimpsePlayerController*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ManualConditionalComponent.SetCondition
struct UManualConditionalComponent_SetCondition_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.CraftingRecipe.GetRecipeKey
struct UCraftingRecipe_GetRecipeKey_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.DecoratorPOIComponent.EndTriggerOverlap
struct UDecoratorPOIComponent_EndTriggerOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.DecoratorPOIComponent.EndProximityOverlap
struct UDecoratorPOIComponent_EndProximityOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.DecoratorPOIComponent.BeginTriggerOverlap
struct UDecoratorPOIComponent_BeginTriggerOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GlimpseGame.DecoratorPOIComponent.BeginProximityOverlap
struct UDecoratorPOIComponent_BeginProximityOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GlimpseGame.DescriptionComponent.GetFunctionalDescription
struct UDescriptionComponent_GetFunctionalDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.DescriptionComponent.GetDescriptiveName
struct UDescriptionComponent_GetDescriptiveName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.DescriptionComponent.GetDescriptiveImage
struct UDescriptionComponent_GetDescriptiveImage_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.DescriptionComponent.GetDescription
struct UDescriptionComponent_GetDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.DLCGameModifier.OnGameStartOrRestore
struct UDLCGameModifier_OnGameStartOrRestore_Params
{
	class AGlimpseGameMode*                            GameMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.DLCGameModifier.OnGameEnd
struct UDLCGameModifier_OnGameEnd_Params
{
	class AGlimpseGameMode*                            GameMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.DLCGameModifier.MarkDLCIntegrated
struct UDLCGameModifier_MarkDLCIntegrated_Params
{
};

// Function GlimpseGame.DLCGameModifier.IsDLCIntegrated
struct UDLCGameModifier_IsDLCIntegrated_Params
{
	bool                                               bRequireSameOrNewerVersion;                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.DLCGameModifier.GetDLCVersion
struct UDLCGameModifier_GetDLCVersion_Params
{
	int                                                MajorVersion;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MinorVersion;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.DLCGameModifier.GetDLCName
struct UDLCGameModifier_GetDLCName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAimAssistTarget.SetTargetActive
struct UGlimpseAimAssistTarget_SetTargetActive_Params
{
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAISpawner.SpawnAI
struct AGlimpseAISpawner_SpawnAI_Params
{
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseAICharacter*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAISpawner.OnAISpawned
struct AGlimpseAISpawner_OnAISpawned_Params
{
	class AGlimpseAICharacter*                         Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAISpawner.IsAvailable
struct AGlimpseAISpawner_IsAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAISpawner.DespawnAI
struct AGlimpseAISpawner_DespawnAI_Params
{
	class AGlimpseAICharacter*                         Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseButton.OnCompleteInteraction
struct AGlimpseButton_OnCompleteInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseZiplineAnchor.StartZip
struct AGlimpseZiplineAnchor_StartZip_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseZiplineAnchor.EndZip
struct AGlimpseZiplineAnchor_EndZip_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseVictoriaPlayerCharacter.OnAutoReloadSkillAchieved
struct AGlimpseVictoriaPlayerCharacter_OnAutoReloadSkillAchieved_Params
{
};

// Function GlimpseGame.GlimpseVictoriaPlayerCharacter.GetZipTargetScreenPosition
struct AGlimpseVictoriaPlayerCharacter_GetZipTargetScreenPosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseVictoriaPlayerCharacter.GetIsReloading
struct AGlimpseVictoriaPlayerCharacter_GetIsReloading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseVictoriaPlayerCharacter.GetHasZiplineTarget
struct AGlimpseVictoriaPlayerCharacter_GetHasZiplineTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseVictoriaPlayerCharacter.GetHasDartgunTarget
struct AGlimpseVictoriaPlayerCharacter_GetHasDartgunTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseVictoriaPlayerCharacter.GetHasCombatTarget
struct AGlimpseVictoriaPlayerCharacter_GetHasCombatTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.GetGlimpseCharacterOwner
struct UGlimpseCharacterAnimInstance_GetGlimpseCharacterOwner_Params
{
	class AGlimpseCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_UsePickupOnTarget
struct UGlimpseCharacterAnimInstance_AnimNotify_UsePickupOnTarget_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_UnequipMeleeWeapon
struct UGlimpseCharacterAnimInstance_AnimNotify_UnequipMeleeWeapon_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_Summon
struct UGlimpseCharacterAnimInstance_AnimNotify_Summon_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_StopMeleeSnap
struct UGlimpseCharacterAnimInstance_AnimNotify_StopMeleeSnap_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_StopBarks
struct UGlimpseCharacterAnimInstance_AnimNotify_StopBarks_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_StartRecovery
struct UGlimpseCharacterAnimInstance_AnimNotify_StartRecovery_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_StartMeleeSnap
struct UGlimpseCharacterAnimInstance_AnimNotify_StartMeleeSnap_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_SnapPickup
struct UGlimpseCharacterAnimInstance_AnimNotify_SnapPickup_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_Skill_KnockOutArtist
struct UGlimpseCharacterAnimInstance_AnimNotify_Skill_KnockOutArtist_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_ShoveHit
struct UGlimpseCharacterAnimInstance_AnimNotify_ShoveHit_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_ReceiveGift
struct UGlimpseCharacterAnimInstance_AnimNotify_ReceiveGift_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_MantleMovementInputAllowed
struct UGlimpseCharacterAnimInstance_AnimNotify_MantleMovementInputAllowed_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_LaunchProjectile
struct UGlimpseCharacterAnimInstance_AnimNotify_LaunchProjectile_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_KnockbackHit
struct UGlimpseCharacterAnimInstance_AnimNotify_KnockbackHit_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_Interrupt
struct UGlimpseCharacterAnimInstance_AnimNotify_Interrupt_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_HideGift
struct UGlimpseCharacterAnimInstance_AnimNotify_HideGift_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_GrabResistStart
struct UGlimpseCharacterAnimInstance_AnimNotify_GrabResistStart_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_GrabResistEnd
struct UGlimpseCharacterAnimInstance_AnimNotify_GrabResistEnd_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_FullBodyBlend
struct UGlimpseCharacterAnimInstance_AnimNotify_FullBodyBlend_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_EquipMeleeWeapon
struct UGlimpseCharacterAnimInstance_AnimNotify_EquipMeleeWeapon_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_EndParry
struct UGlimpseCharacterAnimInstance_AnimNotify_EndParry_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_DropGift
struct UGlimpseCharacterAnimInstance_AnimNotify_DropGift_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_DirectDamage
struct UGlimpseCharacterAnimInstance_AnimNotify_DirectDamage_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_DeathRagdoll
struct UGlimpseCharacterAnimInstance_AnimNotify_DeathRagdoll_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_DamageWindowStart
struct UGlimpseCharacterAnimInstance_AnimNotify_DamageWindowStart_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_DamageWindowEnd
struct UGlimpseCharacterAnimInstance_AnimNotify_DamageWindowEnd_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_CommitToMove
struct UGlimpseCharacterAnimInstance_AnimNotify_CommitToMove_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_ComboWindowStart
struct UGlimpseCharacterAnimInstance_AnimNotify_ComboWindowStart_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_ComboWindowEnd
struct UGlimpseCharacterAnimInstance_AnimNotify_ComboWindowEnd_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_ComboTrigger
struct UGlimpseCharacterAnimInstance_AnimNotify_ComboTrigger_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_BlockInterrupt
struct UGlimpseCharacterAnimInstance_AnimNotify_BlockInterrupt_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_BeginWindup
struct UGlimpseCharacterAnimInstance_AnimNotify_BeginWindup_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_BeginParry
struct UGlimpseCharacterAnimInstance_AnimNotify_BeginParry_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_AttackGrunt
struct UGlimpseCharacterAnimInstance_AnimNotify_AttackGrunt_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCharacterAnimInstance.AnimNotify_AOEShoveHit
struct UGlimpseCharacterAnimInstance_AnimNotify_AOEShoveHit_Params
{
	class UAnimNotify*                                 Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.Vomit
struct UGlimpseCheatManager_Vomit_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.UnlockRecipe
struct UGlimpseCheatManager_UnlockRecipe_Params
{
	struct FName                                       RecipeName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.UnlockInventory
struct UGlimpseCheatManager_UnlockInventory_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.UnlockAllRecipes
struct UGlimpseCheatManager_UnlockAllRecipes_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.UnlockAllLore
struct UGlimpseCheatManager_UnlockAllLore_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.UnlockAllFastTravel
struct UGlimpseCheatManager_UnlockAllFastTravel_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.Unbreakable
struct UGlimpseCheatManager_Unbreakable_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.ToggleThirdPerson
struct UGlimpseCheatManager_ToggleThirdPerson_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.ToggleCombatInput
struct UGlimpseCheatManager_ToggleCombatInput_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.TestSkillPointReminder
struct UGlimpseCheatManager_TestSkillPointReminder_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.SuspendStatusEffects
struct UGlimpseCheatManager_SuspendStatusEffects_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.SurvivalStat
struct UGlimpseCheatManager_SurvivalStat_Params
{
	struct FName                                       StatName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.StopDLC
struct UGlimpseCheatManager_StopDLC_Params
{
	struct FName                                       DLCName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.StatusEffect_Tier
struct UGlimpseCheatManager_StatusEffect_Tier_Params
{
	struct FName                                       StatusName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Tier;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.StatusEffect
struct UGlimpseCheatManager_StatusEffect_Params
{
	struct FName                                       StatusName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.StartDLC
struct UGlimpseCheatManager_StartDLC_Params
{
	struct FName                                       DLCName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.ShowWorldSeed
struct UGlimpseCheatManager_ShowWorldSeed_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.ShowRespawns
struct UGlimpseCheatManager_ShowRespawns_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.ShowPickups
struct UGlimpseCheatManager_ShowPickups_Params
{
	struct FString                                     ItemString;                                               // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseCheatManager.ShowDemoWinScreen
struct UGlimpseCheatManager_ShowDemoWinScreen_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.ShowCombatSnapDebug
struct UGlimpseCheatManager_ShowCombatSnapDebug_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.ShowBadRoads
struct UGlimpseCheatManager_ShowBadRoads_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.SetWeatherState
struct UGlimpseCheatManager_SetWeatherState_Params
{
	struct FName                                       State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TransitionTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.SetTutorialStep
struct UGlimpseCheatManager_SetTutorialStep_Params
{
	int                                                step;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.SetSuspicionDifficulty
struct UGlimpseCheatManager_SetSuspicionDifficulty_Params
{
	struct FName                                       Difficulty;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.SetSurvivalDifficulty
struct UGlimpseCheatManager_SetSurvivalDifficulty_Params
{
	struct FName                                       Difficulty;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.SetResourceDifficulty
struct UGlimpseCheatManager_SetResourceDifficulty_Params
{
	struct FName                                       Difficulty;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.SetQuestState
struct UGlimpseCheatManager_SetQuestState_Params
{
	struct FName                                       QuestName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       QuestState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.SetPlayerHealthPercent
struct UGlimpseCheatManager_SetPlayerHealthPercent_Params
{
	float                                              HealthPercent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.SetPermadeath
struct UGlimpseCheatManager_SetPermadeath_Params
{
	bool                                               bEnablePermadeath;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.SetPauseInMenus
struct UGlimpseCheatManager_SetPauseInMenus_Params
{
	bool                                               bEnablePauseInMenus;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.SetJoyState
struct UGlimpseCheatManager_SetJoyState_Params
{
	int                                                JoyStateAsInt;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.SetGameDifficulty
struct UGlimpseCheatManager_SetGameDifficulty_Params
{
	struct FName                                       Difficulty;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.SetDegradation
struct UGlimpseCheatManager_SetDegradation_Params
{
	bool                                               bEnableDegredation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.SetCombatDifficulty
struct UGlimpseCheatManager_SetCombatDifficulty_Params
{
	struct FName                                       Difficulty;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.ScanDLC
struct UGlimpseCheatManager_ScanDLC_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.RevealMapAndQuest
struct UGlimpseCheatManager_RevealMapAndQuest_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.RevealMap
struct UGlimpseCheatManager_RevealMap_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.ResumeStatusEffects
struct UGlimpseCheatManager_ResumeStatusEffects_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.RespawnShelter
struct UGlimpseCheatManager_RespawnShelter_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.ResetSkills
struct UGlimpseCheatManager_ResetSkills_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.ResetLootable
struct UGlimpseCheatManager_ResetLootable_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.ResetAllLootables
struct UGlimpseCheatManager_ResetAllLootables_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.ResetAllDLC
struct UGlimpseCheatManager_ResetAllDLC_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.RedrawMap
struct UGlimpseCheatManager_RedrawMap_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.ObscureMap
struct UGlimpseCheatManager_ObscureMap_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.ListFeatures
struct UGlimpseCheatManager_ListFeatures_Params
{
	struct FString                                     FeatureString;                                            // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseCheatManager.ListDLC
struct UGlimpseCheatManager_ListDLC_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.ListActiveDLC
struct UGlimpseCheatManager_ListActiveDLC_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.LB_SetIsThirdDay
struct UGlimpseCheatManager_LB_SetIsThirdDay_Params
{
	bool                                               IsThirdDay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.LB_EnableSanitySystem
struct UGlimpseCheatManager_LB_EnableSanitySystem_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.Killemall
struct UGlimpseCheatManager_Killemall_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.HideRespawns
struct UGlimpseCheatManager_HideRespawns_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.HidePickups
struct UGlimpseCheatManager_HidePickups_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.HideBadRoads
struct UGlimpseCheatManager_HideBadRoads_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.Heal
struct UGlimpseCheatManager_Heal_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.GotoLockable
struct UGlimpseCheatManager_GotoLockable_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.GotoFeature
struct UGlimpseCheatManager_GotoFeature_Params
{
	struct FString                                     FeatureString;                                            // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseCheatManager.GotoActor
struct UGlimpseCheatManager_GotoActor_Params
{
	struct FName                                       ActorName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.GiveSkillPoints
struct UGlimpseCheatManager_GiveSkillPoints_Params
{
	int                                                NumSkillPoints;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.GiveN
struct UGlimpseCheatManager_GiveN_Params
{
	int                                                NumItems;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemString;                                               // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseCheatManager.Give
struct UGlimpseCheatManager_Give_Params
{
	struct FString                                     ItemString;                                               // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseCheatManager.FailObjective
struct UGlimpseCheatManager_FailObjective_Params
{
	struct FName                                       QuestName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.DumpStatusEffects
struct UGlimpseCheatManager_DumpStatusEffects_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.DumpAchievementProgress
struct UGlimpseCheatManager_DumpAchievementProgress_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.DoCaptureSettings
struct UGlimpseCheatManager_DoCaptureSettings_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.DemiGod
struct UGlimpseCheatManager_DemiGod_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.DebugEpilogue
struct UGlimpseCheatManager_DebugEpilogue_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.DebugCharacterStoryComplete
struct UGlimpseCheatManager_DebugCharacterStoryComplete_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.CrashMeNow
struct UGlimpseCheatManager_CrashMeNow_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.CompleteQuest
struct UGlimpseCheatManager_CompleteQuest_Params
{
	struct FName                                       QuestName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.CompleteObjective
struct UGlimpseCheatManager_CompleteObjective_Params
{
	struct FName                                       QuestName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.ClearScreenFade
struct UGlimpseCheatManager_ClearScreenFade_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.BuySkill
struct UGlimpseCheatManager_BuySkill_Params
{
	struct FName                                       SkillName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.BuyAllSkills
struct UGlimpseCheatManager_BuyAllSkills_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.BoostCarryLimit
struct UGlimpseCheatManager_BoostCarryLimit_Params
{
};

// Function GlimpseGame.GlimpseCheatManager.BloodSugarLevel
struct UGlimpseCheatManager_BloodSugarLevel_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.AdvanceHours
struct UGlimpseCheatManager_AdvanceHours_Params
{
	float                                              time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.AdvanceDays
struct UGlimpseCheatManager_AdvanceDays_Params
{
	float                                              time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.ActivateQuest
struct UGlimpseCheatManager_ActivateQuest_Params
{
	struct FName                                       QuestName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCheatManager.ActivateAllQuests
struct UGlimpseCheatManager_ActivateAllQuests_Params
{
};

// Function GlimpseGame.GlimpseCollectibleGroup.GetCollectibleMovieFilePath
struct UGlimpseCollectibleGroup_GetCollectibleMovieFilePath_Params
{
	struct FName                                       CollectibleKey;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFilePath                                   ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function GlimpseGame.GlimpseCollectibleGroup.GetCollectibleAudio
struct UGlimpseCollectibleGroup_GetCollectibleAudio_Params
{
	struct FName                                       CollectibleKey;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCraftingStation.OnCompleteInteraction
struct AGlimpseCraftingStation_OnCompleteInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameUserSettings.SetPresetGraphicsQuality
struct UGlimpseGameUserSettings_SetPresetGraphicsQuality_Params
{
	TEnumAsByte<EGraphicsQuality>                      InQuality;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameUserSettings.GetPresetGraphicsQuality
struct UGlimpseGameUserSettings_GetPresetGraphicsQuality_Params
{
	TEnumAsByte<EGraphicsQuality>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameUserSettings.GetGraphicsQuality
struct UGlimpseGameUserSettings_GetGraphicsQuality_Params
{
	TEnumAsByte<EGraphicsQualitySetting>               InSetting;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGraphicsQuality>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseEnvironmentVolume.IsEnvironmentVolumeEnabled
struct AGlimpseEnvironmentVolume_IsEnvironmentVolumeEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseEnvironmentVolume.EnableEnvironmentVolume
struct AGlimpseEnvironmentVolume_EnableEnvironmentVolume_Params
{
};

// Function GlimpseGame.GlimpseEnvironmentVolume.DisableEnvironmentVolume
struct AGlimpseEnvironmentVolume_DisableEnvironmentVolume_Params
{
};

// Function GlimpseGame.GlimpseFastTravelLocation.TriggerFastTravel
struct AGlimpseFastTravelLocation_TriggerFastTravel_Params
{
	class AGlimpsePlayerCharacter*                     PlayerCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseFastTravelLocation.SetFound
struct AGlimpseFastTravelLocation_SetFound_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseFastTravelLocation.SetActive
struct AGlimpseFastTravelLocation_SetActive_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseFastTravelLocation.OnInteraction
struct AGlimpseFastTravelLocation_OnInteraction_Params
{
	class AGlimpsePlayerCharacter*                     PlayerCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseFastTravelLocation.OnEnter
struct AGlimpseFastTravelLocation_OnEnter_Params
{
	class AGlimpsePlayerCharacter*                     PlayerCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseFastTravelLocation.OnCantPerformAttemptedFastTravel
struct AGlimpseFastTravelLocation_OnCantPerformAttemptedFastTravel_Params
{
	class AGlimpsePlayerCharacter*                     PlayerCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFastTravelError>                      ErrorType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseFastTravelLocation.OnArrive
struct AGlimpseFastTravelLocation_OnArrive_Params
{
	class AGlimpsePlayerCharacter*                     PlayerCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseFastTravelLocation.GetNumFastTravelLocationsActive
struct AGlimpseFastTravelLocation_GetNumFastTravelLocationsActive_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseFastTravelLocation.GetFound
struct AGlimpseFastTravelLocation_GetFound_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseFastTravelLocation.GetActive
struct AGlimpseFastTravelLocation_GetActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseMapFeature.MakeTerrainModifierFromTag
struct AGlimpseMapFeature_MakeTerrainModifierFromTag_Params
{
	class UGlimpseTerrainData*                         Terrain;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseTagComponent*                        TagComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TargetHeight;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Dropoff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceMinHeight;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceMaxHeight;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseMapFeature.CreateTerrain
struct AGlimpseMapFeature_CreateTerrain_Params
{
	class UGlimpseTerrainData*                         Terrain;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseMapFeature.CreateBuildings
struct AGlimpseMapFeature_CreateBuildings_Params
{
	class UGlimpseTerrainData*                         Terrain;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.TravelToSallyEndingMap
struct UGlimpseGameInstance_TravelToSallyEndingMap_Params
{
};

// Function GlimpseGame.GlimpseGameInstance.TravelToPrologueMap
struct UGlimpseGameInstance_TravelToPrologueMap_Params
{
	TEnumAsByte<EStoryCharacter>                       Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.TravelToMainMap
struct UGlimpseGameInstance_TravelToMainMap_Params
{
};

// Function GlimpseGame.GlimpseGameInstance.TravelToEpilogueMap
struct UGlimpseGameInstance_TravelToEpilogueMap_Params
{
};

// Function GlimpseGame.GlimpseGameInstance.StartNewGame
struct UGlimpseGameInstance_StartNewGame_Params
{
	TEnumAsByte<EGlimpseGameMode>                      Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStoryCharacter>                       StoryCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseGameDifficulty>                Difficulty;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGlimpseDifficultySettings                  InCustomDifficultySettings;                               // (Parm)
	bool                                               bPrologue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.ShowShellMenu
struct UGlimpseGameInstance_ShowShellMenu_Params
{
};

// Function GlimpseGame.GlimpseGameInstance.ShowCreditsWithCallback
struct UGlimpseGameInstance_ShowCreditsWithCallback_Params
{
	struct FScriptDelegate                             MenuHiddenCallback;                                       // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseGameInstance.ShowCredits
struct UGlimpseGameInstance_ShowCredits_Params
{
};

// Function GlimpseGame.GlimpseGameInstance.ShellMenuGoBack
struct UGlimpseGameInstance_ShellMenuGoBack_Params
{
};

// Function GlimpseGame.GlimpseGameInstance.SetProfileFlagValue
struct UGlimpseGameInstance_SetProfileFlagValue_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.SetProfileFlag
struct UGlimpseGameInstance_SetProfileFlag_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.SetControllerIndex
struct UGlimpseGameInstance_SetControllerIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.ScriptedSave
struct UGlimpseGameInstance_ScriptedSave_Params
{
	struct FString                                     CheckpointName;                                           // (Parm, ZeroConstructor)
	TEnumAsByte<EGlimpseSaveGameSlot>                  Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.ReturnToMainMenu
struct UGlimpseGameInstance_ReturnToMainMenu_Params
{
};

// Function GlimpseGame.GlimpseGameInstance.ResetShellMenu
struct UGlimpseGameInstance_ResetShellMenu_Params
{
};

// Function GlimpseGame.GlimpseGameInstance.ResetProfileFlags
struct UGlimpseGameInstance_ResetProfileFlags_Params
{
};

// Function GlimpseGame.GlimpseGameInstance.QuitGame
struct UGlimpseGameInstance_QuitGame_Params
{
};

// Function GlimpseGame.GlimpseGameInstance.LogProfileFlags
struct UGlimpseGameInstance_LogProfileFlags_Params
{
};

// Function GlimpseGame.GlimpseGameInstance.IsShellMenuVisible
struct UGlimpseGameInstance_IsShellMenuVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.IsSaveAllowed
struct UGlimpseGameInstance_IsSaveAllowed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.IsProfileFlagSet
struct UGlimpseGameInstance_IsProfileFlagSet_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.IsLoadingScreenVisible
struct UGlimpseGameInstance_IsLoadingScreenVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.IsLoading
struct UGlimpseGameInstance_IsLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.IsInMainMap
struct UGlimpseGameInstance_IsInMainMap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.IsInGame
struct UGlimpseGameInstance_IsInGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.IsCreditsShowing
struct UGlimpseGameInstance_IsCreditsShowing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.HideShellMenu
struct UGlimpseGameInstance_HideShellMenu_Params
{
};

// Function GlimpseGame.GlimpseGameInstance.HideCredits
struct UGlimpseGameInstance_HideCredits_Params
{
};

// Function GlimpseGame.GlimpseGameInstance.GetState
struct UGlimpseGameInstance_GetState_Params
{
	TEnumAsByte<EGlimpseGameState>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.GetShellMenuPresenter
struct UGlimpseGameInstance_GetShellMenuPresenter_Params
{
	class UGlimpseShellMenuPresenter*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.GetShellMenu
struct UGlimpseGameInstance_GetShellMenu_Params
{
	class UGlimpseShellMenu*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.GetSallyEndingMapName
struct UGlimpseGameInstance_GetSallyEndingMapName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.GetPrologueMapName
struct UGlimpseGameInstance_GetPrologueMapName_Params
{
	TEnumAsByte<EStoryCharacter>                       Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.GetProfileFlag
struct UGlimpseGameInstance_GetProfileFlag_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.GetModeMapName
struct UGlimpseGameInstance_GetModeMapName_Params
{
	TEnumAsByte<EGlimpseGameMode>                      GameMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStoryCharacter>                       StoryCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.GetMainMapName
struct UGlimpseGameInstance_GetMainMapName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.GetEpilogueMapName
struct UGlimpseGameInstance_GetEpilogueMapName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.DumpAccumulatedGlimpseStats
struct UGlimpseGameInstance_DumpAccumulatedGlimpseStats_Params
{
};

// Function GlimpseGame.GlimpseGameInstance.DebugShowMainMenu
struct UGlimpseGameInstance_DebugShowMainMenu_Params
{
};

// Function GlimpseGame.GlimpseGameInstance.DebugShowLoadingScreen
struct UGlimpseGameInstance_DebugShowLoadingScreen_Params
{
};

// Function GlimpseGame.GlimpseGameInstance.ClearProfileFlag
struct UGlimpseGameInstance_ClearProfileFlag_Params
{
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameInstance.CharacterStoryComplete
struct UGlimpseGameInstance_CharacterStoryComplete_Params
{
	struct FScriptDelegate                             CreditsCompleteCallback;                                  // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseGameInstance.AutoSaveIfAllowed
struct UGlimpseGameInstance_AutoSaveIfAllowed_Params
{
};

// Function GlimpseGame.GlimpseGameInstance.AutoSave
struct UGlimpseGameInstance_AutoSave_Params
{
};

// Function GlimpseGame.GlimpseGameInstance.AutoLoad
struct UGlimpseGameInstance_AutoLoad_Params
{
};

// Function GlimpseGame.GlimpseBaseSandboxMode.GetWorldSeed
struct AGlimpseBaseSandboxMode_GetWorldSeed_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GlimpseGame.GlimpseBaseSandboxMode.GetSettingString
struct AGlimpseBaseSandboxMode_GetSettingString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GlimpseGame.GlimpseBaseSandboxMode.GetSandboxSettings
struct AGlimpseBaseSandboxMode_GetSandboxSettings_Params
{
	struct FGlimpseSandboxSettings                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function GlimpseGame.GlimpseWellieSandboxMode.RepopulateAIPopulation
struct AGlimpseWellieSandboxMode_RepopulateAIPopulation_Params
{
	class UDataTable*                                  AITable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseVictoriaMode.RepopulateAIPopulation
struct AGlimpseVictoriaMode_RepopulateAIPopulation_Params
{
	class UDataTable*                                  AITable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.WaitForStreaming
struct UGlimpseGameplayStatics_WaitForStreaming_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function GlimpseGame.GlimpseGameplayStatics.UsingWorldBuilder
struct UGlimpseGameplayStatics_UsingWorldBuilder_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.UpdateAchievementProgress
struct UGlimpseGameplayStatics_UpdateAchievementProgress_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AchievementName;                                          // (Parm, ZeroConstructor)
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.UnregisterOpenAreaSpawnLocation
struct UGlimpseGameplayStatics_UnregisterOpenAreaSpawnLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.UnloadOnDemandLevel
struct UGlimpseGameplayStatics_UnloadOnDemandLevel_Params
{
	class UObject*                                     ReferenceObject;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function GlimpseGame.GlimpseGameplayStatics.UnloadOnDemandFeatureGroup
struct UGlimpseGameplayStatics_UnloadOnDemandFeatureGroup_Params
{
	TAssetPtr<class UClass>                            Feature;                                                  // (Parm)
	struct FName                                       Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function GlimpseGame.GlimpseGameplayStatics.UnloadOnDemandFeature
struct UGlimpseGameplayStatics_UnloadOnDemandFeature_Params
{
	TAssetPtr<class UClass>                            Feature;                                                  // (Parm)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function GlimpseGame.GlimpseGameplayStatics.UnblockScriptedSave
struct UGlimpseGameplayStatics_UnblockScriptedSave_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.UnblockAutoSaveWithActor
struct UGlimpseGameplayStatics_UnblockAutoSaveWithActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.UnblockAutoSave
struct UGlimpseGameplayStatics_UnblockAutoSave_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.TextToSpeechAndWait
struct UGlimpseGameplayStatics_TextToSpeechAndWait_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	bool                                               bFemale;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function GlimpseGame.GlimpseGameplayStatics.TextToSpeech
struct UGlimpseGameplayStatics_TextToSpeech_Params
{
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	bool                                               bFemale;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.StopFullscreenMovieAudio
struct UGlimpseGameplayStatics_StopFullscreenMovieAudio_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.StartConversationWithPatrols
struct UGlimpseGameplayStatics_StartConversationWithPatrols_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGlimpseConversation                        Conversation;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class AGlimpseCharacter*>                   Characters;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              PatrolActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             OnConversationFinished;                                   // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseGameplayStatics.StartConversationAssetWithPatrols
struct UGlimpseGameplayStatics_StartConversationAssetWithPatrols_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseConversationAsset*                   Conversation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AGlimpseCharacter*>                   Characters;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              PatrolActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             OnConversationFinished;                                   // (Parm, ZeroConstructor)
	bool                                               SuspicionInterruptConversation;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.StartConversationAsset
struct UGlimpseGameplayStatics_StartConversationAsset_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseConversationAsset*                   Conversation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AGlimpseCharacter*>                   Characters;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             OnConversationFinished;                                   // (Parm, ZeroConstructor)
	bool                                               SuspicionInterruptConversation;                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.StartConversation
struct UGlimpseGameplayStatics_StartConversation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGlimpseConversation                        Conversation;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class AGlimpseCharacter*>                   Characters;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             OnConversationFinished;                                   // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseGameplayStatics.SpawnFromClosestSpawner
struct UGlimpseGameplayStatics_SpawnFromClosestSpawner_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NPCType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SpawnerType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              SearchRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReturnToSpawner;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseAICharacter*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.SetWwiseState
struct UGlimpseGameplayStatics_SetWwiseState_Params
{
	struct FName                                       StateGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StateName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.SetUserProfileFlagValue
struct UGlimpseGameplayStatics_SetUserProfileFlagValue_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.SetUserProfileFlag
struct UGlimpseGameplayStatics_SetUserProfileFlag_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.SetSuspicionEffectOverride
struct UGlimpseGameplayStatics_SetSuspicionEffectOverride_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAISuspicionStimulusType>              ActionType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAISuspicionState>                     MinimumState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InsideActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.SetShadowsOverride
struct UGlimpseGameplayStatics_SetShadowsOverride_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.SetObjectiveStatusForCharacter
struct UGlimpseGameplayStatics_SetObjectiveStatusForCharacter_Params
{
	class AGlimpsePlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      QuestType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveKey;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveStatus>                      InStatus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceActivate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.SetObjectiveStatus
struct UGlimpseGameplayStatics_SetObjectiveStatus_Params
{
	class AGlimpsePlayerController*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      QuestType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveKey;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveStatus>                      InStatus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceActivate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.SetObjectiveCounterForCharacter
struct UGlimpseGameplayStatics_SetObjectiveCounterForCharacter_Params
{
	class AGlimpsePlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      QuestType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveKey;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceActivate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.SetObjectiveCounter
struct UGlimpseGameplayStatics_SetObjectiveCounter_Params
{
	class AGlimpsePlayerController*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      QuestType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveKey;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceActivate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.SetHUDWidgetByRef
struct UGlimpseGameplayStatics_SetHUDWidgetByRef_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       WidgetRef;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.SetGameProfileFlagValue
struct UGlimpseGameplayStatics_SetGameProfileFlagValue_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.SetGameProfileFlag
struct UGlimpseGameplayStatics_SetGameProfileFlag_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.SetControllerSuspicionReactionForTarget
struct UGlimpseGameplayStatics_SetControllerSuspicionReactionForTarget_Params
{
	class AGlimpseAIController*                        Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAISuspicionReaction>                  Reaction;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.SetControllerSuspicionForTarget
struct UGlimpseGameplayStatics_SetControllerSuspicionForTarget_Params
{
	class AGlimpseAIController*                        Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SuspicionTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAISuspicionState>                     State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyIfBelow;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.SetAchievementProgress
struct UGlimpseGameplayStatics_SetAchievementProgress_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AchievementName;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.SeekEvent
struct UGlimpseGameplayStatics_SeekEvent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.ScriptedSave
struct UGlimpseGameplayStatics_ScriptedSave_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CheckpointName;                                           // (Parm, ZeroConstructor)
	TEnumAsByte<EGlimpseSaveGameSlot>                  Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.RevealMapMarker
struct UGlimpseGameplayStatics_RevealMapMarker_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MarkerName;                                               // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseGameplayStatics.RequestGamePause
struct UGlimpseGameplayStatics_RequestGamePause_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.ReleaseGamePause
struct UGlimpseGameplayStatics_ReleaseGamePause_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.RegisterOpenAreaSpawnLocation
struct UGlimpseGameplayStatics_RegisterOpenAreaSpawnLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.RegisterExclusivePOILevel
struct UGlimpseGameplayStatics_RegisterExclusivePOILevel_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.PushWeatherOverride
struct UGlimpseGameplayStatics_PushWeatherOverride_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseWeatherFixedState>             WeatherState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TransitionTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.PrecacheConversation
struct UGlimpseGameplayStatics_PrecacheConversation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseConversationAsset*                   Conversation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.PrecacheAudioEvent
struct UGlimpseGameplayStatics_PrecacheAudioEvent_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AudioEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.PopWeatherOverride
struct UGlimpseGameplayStatics_PopWeatherOverride_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.PlaySoundAndWait
struct UGlimpseGameplayStatics_PlaySoundAndWait_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SoundEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function GlimpseGame.GlimpseGameplayStatics.PlayFullscreenMovieWithAudio
struct UGlimpseGameplayStatics_PlayFullscreenMovieWithAudio_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MoviePath;                                                // (Parm, ZeroConstructor)
	class UAkAudioEvent*                               AudioEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DontSeekStopAudio;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function GlimpseGame.GlimpseGameplayStatics.PlayFullscreenMovie
struct UGlimpseGameplayStatics_PlayFullscreenMovie_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MoviePath;                                                // (Parm, ZeroConstructor)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function GlimpseGame.GlimpseGameplayStatics.MoveMapMarker
struct UGlimpseGameplayStatics_MoveMapMarker_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MarkerName;                                               // (Parm, ZeroConstructor)
	struct FVector2D                                   NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.MarkTutorialObjectUsed
struct UGlimpseGameplayStatics_MarkTutorialObjectUsed_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     TutorialRefObject;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.MarkTutorialNameUsed
struct UGlimpseGameplayStatics_MarkTutorialNameUsed_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TutorialName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.LocationMarkerPositionAndRotation
struct UGlimpseGameplayStatics_LocationMarkerPositionAndRotation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LocationName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.LoadOnDemandLevel
struct UGlimpseGameplayStatics_LoadOnDemandLevel_Params
{
	class UObject*                                     ReferenceObject;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function GlimpseGame.GlimpseGameplayStatics.LoadOnDemandFeatureGroupNonLatent
struct UGlimpseGameplayStatics_LoadOnDemandFeatureGroupNonLatent_Params
{
	TAssetPtr<class UClass>                            Feature;                                                  // (Parm)
	struct FName                                       Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseStreamingLevelState>           State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.LoadOnDemandFeatureGroup
struct UGlimpseGameplayStatics_LoadOnDemandFeatureGroup_Params
{
	TAssetPtr<class UClass>                            Feature;                                                  // (Parm)
	struct FName                                       Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	TEnumAsByte<EGlimpseStreamingLevelState>           State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipLatentAction;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.LoadOnDemandFeature
struct UGlimpseGameplayStatics_LoadOnDemandFeature_Params
{
	TAssetPtr<class UClass>                            Feature;                                                  // (Parm)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function GlimpseGame.GlimpseGameplayStatics.KillPlayer
struct UGlimpseGameplayStatics_KillPlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseDamageCategory>                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.IsUserProfileFlagSet
struct UGlimpseGameplayStatics_IsUserProfileFlagSet_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.IsPlayerInActorZone
struct UGlimpseGameplayStatics_IsPlayerInActorZone_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayerZoneTolerance;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.IsPIE
struct UGlimpseGameplayStatics_IsPIE_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.IsMapMarkerRevealed
struct UGlimpseGameplayStatics_IsMapMarkerRevealed_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MarkerName;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.IsLowMaterialQuality
struct UGlimpseGameplayStatics_IsLowMaterialQuality_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.IsLoadingSaveGame
struct UGlimpseGameplayStatics_IsLoadingSaveGame_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.IsGameProfileFlagSet
struct UGlimpseGameplayStatics_IsGameProfileFlagSet_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.IsConsolePlatform
struct UGlimpseGameplayStatics_IsConsolePlatform_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.IsActorInPlayerSight
struct UGlimpseGameplayStatics_IsActorInPlayerSight_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinFrustumCheckDistance;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxFrustumCheckDistance;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.InstantSuspicion
struct UGlimpseGameplayStatics_InstantSuspicion_Params
{
	class UObject*                                     Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSuspicionEffect                            Effect;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAudible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIDetectionTarget>                    TargetType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Loudness;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DirectRange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDirectWithLineOfSight;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LockDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseAIController*                        SpecificController;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.IncrementObjectiveCounterForCharacter
struct UGlimpseGameplayStatics_IncrementObjectiveCounterForCharacter_Params
{
	class AGlimpsePlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      QuestType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveKey;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Increment;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceActivate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.IncrementObjectiveCounter
struct UGlimpseGameplayStatics_IncrementObjectiveCounter_Params
{
	class AGlimpsePlayerController*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      QuestType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveKey;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Increment;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceActivate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.HideMapMarker
struct UGlimpseGameplayStatics_HideMapMarker_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MarkerName;                                               // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseGameplayStatics.HasTutorialObjectBeenUsed
struct UGlimpseGameplayStatics_HasTutorialObjectBeenUsed_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     TutorialRefObject;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.HasTutorialNameBeenUsed
struct UGlimpseGameplayStatics_HasTutorialNameBeenUsed_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TutorialName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetUserProfileFlag
struct UGlimpseGameplayStatics_GetUserProfileFlag_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetSuspicionReasonForConformity
struct UGlimpseGameplayStatics_GetSuspicionReasonForConformity_Params
{
	TEnumAsByte<ESuspicionConformityRequest>           Conformity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseSuspicionReason>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetScreenFadeAmount
struct UGlimpseGameplayStatics_GetScreenFadeAmount_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetQuestStatusForCharacter
struct UGlimpseGameplayStatics_GetQuestStatusForCharacter_Params
{
	class AGlimpsePlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      QuestType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EQuestStatus>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetQuestStatus
struct UGlimpseGameplayStatics_GetQuestStatus_Params
{
	class AGlimpsePlayerController*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      QuestType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EQuestStatus>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetQuestForCharacter
struct UGlimpseGameplayStatics_GetQuestForCharacter_Params
{
	class AGlimpsePlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      QuestType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuest*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetQuestDetailedStatusForCharacter
struct UGlimpseGameplayStatics_GetQuestDetailedStatusForCharacter_Params
{
	class AGlimpsePlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      QuestType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EQuestStatus>                          QuestStatus;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CurrentObjective;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetQuestDetailedStatus
struct UGlimpseGameplayStatics_GetQuestDetailedStatus_Params
{
	class AGlimpsePlayerController*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      QuestType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EQuestStatus>                          QuestStatus;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CurrentObjective;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetQuest
struct UGlimpseGameplayStatics_GetQuest_Params
{
	class AGlimpsePlayerController*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      QuestType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuest*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetObjectRandomSeed
struct UGlimpseGameplayStatics_GetObjectRandomSeed_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bChecked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetObjectiveStatusForCharacter
struct UGlimpseGameplayStatics_GetObjectiveStatusForCharacter_Params
{
	class AGlimpsePlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      QuestType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveKey;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveStatus>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetObjectiveStatus
struct UGlimpseGameplayStatics_GetObjectiveStatus_Params
{
	class AGlimpsePlayerController*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      QuestType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveKey;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveStatus>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetObjectiveCounterForCharacter
struct UGlimpseGameplayStatics_GetObjectiveCounterForCharacter_Params
{
	class AGlimpsePlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      QuestType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveKey;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetObjectiveCounter
struct UGlimpseGameplayStatics_GetObjectiveCounter_Params
{
	class AGlimpsePlayerController*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      QuestType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveKey;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetLookAtLocationOnLocalPlayer
struct UGlimpseGameplayStatics_GetLookAtLocationOnLocalPlayer_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       LeftBoneName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightBoneName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BehindCameraOffset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetLightQuality
struct UGlimpseGameplayStatics_GetLightQuality_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetHUDWidgetByRef
struct UGlimpseGameplayStatics_GetHUDWidgetByRef_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       WidgetRef;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetGlimpseTimestamp
struct UGlimpseGameplayStatics_GetGlimpseTimestamp_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetGlimpseTimeOfDay
struct UGlimpseGameplayStatics_GetGlimpseTimeOfDay_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimeOfDay>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetGlimpseGameTypeSafe
struct UGlimpseGameplayStatics_GetGlimpseGameTypeSafe_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseGameMode>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetGlimpseGameType
struct UGlimpseGameplayStatics_GetGlimpseGameType_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseGameMode>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetGlimpseGameMode
struct UGlimpseGameplayStatics_GetGlimpseGameMode_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseGameMode*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetGlimpseGameCharacterSafe
struct UGlimpseGameplayStatics_GetGlimpseGameCharacterSafe_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStoryCharacter>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetGlimpseGameCharacter
struct UGlimpseGameplayStatics_GetGlimpseGameCharacter_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStoryCharacter>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetGameProfileFlag
struct UGlimpseGameplayStatics_GetGameProfileFlag_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetGameDifficulty
struct UGlimpseGameplayStatics_GetGameDifficulty_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseGameDifficulty>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetDefaultBroadcaster
struct UGlimpseGameplayStatics_GetDefaultBroadcaster_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseBroadcaster*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetCurrentBiome
struct UGlimpseGameplayStatics_GetCurrentBiome_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseBiome>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetControllerSuspicionReactionForTarget
struct UGlimpseGameplayStatics_GetControllerSuspicionReactionForTarget_Params
{
	class AGlimpseAIController*                        Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAISuspicionReaction>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.GetBiome
struct UGlimpseGameplayStatics_GetBiome_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EGlimpseBiome>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.FindLocationMarker
struct UGlimpseGameplayStatics_FindLocationMarker_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LocationName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.FindClosestLocationMarkerToPlayer
struct UGlimpseGameplayStatics_FindClosestLocationMarkerToPlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LocationName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.FindClosestLocationMarker
struct UGlimpseGameplayStatics_FindClosestLocationMarker_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LocationName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RefLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.ExitAmbienceVolume
struct UGlimpseGameplayStatics_ExitAmbienceVolume_Params
{
	class AActor*                                      AmbienceVolume;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.EnterAmbienceVolume
struct UGlimpseGameplayStatics_EnterAmbienceVolume_Params
{
	class AActor*                                      AmbienceVolume;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AmbienceSoundEvent;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNoAmbientMusic;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OveriddenCombatMusic;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.DontStopAudioOnFullscreenMovieClose
struct UGlimpseGameplayStatics_DontStopAudioOnFullscreenMovieClose_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.DoesMapMarkerExist
struct UGlimpseGameplayStatics_DoesMapMarkerExist_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MarkerName;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.DestroyMapMarker
struct UGlimpseGameplayStatics_DestroyMapMarker_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MarkerName;                                               // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseGameplayStatics.CreateMapMarker
struct UGlimpseGameplayStatics_CreateMapMarker_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     MarkerName;                                               // (Parm, ZeroConstructor)
	TEnumAsByte<EGlimpseMapPOI>                        Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // (Parm)
	struct FSlateBrush                                 CloseZoomIcon;                                            // (Parm)
	struct FSlateBrush                                 FarZoomIcon;                                              // (Parm)
};

// Function GlimpseGame.GlimpseGameplayStatics.ContinuousSuspicion
struct UGlimpseGameplayStatics_ContinuousSuspicion_Params
{
	class UObject*                                     Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSuspicionEffect                            Effect;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAudible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SuspicionTag;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIDetectionTarget>                    TargetType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Loudness;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DirectRange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TickPeriod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeToLive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDirectWithLineOfSight;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseTeamId>                        AffectTeam;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SourceOverride;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.CompleteQuestForCharacter
struct UGlimpseGameplayStatics_CompleteQuestForCharacter_Params
{
	class AGlimpsePlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      QuestType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.CompleteQuest
struct UGlimpseGameplayStatics_CompleteQuest_Params
{
	class AGlimpsePlayerController*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      QuestType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.CloseFullscreenMovie
struct UGlimpseGameplayStatics_CloseFullscreenMovie_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.ClearUserProfileFlag
struct UGlimpseGameplayStatics_ClearUserProfileFlag_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.ClearTutorialObjectUsed
struct UGlimpseGameplayStatics_ClearTutorialObjectUsed_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     TutorialRefObject;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.ClearTutorialNameUsed
struct UGlimpseGameplayStatics_ClearTutorialNameUsed_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TutorialName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.ClearSuspicionEffectOverride
struct UGlimpseGameplayStatics_ClearSuspicionEffectOverride_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAISuspicionStimulusType>              ActionType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.ClearHUDWidgetByRef
struct UGlimpseGameplayStatics_ClearHUDWidgetByRef_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       WidgetRef;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.ClearGameProfileFlag
struct UGlimpseGameplayStatics_ClearGameProfileFlag_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InName;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.ClearControllerSuspicionForTarget
struct UGlimpseGameplayStatics_ClearControllerSuspicionForTarget_Params
{
	class AGlimpseAIController*                        Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SuspicionTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CooldownTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.ClearContinuousSuspicion
struct UGlimpseGameplayStatics_ClearContinuousSuspicion_Params
{
	class UObject*                                     Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SuspicionTag;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.ClearAllSuspicionForTarget
struct UGlimpseGameplayStatics_ClearAllSuspicionForTarget_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SuspicionTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                SuspicionTag;                                             // (Parm)
};

// Function GlimpseGame.GlimpseGameplayStatics.ClearAllControllerSuspicion
struct UGlimpseGameplayStatics_ClearAllControllerSuspicion_Params
{
	class AGlimpseAIController*                        Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.BlockScriptedSave
struct UGlimpseGameplayStatics_BlockScriptedSave_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.BlockAutoSaveWithActor
struct UGlimpseGameplayStatics_BlockAutoSaveWithActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.BlockAutoSave
struct UGlimpseGameplayStatics_BlockAutoSave_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.AwardAchievement
struct UGlimpseGameplayStatics_AwardAchievement_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AchievementName;                                          // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseGameplayStatics.AdjustAchievementProgress
struct UGlimpseGameplayStatics_AdjustAchievementProgress_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AchievementName;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.ActivateQuestForCharacter
struct UGlimpseGameplayStatics_ActivateQuestForCharacter_Params
{
	class AGlimpsePlayerCharacter*                     Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      QuestType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceReset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameplayStatics.ActivateQuest
struct UGlimpseGameplayStatics_ActivateQuest_Params
{
	class AGlimpsePlayerController*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      QuestType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceReset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameSlotPresenter.OnSetupNewGame
struct UGlimpseGameSlotPresenter_OnSetupNewGame_Params
{
};

// Function GlimpseGame.GlimpseGameSlotPresenter.OnSelectGameConfirmButton
struct UGlimpseGameSlotPresenter_OnSelectGameConfirmButton_Params
{
};

// Function GlimpseGame.GlimpseGameSlotPresenter.OnPostClearSpaceNewGameSetupPressed
struct UGlimpseGameSlotPresenter_OnPostClearSpaceNewGameSetupPressed_Params
{
};

// Function GlimpseGame.GlimpseGameSlotPresenter.OnDeletePressed
struct UGlimpseGameSlotPresenter_OnDeletePressed_Params
{
};

// Function GlimpseGame.GlimpseGameSlotPresenter.OnConfirmNewGame
struct UGlimpseGameSlotPresenter_OnConfirmNewGame_Params
{
};

// Function GlimpseGame.GlimpseGameSlotPresenter.OnBackPressed
struct UGlimpseGameSlotPresenter_OnBackPressed_Params
{
};

// Function GlimpseGame.GlimpseGameSlotPresenter.IsHighlightingTheClearSpaceNewGameButton
struct UGlimpseGameSlotPresenter_IsHighlightingTheClearSpaceNewGameButton_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameSlotPresenter.GetTotalSpace
struct UGlimpseGameSlotPresenter_GetTotalSpace_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameSlotPresenter.GetRequiredFreeSpace
struct UGlimpseGameSlotPresenter_GetRequiredFreeSpace_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameSlotPresenter.GetHighlightedSlotSpace
struct UGlimpseGameSlotPresenter_GetHighlightedSlotSpace_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameSlotPresenter.GetCurrentFreeSpace
struct UGlimpseGameSlotPresenter_GetCurrentFreeSpace_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseGameViewportClient.DrugIntensity
struct UGlimpseGameViewportClient_DrugIntensity_Params
{
	float                                              InIntensity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseUserWidget.GetMouseAndKeyboardPromptVisibility
struct UGlimpseUserWidget_GetMouseAndKeyboardPromptVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseUserWidget.GetDesktopVisibility
struct UGlimpseUserWidget_GetDesktopVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseUserWidget.GetControllerPromptVisibility
struct UGlimpseUserWidget_GetControllerPromptVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUDWidget.UpdatePlayerVisibility
struct UGlimpseHUDWidget_UpdatePlayerVisibility_Params
{
	TEnumAsByte<EHUDPlayerVisibility>                  CurrentVisibility;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUDWidget.UpdatePlayerSuspicion
struct UGlimpseHUDWidget_UpdatePlayerSuspicion_Params
{
	TEnumAsByte<EHUDPlayerSuspicion>                   CurrentSuspicion;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUDWidget.UpdatePlayerLoudness
struct UGlimpseHUDWidget_UpdatePlayerLoudness_Params
{
	TEnumAsByte<EHUDPlayerLoudness>                    CurrentLoudness;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUDWidget.UpdateCountdownWidget
struct UGlimpseHUDWidget_UpdateCountdownWidget_Params
{
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       TimeString;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               danger;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUDWidget.OnGetHealthOverlayOpacity
struct UGlimpseHUDWidget_OnGetHealthOverlayOpacity_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUDWidget.GetTrespassingVisibility
struct UGlimpseHUDWidget_GetTrespassingVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUDWidget.GetStealthVignetteColour
struct UGlimpseHUDWidget_GetStealthVignetteColour_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUDWidget.GetPlayerController
struct UGlimpseHUDWidget_GetPlayerController_Params
{
	class AGlimpsePlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUDWidget.GetMouseAndKeyboardPromptVisibility
struct UGlimpseHUDWidget_GetMouseAndKeyboardPromptVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUDWidget.GetCurfewVisibility
struct UGlimpseHUDWidget_GetCurfewVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUDWidget.GetControllerPromptVisibility
struct UGlimpseHUDWidget_GetControllerPromptVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUDWidget.GetAudioWarningVisibility
struct UGlimpseHUDWidget_GetAudioWarningVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.ShowPresetDiscoveryText
struct AGlimpseHUD_ShowPresetDiscoveryText_Params
{
	TEnumAsByte<EDiscoveryPreset>                      Preset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       InBodyText;                                               // (Parm)
};

// Function GlimpseGame.GlimpseHUD.ShowFloatingText
struct AGlimpseHUD_ShowFloatingText_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GlimpseGame.GlimpseHUD.ShowDiscoveryText
struct AGlimpseHUD_ShowDiscoveryText_Params
{
	TEnumAsByte<EDiscoveryIcon>                        InIcon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       InTitleText;                                              // (Parm)
	struct FText                                       InBodyText;                                               // (Parm)
};

// Function GlimpseGame.GlimpseHUD.ShowDebugNotification
struct AGlimpseHUD_ShowDebugNotification_Params
{
};

// Function GlimpseGame.GlimpseHUD.ShowDebugInGameTip
struct AGlimpseHUD_ShowDebugInGameTip_Params
{
};

// Function GlimpseGame.GlimpseHUD.ShowDateTime
struct AGlimpseHUD_ShowDateTime_Params
{
	bool                                               bAutoHide;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.SetHUDVisibility
struct AGlimpseHUD_SetHUDVisibility_Params
{
	TEnumAsByte<EHUDVisibility>                        InVisibility;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnSurvivalStatChanged
struct AGlimpseHUD_OnSurvivalStatChanged_Params
{
	TEnumAsByte<ESurvivalNeed>                         StatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnStatusEffectTierChanged
struct AGlimpseHUD_OnStatusEffectTierChanged_Params
{
	class UGlimpseStatusEffectTiered*                  Effect;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OldTier;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewTier;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnStatusEffectRemoved
struct AGlimpseHUD_OnStatusEffectRemoved_Params
{
	class UGlimpseStatusEffectBase*                    Effect;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnStatusEffectApplied
struct AGlimpseHUD_OnStatusEffectApplied_Params
{
	class UGlimpseStatusEffectBase*                    Effect;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetTopRightVisibility
struct AGlimpseHUD_OnGetTopRightVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetTimeText
struct AGlimpseHUD_OnGetTimeText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseHUD.OnGetTargetPromptVisibility
struct AGlimpseHUD_OnGetTargetPromptVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetTargetDescriptiveName
struct AGlimpseHUD_OnGetTargetDescriptiveName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseHUD.OnGetStatusEffectVisibility
struct AGlimpseHUD_OnGetStatusEffectVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetStaminaBarVisibility
struct AGlimpseHUD_OnGetStaminaBarVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetSecondaryInteractionVisibility
struct AGlimpseHUD_OnGetSecondaryInteractionVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetSecondaryInteractionText
struct AGlimpseHUD_OnGetSecondaryInteractionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseHUD.OnGetSecondaryInteractionHoldTextVisibility
struct AGlimpseHUD_OnGetSecondaryInteractionHoldTextVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetSecondaryInputBindingStandardVisibility
struct AGlimpseHUD_OnGetSecondaryInputBindingStandardVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetSecondaryInputBindingFireVisibility
struct AGlimpseHUD_OnGetSecondaryInputBindingFireVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetProgressVisibility
struct AGlimpseHUD_OnGetProgressVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetProgressPercent
struct AGlimpseHUD_OnGetProgressPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetPrimaryInteractionVisibility
struct AGlimpseHUD_OnGetPrimaryInteractionVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetPrimaryInteractionTint
struct AGlimpseHUD_OnGetPrimaryInteractionTint_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetPrimaryInteractionText
struct AGlimpseHUD_OnGetPrimaryInteractionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseHUD.OnGetPrimaryInteractionHoldTextVisibility
struct AGlimpseHUD_OnGetPrimaryInteractionHoldTextVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetPrimaryInputBindingStandardVisibility
struct AGlimpseHUD_OnGetPrimaryInputBindingStandardVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetPrimaryInputBindingFireVisibility
struct AGlimpseHUD_OnGetPrimaryInputBindingFireVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetPlayerImpactIconsVisibility
struct AGlimpseHUD_OnGetPlayerImpactIconsVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetPersistentStatusVisibility
struct AGlimpseHUD_OnGetPersistentStatusVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetPersistentStatusText
struct AGlimpseHUD_OnGetPersistentStatusText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseHUD.OnGetPerceptionIconVisibility
struct AGlimpseHUD_OnGetPerceptionIconVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetPerceptionIconSuspicionLevel
struct AGlimpseHUD_OnGetPerceptionIconSuspicionLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetPerceptionIconStealthMode
struct AGlimpseHUD_OnGetPerceptionIconStealthMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetPerceptionIconShouldPulse
struct AGlimpseHUD_OnGetPerceptionIconShouldPulse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetPerceptionIconIndex
struct AGlimpseHUD_OnGetPerceptionIconIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetNoHUDModeVisibility
struct AGlimpseHUD_OnGetNoHUDModeVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetMantleVisibility
struct AGlimpseHUD_OnGetMantleVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetMantleText
struct AGlimpseHUD_OnGetMantleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseHUD.OnGetInfoVisibility
struct AGlimpseHUD_OnGetInfoVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetFullVisibility
struct AGlimpseHUD_OnGetFullVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetEquipSlotsVisibility
struct AGlimpseHUD_OnGetEquipSlotsVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetDiscoveryTextVisibility
struct AGlimpseHUD_OnGetDiscoveryTextVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetDayText
struct AGlimpseHUD_OnGetDayText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseHUD.OnGetDateTimeVisibility
struct AGlimpseHUD_OnGetDateTimeVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetCrouchVisibility
struct AGlimpseHUD_OnGetCrouchVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetCrouchText
struct AGlimpseHUD_OnGetCrouchText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseHUD.OnGetCrosshairsTint
struct AGlimpseHUD_OnGetCrosshairsTint_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseHUD.OnGetCrosshairsReticleVisibility
struct AGlimpseHUD_OnGetCrosshairsReticleVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetCrosshairsDotVisibility
struct AGlimpseHUD_OnGetCrosshairsDotVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetCompassVisibility
struct AGlimpseHUD_OnGetCompassVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetAttackVisibility
struct AGlimpseHUD_OnGetAttackVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.OnGetAttackText
struct AGlimpseHUD_OnGetAttackText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseHUD.HideDateTime
struct AGlimpseHUD_HideDateTime_Params
{
};

// Function GlimpseGame.GlimpseHUD.GetViewportScale
struct AGlimpseHUD_GetViewportScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.GetTipTitleText
struct AGlimpseHUD_GetTipTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseHUD.GetTipTint
struct AGlimpseHUD_GetTipTint_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.GetTipIcon
struct AGlimpseHUD_GetTipIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseHUD.GetTipBodyText
struct AGlimpseHUD_GetTipBodyText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseHUD.GetReticleStyle
struct AGlimpseHUD_GetReticleStyle_Params
{
	TEnumAsByte<EHUDCrosshairsVisibility>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.GetJoyIndicatorVisibility
struct AGlimpseHUD_GetJoyIndicatorVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.GetIsPlayerMenuVisible
struct AGlimpseHUD_GetIsPlayerMenuVisible_Params
{
	TEnumAsByte<EPlayerMenu>                           Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.GetHUDVisibility
struct AGlimpseHUD_GetHUDVisibility_Params
{
	TEnumAsByte<EHUDVisibility>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.GetHiddenByPlayerMenuVisibility
struct AGlimpseHUD_GetHiddenByPlayerMenuVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseHUD.GetCompactTipText
struct AGlimpseHUD_GetCompactTipText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseAreaComponent.SetAreaExtent
struct UGlimpseAreaComponent_SetAreaExtent_Params
{
	struct FVector2D                                   InAreaExtent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateOverlaps;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAreaComponent.GetUnscaledAreaExtent
struct UGlimpseAreaComponent_GetUnscaledAreaExtent_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAreaComponent.GetScaledAreaExtent
struct UGlimpseAreaComponent_GetScaledAreaExtent_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupSurvival.GetStatVariation
struct AGlimpsePickupSurvival_GetStatVariation_Params
{
	TEnumAsByte<ESurvivalNeed>                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupMutableWeapon.TriggerHolsterAttack
struct AGlimpsePickupMutableWeapon_TriggerHolsterAttack_Params
{
	class AGlimpsePlayerCharacter*                     PlayerCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupMutableWeapon.SwitchToMeleeConfiguration
struct AGlimpsePickupMutableWeapon_SwitchToMeleeConfiguration_Params
{
};

// Function GlimpseGame.GlimpsePickupMutableWeapon.SwitchToFireConfiguration
struct AGlimpsePickupMutableWeapon_SwitchToFireConfiguration_Params
{
};

// Function GlimpseGame.GlimpsePickupMutableWeapon.SetChargeEnabled
struct AGlimpsePickupMutableWeapon_SetChargeEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupMutableWeapon.IsMeleeConfigurationActive
struct AGlimpsePickupMutableWeapon_IsMeleeConfigurationActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupMutableWeapon.IsFireConfigurationActive
struct AGlimpsePickupMutableWeapon_IsFireConfigurationActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupMutableWeapon.ForceBeginCharge
struct AGlimpsePickupMutableWeapon_ForceBeginCharge_Params
{
	class APawn*                                       InstigatorPawn;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupMutableWeapon.ChangeWeaponMode
struct AGlimpsePickupMutableWeapon_ChangeWeaponMode_Params
{
	class AGlimpsePlayerCharacter*                     PlayerCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePickupMutableWeapon.CanChangeWeaponMode
struct AGlimpsePickupMutableWeapon_CanChangeWeaponMode_Params
{
	class AGlimpsePlayerCharacter*                     PlayerCharacter;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLivenessManager.IsActorLive
struct UGlimpseLivenessManager_IsActorLive_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLoosePickupManager.OnActorEndPlay
struct UGlimpseLoosePickupManager_OnActorEndPlay_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseLoosePickupManager.OnActorDestroyed
struct UGlimpseLoosePickupManager_OnActorDestroyed_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseMapMaker.RevealMarker
struct UGlimpseMapMaker_RevealMarker_Params
{
	struct FString                                     MarkerName;                                               // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseMapMaker.MoveMarker
struct UGlimpseMapMaker_MoveMarker_Params
{
	struct FString                                     MarkerName;                                               // (Parm, ZeroConstructor)
	struct FVector2D                                   NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseMapMaker.IsMarkerRevealed
struct UGlimpseMapMaker_IsMarkerRevealed_Params
{
	struct FString                                     MarkerName;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseMapMaker.HideMarker
struct UGlimpseMapMaker_HideMarker_Params
{
	struct FString                                     MarkerName;                                               // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseMapMaker.DoesMarkerExist
struct UGlimpseMapMaker_DoesMarkerExist_Params
{
	struct FString                                     MarkerName;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseMapMaker.DestroyMarker
struct UGlimpseMapMaker_DestroyMarker_Params
{
	struct FString                                     MarkerName;                                               // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseMapMaker.CreateMarker
struct UGlimpseMapMaker_CreateMarker_Params
{
	struct FString                                     MarkerName;                                               // (Parm, ZeroConstructor)
	TEnumAsByte<EGlimpseMapPOI>                        Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // (Parm)
	struct FSlateBrush                                 CloseZoomIcon;                                            // (Parm)
	struct FSlateBrush                                 FarZoomIcon;                                              // (Parm)
};

// Function GlimpseGame.GlimpseMapPOIComponent.SetMarkerIsDynamic
struct UGlimpseMapPOIComponent_SetMarkerIsDynamic_Params
{
	bool                                               bIsDynamic;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseMapPOIComponent.GetMapPOIName
struct UGlimpseMapPOIComponent_GetMapPOIName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GlimpseGame.GlimpseNavLinkComponent.SetLinkPoints
struct UGlimpseNavLinkComponent_SetLinkPoints_Params
{
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseNewspaperWidget.GetIssueNumberText
struct UGlimpseNewspaperWidget_GetIssueNumberText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseNewspaperWidget.GetDateText
struct UGlimpseNewspaperWidget_GetDateText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.PickupSpawnerComponent.Spawn
struct UPickupSpawnerComponent_Spawn_Params
{
	bool                                               bForceRespawn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.PickupSpawnerComponent.OnSpawnedPickupPickedUp
struct UPickupSpawnerComponent_OnSpawnedPickupPickedUp_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.PickupSpawnerComponent.AbandonSpawnedPickup
struct UPickupSpawnerComponent_AbandonSpawnedPickup_Params
{
};

// Function GlimpseGame.GlimpsePickupSpawner.Spawn
struct AGlimpsePickupSpawner_Spawn_Params
{
	bool                                               bForceRespawn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCameraManager.RestrictView
struct AGlimpsePlayerCameraManager_RestrictView_Params
{
	struct FVector                                     BaseDirection;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinPitch;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxPitch;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinYaw;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxYaw;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCameraManager.OverrideFOV
struct AGlimpsePlayerCameraManager_OverrideFOV_Params
{
	float                                              NewFOV;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCameraManager.GetOwningGlimpsePlayerController
struct AGlimpsePlayerCameraManager_GetOwningGlimpsePlayerController_Params
{
	class AGlimpsePlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCameraManager.GetBaseFOVAngle
struct AGlimpsePlayerCameraManager_GetBaseFOVAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCameraManager.FadeOut
struct AGlimpsePlayerCameraManager_FadeOut_Params
{
	float                                              FadeDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FadeColour;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoClearFade;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCameraManager.FadeIn
struct AGlimpsePlayerCameraManager_FadeIn_Params
{
	float                                              FadeDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FadeColour;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCameraManager.CustomFade
struct AGlimpsePlayerCameraManager_CustomFade_Params
{
	float                                              FadeDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FadeColour;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartingFadePercent;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndingFadePercent;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoClearFade;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerCameraManager.ClearFade
struct AGlimpsePlayerCameraManager_ClearFade_Params
{
};

// Function GlimpseGame.GlimpseProjectile.OnOverlap
struct AGlimpseProjectile_OnOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuestPredicate.BroadcastPredicateChanged
struct UQuestPredicate_BroadcastPredicateChanged_Params
{
};

// Function GlimpseGame.QuestPredicateBlueprint.ReceiveUnbind
struct UQuestPredicateBlueprint_ReceiveUnbind_Params
{
};

// Function GlimpseGame.QuestPredicateBlueprint.ReceiveTest
struct UQuestPredicateBlueprint_ReceiveTest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.QuestPredicateBlueprint.ReceiveBind
struct UQuestPredicateBlueprint_ReceiveBind_Params
{
};

// Function GlimpseGame.GlimpseQuestLibrary.StartTestQuest
struct UGlimpseQuestLibrary_StartTestQuest_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      QuestClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PushPuppetShowContext
struct UGlimpseQuestLibrary_PushPuppetShowContext_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PuppetShowTurnToLocation
struct UGlimpseQuestLibrary_PuppetShowTurnToLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PuppetShowTurnToActor
struct UGlimpseQuestLibrary_PuppetShowTurnToActor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PuppetShowTextToSpeech
struct UGlimpseQuestLibrary_PuppetShowTextToSpeech_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
	bool                                               bFemale;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PuppetShowSetLookAt
struct UGlimpseQuestLibrary_PuppetShowSetLookAt_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      LookAtTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFaceLookAtTarget;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PuppetShowPOI
struct UGlimpseQuestLibrary_PuppetShowPOI_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorWithPOI;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWalkPace>                             MovementSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PuppetShowNewThread
struct UGlimpseQuestLibrary_PuppetShowNewThread_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PuppetShowMoveToLocation
struct UGlimpseQuestLibrary_PuppetShowMoveToLocation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWalkPace>                             MovementSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PuppetShowMoveToActor
struct UGlimpseQuestLibrary_PuppetShowMoveToActor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWalkPace>                             MovementSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PuppetShowLookAt
struct UGlimpseQuestLibrary_PuppetShowLookAt_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      LookAtTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PuppetShowIdle
struct UGlimpseQuestLibrary_PuppetShowIdle_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PuppetShowFlee
struct UGlimpseQuestLibrary_PuppetShowFlee_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PuppetShowExecInternal
struct UGlimpseQuestLibrary_PuppetShowExecInternal_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	bool                                               bIgnoreOnSkip;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PuppetShowConversationSettings
struct UGlimpseQuestLibrary_PuppetShowConversationSettings_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FConversationModeSettings                   ConversationSettings;                                     // (Parm)
	float                                              StartOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PuppetShowConversation
struct UGlimpseQuestLibrary_PuppetShowConversation_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseConversationAsset*                   Conversation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AGlimpseCharacter*>                   Characters;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              StartOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PuppetShowAudioAndAnimMontage
struct UGlimpseQuestLibrary_PuppetShowAudioAndAnimMontage_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AudioEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoopMontage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PuppetShowAudioAndAnimChain
struct UGlimpseQuestLibrary_PuppetShowAudioAndAnimChain_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AudioEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseAnimationChain*                      Chain;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PuppetShowAudio
struct UGlimpseQuestLibrary_PuppetShowAudio_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AudioEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PuppetShowAttack
struct UGlimpseQuestLibrary_PuppetShowAttack_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWalkPace>                             MovementSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PuppetShowAnimMontage
struct UGlimpseQuestLibrary_PuppetShowAnimMontage_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoopMontage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PuppetShowAnimChain
struct UGlimpseQuestLibrary_PuppetShowAnimChain_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseAnimationChain*                      Chain;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndOffset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PopPuppetShowContext
struct UGlimpseQuestLibrary_PopPuppetShowContext_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PlayPuppetShowWithDelegate
struct UGlimpseQuestLibrary_PlayPuppetShowWithDelegate_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPuppetShow*                                 PuppetShow;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowSkipping;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseQuestLibrary.PlayPuppetShow
struct UGlimpseQuestLibrary_PlayPuppetShow_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPuppetShow*                                 PuppetShow;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowSkipping;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function GlimpseGame.GlimpseQuestLibrary.PlayConversationModeMultiple
struct UGlimpseQuestLibrary_PlayConversationModeMultiple_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseAICharacter*                         Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpsePlayerCharacter*                     Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AGlimpseAICharacter*>                 OtherCharacters;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UGlimpseConversationAsset*                   Conversation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FConversationModeSettings                   ConversationModeSettings;                                 // (Parm)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	int                                                StartingIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuspicionInterruptConversation;                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bConvModeWithSkip;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PlayConversationMode
struct UGlimpseQuestLibrary_PlayConversationMode_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseAICharacter*                         Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpsePlayerCharacter*                     Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseConversationAsset*                   Conversation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FConversationModeSettings                   ConversationModeSettings;                                 // (Parm)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	int                                                StartingIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuspicionInterruptConversation;                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bConvModeWithSkip;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PlayConversationAsset
struct UGlimpseQuestLibrary_PlayConversationAsset_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseConversationAsset*                   Conversation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AGlimpseCharacter*>                   Characters;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	int                                                StartingIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuspicionInterruptConversation;                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bConvModeWithSkip;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.PlayActorConversationModeMultiple
struct UGlimpseQuestLibrary_PlayActorConversationModeMultiple_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpsePlayerCharacter*                     Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              OtherActors;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UGlimpseConversationAsset*                   Conversation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FConversationModeSettings                   ConversationModeSettings;                                 // (Parm)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	int                                                StartingIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuspicionInterruptConversation;                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bConvModeWithSkip;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.NewPuppetShow
struct UGlimpseQuestLibrary_NewPuppetShow_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseQuestLibrary.FinalizePuppetShow
struct UGlimpseQuestLibrary_FinalizePuppetShow_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UPuppetShow*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseRespawnManager.UnlockShelterRespawnComponent
struct UGlimpseRespawnManager_UnlockShelterRespawnComponent_Params
{
	struct FName                                       ShelterName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseRespawnPointComponent*               Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.GlimpseRespawnManager.UnlockShelterRespawnActor
struct UGlimpseRespawnManager_UnlockShelterRespawnActor_Params
{
	struct FName                                       ShelterName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseRespawnManager.UnlockRespawnComponent
struct UGlimpseRespawnManager_UnlockRespawnComponent_Params
{
	class UGlimpseRespawnPointComponent*               Actor;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bMakeActive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseRespawnManager.UnlockRespawn
struct UGlimpseRespawnManager_UnlockRespawn_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMakeActive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseRespawnManager.SetShelterAsRespawnOverride
struct UGlimpseRespawnManager_SetShelterAsRespawnOverride_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ShelterName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseRespawnManager.SetRespawnOverride
struct UGlimpseRespawnManager_SetRespawnOverride_Params
{
	class AActor*                                      RespawnPoint;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUnlock;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseRespawnManager.LockRespawnComponent
struct UGlimpseRespawnManager_LockRespawnComponent_Params
{
	class UGlimpseRespawnPointComponent*               Actor;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.GlimpseRespawnManager.LockRespawn
struct UGlimpseRespawnManager_LockRespawn_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseRespawnManager.IsShelterRespawnUnlocked
struct UGlimpseRespawnManager_IsShelterRespawnUnlocked_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ShelterName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseRespawnManager.IsRespawnValid
struct UGlimpseRespawnManager_IsRespawnValid_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseRespawnManager.IsRespawnUnlocked
struct UGlimpseRespawnManager_IsRespawnUnlocked_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseRespawnManager.IsRespawnComponentValid
struct UGlimpseRespawnManager_IsRespawnComponentValid_Params
{
	class UGlimpseRespawnPointComponent*               Actor;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseRespawnManager.IsRespawnComponentUnlocked
struct UGlimpseRespawnManager_IsRespawnComponentUnlocked_Params
{
	class UGlimpseRespawnPointComponent*               Actor;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseRespawnManager.ClearRespawnOverride
struct UGlimpseRespawnManager_ClearRespawnOverride_Params
{
	class AActor*                                      RespawnPoint;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Block;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseRespawnManager.ClearAllRespawnOverride
struct UGlimpseRespawnManager_ClearAllRespawnOverride_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseRespawnPointComponent.EnableRespawnComponent
struct UGlimpseRespawnPointComponent_EnableRespawnComponent_Params
{
};

// Function GlimpseGame.GlimpseRespawnPointComponent.DisableRespawnComponent
struct UGlimpseRespawnPointComponent_DisableRespawnComponent_Params
{
};

// Function GlimpseGame.GlimpseShellMenu.ShouldDisplayHelpText
struct UGlimpseShellMenu_ShouldDisplayHelpText_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.SetSelectGameMode
struct UGlimpseShellMenu_SetSelectGameMode_Params
{
	TEnumAsByte<ESelectGameMode>                       InSelectGameMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.SetPaperBackgroundStyle
struct UGlimpseShellMenu_SetPaperBackgroundStyle_Params
{
	TEnumAsByte<EPaperBackgroundState>                 BackgroundState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.SetOverrideMenuEntry
struct UGlimpseShellMenu_SetOverrideMenuEntry_Params
{
	class UMenuEntry*                                  MenuEntry;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.SetNextActiveNewGameOption
struct UGlimpseShellMenu_SetNextActiveNewGameOption_Params
{
	int                                                Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.SetActivePanel
struct UGlimpseShellMenu_SetActivePanel_Params
{
	TEnumAsByte<EShellMenuPanel>                       InActivePanel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.SetActiveNewGameOption
struct UGlimpseShellMenu_SetActiveNewGameOption_Params
{
	int                                                OptionIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.RefocusOnMenu
struct UGlimpseShellMenu_RefocusOnMenu_Params
{
};

// Function GlimpseGame.GlimpseShellMenu.OnWelcomeScreenStateChanged
struct UGlimpseShellMenu_OnWelcomeScreenStateChanged_Params
{
	bool                                               Shown;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.OnStartSandBoxNewGame
struct UGlimpseShellMenu_OnStartSandBoxNewGame_Params
{
};

// Function GlimpseGame.GlimpseShellMenu.OnStartNewGame
struct UGlimpseShellMenu_OnStartNewGame_Params
{
};

// Function GlimpseGame.GlimpseShellMenu.OnSetActivePanel
struct UGlimpseShellMenu_OnSetActivePanel_Params
{
	TEnumAsByte<EShellMenuPanel>                       InActivePanel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.OnSaveSlotPanelStateChanged
struct UGlimpseShellMenu_OnSaveSlotPanelStateChanged_Params
{
	bool                                               Shown;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.OnPlaythroughButtonsChanged
struct UGlimpseShellMenu_OnPlaythroughButtonsChanged_Params
{
};

// Function GlimpseGame.GlimpseShellMenu.OnOptionsPanelStateChanged
struct UGlimpseShellMenu_OnOptionsPanelStateChanged_Params
{
	bool                                               Shown;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.OnNewSaveslotHighlighted
struct UGlimpseShellMenu_OnNewSaveslotHighlighted_Params
{
};

// Function GlimpseGame.GlimpseShellMenu.OnNewMenuEntryFocused
struct UGlimpseShellMenu_OnNewMenuEntryFocused_Params
{
	class UMenuEntry*                                  MenuEntry;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.OnChangeMenu
struct UGlimpseShellMenu_OnChangeMenu_Params
{
	class UWidget*                                     MenuWidget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.IsSandboxModeGame
struct UGlimpseShellMenu_IsSandboxModeGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.IsFirstTimePlayer
struct UGlimpseShellMenu_IsFirstTimePlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.IsDLCModeGame
struct UGlimpseShellMenu_IsDLCModeGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.HasSaveGames
struct UGlimpseShellMenu_HasSaveGames_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.GetSelectGameMode
struct UGlimpseShellMenu_GetSelectGameMode_Params
{
	TEnumAsByte<ESelectGameMode>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.GetSaveSlotPanelVisibility
struct UGlimpseShellMenu_GetSaveSlotPanelVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.GetSaveSlotInteractionState
struct UGlimpseShellMenu_GetSaveSlotInteractionState_Params
{
	TEnumAsByte<ESaveSlotInteractionState>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.GetPCOnlySettingsVisibility
struct UGlimpseShellMenu_GetPCOnlySettingsVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.GetOptionsPanelVisibility
struct UGlimpseShellMenu_GetOptionsPanelVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.GetMouseAndKeyboardPromptVisibility
struct UGlimpseShellMenu_GetMouseAndKeyboardPromptVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.GetFocusUserIndex
struct UGlimpseShellMenu_GetFocusUserIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenu.GetEntryDescriptionText
struct UGlimpseShellMenu_GetEntryDescriptionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseShellMenu.GetControllerPromptVisibility
struct UGlimpseShellMenu_GetControllerPromptVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.SetNewGameStartingType
struct UGlimpseShellMenuPresenter_SetNewGameStartingType_Params
{
	TEnumAsByte<ENewGameMode>                          NewType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.RestoreCurrentMenuDefaults
struct UGlimpseShellMenuPresenter_RestoreCurrentMenuDefaults_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.ResetShellMenu
struct UGlimpseShellMenuPresenter_ResetShellMenu_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.RefreshCharacterSelectWidget
struct UGlimpseShellMenuPresenter_RefreshCharacterSelectWidget_Params
{
	class UNewGameOptionEnum*                          CharacterSelectWidget;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.OnSupportAndFeedback
struct UGlimpseShellMenuPresenter_OnSupportAndFeedback_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.OnSaveGame
struct UGlimpseShellMenuPresenter_OnSaveGame_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.OnSaveAndReturnToMainMenu
struct UGlimpseShellMenuPresenter_OnSaveAndReturnToMainMenu_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.OnSaveAndQuit
struct UGlimpseShellMenuPresenter_OnSaveAndQuit_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.OnRevertDeferredConfigs
struct UGlimpseShellMenuPresenter_OnRevertDeferredConfigs_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.OnResetViewedInGameTips
struct UGlimpseShellMenuPresenter_OnResetViewedInGameTips_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.OnQuit
struct UGlimpseShellMenuPresenter_OnQuit_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.OnNewStoryGameStart
struct UGlimpseShellMenuPresenter_OnNewStoryGameStart_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.OnNewSandboxGameStart
struct UGlimpseShellMenuPresenter_OnNewSandboxGameStart_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.OnNewGameStart
struct UGlimpseShellMenuPresenter_OnNewGameStart_Params
{
	TEnumAsByte<ENewGameMode>                          NewConfiguration;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.OnMenuBack
struct UGlimpseShellMenuPresenter_OnMenuBack_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.OnGetCheatShelterIsEnabled
struct UGlimpseShellMenuPresenter_OnGetCheatShelterIsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.OnContinueGame
struct UGlimpseShellMenuPresenter_OnContinueGame_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.OnConfirmNewGameDemo
struct UGlimpseShellMenuPresenter_OnConfirmNewGameDemo_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.OnCheatShelter
struct UGlimpseShellMenuPresenter_OnCheatShelter_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.OnCheatRevealMap
struct UGlimpseShellMenuPresenter_OnCheatRevealMap_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.OnCheatResetSkills
struct UGlimpseShellMenuPresenter_OnCheatResetSkills_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.OnCheatMaxCarryWeight
struct UGlimpseShellMenuPresenter_OnCheatMaxCarryWeight_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.OnCheatHeal
struct UGlimpseShellMenuPresenter_OnCheatHeal_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.OnCheatGiveSkillPoints
struct UGlimpseShellMenuPresenter_OnCheatGiveSkillPoints_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.OnCheatCompleteObjective
struct UGlimpseShellMenuPresenter_OnCheatCompleteObjective_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.OnChangeUser
struct UGlimpseShellMenuPresenter_OnChangeUser_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.OnApplyDeferredConfigs
struct UGlimpseShellMenuPresenter_OnApplyDeferredConfigs_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.IsInRestrictedWidthResolution
struct UGlimpseShellMenuPresenter_IsInRestrictedWidthResolution_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.HideShellMenu
struct UGlimpseShellMenuPresenter_HideShellMenu_Params
{
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetVRVisibility
struct UGlimpseShellMenuPresenter_GetVRVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetVersionText
struct UGlimpseShellMenuPresenter_GetVersionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetTimeSinceLastWorldSave
struct UGlimpseShellMenuPresenter_GetTimeSinceLastWorldSave_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetTheatreVisibility
struct UGlimpseShellMenuPresenter_GetTheatreVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetTelemetryOptionVisibility
struct UGlimpseShellMenuPresenter_GetTelemetryOptionVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetSupportAndFeedbackEntryDescriptionText
struct UGlimpseShellMenuPresenter_GetSupportAndFeedbackEntryDescriptionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetShadowCustomQualityEnabled
struct UGlimpseShellMenuPresenter_GetShadowCustomQualityEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetSelectGameVisibility
struct UGlimpseShellMenuPresenter_GetSelectGameVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetSelectEntryVisibility
struct UGlimpseShellMenuPresenter_GetSelectEntryVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetSaveTimeVisibility
struct UGlimpseShellMenuPresenter_GetSaveTimeVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetSaveQuitEntryVisibility
struct UGlimpseShellMenuPresenter_GetSaveQuitEntryVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetSaveQuitEntryText
struct UGlimpseShellMenuPresenter_GetSaveQuitEntryText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetSaveQuitEntryDescriptionText
struct UGlimpseShellMenuPresenter_GetSaveQuitEntryDescriptionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetSaveMainMenuEntryText
struct UGlimpseShellMenuPresenter_GetSaveMainMenuEntryText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetSaveMainMenuEntryDescriptionText
struct UGlimpseShellMenuPresenter_GetSaveMainMenuEntryDescriptionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetSaveGameVisibility
struct UGlimpseShellMenuPresenter_GetSaveGameVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetSaveEntryVisibility
struct UGlimpseShellMenuPresenter_GetSaveEntryVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetSaveEntryEnabled
struct UGlimpseShellMenuPresenter_GetSaveEntryEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetRestoreDefaultsVisibility
struct UGlimpseShellMenuPresenter_GetRestoreDefaultsVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetResolutionEntryEnabled
struct UGlimpseShellMenuPresenter_GetResolutionEntryEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetQuitEntryVisibility
struct UGlimpseShellMenuPresenter_GetQuitEntryVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetPlayerNicknameText
struct UGlimpseShellMenuPresenter_GetPlayerNicknameText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetPAXTimeLimitVisibility
struct UGlimpseShellMenuPresenter_GetPAXTimeLimitVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetNewVersionVisibility
struct UGlimpseShellMenuPresenter_GetNewVersionVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetNewVersionText
struct UGlimpseShellMenuPresenter_GetNewVersionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetNewsVisibility
struct UGlimpseShellMenuPresenter_GetNewsVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetNewGameVisibility
struct UGlimpseShellMenuPresenter_GetNewGameVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetNewGameStartingType
struct UGlimpseShellMenuPresenter_GetNewGameStartingType_Params
{
	TEnumAsByte<ENewGameMode>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetNewGameEntryDescriptionText
struct UGlimpseShellMenuPresenter_GetNewGameEntryDescriptionText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetNewGameDemoVisibility
struct UGlimpseShellMenuPresenter_GetNewGameDemoVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetMainMenuVisibility
struct UGlimpseShellMenuPresenter_GetMainMenuVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetLoadGamesEnabled
struct UGlimpseShellMenuPresenter_GetLoadGamesEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetInGameVisibility
struct UGlimpseShellMenuPresenter_GetInGameVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetGammaGuideVisibility
struct UGlimpseShellMenuPresenter_GetGammaGuideVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetEntryHelpText
struct UGlimpseShellMenuPresenter_GetEntryHelpText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetDesktopVisibility
struct UGlimpseShellMenuPresenter_GetDesktopVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetDeferredEntriesVisibility
struct UGlimpseShellMenuPresenter_GetDeferredEntriesVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetCustomQualityVisibility
struct UGlimpseShellMenuPresenter_GetCustomQualityVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetCustomQualityEnabled
struct UGlimpseShellMenuPresenter_GetCustomQualityEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetControllerOptionsEntryText
struct UGlimpseShellMenuPresenter_GetControllerOptionsEntryText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetControllerOptionsEntryDescription
struct UGlimpseShellMenuPresenter_GetControllerOptionsEntryDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetContinueEntryVisibility
struct UGlimpseShellMenuPresenter_GetContinueEntryVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetClearSpaceGuideVisibility
struct UGlimpseShellMenuPresenter_GetClearSpaceGuideVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetCheatsVisibility
struct UGlimpseShellMenuPresenter_GetCheatsVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetCharacterSelectVisibility
struct UGlimpseShellMenuPresenter_GetCharacterSelectVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetChangeUserVisibility
struct UGlimpseShellMenuPresenter_GetChangeUserVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseShellMenuPresenter.GetBackEntryVisibility
struct UGlimpseShellMenuPresenter_GetBackEntryVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.DyingBase.IsDyingFinished
struct UDyingBase_IsDyingFinished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.DyingBase.GetDyingIntensity
struct UDyingBase_GetDyingIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseRecurringStatusEffect.OnRecurringTaskDue
struct UGlimpseRecurringStatusEffect_OnRecurringTaskDue_Params
{
};

// Function GlimpseGame.GlimpseStatusEffectStacking.SetCurrentStacks
struct UGlimpseStatusEffectStacking_SetCurrentStacks_Params
{
	int                                                NumStacks;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusEffectStacking.Increase
struct UGlimpseStatusEffectStacking_Increase_Params
{
	int                                                Increment;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusEffectStacking.Decrease
struct UGlimpseStatusEffectStacking_Decrease_Params
{
	int                                                Decrement;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusEffectTiered.SetActiveTier
struct UGlimpseStatusEffectTiered_SetActiveTier_Params
{
	int                                                InActiveTier;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusEffectTiered.OnTierChanged
struct UGlimpseStatusEffectTiered_OnTierChanged_Params
{
	int                                                LastTier;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewTier;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusEffectTiered.IncreaseActiveTier
struct UGlimpseStatusEffectTiered_IncreaseActiveTier_Params
{
	int                                                Increment;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusEffectTiered.GetActiveTier
struct UGlimpseStatusEffectTiered_GetActiveTier_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusEffectTiered.DecreaseActiveTier
struct UGlimpseStatusEffectTiered_DecreaseActiveTier_Params
{
	int                                                Decrement;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusEffectTiered.AddTieredValueModifier
struct UGlimpseStatusEffectTiered_AddTieredValueModifier_Params
{
	int                                                Tier;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ValueType;                                                // (Parm)
	TEnumAsByte<EValueModifierApplication>             Application;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Modifier;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusEffectTiered.ActiveTierOverride
struct UGlimpseStatusEffectTiered_ActiveTierOverride_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusEffectTieredValue.GetTieredValue
struct UGlimpseStatusEffectTieredValue_GetTieredValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.Encumbered.OnStatusEffectApplied
struct UEncumbered_OnStatusEffectApplied_Params
{
	class UGlimpseStatusEffectBase*                    Effect;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.FoodPoisoningBase.OnVomiting
struct UFoodPoisoningBase_OnVomiting_Params
{
};

// Function GlimpseGame.FoodPoisoningBase.OnDryHeaving
struct UFoodPoisoningBase_OnDryHeaving_Params
{
};

// Function GlimpseGame.FoodPoisoningBase.OnDizziness
struct UFoodPoisoningBase_OnDizziness_Params
{
};

// Function GlimpseGame.FoodPoisoningBase.OnBlackout
struct UFoodPoisoningBase_OnBlackout_Params
{
};

// Function GlimpseGame.DiabetesBase.OnInsultGreet
struct UDiabetesBase_OnInsultGreet_Params
{
};

// Function GlimpseGame.JoyCrashBase.OnVomit
struct UJoyCrashBase_OnVomit_Params
{
	bool                                               bSucceeded;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStraightProjectile.OnProjectileHit
struct AGlimpseStraightProjectile_OnProjectileHit_Params
{
	struct FHitResult                                  HitResult;                                                // (Parm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStreamingComponent.ZoneTransition
struct UGlimpseStreamingComponent_ZoneTransition_Params
{
	struct FName                                       EnteringZone;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeavingZone;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStreamingComponent.BeginOverlap
struct UGlimpseStreamingComponent_BeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSystemLibrary.StartBindQuest
struct UGlimpseSystemLibrary_StartBindQuest_Params
{
	class UQuest*                                      Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BindContext;                                              // (Parm, ZeroConstructor)
	class UObject*                                     Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSystemLibrary.GetFirstQuestInstanceByName
struct UGlimpseSystemLibrary_GetFirstQuestInstanceByName_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuest*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSystemLibrary.GetFirstQuestInstance
struct UGlimpseSystemLibrary_GetFirstQuestInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuest*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSystemLibrary.FinishBindQuest
struct UGlimpseSystemLibrary_FinishBindQuest_Params
{
	class UQuest*                                      Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSystemLibrary.BranchOnDebug
struct UGlimpseSystemLibrary_BranchOnDebug_Params
{
	TEnumAsByte<EBranchOnDebug>                        Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSystemLibrary.BindQuestNotify
struct UGlimpseSystemLibrary_BindQuestNotify_Params
{
	class UQuest*                                      Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Variable;                                                 // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseBoxComponent.SetAreaExtent
struct UGlimpseBoxComponent_SetAreaExtent_Params
{
	struct FVector                                     InAreaExtent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateOverlaps;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseBoxComponent.GetUnscaledAreaExtent
struct UGlimpseBoxComponent_GetUnscaledAreaExtent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseBoxComponent.GetScaledAreaExtent
struct UGlimpseBoxComponent_GetScaledAreaExtent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCircleComponent.SetRadius
struct UGlimpseCircleComponent_SetRadius_Params
{
	float                                              InRadius;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCircleComponent.GetUnscaledRadius
struct UGlimpseCircleComponent_GetUnscaledRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCircleComponent.GetScaledRadius
struct UGlimpseCircleComponent_GetScaledRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTestManager.ZoneTour
struct UGlimpseTestManager_ZoneTour_Params
{
	struct FName                                       ZoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTestManager.WorldTour
struct UGlimpseTestManager_WorldTour_Params
{
};

// Function GlimpseGame.GlimpseTestManager.VisitLockables
struct UGlimpseTestManager_VisitLockables_Params
{
};

// Function GlimpseGame.GlimpseTestManager.VisitFeatures
struct UGlimpseTestManager_VisitFeatures_Params
{
	int                                                Cycles;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTestManager.VisitBadRoads
struct UGlimpseTestManager_VisitBadRoads_Params
{
};

// Function GlimpseGame.GlimpseTestManager.StressZoneHops
struct UGlimpseTestManager_StressZoneHops_Params
{
	int                                                NumCycles;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTestManager.StressFeature
struct UGlimpseTestManager_StressFeature_Params
{
	struct FName                                       FeatureName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumSteps;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTestManager.SnapshotPackages
struct UGlimpseTestManager_SnapshotPackages_Params
{
	struct FString                                     SnapshotName;                                             // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseTestManager.SetSDRUIScale
struct UGlimpseTestManager_SetSDRUIScale_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTestManager.SetSDRUISaturation
struct UGlimpseTestManager_SetSDRUISaturation_Params
{
	float                                              Saturation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTestManager.SetSDRUIBrightness
struct UGlimpseTestManager_SetSDRUIBrightness_Params
{
	float                                              Brightness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTestManager.SetSDRScale
struct UGlimpseTestManager_SetSDRScale_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTestManager.SetSDRSaturation
struct UGlimpseTestManager_SetSDRSaturation_Params
{
	float                                              Saturation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTestManager.SetSDRBrightness
struct UGlimpseTestManager_SetSDRBrightness_Params
{
	float                                              Brightness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTestManager.SetHDRUIScale
struct UGlimpseTestManager_SetHDRUIScale_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTestManager.SetHDRUISaturation
struct UGlimpseTestManager_SetHDRUISaturation_Params
{
	float                                              Saturation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTestManager.SetHDRUIBrightness
struct UGlimpseTestManager_SetHDRUIBrightness_Params
{
	float                                              Brightness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTestManager.SetHDRScale
struct UGlimpseTestManager_SetHDRScale_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTestManager.SetHDRSaturation
struct UGlimpseTestManager_SetHDRSaturation_Params
{
	float                                              Saturation;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTestManager.SetHDRBrightness
struct UGlimpseTestManager_SetHDRBrightness_Params
{
	float                                              Brightness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTestManager.ResetPackageLeaks
struct UGlimpseTestManager_ResetPackageLeaks_Params
{
};

// Function GlimpseGame.GlimpseTestManager.PlayMovie
struct UGlimpseTestManager_PlayMovie_Params
{
	struct FString                                     MoviePath;                                                // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseTestManager.NowhereSnapshot
struct UGlimpseTestManager_NowhereSnapshot_Params
{
};

// Function GlimpseGame.GlimpseTestManager.LoadQuestDebug
struct UGlimpseTestManager_LoadQuestDebug_Params
{
};

// Function GlimpseGame.GlimpseTestManager.LoadMap
struct UGlimpseTestManager_LoadMap_Params
{
	struct FString                                     MapRef;                                                   // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseTestManager.LoadDefaultSettings
struct UGlimpseTestManager_LoadDefaultSettings_Params
{
};

// Function GlimpseGame.GlimpseTestManager.LeakTestCycle
struct UGlimpseTestManager_LeakTestCycle_Params
{
	int                                                NumCycles;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTestManager.GoToNowhere
struct UGlimpseTestManager_GoToNowhere_Params
{
};

// Function GlimpseGame.GlimpseTestManager.EndlessZoneTour
struct UGlimpseTestManager_EndlessZoneTour_Params
{
	struct FName                                       ZoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTestManager.EndlessTour
struct UGlimpseTestManager_EndlessTour_Params
{
};

// Function GlimpseGame.GlimpseTestManager.DumpPackages
struct UGlimpseTestManager_DumpPackages_Params
{
	struct FString                                     ReportName;                                               // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseTestManager.DumpPackageReferrents
struct UGlimpseTestManager_DumpPackageReferrents_Params
{
	struct FString                                     PackageName;                                              // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseTestManager.DumpPackageLeaks
struct UGlimpseTestManager_DumpPackageLeaks_Params
{
};

// Function GlimpseGame.GlimpseTestManager.DumpPackageChildren
struct UGlimpseTestManager_DumpPackageChildren_Params
{
	struct FString                                     PackageName;                                              // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseTestManager.DumpObjectLeaks
struct UGlimpseTestManager_DumpObjectLeaks_Params
{
};

// Function GlimpseGame.GlimpseTestManager.DumpArtAssets
struct UGlimpseTestManager_DumpArtAssets_Params
{
	struct FString                                     ReportName;                                               // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseTestManager.CycleRoad
struct UGlimpseTestManager_CycleRoad_Params
{
	struct FName                                       ZoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumCycles;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndPointDelay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTestManager.CycleBadRoads
struct UGlimpseTestManager_CycleBadRoads_Params
{
	int                                                NumCycles;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTestManager.ClearNPCCache
struct UGlimpseTestManager_ClearNPCCache_Params
{
};

// Function GlimpseGame.GlimpseTestManager.CancelTest
struct UGlimpseTestManager_CancelTest_Params
{
};

// Function GlimpseGame.GlimpseTestManager.AutomateSoakWorldGen
struct UGlimpseTestManager_AutomateSoakWorldGen_Params
{
};

// Function GlimpseGame.GlimpseTestManager.AutomateSoakMemory
struct UGlimpseTestManager_AutomateSoakMemory_Params
{
};

// Function GlimpseGame.GlimpseTestManager.AutomateSoakLoadSave
struct UGlimpseTestManager_AutomateSoakLoadSave_Params
{
};

// Function GlimpseGame.GlimpseTestManager.AutomateSmokeTest
struct UGlimpseTestManager_AutomateSmokeTest_Params
{
};

// Function GlimpseGame.ActionDurationPresenter.ShowWarningForEffectRange
struct UActionDurationPresenter_ShowWarningForEffectRange_Params
{
	struct FName                                       InEffectKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinAcceptableTier;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxAcceptableTier;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.ShowWarningForEffect
struct UActionDurationPresenter_ShowWarningForEffect_Params
{
	struct FName                                       InEffectKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinWarningTier;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.ShowBloodSugar
struct UActionDurationPresenter_ShowBloodSugar_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.ShowBabyNeed
struct UActionDurationPresenter_ShowBabyNeed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.SetActionRestricted
struct UActionDurationPresenter_SetActionRestricted_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.SetActionDurationHours
struct UActionDurationPresenter_SetActionDurationHours_Params
{
	float                                              InActionDurationHours;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.OnGetThirstOutcome
struct UActionDurationPresenter_OnGetThirstOutcome_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.OnGetSleepOutcome
struct UActionDurationPresenter_OnGetSleepOutcome_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.OnGetRequiredActionHours
struct UActionDurationPresenter_OnGetRequiredActionHours_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.OnGetLowBloodSugarOutcome
struct UActionDurationPresenter_OnGetLowBloodSugarOutcome_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.OnGetLowBloodSugarCurrent
struct UActionDurationPresenter_OnGetLowBloodSugarCurrent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.OnGetJoyOutcome
struct UActionDurationPresenter_OnGetJoyOutcome_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.OnGetHungerOutcome
struct UActionDurationPresenter_OnGetHungerOutcome_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.OnGetHighBloodSugarOutcome
struct UActionDurationPresenter_OnGetHighBloodSugarOutcome_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.OnGetHighBloodSugarCurrent
struct UActionDurationPresenter_OnGetHighBloodSugarCurrent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.OnGetHealthOutcome
struct UActionDurationPresenter_OnGetHealthOutcome_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.OnGetDesiredActionAmountText
struct UActionDurationPresenter_OnGetDesiredActionAmountText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.ActionDurationPresenter.OnGetCurrentThirst
struct UActionDurationPresenter_OnGetCurrentThirst_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.OnGetCurrentSleep
struct UActionDurationPresenter_OnGetCurrentSleep_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.OnGetCurrentJoy
struct UActionDurationPresenter_OnGetCurrentJoy_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.OnGetCurrentHunger
struct UActionDurationPresenter_OnGetCurrentHunger_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.OnGetCurrentHealth
struct UActionDurationPresenter_OnGetCurrentHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.OnGetCurrentBaby
struct UActionDurationPresenter_OnGetCurrentBaby_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.OnGetBabyOutcome
struct UActionDurationPresenter_OnGetBabyOutcome_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.IsBloodSugarOutcomeCritical
struct UActionDurationPresenter_IsBloodSugarOutcomeCritical_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.GetEffectInfo
struct UActionDurationPresenter_GetEffectInfo_Params
{
	struct FName                                       InEffectKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOutActive;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bWillKillPlayer;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Tier;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.GetDesiredDurationHours
struct UActionDurationPresenter_GetDesiredDurationHours_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.Detach
struct UActionDurationPresenter_Detach_Params
{
};

// Function GlimpseGame.ActionDurationPresenter.CanDoActionWhileEncumbered
struct UActionDurationPresenter_CanDoActionWhileEncumbered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.CanDoActionWhileBleeding
struct UActionDurationPresenter_CanDoActionWhileBleeding_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.Attach
struct UActionDurationPresenter_Attach_Params
{
	class AGlimpsePlayerCharacter*                     InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.AllowUserChangeTime
struct UActionDurationPresenter_AllowUserChangeTime_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationPresenter.AllowActionIfZeroDuration
struct UActionDurationPresenter_AllowActionIfZeroDuration_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationWidget.SetDesiredDurationHours
struct UActionDurationWidget_SetDesiredDurationHours_Params
{
	float                                              Hours;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationWidget.OnTryConfirmButNotAllowed
struct UActionDurationWidget_OnTryConfirmButNotAllowed_Params
{
};

// Function GlimpseGame.ActionDurationWidget.OnDurationChanged
struct UActionDurationWidget_OnDurationChanged_Params
{
};

// Function GlimpseGame.ActionDurationWidget.OnActionSetup
struct UActionDurationWidget_OnActionSetup_Params
{
	struct FText                                       InTitleText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       InAcceptButtonText;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GlimpseGame.ActionDurationWidget.GetNeedVisibility
struct UActionDurationWidget_GetNeedVisibility_Params
{
	TEnumAsByte<ESurvivalNeed>                         SurvivalNeed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationWidget.GetDesiredDurationHours
struct UActionDurationWidget_GetDesiredDurationHours_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationWidget.GetCurrentTimeHours
struct UActionDurationWidget_GetCurrentTimeHours_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationWidget.GetControllerPromptVisibilty
struct UActionDurationWidget_GetControllerPromptVisibilty_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationWidget.Confirm
struct UActionDurationWidget_Confirm_Params
{
};

// Function GlimpseGame.ActionDurationWidget.CanDoAction
struct UActionDurationWidget_CanDoAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.ActionDurationWidget.Cancel
struct UActionDurationWidget_Cancel_Params
{
};

// Function GlimpseGame.ClockWidget.SetHighlightTint
struct UClockWidget_SetHighlightTint_Params
{
	struct FLinearColor                                InTintColor;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GlimpseGame.ClockWidget.SetHighlightDuration
struct UClockWidget_SetHighlightDuration_Params
{
	float                                              InStartHours;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InStopHours;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.ClockWidget.HourToAngle
struct UClockWidget_HourToAngle_Params
{
	float                                              hour;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.CraftingButton.UpdateCanCraft
struct UCraftingButton_UpdateCanCraft_Params
{
	bool                                               bInCanCraft;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.CraftingButton.OnCraftingError
struct UCraftingButton_OnCraftingError_Params
{
};

// Function GlimpseGame.CraftingButton.OnCraftButtonReleased
struct UCraftingButton_OnCraftButtonReleased_Params
{
};

// Function GlimpseGame.CraftingButton.OnCraftButtonPressed
struct UCraftingButton_OnCraftButtonPressed_Params
{
};

// Function GlimpseGame.CraftingIngredientLayout.SetItems
struct UCraftingIngredientLayout_SetItems_Params
{
	TArray<struct FIngredientInfo>                     IngredientList;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GlimpseGame.CraftingIngredientLayout.SetCanCraft
struct UCraftingIngredientLayout_SetCanCraft_Params
{
	bool                                               bCanCraft;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.CraftingTableSeparator.OnSetup
struct UCraftingTableSeparator_OnSetup_Params
{
	TEnumAsByte<ECraftingStation>                      InCraftingStation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.CraftingTableSeparator.OnCraftingTableAvailable
struct UCraftingTableSeparator_OnCraftingTableAvailable_Params
{
	bool                                               bAvailablehil;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.CutsceneWidget.SetSkipProgress
struct UCutsceneWidget_SetSkipProgress_Params
{
	float                                              progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.CutsceneWidget.OnGetSkipVisibility
struct UCutsceneWidget_OnGetSkipVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.CutsceneWidget.OnGetSkipText
struct UCutsceneWidget_OnGetSkipText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.CutsceneWidget.OnGetPlayerController
struct UCutsceneWidget_OnGetPlayerController_Params
{
	class AGlimpsePlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.CutsceneWidget.OnGetBarVisibility
struct UCutsceneWidget_OnGetBarVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.DiscoveryText.GetTrackTextVisibility
struct UDiscoveryText_GetTrackTextVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.DiscoveryText.GetTitleText
struct UDiscoveryText_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.DiscoveryText.GetIconVisibility
struct UDiscoveryText_GetIconVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.DiscoveryText.GetIcon
struct UDiscoveryText_GetIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.DiscoveryText.GetBodyTextVisibility
struct UDiscoveryText_GetBodyTextVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.DiscoveryText.GetBodyText
struct UDiscoveryText_GetBodyText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.FastTravelBox.UpdateMapName
struct UFastTravelBox_UpdateMapName_Params
{
	struct FText                                       InMapName;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GlimpseGame.FastTravelBox.OnLocationSelectActive
struct UFastTravelBox_OnLocationSelectActive_Params
{
	bool                                               bInActive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerMenu.SetSubMenu
struct UGlimpsePlayerMenu_SetSubMenu_Params
{
	TEnumAsByte<EPlayerMenu>                           MenuType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerMenu.OnSubMenuChanged
struct UGlimpsePlayerMenu_OnSubMenuChanged_Params
{
	TEnumAsByte<EPlayerMenu>                           MenuType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerMenu.GetUnreadNotesIndicatorVisibility
struct UGlimpsePlayerMenu_GetUnreadNotesIndicatorVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerMenu.GetSubMenu
struct UGlimpsePlayerMenu_GetSubMenu_Params
{
	TEnumAsByte<EPlayerMenu>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerMenu.GetSkillPointIndicatorVisibility
struct UGlimpsePlayerMenu_GetSkillPointIndicatorVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerMenu.GetPlayerController
struct UGlimpsePlayerMenu_GetPlayerController_Params
{
	class AGlimpsePlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerMenu.GetNumUnreadNotes
struct UGlimpsePlayerMenu_GetNumUnreadNotes_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerMenu.GetNumSkillPoints
struct UGlimpsePlayerMenu_GetNumSkillPoints_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerMenu.GetNavigationBindingVisibility
struct UGlimpsePlayerMenu_GetNavigationBindingVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerMenu.GetGameInstance
struct UGlimpsePlayerMenu_GetGameInstance_Params
{
	class UGlimpseGameInstance*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerMenu.GetClosePlayerMenuVisibility
struct UGlimpsePlayerMenu_GetClosePlayerMenuVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerSubMenu.GetMouseAndKeyboardPromptVisibility
struct UGlimpsePlayerSubMenu_GetMouseAndKeyboardPromptVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpsePlayerSubMenu.GetControllerPromptVisibility
struct UGlimpsePlayerSubMenu_GetControllerPromptVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseMapMenu.SetLeftPanelHovered
struct UGlimpseMapMenu_SetLeftPanelHovered_Params
{
	bool                                               bHovered;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseMapMenu.OnZoomSliderValueChanged
struct UGlimpseMapMenu_OnZoomSliderValueChanged_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseMapMenu.OnMenuShown
struct UGlimpseMapMenu_OnMenuShown_Params
{
};

// Function GlimpseGame.GlimpseMapMenu.OnMapIconClicked
struct UGlimpseMapMenu_OnMapIconClicked_Params
{
	struct FGlimpseMapPOI                              POIData;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GlimpseGame.GlimpseMapMenu.OnMapDisplayType
struct UGlimpseMapMenu_OnMapDisplayType_Params
{
	TEnumAsByte<EMapDisplayMode>                       InDisplayMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseMapMenu.OnFastTravelClickDenied
struct UGlimpseMapMenu_OnFastTravelClickDenied_Params
{
	TEnumAsByte<EFastTravelDeniedReason>               Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseMapMenu.GetZoomPercent
struct UGlimpseMapMenu_GetZoomPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.FastTravelEntry.UpdateSelected
struct UFastTravelEntry_UpdateSelected_Params
{
	bool                                               bInSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.FastTravelEntry.UpdateHighlighted
struct UFastTravelEntry_UpdateHighlighted_Params
{
	bool                                               bInHighlighted;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.FastTravelEntry.OnSetupEntry
struct UFastTravelEntry_OnSetupEntry_Params
{
	struct FName                                       InDisplayName;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bInFound;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInActive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.FastTravelEntry.OnEntryHovered
struct UFastTravelEntry_OnEntryHovered_Params
{
};

// Function GlimpseGame.FastTravelEntry.OnEntryClicked
struct UFastTravelEntry_OnEntryClicked_Params
{
};

// Function GlimpseGame.GlimpseAchievementsListEntry.UpdateSelected
struct UGlimpseAchievementsListEntry_UpdateSelected_Params
{
	bool                                               bInSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAchievementsListEntry.SetupEntry
struct UGlimpseAchievementsListEntry_SetupEntry_Params
{
	struct FText                                       AchievementName;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       AchievementDescription;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UTexture2D*                                  AchievementIcon;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAchievementsListEntry.SetSelectedVisuals
struct UGlimpseAchievementsListEntry_SetSelectedVisuals_Params
{
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseAchievementsListEntry.OnEntryClicked
struct UGlimpseAchievementsListEntry_OnEntryClicked_Params
{
};

// Function GlimpseGame.GlimpseAchievementsMenu.RefreshAchievementsList
struct UGlimpseAchievementsMenu_RefreshAchievementsList_Params
{
};

// Function GlimpseGame.GlimpseAchievementsMenu.OnItemSelected
struct UGlimpseAchievementsMenu_OnItemSelected_Params
{
	int                                                InAchievementIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCredits.Show
struct UGlimpseCredits_Show_Params
{
};

// Function GlimpseGame.GlimpseCredits.Hide
struct UGlimpseCredits_Hide_Params
{
};

// Function GlimpseGame.GlimpseCredits.GetMouseAndKeyboardPromptVisibility
struct UGlimpseCredits_GetMouseAndKeyboardPromptVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCredits.GetControllerPromptVisibility
struct UGlimpseCredits_GetControllerPromptVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.MenuPresenter.GetMouseAndKeyboardPromptVisibility
struct UMenuPresenter_GetMouseAndKeyboardPromptVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.MenuPresenter.GetControllerPromptVisibility
struct UMenuPresenter_GetControllerPromptVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.MenuPresenter.GetController
struct UMenuPresenter_GetController_Params
{
	class AGlimpsePlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.DeathMenuPresenter.GetContinuePromptVisibility
struct UDeathMenuPresenter_GetContinuePromptVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseDeathMenu.OnGetPlayerController
struct UGlimpseDeathMenu_OnGetPlayerController_Params
{
	class AGlimpsePlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseDeathMenu.OnDeathMenuShown
struct UGlimpseDeathMenu_OnDeathMenuShown_Params
{
};

// Function GlimpseGame.GlimpseDeathMenu.OnDeathMenuHidden
struct UGlimpseDeathMenu_OnDeathMenuHidden_Params
{
};

// Function GlimpseGame.GlimpseScoreScreen.ReturnToMainMenu
struct UGlimpseScoreScreen_ReturnToMainMenu_Params
{
};

// Function GlimpseGame.GlimpseScoreScreen.RelaunchMode
struct UGlimpseScoreScreen_RelaunchMode_Params
{
};

// Function GlimpseGame.GlimpseScoreScreen.LoadLastSave
struct UGlimpseScoreScreen_LoadLastSave_Params
{
};

// Function GlimpseGame.GlimpseDLCMenu.RefreshMenu
struct UGlimpseDLCMenu_RefreshMenu_Params
{
};

// Function GlimpseGame.GlimpseDLCMenu.OnDLCConfirmAttempt
struct UGlimpseDLCMenu_OnDLCConfirmAttempt_Params
{
};

// Function GlimpseGame.GlimpseDLCMenu.OnDLCClicked
struct UGlimpseDLCMenu_OnDLCClicked_Params
{
	TEnumAsByte<EDLCTypeUI>                            DLCType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseDLCMenu.OnActionButtonClicked
struct UGlimpseDLCMenu_OnActionButtonClicked_Params
{
};

// Function GlimpseGame.GlimpseDLCMenu.GetDLCStatus
struct UGlimpseDLCMenu_GetDLCStatus_Params
{
	TEnumAsByte<EDLCTypeUI>                            DLCType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDLCStateUI>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseEffectsDisplay.OnWidgetDisplay
struct UGlimpseEffectsDisplay_OnWidgetDisplay_Params
{
	class AGlimpsePickup*                              Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseMainMenu.GetWelcomeThrobberVisibility
struct UGlimpseMainMenu_GetWelcomeThrobberVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseMainMenu.GetWelcomePromptVisibility
struct UGlimpseMainMenu_GetWelcomePromptVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseMainMenu.GetLogoVisibility
struct UGlimpseMainMenu_GetLogoVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCraftingMenu.ShowCraftingTutorial
struct UGlimpseCraftingMenu_ShowCraftingTutorial_Params
{
	struct FName                                       TutorialKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCraftingMenu.SetCategory
struct UGlimpseCraftingMenu_SetCategory_Params
{
	TEnumAsByte<EPickupCategory>                       Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCraftingMenu.SetCanCraft
struct UGlimpseCraftingMenu_SetCanCraft_Params
{
	bool                                               bCanCraft;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCraftingMenu.OnSetCanCraft
struct UGlimpseCraftingMenu_OnSetCanCraft_Params
{
	bool                                               bCanCraft;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWarning;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       CraftError;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GlimpseGame.GlimpseCraftingMenu.OnItemChanged
struct UGlimpseCraftingMenu_OnItemChanged_Params
{
	struct FText                                       ItemName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                AmountInInventory;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCraftingMenu.OnCraftingSuccess
struct UGlimpseCraftingMenu_OnCraftingSuccess_Params
{
	struct FName                                       RecipeKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCraftingMenu.OnCraftingError
struct UGlimpseCraftingMenu_OnCraftingError_Params
{
};

// Function GlimpseGame.GlimpseCraftingMenu.OnCategoryChanged
struct UGlimpseCraftingMenu_OnCategoryChanged_Params
{
	TEnumAsByte<EPickupCategory>                       Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCraftingMenu.IsCraftingTutorialActive
struct UGlimpseCraftingMenu_IsCraftingTutorialActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCraftingMenu.IsCraftingInProgress
struct UGlimpseCraftingMenu_IsCraftingInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCraftingMenu.HideCraftingTutorial
struct UGlimpseCraftingMenu_HideCraftingTutorial_Params
{
	struct FName                                       TutorialKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCraftingMenu.HasRecipes
struct UGlimpseCraftingMenu_HasRecipes_Params
{
	TEnumAsByte<EPickupCategory>                       Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseCraftingMenu.AltCraftingButtonReleased
struct UGlimpseCraftingMenu_AltCraftingButtonReleased_Params
{
};

// Function GlimpseGame.GlimpseCraftingMenu.AltCraftingButtonPressed
struct UGlimpseCraftingMenu_AltCraftingButtonPressed_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.TakeAllItems
struct UGlimpseInventoryMenu_TakeAllItems_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.SwitchSort
struct UGlimpseInventoryMenu_SwitchSort_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.SwitchItemsViewed
struct UGlimpseInventoryMenu_SwitchItemsViewed_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.StartMoveAllCraftingToContainer
struct UGlimpseInventoryMenu_StartMoveAllCraftingToContainer_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.ShouldShowTakeAllPrompt
struct UGlimpseInventoryMenu_ShouldShowTakeAllPrompt_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.SetIsDescriptionShowing
struct UGlimpseInventoryMenu_SetIsDescriptionShowing_Params
{
	bool                                               Val;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.SetCategory
struct UGlimpseInventoryMenu_SetCategory_Params
{
	TEnumAsByte<ESelectedCategory>                     Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.RefocusOnItems
struct UGlimpseInventoryMenu_RefocusOnItems_Params
{
	float                                              Delay;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.OnTransactionInputChanged
struct UGlimpseInventoryMenu_OnTransactionInputChanged_Params
{
	bool                                               Pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.OnTransactionButtonReleased
struct UGlimpseInventoryMenu_OnTransactionButtonReleased_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.OnTransactionButtonPressed
struct UGlimpseInventoryMenu_OnTransactionButtonPressed_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.OnSort
struct UGlimpseInventoryMenu_OnSort_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.OnShowError
struct UGlimpseInventoryMenu_OnShowError_Params
{
	struct FText                                       ErrorMsg;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GlimpseGame.GlimpseInventoryMenu.OnSetContainerImage
struct UGlimpseInventoryMenu_OnSetContainerImage_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.OnSetCharacterImage
struct UGlimpseInventoryMenu_OnSetCharacterImage_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.OnSelectedItemChanged
struct UGlimpseInventoryMenu_OnSelectedItemChanged_Params
{
	bool                                               transactionPossible;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.OnPlayerWeightChanged
struct UGlimpseInventoryMenu_OnPlayerWeightChanged_Params
{
	float                                              PreviousAmount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewAmount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.OnPlayerItemsShown
struct UGlimpseInventoryMenu_OnPlayerItemsShown_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.OnPlayerCurrencyChanged
struct UGlimpseInventoryMenu_OnPlayerCurrencyChanged_Params
{
	float                                              PreviousAmount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewAmount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.OnPickupEquipped
struct UGlimpseInventoryMenu_OnPickupEquipped_Params
{
	class AGlimpseCharacter*                           CharacterSource;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpsePickup*                              Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.OnNoItemsInPlayerInventory
struct UGlimpseInventoryMenu_OnNoItemsInPlayerInventory_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.OnNoItemsInContainer
struct UGlimpseInventoryMenu_OnNoItemsInContainer_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.OnNoItemsInBarter
struct UGlimpseInventoryMenu_OnNoItemsInBarter_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.OnMenuShown
struct UGlimpseInventoryMenu_OnMenuShown_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.OnItemSold
struct UGlimpseInventoryMenu_OnItemSold_Params
{
	class AGlimpsePickup*                              Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // (Parm)
};

// Function GlimpseGame.GlimpseInventoryMenu.OnItemDescriptionClicked
struct UGlimpseInventoryMenu_OnItemDescriptionClicked_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.OnItemBought
struct UGlimpseInventoryMenu_OnItemBought_Params
{
	class AGlimpsePickup*                              Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Brush;                                                    // (Parm)
};

// Function GlimpseGame.GlimpseInventoryMenu.OnInventoryUpdated
struct UGlimpseInventoryMenu_OnInventoryUpdated_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.OnHideEmptyMessage
struct UGlimpseInventoryMenu_OnHideEmptyMessage_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.OnGetCancelBindingVisibility
struct UGlimpseInventoryMenu_OnGetCancelBindingVisibility_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.OnContainerItemsShown
struct UGlimpseInventoryMenu_OnContainerItemsShown_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.OnCategoryChanged
struct UGlimpseInventoryMenu_OnCategoryChanged_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.OnBarterItemsShown
struct UGlimpseInventoryMenu_OnBarterItemsShown_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.OnBarterCharacterCurrencyChanged
struct UGlimpseInventoryMenu_OnBarterCharacterCurrencyChanged_Params
{
	float                                              PreviousAmount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewAmount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.MoveAllToCurrentContainer
struct UGlimpseInventoryMenu_MoveAllToCurrentContainer_Params
{
	TEnumAsByte<ESelectedCategory>                     Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.LookingInStash
struct UGlimpseInventoryMenu_LookingInStash_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.LookingInContainer
struct UGlimpseInventoryMenu_LookingInContainer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.IsTransactionPossible
struct UGlimpseInventoryMenu_IsTransactionPossible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.IsMoveAllCraftingItemsToConainerEnabled
struct UGlimpseInventoryMenu_IsMoveAllCraftingItemsToConainerEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.IsBuying
struct UGlimpseInventoryMenu_IsBuying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.IsBartering
struct UGlimpseInventoryMenu_IsBartering_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.GetShouldShowWeightWarning
struct UGlimpseInventoryMenu_GetShouldShowWeightWarning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.GetSelectedWidgetParent
struct UGlimpseInventoryMenu_GetSelectedWidgetParent_Params
{
	class UPanelWidget*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.GetSelectedWidget
struct UGlimpseInventoryMenu_GetSelectedWidget_Params
{
	class UInventoryItemWidget*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.GetSelectedPickupBuySellValue
struct UGlimpseInventoryMenu_GetSelectedPickupBuySellValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.GetSelectedPickup
struct UGlimpseInventoryMenu_GetSelectedPickup_Params
{
	class AGlimpsePickup*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.GetSelectedItemFunctionalDescription
struct UGlimpseInventoryMenu_GetSelectedItemFunctionalDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseInventoryMenu.GetSelectedItemDescription
struct UGlimpseInventoryMenu_GetSelectedItemDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseInventoryMenu.GetPlayerWeightStatus
struct UGlimpseInventoryMenu_GetPlayerWeightStatus_Params
{
	TEnumAsByte<EPlayerWeightStatus>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.GetIsStealing
struct UGlimpseInventoryMenu_GetIsStealing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.GetIsSortByWeight
struct UGlimpseInventoryMenu_GetIsSortByWeight_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.GetIsDescriptionShowing
struct UGlimpseInventoryMenu_GetIsDescriptionShowing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.GetInventoryWeightLimit
struct UGlimpseInventoryMenu_GetInventoryWeightLimit_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.GetInventoryWeight
struct UGlimpseInventoryMenu_GetInventoryWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.GetInventoryWarningWeight
struct UGlimpseInventoryMenu_GetInventoryWarningWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.GetCurrencyTotal
struct UGlimpseInventoryMenu_GetCurrencyTotal_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.GetContainerOrBarterHeading
struct UGlimpseInventoryMenu_GetContainerOrBarterHeading_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseInventoryMenu.GetCategory
struct UGlimpseInventoryMenu_GetCategory_Params
{
	TEnumAsByte<ESelectedCategory>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.GetBarterCharacterCurrency
struct UGlimpseInventoryMenu_GetBarterCharacterCurrency_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseInventoryMenu.FlipSort
struct UGlimpseInventoryMenu_FlipSort_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.EndMoveAllCraftingToContainer
struct UGlimpseInventoryMenu_EndMoveAllCraftingToContainer_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.CloseItemDescription
struct UGlimpseInventoryMenu_CloseItemDescription_Params
{
};

// Function GlimpseGame.GlimpseInventoryMenu.BeginUseItem
struct UGlimpseInventoryMenu_BeginUseItem_Params
{
	class AGlimpsePickup*                              PickupUsed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseJournalMenu.SetQuestListCategory
struct UGlimpseJournalMenu_SetQuestListCategory_Params
{
	TEnumAsByte<EQuestListCategory>                    InCategory;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseJournalMenu.OnShowTutorial
struct UGlimpseJournalMenu_OnShowTutorial_Params
{
	struct FName                                       TutorialKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseJournalMenu.OnSetQuestData
struct UGlimpseJournalMenu_OnSetQuestData_Params
{
	struct FText                                       InJournalTitle;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              QuestProgress;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EQuestStatus>                          QuestStatus;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumSkillPoints;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumCurrency;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasLoot;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseJournalMenu.OnSecondaryListEnabled
struct UGlimpseJournalMenu_OnSecondaryListEnabled_Params
{
	bool                                               bInEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseJournalMenu.OnQuestListCategoryChanged
struct UGlimpseJournalMenu_OnQuestListCategoryChanged_Params
{
	TEnumAsByte<EQuestListCategory>                    Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseJournalMenu.OnPrimaryListEnabled
struct UGlimpseJournalMenu_OnPrimaryListEnabled_Params
{
	bool                                               bInEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseJournalMenu.OnObjectivesChanged
struct UGlimpseJournalMenu_OnObjectivesChanged_Params
{
};

// Function GlimpseGame.GlimpseJournalMenu.OnLoreListEnabled
struct UGlimpseJournalMenu_OnLoreListEnabled_Params
{
	bool                                               bInEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseJournalMenu.OnHideTutorial
struct UGlimpseJournalMenu_OnHideTutorial_Params
{
	struct FName                                       TutorialKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.UpdateSkillSpecList
struct UGlimpseSkillTreeMenu_UpdateSkillSpecList_Params
{
	class UGlimpseSkill*                               SkillToSelect;                                            // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.TryHideTutorialTip
struct UGlimpseSkillTreeMenu_TryHideTutorialTip_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.SetEnableBuyInput
struct UGlimpseSkillTreeMenu_SetEnableBuyInput_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ignoreSounds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.OnUpPressed
struct UGlimpseSkillTreeMenu_OnUpPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.OnSwitchCategoryRight
struct UGlimpseSkillTreeMenu_OnSwitchCategoryRight_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.OnSwitchCategoryLeft
struct UGlimpseSkillTreeMenu_OnSwitchCategoryLeft_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.OnSubMenuSwitchRight
struct UGlimpseSkillTreeMenu_OnSubMenuSwitchRight_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.OnSubMenuSwitchLeft
struct UGlimpseSkillTreeMenu_OnSubMenuSwitchLeft_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.OnSkillPointsChanged
struct UGlimpseSkillTreeMenu_OnSkillPointsChanged_Params
{
	int                                                SkillPoints;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.OnSkillMenuShown
struct UGlimpseSkillTreeMenu_OnSkillMenuShown_Params
{
};

// Function GlimpseGame.GlimpseSkillTreeMenu.OnSkillMenuHidden
struct UGlimpseSkillTreeMenu_OnSkillMenuHidden_Params
{
};

// Function GlimpseGame.GlimpseSkillTreeMenu.OnSkillChanged
struct UGlimpseSkillTreeMenu_OnSkillChanged_Params
{
	class UGlimpseSkill*                               Skill;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSkillAvailable;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSkillBought;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.OnSkillBought
struct UGlimpseSkillTreeMenu_OnSkillBought_Params
{
};

// Function GlimpseGame.GlimpseSkillTreeMenu.OnSetEnableBuy
struct UGlimpseSkillTreeMenu_OnSetEnableBuy_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.OnRightPressed
struct UGlimpseSkillTreeMenu_OnRightPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.OnLeftPressed
struct UGlimpseSkillTreeMenu_OnLeftPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.OnInputConfirm
struct UGlimpseSkillTreeMenu_OnInputConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.OnInputCancel
struct UGlimpseSkillTreeMenu_OnInputCancel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.OnDownPressed
struct UGlimpseSkillTreeMenu_OnDownPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.IsSelectedSkillBought
struct UGlimpseSkillTreeMenu_IsSelectedSkillBought_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.IsSelectedSkillAvailable
struct UGlimpseSkillTreeMenu_IsSelectedSkillAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.GetVisibleSkillDescription
struct UGlimpseSkillTreeMenu_GetVisibleSkillDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.GetTutorialStep
struct UGlimpseSkillTreeMenu_GetTutorialStep_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.GetTransitionSkillDescription
struct UGlimpseSkillTreeMenu_GetTransitionSkillDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.GetSkillCost
struct UGlimpseSkillTreeMenu_GetSkillCost_Params
{
	class UGlimpseSkill*                               Skill;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.GetSelectedSkill
struct UGlimpseSkillTreeMenu_GetSelectedSkill_Params
{
	class UGlimpseSkill*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.GetPlayerController
struct UGlimpseSkillTreeMenu_GetPlayerController_Params
{
	class AGlimpsePlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.CanBuySelectedSkill
struct UGlimpseSkillTreeMenu_CanBuySelectedSkill_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSkillTreeMenu.BuySelectedSkill
struct UGlimpseSkillTreeMenu_BuySelectedSkill_Params
{
};

// Function GlimpseGame.GlimpseStatusMenu.ShouldNeeedBeVisible
struct UGlimpseStatusMenu_ShouldNeeedBeVisible_Params
{
	TEnumAsByte<ESurvivalNeed>                         SurvivalNeed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusMenu.SetCurrentEffectList
struct UGlimpseStatusMenu_SetCurrentEffectList_Params
{
	TEnumAsByte<EEffectListType>                       InListType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusMenu.OnThirstChanged
struct UGlimpseStatusMenu_OnThirstChanged_Params
{
	float                                              InCurrentValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTotalValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusMenu.OnSleepChanged
struct UGlimpseStatusMenu_OnSleepChanged_Params
{
	float                                              InCurrentValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTotalValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusMenu.OnMoveSpeedChanged
struct UGlimpseStatusMenu_OnMoveSpeedChanged_Params
{
	float                                              InCurrentValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InMaxValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusMenu.OnHungerChanged
struct UGlimpseStatusMenu_OnHungerChanged_Params
{
	float                                              InCurrentValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTotalValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusMenu.OnHealthChanged
struct UGlimpseStatusMenu_OnHealthChanged_Params
{
	float                                              InCurrentValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTotalValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusMenu.OnEncumberanceChanged
struct UGlimpseStatusMenu_OnEncumberanceChanged_Params
{
	float                                              InCurrentValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTotalValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusMenu.OnEffectListChanged
struct UGlimpseStatusMenu_OnEffectListChanged_Params
{
	TEnumAsByte<EEffectListType>                       InListType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusMenu.OnDrugLevelChanged
struct UGlimpseStatusMenu_OnDrugLevelChanged_Params
{
	float                                              InCurrentValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InTotalValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusMenu.OnCrashLevelChanged
struct UGlimpseStatusMenu_OnCrashLevelChanged_Params
{
	float                                              CrashLevel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseStatusMenu.OnArmorChanged
struct UGlimpseStatusMenu_OnArmorChanged_Params
{
	float                                              InCurrentValue;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSandboxMenu.UpdateListOrder
struct UGlimpseSandboxMenu_UpdateListOrder_Params
{
	TArray<class UNewGameOption*>                      NewOrder;                                                 // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseSandboxMenu.SetSandboxRuleset
struct UGlimpseSandboxMenu_SetSandboxRuleset_Params
{
	int                                                I;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSandboxMenu.SandboxStringTextCommitted
struct UGlimpseSandboxMenu_SandboxStringTextCommitted_Params
{
};

// Function GlimpseGame.GlimpseSandboxMenu.OnSandboxWorldseedChanged
struct UGlimpseSandboxMenu_OnSandboxWorldseedChanged_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           InCommitType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSandboxMenu.OnSandboxStringChanged
struct UGlimpseSandboxMenu_OnSandboxStringChanged_Params
{
	struct FText                                       InText;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           InCommitType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSandboxMenu.OnSandboxSettingsUpdated
struct UGlimpseSandboxMenu_OnSandboxSettingsUpdated_Params
{
};

// Function GlimpseGame.GlimpseSandboxMenu.OnSandboxListSwitched
struct UGlimpseSandboxMenu_OnSandboxListSwitched_Params
{
	int                                                Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseSandboxMenu.MenuActiveOptionChanged
struct UGlimpseSandboxMenu_MenuActiveOptionChanged_Params
{
};

// Function GlimpseGame.GlimpseSandboxMenu.GetAchievementDisabledText
struct UGlimpseSandboxMenu_GetAchievementDisabledText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.TheatreCollectibleListEntry.UpdateSelected
struct UTheatreCollectibleListEntry_UpdateSelected_Params
{
	bool                                               bInSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.TheatreCollectibleListEntry.SetupEntry
struct UTheatreCollectibleListEntry_SetupEntry_Params
{
	struct FText                                       CollectibleName;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       CollectibleDescription;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       CollectibleUnlockTime;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class UTexture2D*                                  CollectibleIcon;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.TheatreCollectibleListEntry.SetSelectedVisuals
struct UTheatreCollectibleListEntry_SetSelectedVisuals_Params
{
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.TheatreCollectibleListEntry.OnEntryClicked
struct UTheatreCollectibleListEntry_OnEntryClicked_Params
{
};

// Function GlimpseGame.GlimpseTheatreMenu.RefreshCollectibleList
struct UGlimpseTheatreMenu_RefreshCollectibleList_Params
{
};

// Function GlimpseGame.GlimpseTheatreMenu.PlayCollectible
struct UGlimpseTheatreMenu_PlayCollectible_Params
{
};

// Function GlimpseGame.GlimpseTheatreMenu.OnStopPressed
struct UGlimpseTheatreMenu_OnStopPressed_Params
{
};

// Function GlimpseGame.GlimpseTheatreMenu.OnPlayPreviousCollectible
struct UGlimpseTheatreMenu_OnPlayPreviousCollectible_Params
{
};

// Function GlimpseGame.GlimpseTheatreMenu.OnPlayPressed
struct UGlimpseTheatreMenu_OnPlayPressed_Params
{
};

// Function GlimpseGame.GlimpseTheatreMenu.OnPlayNextCollectible
struct UGlimpseTheatreMenu_OnPlayNextCollectible_Params
{
};

// Function GlimpseGame.GlimpseTheatreMenu.OnPausePressed
struct UGlimpseTheatreMenu_OnPausePressed_Params
{
};

// Function GlimpseGame.GlimpseTheatreMenu.OnMediaPlayerOpenFailed
struct UGlimpseTheatreMenu_OnMediaPlayerOpenFailed_Params
{
	struct FString                                     FailedUrl;                                                // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseTheatreMenu.OnMediaPlayerOpened
struct UGlimpseTheatreMenu_OnMediaPlayerOpened_Params
{
	struct FString                                     OpenedUrl;                                                // (Parm, ZeroConstructor)
};

// Function GlimpseGame.GlimpseTheatreMenu.OnMediaPlayerEndReached
struct UGlimpseTheatreMenu_OnMediaPlayerEndReached_Params
{
};

// Function GlimpseGame.GlimpseTheatreMenu.OnMediaPlayerClosed
struct UGlimpseTheatreMenu_OnMediaPlayerClosed_Params
{
};

// Function GlimpseGame.GlimpseTheatreMenu.OnItemSelected
struct UGlimpseTheatreMenu_OnItemSelected_Params
{
	int                                                InCollectibleIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTheatreMenu.GetNumberOfCollectibles
struct UGlimpseTheatreMenu_GetNumberOfCollectibles_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTheatreMenu.GetMaxCollectibles
struct UGlimpseTheatreMenu_GetMaxCollectibles_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseTutorialWidget.Confirm
struct UGlimpseTutorialWidget_Confirm_Params
{
};

// Function GlimpseGame.InputBindingDisplay.SetPlayerController
struct UInputBindingDisplay_SetPlayerController_Params
{
	class AGlimpsePlayerController*                    InController;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.HUDNotification.GetViewBindingVisibility
struct UHUDNotification_GetViewBindingVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.HUDNotification.GetTitleText
struct UHUDNotification_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.HUDNotification.GetIconVisibility
struct UHUDNotification_GetIconVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.HUDNotification.GetIcon
struct UHUDNotification_GetIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.HUDNotification.GetCheckmarkVisibility
struct UHUDNotification_GetCheckmarkVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.HUDNotification.GetBodyText
struct UHUDNotification_GetBodyText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.InteractiveListEntry.UpdateInteractionState
struct UInteractiveListEntry_UpdateInteractionState_Params
{
	TEnumAsByte<EInteractionState>                     State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.InteractiveListEntry.SetupWidgets
struct UInteractiveListEntry_SetupWidgets_Params
{
};

// Function GlimpseGame.RecipeListEntry.UpdateUnread
struct URecipeListEntry_UpdateUnread_Params
{
	bool                                               bUnread;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.RecipeListEntry.UpdateItem
struct URecipeListEntry_UpdateItem_Params
{
	class UTexture2D*                                  ItemIcon;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ItemName;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               CanCraft;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.InventoryItemDetails.SetUseProgress
struct UInventoryItemDetails_SetUseProgress_Params
{
	float                                              progress;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.InventoryItemDetails.RefreshWidget
struct UInventoryItemDetails_RefreshWidget_Params
{
	class AGlimpsePickup*                              Pickup;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.InventoryItemDetails.OnShow
struct UInventoryItemDetails_OnShow_Params
{
};

// Function GlimpseGame.InventoryItemWidget.SetUseProgress
struct UInventoryItemWidget_SetUseProgress_Params
{
	float                                              progress;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanCancelProgress;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.InventoryItemWidget.RefreshWidget
struct UInventoryItemWidget_RefreshWidget_Params
{
	class AGlimpsePickup*                              Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.InventoryItemWidget.ItemTaken
struct UInventoryItemWidget_ItemTaken_Params
{
};

// Function GlimpseGame.InventoryItemWidget.ItemSold
struct UInventoryItemWidget_ItemSold_Params
{
};

// Function GlimpseGame.InventoryItemWidget.ItemPlaced
struct UInventoryItemWidget_ItemPlaced_Params
{
};

// Function GlimpseGame.InventoryItemWidget.ItemDropped
struct UInventoryItemWidget_ItemDropped_Params
{
};

// Function GlimpseGame.InventoryItemWidget.ItemBought
struct UInventoryItemWidget_ItemBought_Params
{
};

// Function GlimpseGame.ItemEffectEntry.UpdateDisplay
struct UItemEffectEntry_UpdateDisplay_Params
{
	TEnumAsByte<EStatusEffectSelection>                EffectChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 StatusIcon;                                               // (Parm)
	struct FText                                       EffectDesc;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GlimpseGame.ItemSpecList.HasDetailsToDisplay
struct UItemSpecList_HasDetailsToDisplay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.JoyHUDIndicator.OnSetToxicityFill
struct UJoyHUDIndicator_OnSetToxicityFill_Params
{
	float                                              progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.JoyHUDIndicator.OnSetJoyFill
struct UJoyHUDIndicator_OnSetJoyFill_Params
{
	float                                              progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.JoyHUDIndicator.OnSetIndicatorMode
struct UJoyHUDIndicator_OnSetIndicatorMode_Params
{
	TEnumAsByte<EHUDJoyIndicatorState>                 Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.MapLegend.UpdateMapName
struct UMapLegend_UpdateMapName_Params
{
	struct FText                                       InMapName;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GlimpseGame.MapLegend.OnLegendActive
struct UMapLegend_OnLegendActive_Params
{
	bool                                               bInActive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.MapLegend.LegendHoverChanged
struct UMapLegend_LegendHoverChanged_Params
{
	bool                                               bHovered;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.MapLegend.LegendClicked
struct UMapLegend_LegendClicked_Params
{
};

// Function GlimpseGame.MapLegend.GetControllerPromptVisibility
struct UMapLegend_GetControllerPromptVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.MapLegendEntry.UpdateSelected
struct UMapLegendEntry_UpdateSelected_Params
{
	bool                                               bInSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.MapLegendEntry.UpdateEntryEnabled
struct UMapLegendEntry_UpdateEntryEnabled_Params
{
	bool                                               bInEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.MapLegendEntry.SetupEntry
struct UMapLegendEntry_SetupEntry_Params
{
	struct FText                                       EntryText;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UTexture2D*                                  EntryIcon;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  SecondaryEntryIcon;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EntryEnabled;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.MapLegendEntry.OnEntryClicked
struct UMapLegendEntry_OnEntryClicked_Params
{
};

// Function GlimpseGame.MapLegendEntry.OnCultureChanged
struct UMapLegendEntry_OnCultureChanged_Params
{
	struct FText                                       EntryText;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GlimpseGame.NewGameOption.OnSetActiveOption
struct UNewGameOption_OnSetActiveOption_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.NewGameOption.OnSelectInput
struct UNewGameOption_OnSelectInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.NewGameOption.OnRightInput
struct UNewGameOption_OnRightInput_Params
{
};

// Function GlimpseGame.NewGameOption.OnLeftInput
struct UNewGameOption_OnLeftInput_Params
{
};

// Function GlimpseGame.NewGameOption.IsActiveOption
struct UNewGameOption_IsActiveOption_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.NewGameOptionBool.SetValue
struct UNewGameOptionBool_SetValue_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.NewGameOptionBool.OnValueChanged
struct UNewGameOptionBool_OnValueChanged_Params
{
};

// Function GlimpseGame.NewGameOptionBool.OnSelectInput
struct UNewGameOptionBool_OnSelectInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.NewGameOptionBool.OnRightInput
struct UNewGameOptionBool_OnRightInput_Params
{
};

// Function GlimpseGame.NewGameOptionBool.OnLeftInput
struct UNewGameOptionBool_OnLeftInput_Params
{
};

// Function GlimpseGame.NewGameOptionButton.OnSelectInput
struct UNewGameOptionButton_OnSelectInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.NewGameOptionEnum.SetSelectedValue
struct UNewGameOptionEnum_SetSelectedValue_Params
{
	unsigned char                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.NewGameOptionEnum.SelectOption
struct UNewGameOptionEnum_SelectOption_Params
{
	int                                                OptionIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.NewGameOptionEnum.SelectNextOption
struct UNewGameOptionEnum_SelectNextOption_Params
{
	int                                                SelectDirection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.NewGameOptionEnum.OnSelectInput
struct UNewGameOptionEnum_OnSelectInput_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.NewGameOptionEnum.OnRightInput
struct UNewGameOptionEnum_OnRightInput_Params
{
};

// Function GlimpseGame.NewGameOptionEnum.OnLeftInput
struct UNewGameOptionEnum_OnLeftInput_Params
{
};

// Function GlimpseGame.NewGameOptionEnum.Init
struct UNewGameOptionEnum_Init_Params
{
};

// Function GlimpseGame.NewGameOptionEnum.GetSelectedValue
struct UNewGameOptionEnum_GetSelectedValue_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.NewGameOptionEnumEntry.OnUpdateWidth
struct UNewGameOptionEnumEntry_OnUpdateWidth_Params
{
	float                                              Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.NewGameOptionEnumEntry.OnUpdateOptionText
struct UNewGameOptionEnumEntry_OnUpdateOptionText_Params
{
	struct FText                                       OptionText;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GlimpseGame.NotificationsArea.GetSecondaryNotificationVisibility
struct UNotificationsArea_GetSecondaryNotificationVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.NotificationsArea.GetPlayerController
struct UNotificationsArea_GetPlayerController_Params
{
	class AGlimpsePlayerController*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.NotificationsArea.GetNormalNotificationVisibility
struct UNotificationsArea_GetNormalNotificationVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.NPCIndicator.OnSetSuspicionProgress
struct UNPCIndicator_OnSetSuspicionProgress_Params
{
	float                                              progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.NPCIndicator.OnSetNPCOffscreen
struct UNPCIndicator_OnSetNPCOffscreen_Params
{
	bool                                               offscreen;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.NPCIndicator.OnSetNPCHealthAmount
struct UNPCIndicator_OnSetNPCHealthAmount_Params
{
	float                                              normalisedHealth;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              actualHealth;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InTier;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.NPCIndicator.OnSetNPCDistance
struct UNPCIndicator_OnSetNPCDistance_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.NPCIndicator.OnSetIndicatorMode
struct UNPCIndicator_OnSetIndicatorMode_Params
{
	TEnumAsByte<ENPCIndicatorState>                    Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.NPCIndicator.OnSetBleedingVisibility
struct UNPCIndicator_OnSetBleedingVisibility_Params
{
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.NPCIndicator.OnSetAgressionProgress
struct UNPCIndicator_OnSetAgressionProgress_Params
{
	float                                              progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.ObjectiveListEntry.UpdateObjectiveStatus
struct UObjectiveListEntry_UpdateObjectiveStatus_Params
{
	TEnumAsByte<EObjectiveStatus>                      InObjectiveStatus;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.ObjectiveListEntry.SetupEntry
struct UObjectiveListEntry_SetupEntry_Params
{
	struct FText                                       InObjectiveText;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<EObjectiveStatus>                      InObjectiveStatus;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuestListEntry.UpdateUnread
struct UQuestListEntry_UpdateUnread_Params
{
	bool                                               bInUnread;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuestListEntry.UpdateTracked
struct UQuestListEntry_UpdateTracked_Params
{
	bool                                               bInTracked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuestListEntry.UpdateSelected
struct UQuestListEntry_UpdateSelected_Params
{
	bool                                               bInSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuestListEntry.SetupEntry
struct UQuestListEntry_SetupEntry_Params
{
	struct FText                                       InEntryText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bInSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInTracked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInUnread;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EQuestStatus>                          InStatus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuestListEntry.OnEntryDoubleClicked
struct UQuestListEntry_OnEntryDoubleClicked_Params
{
};

// Function GlimpseGame.QuestListEntry.OnEntryClicked
struct UQuestListEntry_OnEntryClicked_Params
{
};

// Function GlimpseGame.QuestListLocationSeparator.OnSetup
struct UQuestListLocationSeparator_OnSetup_Params
{
	struct FText                                       LocationName;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GlimpseGame.QuickLoot.RefreshWidget
struct UQuickLoot_RefreshWidget_Params
{
	class AGlimpsePickup*                              Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuickSlotWidget.StopMoving
struct UQuickSlotWidget_StopMoving_Params
{
};

// Function GlimpseGame.QuickSlotWidget.StartMoving
struct UQuickSlotWidget_StartMoving_Params
{
};

// Function GlimpseGame.QuickSlotWidget.SetQuickSlotUniqueItemAllowed
struct UQuickSlotWidget_SetQuickSlotUniqueItemAllowed_Params
{
	TEnumAsByte<EPickupQuickslotGroup>                 QuickslotGroup;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PickupClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuickSlotWidget.SetListOrder
struct UQuickSlotWidget_SetListOrder_Params
{
	TArray<int>                                        NewListOrder;                                             // (Parm, ZeroConstructor)
};

// Function GlimpseGame.QuickSlotWidget.OnSwitchActiveSlot
struct UQuickSlotWidget_OnSwitchActiveSlot_Params
{
};

// Function GlimpseGame.QuickSlotWidget.OnShow
struct UQuickSlotWidget_OnShow_Params
{
};

// Function GlimpseGame.QuickSlotWidget.OnRefresh
struct UQuickSlotWidget_OnRefresh_Params
{
};

// Function GlimpseGame.QuickSlotWidget.OnQuickslotUseStart
struct UQuickSlotWidget_OnQuickslotUseStart_Params
{
};

// Function GlimpseGame.QuickSlotWidget.OnQuickslotCycled
struct UQuickSlotWidget_OnQuickslotCycled_Params
{
	int                                                I;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuickSlotWidget.OnHide
struct UQuickSlotWidget_OnHide_Params
{
};

// Function GlimpseGame.QuickSlotWidget.IsScrolling
struct UQuickSlotWidget_IsScrolling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.QuickSlotWidget.GetPickupInSlot
struct UQuickSlotWidget_GetPickupInSlot_Params
{
	TEnumAsByte<EQuickSlotPosition>                    Position;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpsePickup*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.QuickSlotWidget.GetPickupForSlot
struct UQuickSlotWidget_GetPickupForSlot_Params
{
	int                                                slotIndx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpsePickup*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.QuickSlotWidget.GetMouseAndKeyboardVisibility
struct UQuickSlotWidget_GetMouseAndKeyboardVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.QuickSlotWidget.GetControllerVisibility
struct UQuickSlotWidget_GetControllerVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.QuickSlotWidget.GetActiveSlot
struct UQuickSlotWidget_GetActiveSlot_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.QuickSlotWidget.CanUseActiveSlot
struct UQuickSlotWidget_CanUseActiveSlot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.RageMeter.UpdateRageMeters
struct URageMeter_UpdateRageMeters_Params
{
	float                                              RageLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.SaveSlotWidget.SetHighlighted
struct USaveSlotWidget_SetHighlighted_Params
{
	bool                                               IsHighlighted;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.SaveSlotWidget.RefreshWidget
struct USaveSlotWidget_RefreshWidget_Params
{
};

// Function GlimpseGame.SaveSlotWidget.GetMouseKeyboardPromptVisibility
struct USaveSlotWidget_GetMouseKeyboardPromptVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SaveSlotWidget.GetControllerPromptVisibility
struct USaveSlotWidget_GetControllerPromptVisibility_Params
{
	TEnumAsByte<ESlateVisibility>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SkillButton.OnSetupSkillDisplay
struct USkillButton_OnSetupSkillDisplay_Params
{
	struct FSlateBrush                                 SkillBrush;                                               // (Parm)
	bool                                               InSkillAvailable;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InSkillBought;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.SkillButton.OnSelectionChanged
struct USkillButton_OnSelectionChanged_Params
{
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.SkillButton.OnButtonPressed
struct USkillButton_OnButtonPressed_Params
{
};

// Function GlimpseGame.SkillConnection.OnUpdateDisplay
struct USkillConnection_OnUpdateDisplay_Params
{
	bool                                               ConnectedSkillAvailable;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ConnectedSkillBought;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.SkillInfoSpecEntry.DisplayInfo
struct USkillInfoSpecEntry_DisplayInfo_Params
{
	struct FText                                       InfoText;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GlimpseGame.StaminaBarMarkerWidget.OnDisplay
struct UStaminaBarMarkerWidget_OnDisplay_Params
{
};

// Function GlimpseGame.StaminaBarWidget.OnDebuffChanged
struct UStaminaBarWidget_OnDebuffChanged_Params
{
	bool                                               bInDebuffed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.StaminaBarWidget.OnBuffChanged
struct UStaminaBarWidget_OnBuffChanged_Params
{
	bool                                               bInBuffed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.StaminaBarWidget.GetPenaltyPercent
struct UStaminaBarWidget_GetPenaltyPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StaminaBarWidget.GetDefferedStaminaPercent
struct UStaminaBarWidget_GetDefferedStaminaPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StaminaBarWidget.GetCurrentStaminaPercent
struct UStaminaBarWidget_GetCurrentStaminaPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StatusEffectDetailsBase.SetSelected
struct UStatusEffectDetailsBase_SetSelected_Params
{
	bool                                               bInSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.StatusEffectDetailsBase.OnStatusChanged
struct UStatusEffectDetailsBase_OnStatusChanged_Params
{
	TEnumAsByte<EStatusEffectType>                     InStatusType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.StatusEffectDetailsBase.OnNameChanged
struct UStatusEffectDetailsBase_OnNameChanged_Params
{
	struct FText                                       InEffectName;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GlimpseGame.StatusEffectDetailsBase.OnIconChanged
struct UStatusEffectDetailsBase_OnIconChanged_Params
{
	struct FSlateBrush                                 InIcon;                                                   // (Parm)
	bool                                               bInHasIcon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.StatusEffectDetailsBase.OnDescriptionChanged
struct UStatusEffectDetailsBase_OnDescriptionChanged_Params
{
	struct FText                                       InEffectDescription;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GlimpseGame.StatusEffectDetailsBase.NotifyPressed
struct UStatusEffectDetailsBase_NotifyPressed_Params
{
};

// Function GlimpseGame.StatusEffectDetailsBase.GetNameText
struct UStatusEffectDetailsBase_GetNameText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.StatusEffectDetailsBase.GetIconVisibility
struct UStatusEffectDetailsBase_GetIconVisibility_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StatusEffectDetailsBase.GetIcon
struct UStatusEffectDetailsBase_GetIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.ToggleableButton.SetActive
struct UToggleableButton_SetActive_Params
{
	bool                                               bInActive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.ToggleableButton.IsActive
struct UToggleableButton_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.GlimpseWorldBuilder.OnManTrapOverlap
struct AGlimpseWorldBuilder_OnManTrapOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GlimpseGame.IconBoxSlot.SetVerticalAlignment
struct UIconBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.IconBoxSlot.SetPadding
struct UIconBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm)
};

// Function GlimpseGame.IconBoxSlot.SetHorizontalAlignment
struct UIconBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.IconBox.SetVerticalAlignment
struct UIconBox_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.IconBox.SetPadding
struct UIconBox_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm)
};

// Function GlimpseGame.IconBox.SetHorizontalAlignment
struct UIconBox_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.ConversationComponent.OnSuspicionStateChange
struct UConversationComponent_OnSuspicionStateChange_Params
{
	TEnumAsByte<EAISuspicionState>                     OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAISuspicionState>                     NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.ConversationComponent.OnConversationFinished
struct UConversationComponent_OnConversationFinished_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.VendorInteractionComponent.ResetVendor
struct UVendorInteractionComponent_ResetVendor_Params
{
};

// Function GlimpseGame.VendorInteractionComponent.OnCanBarterInteract
struct UVendorInteractionComponent_OnCanBarterInteract_Params
{
	class APawn*                                       InteractSource;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionResult>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.VendorInteractionComponent.OnBarterCompleteInteraction
struct UVendorInteractionComponent_OnBarterCompleteInteraction_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.InventoryDropSlot.UpdateFocusHighlight
struct UInventoryDropSlot_UpdateFocusHighlight_Params
{
	bool                                               Highlighted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.InventoryDropSlot.SetPickup
struct UInventoryDropSlot_SetPickup_Params
{
	class AGlimpsePickup*                              Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.InventoryDropSlot.SetDisplayImage
struct UInventoryDropSlot_SetDisplayImage_Params
{
	class UTexture2D*                                  newTexture;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.InventoryDropSlot.OnSlotUnMatchSelected
struct UInventoryDropSlot_OnSlotUnMatchSelected_Params
{
};

// Function GlimpseGame.InventoryDropSlot.OnSlotMatchesSelected
struct UInventoryDropSlot_OnSlotMatchesSelected_Params
{
};

// Function GlimpseGame.InventoryDropSlot.OnNonSlottableSelected
struct UInventoryDropSlot_OnNonSlottableSelected_Params
{
};

// Function GlimpseGame.InventoryDropSlot.OnMatchingDragBegin
struct UInventoryDropSlot_OnMatchingDragBegin_Params
{
};

// Function GlimpseGame.InventoryDropSlot.OnDragEnd
struct UInventoryDropSlot_OnDragEnd_Params
{
};

// Function GlimpseGame.InventoryGrid.SetRows
struct UInventoryGrid_SetRows_Params
{
	int                                                InRows;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.InventoryGrid.SetLockedRows
struct UInventoryGrid_SetLockedRows_Params
{
	int                                                InLockedRows;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.InventoryGrid.SetLockedColumns
struct UInventoryGrid_SetLockedColumns_Params
{
	int                                                InLockedColumns;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.InventoryGrid.SetColumns
struct UInventoryGrid_SetColumns_Params
{
	int                                                InColumns;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.NoiseEmitterComponent.MakeNoise
struct UNoiseEmitterComponent_MakeNoise_Params
{
	class AActor*                                      NoiseMaker;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NoiseLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EGlimpseNoiseEvent>                    NoiseType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseAnnoyingEvent>                 AnnoyingEvent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.ParticleWithDecalNotifyState.OnParticleCollided
struct UParticleWithDecalNotifyState_OnParticleCollided_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParticleTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.PassiveBarkComponent.SetTimeBetweenBarks
struct UPassiveBarkComponent_SetTimeBetweenBarks_Params
{
	float                                              TimeBetweenBarks;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RandomVariance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.PassiveBarkComponent.SetInEncounter
struct UPassiveBarkComponent_SetInEncounter_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.PassiveBarkComponent.RemovePassiveBark
struct UPassiveBarkComponent_RemovePassiveBark_Params
{
	struct FName                                       BarkKey;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.PassiveBarkComponent.ClearBarks
struct UPassiveBarkComponent_ClearBarks_Params
{
};

// Function GlimpseGame.PassiveBarkComponent.AddNewPassiveBark
struct UPassiveBarkComponent_AddNewPassiveBark_Params
{
	struct FName                                       BarkKey;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               BarkEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BarkWeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanPlayDuringEncounters;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SaveBark;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.SleepDurationPresenter.OnGetRequiredActionHours
struct USleepDurationPresenter_OnGetRequiredActionHours_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SleepDurationPresenter.CanDoActionWhileEncumbered
struct USleepDurationPresenter_CanDoActionWhileEncumbered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SleepDurationPresenter.AllowActionIfZeroDuration
struct USleepDurationPresenter_AllowActionIfZeroDuration_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.TravelDurationPresenter.OnGetRequiredActionHours
struct UTravelDurationPresenter_OnGetRequiredActionHours_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.WaitDurationPresenter.OnGetRequiredActionHours
struct UWaitDurationPresenter_OnGetRequiredActionHours_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.WaitDurationPresenter.CanDoActionWhileEncumbered
struct UWaitDurationPresenter_CanDoActionWhileEncumbered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.WaitDurationPresenter.AllowActionIfZeroDuration
struct UWaitDurationPresenter_AllowActionIfZeroDuration_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.FullscreenMoviePresenter.OnMediaPlayerOpenFailed
struct UFullscreenMoviePresenter_OnMediaPlayerOpenFailed_Params
{
	struct FString                                     FailedUrl;                                                // (Parm, ZeroConstructor)
};

// Function GlimpseGame.FullscreenMoviePresenter.OnMediaPlayerOpened
struct UFullscreenMoviePresenter_OnMediaPlayerOpened_Params
{
	struct FString                                     OpenedUrl;                                                // (Parm, ZeroConstructor)
};

// Function GlimpseGame.FullscreenMoviePresenter.OnMediaPlayerEndReached
struct UFullscreenMoviePresenter_OnMediaPlayerEndReached_Params
{
};

// Function GlimpseGame.FullscreenMoviePresenter.OnMediaPlayerClosed
struct UFullscreenMoviePresenter_OnMediaPlayerClosed_Params
{
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetThirstPercentText
struct USurvivalComponentPresenter_OnGetThirstPercentText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetThirstPercent
struct USurvivalComponentPresenter_OnGetThirstPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetStaminaPercent
struct USurvivalComponentPresenter_OnGetStaminaPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetStaminaPenaltyPercent
struct USurvivalComponentPresenter_OnGetStaminaPenaltyPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetStaminaPassiveMax
struct USurvivalComponentPresenter_OnGetStaminaPassiveMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetStaminaPassiveFraction
struct USurvivalComponentPresenter_OnGetStaminaPassiveFraction_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetStaminaMax
struct USurvivalComponentPresenter_OnGetStaminaMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetStaminaDeferredPercent
struct USurvivalComponentPresenter_OnGetStaminaDeferredPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetStaminaDeferredCost
struct USurvivalComponentPresenter_OnGetStaminaDeferredCost_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetStaminaBonusPercent
struct USurvivalComponentPresenter_OnGetStaminaBonusPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetStamina
struct USurvivalComponentPresenter_OnGetStamina_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetSleepPercentText
struct USurvivalComponentPresenter_OnGetSleepPercentText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetSleepPercent
struct USurvivalComponentPresenter_OnGetSleepPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetHungerPercentText
struct USurvivalComponentPresenter_OnGetHungerPercentText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetHungerPercent
struct USurvivalComponentPresenter_OnGetHungerPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetHPValue
struct USurvivalComponentPresenter_OnGetHPValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetHPPercentText
struct USurvivalComponentPresenter_OnGetHPPercentText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetHPPercent
struct USurvivalComponentPresenter_OnGetHPPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetHPPenaltyPercent
struct USurvivalComponentPresenter_OnGetHPPenaltyPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetHPPassiveFraction
struct USurvivalComponentPresenter_OnGetHPPassiveFraction_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetDrugLevelPercentText
struct USurvivalComponentPresenter_OnGetDrugLevelPercentText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetDrugLevelPercent
struct USurvivalComponentPresenter_OnGetDrugLevelPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetCrashMeterPercentText
struct USurvivalComponentPresenter_OnGetCrashMeterPercentText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.SurvivalComponentPresenter.OnGetCrashMeterPercent
struct USurvivalComponentPresenter_OnGetCrashMeterPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponentPresenter.GetTimeInStateRemaining
struct USurvivalComponentPresenter_GetTimeInStateRemaining_Params
{
	TEnumAsByte<ESurvivalNeed>                         InSurvivalNeed;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GlimpseGame.SurvivalComponentPresenter.GetSecondsInStateRemaining
struct USurvivalComponentPresenter_GetSecondsInStateRemaining_Params
{
	TEnumAsByte<ESurvivalNeed>                         InSurvivalNeed;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.SurvivalComponentPresenter.GetPresentedComponent
struct USurvivalComponentPresenter_GetPresentedComponent_Params
{
	class UPlayerSurvivalComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponentPresenter.GetMinutesInStateRemaining
struct USurvivalComponentPresenter_GetMinutesInStateRemaining_Params
{
	TEnumAsByte<ESurvivalNeed>                         InSurvivalNeed;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxMinutes;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GlimpseGame.SurvivalComponentPresenter.Detach
struct USurvivalComponentPresenter_Detach_Params
{
};

// Function GlimpseGame.SurvivalComponentPresenter.Attach
struct USurvivalComponentPresenter_Attach_Params
{
	class UPlayerSurvivalComponent*                    InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.PuppetBrain.PuppetTurnToLocation
struct UPuppetBrain_PuppetTurnToLocation_Params
{
	class AGlimpseAICharacter*                         Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.PuppetBrain.PuppetTurnToActor
struct UPuppetBrain_PuppetTurnToActor_Params
{
	class AGlimpseAICharacter*                         Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.PuppetBrain.PuppetRelease
struct UPuppetBrain_PuppetRelease_Params
{
	class AGlimpseAICharacter*                         Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.PuppetBrain.PuppetPOI
struct UPuppetBrain_PuppetPOI_Params
{
	class AGlimpseAICharacter*                         Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorWithPOI;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWalkPace>                             MovementSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.PuppetBrain.PuppetMoveToLocation
struct UPuppetBrain_PuppetMoveToLocation_Params
{
	class AGlimpseAICharacter*                         Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWalkPace>                             MovementSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.PuppetBrain.PuppetMoveToActor
struct UPuppetBrain_PuppetMoveToActor_Params
{
	class AGlimpseAICharacter*                         Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWalkPace>                             MovementSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.PuppetBrain.PuppetIdle
struct UPuppetBrain_PuppetIdle_Params
{
	class AGlimpseAICharacter*                         Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.PuppetBrain.PuppetFlee
struct UPuppetBrain_PuppetFlee_Params
{
	class AGlimpseAICharacter*                         Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      FleeToActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.PuppetBrain.PuppetAttack
struct UPuppetBrain_PuppetAttack_Params
{
	class AGlimpseAICharacter*                         Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWalkPace>                             MovementSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.WaitOnPredicate
struct UStateQuest_WaitOnPredicate_Params
{
	class UQuestPredicate*                             Predicate;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function GlimpseGame.StateQuest.SetStateObjectiveStatus
struct UStateQuest_SetStateObjectiveStatus_Params
{
	TEnumAsByte<EObjectiveStatus>                      InStatus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceActivate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.RefreshCurrentState
struct UStateQuest_RefreshCurrentState_Params
{
};

// Function GlimpseGame.StateQuest.PredicateTimeOfDay
struct UStateQuest_PredicateTimeOfDay_Params
{
	bool                                               bMorning;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAfternoon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEvening;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateQuestVariableBound
struct UStateQuest_PredicateQuestVariableBound_Params
{
	struct FName                                       Variable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateQuestContextBound
struct UStateQuest_PredicateQuestContextBound_Params
{
	struct FName                                       BindContext;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateQuestBound
struct UStateQuest_PredicateQuestBound_Params
{
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicatePlayerWearingOutfit
struct UStateQuest_PredicatePlayerWearingOutfit_Params
{
	class UClass*                                      OutfitType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicatePlayerUsedPickup
struct UStateQuest_PredicatePlayerUsedPickup_Params
{
	class UClass*                                      PickupType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicatePlayerSeen
struct UStateQuest_PredicatePlayerSeen_Params
{
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicatePlayerQuestStatus
struct UStateQuest_PredicatePlayerQuestStatus_Params
{
	class UClass*                                      QuestType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUnavailable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAvailable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bComplete;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFailed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicatePlayerQuestObjectiveStatus
struct UStateQuest_PredicatePlayerQuestObjectiveStatus_Params
{
	class UClass*                                      QuestType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveKey;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUnavailable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bComplete;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFailed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicatePlayerOpenedLootable
struct UStateQuest_PredicatePlayerOpenedLootable_Params
{
	class AGlimpseLootable*                            Lootable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicatePlayerOnJoy
struct UStateQuest_PredicatePlayerOnJoy_Params
{
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicatePlayerLoreUnlocked
struct UStateQuest_PredicatePlayerLoreUnlocked_Params
{
	struct FName                                       LoreKey;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicatePlayerInCombat
struct UStateQuest_PredicatePlayerInCombat_Params
{
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicatePlayerHasPickup
struct UStateQuest_PredicatePlayerHasPickup_Params
{
	class UClass*                                      PickupType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicatePlayerHasManual
struct UStateQuest_PredicatePlayerHasManual_Params
{
	class UClass*                                      ManualType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicatePlayerCarryingCorpse
struct UStateQuest_PredicatePlayerCarryingCorpse_Params
{
	class AGlimpseCharacter*                           CarriedCorpse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicatePickupPickedUp
struct UStateQuest_PredicatePickupPickedUp_Params
{
	class AGlimpsePickup*                              Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateOr
struct UStateQuest_PredicateOr_Params
{
	class UQuestPredicate*                             InA;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             InB;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateNot
struct UStateQuest_PredicateNot_Params
{
	class UQuestPredicate*                             In;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateNextTimeOfDay
struct UStateQuest_PredicateNextTimeOfDay_Params
{
	struct FTimespan                                   RefTime;                                                  // (Parm, ZeroConstructor)
	bool                                               bMorning;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAfternoon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEvening;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateMatineeFinished
struct UStateQuest_PredicateMatineeFinished_Params
{
	class AMatineeActor*                               Matinee;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateMatineeEvent
struct UStateQuest_PredicateMatineeEvent_Params
{
	class AMatineeActor*                               Matinee;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateGameTimeReached
struct UStateQuest_PredicateGameTimeReached_Params
{
	struct FTimespan                                   time;                                                     // (Parm, ZeroConstructor)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateGameTimeElapsed
struct UStateQuest_PredicateGameTimeElapsed_Params
{
	struct FTimespan                                   RefTime;                                                  // (Parm, ZeroConstructor)
	float                                              Elapsed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateCounter
struct UStateQuest_PredicateCounter_Params
{
	class UQuestPredicate*                             In;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CounterVariable;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                MinValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSignalOnIncrement;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateComponentInteraction
struct UStateQuest_PredicateComponentInteraction_Params
{
	class UInteractionComponent*                       Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EInteractionEvent>                     Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateCharacterSuspicionTargetChange
struct UStateQuest_PredicateCharacterSuspicionTargetChange_Params
{
	class AGlimpseAICharacter*                         Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateCharacterSuspicion
struct UStateQuest_PredicateCharacterSuspicion_Params
{
	class AGlimpseAICharacter*                         Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAISuspicionState>                     SuspicionState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateCharacterStatusEffect
struct UStateQuest_PredicateCharacterStatusEffect_Params
{
	class AGlimpseCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StatusEffectType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateCharacterStatRatio
struct UStateQuest_PredicateCharacterStatRatio_Params
{
	class AGlimpseCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESurvivalNeed>                         Stat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Threshold;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStatThreshold>                        ThresholdType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWatchForRegen;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateCharacterStat
struct UStateQuest_PredicateCharacterStat_Params
{
	class AGlimpseCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESurvivalNeed>                         Stat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Threshold;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStatThreshold>                        ThresholdType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWatchForRegen;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateCharacterGreet
struct UStateQuest_PredicateCharacterGreet_Params
{
	class AGlimpseAICharacter*                         Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysSucceed;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateCharacterGift
struct UStateQuest_PredicateCharacterGift_Params
{
	class AGlimpseAICharacter*                         Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GiftType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateCharacterDeath
struct UStateQuest_PredicateCharacterDeath_Params
{
	class AGlimpseCharacter*                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateCharacterConversationDone
struct UStateQuest_PredicateCharacterConversationDone_Params
{
	class AGlimpseAICharacter*                         Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysSucceed;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseConversationAsset*                   ConversationAsset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateAnd
struct UStateQuest_PredicateAnd_Params
{
	class UQuestPredicate*                             InA;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             InB;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateActorTakeDamage
struct UStateQuest_PredicateActorTakeDamage_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinimumDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.PredicateActorOverlap
struct UStateQuest_PredicateActorOverlap_Params
{
	class AActor*                                      OverlapActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuestPredicate*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.GetStateObjectiveStatus
struct UStateQuest_GetStateObjectiveStatus_Params
{
	TEnumAsByte<EObjectiveStatus>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.FailStateObjective
struct UStateQuest_FailStateObjective_Params
{
	bool                                               bEvenIfCompleted;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.DoesStateHaveBlueprintNode
struct UStateQuest_DoesStateHaveBlueprintNode_Params
{
	struct FName                                       State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StateQuest.DeactivateStateObjective
struct UStateQuest_DeactivateStateObjective_Params
{
};

// Function GlimpseGame.StateQuest.CompleteStateObjective
struct UStateQuest_CompleteStateObjective_Params
{
	bool                                               bEvenIfFailed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuestPredicate_ActorOverlap.OnActorEndOverlap
struct UQuestPredicate_ActorOverlap_OnActorEndOverlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InOtherActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuestPredicate_ActorOverlap.OnActorBeginOverlap
struct UQuestPredicate_ActorOverlap_OnActorBeginOverlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InOtherActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuestPredicate_ActorTakeDamage.OnActorTakeAnyDamage
struct UQuestPredicate_ActorTakeDamage_OnActorTakeAnyDamage_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 InDamageType;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InDamageInstigator;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InDamageCauser;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuestPredicate_AISuspicion.OnSuspicionStateChange
struct UQuestPredicate_AISuspicion_OnSuspicionStateChange_Params
{
	TEnumAsByte<EAISuspicionState>                     OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAISuspicionState>                     NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuestPredicate_AISuspicionTarget.OnDetectionTargetChange
struct UQuestPredicate_AISuspicionTarget_OnDetectionTargetChange_Params
{
	class AActor*                                      OldTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuestPredicate_CharacterCarryingCorpse.OnCorpseCarryStop
struct UQuestPredicate_CharacterCarryingCorpse_OnCorpseCarryStop_Params
{
	class AGlimpseCharacter*                           Corpse;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuestPredicate_CharacterCarryingCorpse.OnCorpseCarryStart
struct UQuestPredicate_CharacterCarryingCorpse_OnCorpseCarryStart_Params
{
	class AGlimpseCharacter*                           Corpse;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuestPredicate_CharacterConversationDone.OnCharacterConversationDone
struct UQuestPredicate_CharacterConversationDone_OnCharacterConversationDone_Params
{
	class AGlimpseCharacter*                           Talker;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpseCharacter*                           Talkee;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseConversationAsset*                   Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuestPredicate_CharacterDeath.OnCharacterDeath
struct UQuestPredicate_CharacterDeath_OnCharacterDeath_Params
{
	class AGlimpseCharacter*                           CharacterSource;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 LastDamageInstigator;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      LastDamageCauser;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuestPredicate_CharacterGift.OnCharacterGifted
struct UQuestPredicate_CharacterGift_OnCharacterGifted_Params
{
	class UClass*                                      GiftClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuestPredicate_CharacterGreet.OnCharacterGreeted
struct UQuestPredicate_CharacterGreet_OnCharacterGreeted_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuestPredicate_CharacterStat.OnSurvivalStatChanged
struct UQuestPredicate_CharacterStat_OnSurvivalStatChanged_Params
{
	TEnumAsByte<ESurvivalNeed>                         StatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuestPredicate_CharacterUsedPickup.OnCharacterUsePickup
struct UQuestPredicate_CharacterUsedPickup_OnCharacterUsePickup_Params
{
	class AGlimpseCharacter*                           CharacterSource;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AGlimpsePickup*                              Pickup;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuestPredicate_ComponentInteraction.OnInteractionEvent
struct UQuestPredicate_ComponentInteraction_OnInteractionEvent_Params
{
	class APawn*                                       InteractSource;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuestPredicate_TimeOfDay.OnTimeOfDayChanged
struct UQuestPredicate_TimeOfDay_OnTimeOfDayChanged_Params
{
};

// Function GlimpseGame.QuestPredicate_NextTimeOfDay.OnTimeOfDayChanged
struct UQuestPredicate_NextTimeOfDay_OnTimeOfDayChanged_Params
{
};

// Function GlimpseGame.QuestPredicate_PickupPickedUp.OnPickedUp
struct UQuestPredicate_PickupPickedUp_OnPickedUp_Params
{
	class APawn*                                       PickupSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.QuestPredicate_PlayerCombatMode.OnPlayerCombatModeChange
struct UQuestPredicate_PlayerCombatMode_OnPlayerCombatModeChange_Params
{
};

// Function GlimpseGame.QuestPredicate_PlayerSeen.OnPlayerSeenChanged
struct UQuestPredicate_PlayerSeen_OnPlayerSeenChanged_Params
{
	bool                                               bSeen;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.StatusEffectComponent.SetStatusEffect
struct UStatusEffectComponent_SetStatusEffect_Params
{
	class UClass*                                      StatusEffectType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Tier;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseStatusEffectBase*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.StatusEffectComponent.SetDrugIntensity
struct UStatusEffectComponent_SetDrugIntensity_Params
{
	bool                                               overrideOn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.StatusEffectComponent.SelectStatusEffect
struct UStatusEffectComponent_SelectStatusEffect_Params
{
	struct FStatusEffectSelector                       Selector;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseStatusEffectBase*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.StatusEffectComponent.RemoveStatusEffectInstance
struct UStatusEffectComponent_RemoveStatusEffectInstance_Params
{
	class UGlimpseStatusEffectBase*                    EffectInstance;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.StatusEffectComponent.RemoveStatusEffectByKey
struct UStatusEffectComponent_RemoveStatusEffectByKey_Params
{
	struct FName                                       StatusEffectKey;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.StatusEffectComponent.RemoveStatusEffect
struct UStatusEffectComponent_RemoveStatusEffect_Params
{
	class UClass*                                      StatusEffectType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.StatusEffectComponent.RemoveAllStatusEffects
struct UStatusEffectComponent_RemoveAllStatusEffects_Params
{
};

// Function GlimpseGame.StatusEffectComponent.ModifyGameplayValue
struct UStatusEffectComponent_ModifyGameplayValue_Params
{
	struct FGameplayTag                                Tag;                                                      // (Parm)
	float                                              BaseValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StatusEffectComponent.HasStatusEffectByKey
struct UStatusEffectComponent_HasStatusEffectByKey_Params
{
	struct FName                                       EffectKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StatusEffectComponent.HasStatusEffect
struct UStatusEffectComponent_HasStatusEffect_Params
{
	class UClass*                                      StatusEffectType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StatusEffectComponent.GetStatusEffectType
struct UStatusEffectComponent_GetStatusEffectType_Params
{
	struct FName                                       StatusEffectKey;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StatusEffectComponent.GetDrugIntensity
struct UStatusEffectComponent_GetDrugIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StatusEffectComponent.GetDefaultStatusEffect
struct UStatusEffectComponent_GetDefaultStatusEffect_Params
{
	struct FName                                       StatusEffectKey;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseStatusEffectBase*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.StatusEffectComponent.GetActiveStatusEffectByKey
struct UStatusEffectComponent_GetActiveStatusEffectByKey_Params
{
	struct FName                                       EffectKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseStatusEffectBase*                    OutEffect;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StatusEffectComponent.GetActiveStatusEffect
struct UStatusEffectComponent_GetActiveStatusEffect_Params
{
	class UClass*                                      EffectType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseStatusEffectBase*                    OutEffect;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.StatusEffectComponent.DecreaseOrRemoveStatusEffect
struct UStatusEffectComponent_DecreaseOrRemoveStatusEffect_Params
{
	class UClass*                                      StatusEffectType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Decrement;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseStatusEffectBase*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.StatusEffectComponent.AddStatusEffectByKey
struct UStatusEffectComponent_AddStatusEffectByKey_Params
{
	struct FName                                       StatusEffectKey;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyOnAdd;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseStatusEffectBase*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.StatusEffectComponent.AddStatusEffect
struct UStatusEffectComponent_AddStatusEffect_Params
{
	class UClass*                                      StatusEffectType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyOnAdd;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseStatusEffectBase*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.StatusEffectComponent.AddOrIncreaseStatusEffect
struct UStatusEffectComponent_AddOrIncreaseStatusEffect_Params
{
	class UClass*                                      StatusEffectType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Increment;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationOverride;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UGlimpseStatusEffectBase*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponent.SetStatPercent
struct USurvivalComponent_SetStatPercent_Params
{
	TEnumAsByte<ESurvivalNeed>                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponent.SetStat
struct USurvivalComponent_SetStat_Params
{
	TEnumAsByte<ESurvivalNeed>                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponent.GetStatRegenRate
struct USurvivalComponent_GetStatRegenRate_Params
{
	TEnumAsByte<ESurvivalNeed>                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponent.GetStatRatio
struct USurvivalComponent_GetStatRatio_Params
{
	TEnumAsByte<ESurvivalNeed>                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponent.GetStatMax
struct USurvivalComponent_GetStatMax_Params
{
	TEnumAsByte<ESurvivalNeed>                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponent.GetStat
struct USurvivalComponent_GetStat_Params
{
	TEnumAsByte<ESurvivalNeed>                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponent.GetFastTravelStatRegenRate
struct USurvivalComponent_GetFastTravelStatRegenRate_Params
{
	TEnumAsByte<ESurvivalNeed>                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponent.GetBaseStatMax
struct USurvivalComponent_GetBaseStatMax_Params
{
	TEnumAsByte<ESurvivalNeed>                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponent.DemiGod
struct USurvivalComponent_DemiGod_Params
{
	bool                                               bInDemiGod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.SurvivalComponent.AddStat
struct USurvivalComponent_AddStat_Params
{
	TEnumAsByte<ESurvivalNeed>                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.PlayerSurvivalComponent.SetOverrideGlimpseEnvironmentJoyState
struct UPlayerSurvivalComponent_SetOverrideGlimpseEnvironmentJoyState_Params
{
	bool                                               bOverride;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPlayerDrugState>                      CurrentState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPlayerDrugState>                      TargetState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              transition;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.PlayerSurvivalComponent.SetCrashMeter
struct UPlayerSurvivalComponent_SetCrashMeter_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.PlayerSurvivalComponent.SetBloodSugarLevel
struct UPlayerSurvivalComponent_SetBloodSugarLevel_Params
{
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.PlayerSurvivalComponent.OnPlayerSurvivalStatChanged
struct UPlayerSurvivalComponent_OnPlayerSurvivalStatChanged_Params
{
	TEnumAsByte<ESurvivalNeed>                         StatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.PlayerSurvivalComponent.IsStatSafe
struct UPlayerSurvivalComponent_IsStatSafe_Params
{
	TEnumAsByte<ESurvivalNeed>                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.PlayerSurvivalComponent.IsStatCritical
struct UPlayerSurvivalComponent_IsStatCritical_Params
{
	TEnumAsByte<ESurvivalNeed>                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.PlayerSurvivalComponent.IsGivenBloodSugarCritical
struct UPlayerSurvivalComponent_IsGivenBloodSugarCritical_Params
{
	float                                              BloodSugarLevel;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.PlayerSurvivalComponent.IsBloodSugarSafe
struct UPlayerSurvivalComponent_IsBloodSugarSafe_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.PlayerSurvivalComponent.IsBloodSugarCritical
struct UPlayerSurvivalComponent_IsBloodSugarCritical_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.PlayerSurvivalComponent.GetTimeToCrash
struct UPlayerSurvivalComponent_GetTimeToCrash_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.PlayerSurvivalComponent.GetSafeThreshold
struct UPlayerSurvivalComponent_GetSafeThreshold_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.PlayerSurvivalComponent.GetMaxBloodSugarLevel
struct UPlayerSurvivalComponent_GetMaxBloodSugarLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.PlayerSurvivalComponent.GetCriticalThreshold
struct UPlayerSurvivalComponent_GetCriticalThreshold_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.PlayerSurvivalComponent.GetBloodSugarLevel
struct UPlayerSurvivalComponent_GetBloodSugarLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GlimpseGame.PlayerSurvivalComponent.ForceJoyState
struct UPlayerSurvivalComponent_ForceJoyState_Params
{
	int                                                JoyStateAsInt;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.PlayerSurvivalComponent.AddToBloodSugarLevel
struct UPlayerSurvivalComponent_AddToBloodSugarLevel_Params
{
	float                                              Increase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.NickPlayerSurvivalComponent.SetIsThirdDay
struct UNickPlayerSurvivalComponent_SetIsThirdDay_Params
{
	bool                                               bThirdDay;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.NickPlayerSurvivalComponent.EnableSanitySystem
struct UNickPlayerSurvivalComponent_EnableSanitySystem_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.TargetingComponent.SetTargetComponent
struct UTargetingComponent_SetTargetComponent_Params
{
	class UPrimitiveComponent*                         NewTargetComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GlimpseGame.TargetingComponent.EndTarget
struct UTargetingComponent_EndTarget_Params
{
	class AController*                                 TargetSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.TargetingComponent.BeginTarget
struct UTargetingComponent_BeginTarget_Params
{
	class AController*                                 TargetSource;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.TexturedBox.SetVerticalAlignment
struct UTexturedBox_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.TexturedBox.SetPadding
struct UTexturedBox_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm)
};

// Function GlimpseGame.TexturedBox.SetHorizontalAlignment
struct UTexturedBox_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.TexturedBoxSlot.SetVerticalAlignment
struct UTexturedBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.TexturedBoxSlot.SetPadding
struct UTexturedBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm)
};

// Function GlimpseGame.TexturedBoxSlot.SetHorizontalAlignment
struct UTexturedBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.WaypointWidget.SetIsAreaWaypoint
struct UWaypointWidget_SetIsAreaWaypoint_Params
{
	bool                                               areaWaypoint;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlimpseGame.WaypointWidget.SetAngleVisibility
struct UWaypointWidget_SetAngleVisibility_Params
{
	bool                                               showAngle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
