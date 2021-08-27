#pragma once

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum GlimpseGame.EInteractionResult
enum class EInteractionResult : uint8_t
{
	EInteractionResult__Disabled   = 0,
	EInteractionResult__Denied     = 1,
	EInteractionResult__Allowed    = 2,
	EInteractionResult__EInteractionResult_MAX = 3
};


// Enum GlimpseGame.ESuspicionConformityRequest
enum class ESuspicionConformityRequest : uint8_t
{
	ESuspicionConformityRequest__None = 0,
	ESuspicionConformityRequest__UseWeapon = 1,
	ESuspicionConformityRequest__Trespassing = 2,
	ESuspicionConformityRequest__UnfitWearable = 3,
	ESuspicionConformityRequest__CarryCorpse = 4,
	ESuspicionConformityRequest__DrugLevel = 5,
	ESuspicionConformityRequest__Curfew = 6,
	ESuspicionConformityRequest__Thief = 7,
	ESuspicionConformityRequest__Murderer = 8,
	ESuspicionConformityRequest__Scripted = 9,
	ESuspicionConformityRequest__Team = 10,
	ESuspicionConformityRequest__Annoyed = 11,
	ESuspicionConformityRequest__LockPick = 12,
	ESuspicionConformityRequest__Vandal = 13,
	ESuspicionConformityRequest__NotInfected = 14,
	ESuspicionConformityRequest__Hitting = 15,
	ESuspicionConformityRequest__MAX_ConformityRequest = 16,
	ESuspicionConformityRequest__ESuspicionConformityRequest_MAX = 17
};


// Enum GlimpseGame.ECorpseState
enum class ECorpseState : uint8_t
{
	ECorpseState__None             = 0,
	ECorpseState__Sleeping         = 1,
	ECorpseState__InterestingCorpse = 2,
	ECorpseState__IgnoredCorpse    = 3,
	ECorpseState__RottenCorpse     = 4,
	ECorpseState__Despawned        = 5,
	ECorpseState__GameplayCorpse   = 6,
	ECorpseState__ECorpseState_MAX = 7
};


// Enum GlimpseGame.EAIMoraleState
enum class EAIMoraleState : uint8_t
{
	EAIMoraleState__Normal         = 0,
	EAIMoraleState__Charmed        = 1,
	EAIMoraleState__Drunk          = 2,
	EAIMoraleState__Flee           = 3,
	EAIMoraleState__Intimidated    = 4,
	EAIMoraleState__Panicked       = 5,
	EAIMoraleState__EAIMoraleState_MAX = 6
};


// Enum GlimpseGame.EAISuspicionState
enum class EAISuspicionState : uint8_t
{
	EAISuspicionState__None        = 0,
	EAISuspicionState__Aware       = 1,
	EAISuspicionState__Suspicious  = 2,
	EAISuspicionState__Inquisitive = 3,
	EAISuspicionState__Hostile     = 4,
	EAISuspicionState__EAISuspicionStage_MAX = 5,
	EAISuspicionState__EAISuspicionState_MAX = 6
};


// Enum GlimpseGame.ESurvivalNeed
enum class ESurvivalNeed : uint8_t
{
	ESurvivalNeed__Health          = 0,
	ESurvivalNeed__DrugLevel       = 1,
	ESurvivalNeed__Hunger          = 2,
	ESurvivalNeed__Thirst          = 3,
	ESurvivalNeed__Stamina         = 4,
	ESurvivalNeed__Sleep           = 5,
	ESurvivalNeed__Social          = 6,
	ESurvivalNeed__MAX_SurvivalNeed = 7,
	ESurvivalNeed__ESurvivalNeed_MAX = 8
};


// Enum GlimpseGame.EGlimpseSaveGameSlot
enum class EGlimpseSaveGameSlot : uint8_t
{
	EGlimpseSaveGameSlot__Settings = 0,
	EGlimpseSaveGameSlot__UserProfile = 1,
	EGlimpseSaveGameSlot__WorldGen = 2,
	EGlimpseSaveGameSlot__WorldDetail = 3,
	EGlimpseSaveGameSlot__AutoSave = 4,
	EGlimpseSaveGameSlot__QuickSave = 5,
	EGlimpseSaveGameSlot__Playthrough = 6,
	EGlimpseSaveGameSlot__LastSafe = 7,
	EGlimpseSaveGameSlot__WorldGen0 = 8,
	EGlimpseSaveGameSlot__WorldGen1 = 9,
	EGlimpseSaveGameSlot__WorldGen2 = 10,
	EGlimpseSaveGameSlot__WorldGen3 = 11,
	EGlimpseSaveGameSlot__WorldGenLimit = 12,
	EGlimpseSaveGameSlot__WorldDetail0 = 13,
	EGlimpseSaveGameSlot__WorldDetail1 = 14,
	EGlimpseSaveGameSlot__WorldDetail2 = 15,
	EGlimpseSaveGameSlot__WorldDetail3 = 16,
	EGlimpseSaveGameSlot__WorldDetailLimit = 17,
	EGlimpseSaveGameSlot__ManualSave0 = 18,
	EGlimpseSaveGameSlot__ManualSave1 = 19,
	EGlimpseSaveGameSlot__ManualSave2 = 20,
	EGlimpseSaveGameSlot__ManualSave3 = 21,
	EGlimpseSaveGameSlot__ManualSave4 = 22,
	EGlimpseSaveGameSlot__ManualSave5 = 23,
	EGlimpseSaveGameSlot__ManualSave6 = 24,
	EGlimpseSaveGameSlot__ManualSave7 = 25,
	EGlimpseSaveGameSlot__ManualSaveLimit = 26,
	EGlimpseSaveGameSlot__EGlimpseSaveGameSlot_MAX = 27
};


// Enum GlimpseGame.EGlimpseSkillTier
enum class EGlimpseSkillTier : uint8_t
{
	EGlimpseSkillTier__Tiers1      = 0,
	EGlimpseSkillTier__Tiers2      = 1,
	EGlimpseSkillTier__Tiers3      = 2,
	EGlimpseSkillTier__Tiers4      = 3,
	EGlimpseSkillTier__Tiers5      = 4,
	EGlimpseSkillTier__Tiers6      = 5,
	EGlimpseSkillTier__TiersTutorial = 6,
	EGlimpseSkillTier__EGlimpseSkillTier_MAX = 7
};


// Enum GlimpseGame.ECraftingStation
enum class ECraftingStation : uint8_t
{
	ECraftingStation__None         = 0,
	ECraftingStation__Mechanical   = 1,
	ECraftingStation__Chemical     = 2,
	ECraftingStation__ECraftingCategory_MAX = 3,
	ECraftingStation__ECraftingStation_MAX = 4
};


// Enum GlimpseGame.EInteraction
enum class EInteraction : uint8_t
{
	EInteraction__Primary          = 0,
	EInteraction__Secondary        = 1,
	EInteraction__Usable           = 2,
	EInteraction__EInteraction_MAX = 3
};


// Enum GlimpseGame.EAnimPlayback
enum class EAnimPlayback : uint8_t
{
	EAnimPlayback__Single          = 0,
	EAnimPlayback__Loop            = 1,
	EAnimPlayback__LoopWithIntro   = 2,
	EAnimPlayback__Random          = 3,
	EAnimPlayback__EAnimPlayback_MAX = 4
};


// Enum GlimpseGame.EHoldPose
enum class EHoldPose : uint8_t
{
	EHoldPose__Default             = 0,
	EHoldPose__UnarmedCombat       = 1,
	EHoldPose__OneHandMelee        = 2,
	EHoldPose__TwoHandMelee        = 3,
	EHoldPose__Bayonette           = 4,
	EHoldPose__Throwable           = 5,
	EHoldPose__FlashLight          = 6,
	EHoldPose__OneHandedGun        = 7,
	EHoldPose__TwoHandedGun        = 8,
	EHoldPose__Custom              = 9,
	EHoldPose__RayGun_Ranged       = 10,
	EHoldPose__Guitar_Ranged       = 11,
	EHoldPose__EHoldPose_MAX       = 12
};


// Enum GlimpseGame.EStandardAnimationMovement
enum class EStandardAnimationMovement : uint8_t
{
	EStandardAnimationMovement__AnimationDriven = 0,
	EStandardAnimationMovement__NoMovement = 1,
	EStandardAnimationMovement__WalkOnly = 2,
	EStandardAnimationMovement__RunOnly = 3,
	EStandardAnimationMovement__FullMovement = 4,
	EStandardAnimationMovement__EStandardAnimationMovement_MAX = 5
};


// Enum GlimpseGame.EGlimpseArchetype
enum class EGlimpseArchetype : uint8_t
{
	EGlimpseArchetype__Wastrel     = 0,
	EGlimpseArchetype__Wellie      = 1,
	EGlimpseArchetype__Crier       = 2,
	EGlimpseArchetype__Bobby       = 3,
	EGlimpseArchetype__Soldier     = 4,
	EGlimpseArchetype__Doctor      = 5,
	EGlimpseArchetype__Peeper      = 6,
	EGlimpseArchetype__Hooligan    = 7,
	EGlimpseArchetype__Jubilator   = 8,
	EGlimpseArchetype__WhenPlayerInRangeOnly = 9,
	EGlimpseArchetype__Any         = 10,
	EGlimpseArchetype__EGlimpseArchetype_MAX = 11
};


// Enum GlimpseGame.EGlimpseCombatRange
enum class EGlimpseCombatRange : uint8_t
{
	EGlimpseCombatRange__COMBATRANGE_Unknown = 0,
	EGlimpseCombatRange__COMBATRANGE_TooClose = 1,
	EGlimpseCombatRange__COMBATRANGE_Near = 2,
	EGlimpseCombatRange__COMBATRANGE_Far = 3,
	EGlimpseCombatRange__COMBATRANGE_Further = 4,
	EGlimpseCombatRange__MAX_GlimpseCombatRange = 5,
	EGlimpseCombatRange__EGlimpseCombatRange_MAX = 6
};


// Enum GlimpseGame.EAIDistanceRange
enum class EAIDistanceRange : uint8_t
{
	EAIDistanceRange__ProximityRange = 0,
	EAIDistanceRange__CombatRange  = 1,
	EAIDistanceRange__SightRange   = 2,
	EAIDistanceRange__HearingRange = 3,
	EAIDistanceRange__OutOfRange   = 4,
	EAIDistanceRange__MAX_DistanceRange = 5,
	EAIDistanceRange__EAIDistanceRange_MAX = 6
};


// Enum GlimpseGame.EGlimpseInquisitiveState
enum class EGlimpseInquisitiveState : uint8_t
{
	EGlimpseInquisitiveState__InProgress = 0,
	EGlimpseInquisitiveState__Succeeded = 1,
	EGlimpseInquisitiveState__Failed = 2,
	EGlimpseInquisitiveState__Aborted = 3,
	EGlimpseInquisitiveState__EGlimpseInquisitiveState_MAX = 4
};


// Enum GlimpseGame.EInventoryImageRepresentation
enum class EInventoryImageRepresentation : uint8_t
{
	EInventoryImageRepresentation__None = 0,
	EInventoryImageRepresentation__Default = 1,
	EInventoryImageRepresentation__Stash = 2,
	EInventoryImageRepresentation__Corpse_Male = 3,
	EInventoryImageRepresentation__Corpse_Female = 4,
	EInventoryImageRepresentation__Dresser = 5,
	EInventoryImageRepresentation__Bin = 6,
	EInventoryImageRepresentation__VendingMachine = 7,
	EInventoryImageRepresentation__Kettle = 8,
	EInventoryImageRepresentation__Fridge = 9,
	EInventoryImageRepresentation__Desk = 10,
	EInventoryImageRepresentation__Stove = 11,
	EInventoryImageRepresentation__Cabinet = 12,
	EInventoryImageRepresentation__MAX_InventoryImageRepresentation = 13,
	EInventoryImageRepresentation__EInventoryImageRepresentation_MAX = 14
};


// Enum GlimpseGame.EGlimpseAnnoyingEvent
enum class EGlimpseAnnoyingEvent : uint8_t
{
	EGlimpseAnnoyingEvent__Crouch  = 0,
	EGlimpseAnnoyingEvent__Sprint  = 1,
	EGlimpseAnnoyingEvent__Jump    = 2,
	EGlimpseAnnoyingEvent__Land    = 3,
	EGlimpseAnnoyingEvent__Mantle  = 4,
	EGlimpseAnnoyingEvent__Shove   = 5,
	EGlimpseAnnoyingEvent__Insult  = 6,
	EGlimpseAnnoyingEvent__Staring = 7,
	EGlimpseAnnoyingEvent__Spying  = 8,
	EGlimpseAnnoyingEvent__Event_MAX = 9,
	EGlimpseAnnoyingEvent__EGlimpseAnnoyingEvent_MAX = 10
};


// Enum GlimpseGame.EGlimpseCollisionEvent
enum class EGlimpseCollisionEvent : uint8_t
{
	EGlimpseCollisionEvent__TakeDamage = 0,
	EGlimpseCollisionEvent__Shoved = 1,
	EGlimpseCollisionEvent__Bumped = 2,
	EGlimpseCollisionEvent__WhipShoved = 3,
	EGlimpseCollisionEvent__Event_MAX = 4,
	EGlimpseCollisionEvent__EGlimpseCollisionEvent_MAX = 5
};


// Enum GlimpseGame.EGlimpseSuspicionEvent
enum class EGlimpseSuspicionEvent : uint8_t
{
	EGlimpseSuspicionEvent__Loating = 0,
	EGlimpseSuspicionEvent__Stealing = 1,
	EGlimpseSuspicionEvent__LockPicking = 2,
	EGlimpseSuspicionEvent__CarryingCorpse = 3,
	EGlimpseSuspicionEvent__HoldingWeapon = 4,
	EGlimpseSuspicionEvent__ThrowerSeen = 5,
	EGlimpseSuspicionEvent__Murdering = 6,
	EGlimpseSuspicionEvent__RepairDisarm = 7,
	EGlimpseSuspicionEvent__Suspicious = 8,
	EGlimpseSuspicionEvent__BadDrugReaction = 9,
	EGlimpseSuspicionEvent__Hitting = 10,
	EGlimpseSuspicionEvent__Event_MAX = 11,
	EGlimpseSuspicionEvent__EGlimpseSuspicionEvent_MAX = 12
};


// Enum GlimpseGame.ESuspicionAnimation
enum class ESuspicionAnimation : uint8_t
{
	ESuspicionAnimation__ProximityAwareness = 0,
	ESuspicionAnimation__SightFrontAwareness = 1,
	ESuspicionAnimation__SightLeftAwareness = 2,
	ESuspicionAnimation__SightRightAwareness = 3,
	ESuspicionAnimation__NoiseFrontAwareness = 4,
	ESuspicionAnimation__NoiseBackAwareness = 5,
	ESuspicionAnimation__PostSuspicion = 6,
	ESuspicionAnimation__PostSearch = 7,
	ESuspicionAnimation__FoundPlayer = 8,
	ESuspicionAnimation__InquiryTaunt = 9,
	ESuspicionAnimation__CombatSummon = 10,
	ESuspicionAnimation__ConformTaunt = 11,
	ESuspicionAnimation__CombatTaunt = 12,
	ESuspicionAnimation__SmellAwareness = 13,
	ESuspicionAnimation__JoinHostile = 14,
	ESuspicionAnimation__CombatTaunt_Unarmed = 15,
	ESuspicionAnimation__MAX_NoReaction = 16,
	ESuspicionAnimation__ESuspicionAnimation_MAX = 17
};


// Enum GlimpseGame.EStandardAnimationMode
enum class EStandardAnimationMode : uint8_t
{
	EStandardAnimationMode__Instant = 0,
	EStandardAnimationMode__Interruptible = 1,
	EStandardAnimationMode__Uninterruptible = 2,
	EStandardAnimationMode__Continuous = 3,
	EStandardAnimationMode__Toggleable = 4,
	EStandardAnimationMode__EStandardAnimationMode_MAX = 5
};


// Enum GlimpseGame.EStandardAnimation
enum class EStandardAnimation : uint8_t
{
	EStandardAnimation__None       = 0,
	EStandardAnimation__Default    = 1,
	EStandardAnimation__PickUp     = 2,
	EStandardAnimation__PickLock   = 3,
	EStandardAnimation__PryBar     = 4,
	EStandardAnimation__Drink      = 5,
	EStandardAnimation__Taunt      = 6,
	EStandardAnimation__LookAround = 7,
	EStandardAnimation__LookAroundCombat = 8,
	EStandardAnimation__Dying      = 9,
	EStandardAnimation__DyingStatusEffect = 10,
	EStandardAnimation__Talk       = 11,
	EStandardAnimation__TalkedTo   = 12,
	EStandardAnimation__Sit        = 13,
	EStandardAnimation__TelephoneBooth = 14,
	EStandardAnimation__Eat        = 15,
	EStandardAnimation__JoyDetectorPassed = 16,
	EStandardAnimation__JoyDetectorFailed = 17,
	EStandardAnimation__JoyDetectorNoBobbies = 18,
	EStandardAnimation__JoyDetectorNoBobbyBack = 19,
	EStandardAnimation__JoyDetectorNoBobbyFrontPassed = 20,
	EStandardAnimation__JoyDetectorNoBobbyFrontFailed = 21,
	EStandardAnimation__Wave       = 22,
	EStandardAnimation__UseSyringe = 23,
	EStandardAnimation__Drowning   = 24,
	EStandardAnimation__Cower      = 25,
	EStandardAnimation__Exhausted  = 26,
	EStandardAnimation__Weep       = 27,
	EStandardAnimation__BackStep   = 28,
	EStandardAnimation__SuccessfulGift = 29,
	EStandardAnimation__FailedGift = 30,
	EStandardAnimation__Vomiting   = 31,
	EStandardAnimation__DryHeaving = 32,
	EStandardAnimation__Blackout   = 33,
	EStandardAnimation__Dance      = 34,
	EStandardAnimation__Clapping   = 35,
	EStandardAnimation__Startled   = 36,
	EStandardAnimation__StartledOnPlayer = 37,
	EStandardAnimation__DrawWeapon = 38,
	EStandardAnimation__TalkedToByPlayer = 39,
	EStandardAnimation__Caltropped = 40,
	EStandardAnimation__DrawWeapon2H = 41,
	EStandardAnimation__VomitingOnJoy = 42,
	EStandardAnimation__VomitingOnJoyWithdrawal = 43,
	EStandardAnimation__VomitingOnJoyOverdose = 44,
	EStandardAnimation__VomitingOnJoyCrash = 45,
	EStandardAnimation__Yawning    = 46,
	EStandardAnimation__EquipWeaponCustom = 47,
	EStandardAnimation__UnequipWeaponCustom = 48,
	EStandardAnimation__Resurrect  = 49,
	EStandardAnimation__MidCombatTaunt_Unarmed = 50,
	EStandardAnimation__MidCombatTaunt_Armed = 51,
	EStandardAnimation__Feint      = 52,
	EStandardAnimation__Feint_Interrupted = 53,
	EStandardAnimation__FriendlyIsHit = 54,
	EStandardAnimation__FriendlyDoesHit = 55,
	EStandardAnimation__Hallucinex_Default = 56,
	EStandardAnimation__Hallucinex_Stand = 57,
	EStandardAnimation__Vomiting_Crouched = 58,
	EStandardAnimation__VomitingOnJoy_Crouched = 59,
	EStandardAnimation__VomitingOnJoyWithdrawal_Crouched = 60,
	EStandardAnimation__VomitingOnJoyOverdose_Crouched = 61,
	EStandardAnimation__VomitingOnJoyCrash_Crouched = 62,
	EStandardAnimation__ReportSuspiciousCharacter = 63,
	EStandardAnimation__EStandardAnimation_MAX = 64
};


// Enum GlimpseGame.EMantleAnimation
enum class EMantleAnimation : uint8_t
{
	EMantleAnimation__None         = 0,
	EMantleAnimation__Vault        = 1,
	EMantleAnimation__Window       = 2,
	EMantleAnimation__Low          = 3,
	EMantleAnimation__High         = 4,
	EMantleAnimation__Step         = 5,
	EMantleAnimation__Drop         = 6,
	EMantleAnimation__EMantleAnimation_MAX = 7
};


// Enum GlimpseGame.EAttackStrength
enum class EAttackStrength : uint8_t
{
	EAttackStrength__Light         = 0,
	EAttackStrength__Medium        = 1,
	EAttackStrength__Heavy         = 2,
	EAttackStrength__EAttackStrength_MAX = 3
};


// Enum GlimpseGame.EWeightGrade
enum class EWeightGrade : uint8_t
{
	EWeightGrade__None             = 0,
	EWeightGrade__Light            = 1,
	EWeightGrade__Medium           = 2,
	EWeightGrade__Large            = 3,
	EWeightGrade__Heavy            = 4,
	EWeightGrade__EWeightGrade_MAX = 5
};


// Enum GlimpseGame.ERecoilAnimation
enum class ERecoilAnimation : uint8_t
{
	ERecoilAnimation__None         = 0,
	ERecoilAnimation__Left         = 1,
	ERecoilAnimation__Right        = 2,
	ERecoilAnimation__Backward     = 3,
	ERecoilAnimation__Forward      = 4,
	ERecoilAnimation__Knockback    = 5,
	ERecoilAnimation__KnockbackForward = 6,
	ERecoilAnimation__Parried      = 7,
	ERecoilAnimation__Dodge        = 8,
	ERecoilAnimation__Takedown     = 9,
	ERecoilAnimation__HeadLeft     = 10,
	ERecoilAnimation__HeadRight    = 11,
	ERecoilAnimation__Grabbed      = 12,
	ERecoilAnimation__Pushback     = 13,
	ERecoilAnimation__PushbackForward = 14,
	ERecoilAnimation__Stumble      = 15,
	ERecoilAnimation__StumbleForward = 16,
	ERecoilAnimation__Stun         = 17,
	ERecoilAnimation__StunForward  = 18,
	ERecoilAnimation__StunFinisher = 19,
	ERecoilAnimation__StunFinisherForward = 20,
	ERecoilAnimation__Shock        = 21,
	ERecoilAnimation__ShockStun    = 22,
	ERecoilAnimation__PillowTakedown = 23,
	ERecoilAnimation__PillowTakedownMirror = 24,
	ERecoilAnimation__FlinchBackward = 25,
	ERecoilAnimation__FlinchForward = 26,
	ERecoilAnimation__Stagger      = 27,
	ERecoilAnimation__Parried2H    = 28,
	ERecoilAnimation__Dodge2H      = 29,
	ERecoilAnimation__Bee          = 30,
	ERecoilAnimation__TakedownWithItem = 31,
	ERecoilAnimation__BoneSaw      = 32,
	ERecoilAnimation__MeleeDeath_Right = 33,
	ERecoilAnimation__MeleeDeath_Right_Head = 34,
	ERecoilAnimation__MeleeDeath_Left = 35,
	ERecoilAnimation__MeleeDeath_Left_Head = 36,
	ERecoilAnimation__MeleeDeath_Back = 37,
	ERecoilAnimation__MeleeDeath_Forward = 38,
	ERecoilAnimation__StatusEffectDeath = 39,
	ERecoilAnimation__WeaponBroken = 40,
	ERecoilAnimation__StaggerOutro = 41,
	ERecoilAnimation__TakedownSally = 42,
	ERecoilAnimation__BaseShot_Left = 43,
	ERecoilAnimation__BaseShot_Right = 44,
	ERecoilAnimation__BaseShot_Forward = 45,
	ERecoilAnimation__BaseShot_Backward = 46,
	ERecoilAnimation__BaseShot_Head = 47,
	ERecoilAnimation__ChargedShot_Left = 48,
	ERecoilAnimation__ChargedShot_Right = 49,
	ERecoilAnimation__ChargedShot_Forward = 50,
	ERecoilAnimation__ChargedShot_Backward = 51,
	ERecoilAnimation__ChargedShot_Head = 52,
	ERecoilAnimation__BaseFacemelt_Forward = 53,
	ERecoilAnimation__BaseFacemelt_Backward = 54,
	ERecoilAnimation__ChargedFacemelt_Forward = 55,
	ERecoilAnimation__ChargedFacemelt_Backward = 56,
	ERecoilAnimation__ChargedFacemelt_Knockback_Forward = 57,
	ERecoilAnimation__ChargedFacemelt_Knockback_Backward = 58,
	ERecoilAnimation__GoldRecord_Left = 59,
	ERecoilAnimation__GoldRecord_Right = 60,
	ERecoilAnimation__GoldRecord_Forward = 61,
	ERecoilAnimation__GoldRecord_Backward = 62,
	ERecoilAnimation__GoldRecord_HeadLeft = 63,
	ERecoilAnimation__GoldRecord_HeadRight = 64,
	ERecoilAnimation__ERecoilAnimation_MAX = 65
};


// Enum GlimpseGame.EHitReactionCategory
enum class EHitReactionCategory : uint8_t
{
	EHitReactionCategory__None     = 0,
	EHitReactionCategory__Normal   = 1,
	EHitReactionCategory__Specific = 2,
	EHitReactionCategory__Pushback = 3,
	EHitReactionCategory__Stumble  = 4,
	EHitReactionCategory__Knockback = 5,
	EHitReactionCategory__Block    = 6,
	EHitReactionCategory__Head     = 7,
	EHitReactionCategory__Stun     = 8,
	EHitReactionCategory__StunFinisher = 9,
	EHitReactionCategory__Shock    = 10,
	EHitReactionCategory__ShockStun = 11,
	EHitReactionCategory__Flinch   = 12,
	EHitReactionCategory__Stagger  = 13,
	EHitReactionCategory__Bee      = 14,
	EHitReactionCategory__BoneSaw  = 15,
	EHitReactionCategory__StatusEffectDeath = 16,
	EHitReactionCategory__BaseShot = 17,
	EHitReactionCategory__ChargedShot = 18,
	EHitReactionCategory__BaseFacemelt = 19,
	EHitReactionCategory__ChargedFacemelt = 20,
	EHitReactionCategory__ChargedFacemelt_Knockback = 21,
	EHitReactionCategory__GoldRecord = 22,
	EHitReactionCategory__EHitReactionCategory_MAX = 23
};


// Enum GlimpseGame.EWalkPace
enum class EWalkPace : uint8_t
{
	EWalkPace__Walk                = 0,
	EWalkPace__FastWalk            = 1,
	EWalkPace__Run                 = 2,
	EWalkPace__Sprint              = 3,
	EWalkPace__EWalkPace_MAX       = 4
};


// Enum GlimpseGame.EFindPickup
enum class EFindPickup : uint8_t
{
	EFindPickup__SurvivalPickup    = 0,
	EFindPickup__AnyMelee          = 1,
	EFindPickup__OneHandMelee      = 2,
	EFindPickup__TwoHandMelee      = 3,
	EFindPickup__Bayonette         = 4,
	EFindPickup__Throwable         = 5,
	EFindPickup__EFindPickupType_MAX = 6,
	EFindPickup__EFindPickup_MAX   = 7
};


// Enum GlimpseGame.EGlimpsePOIRole
enum class EGlimpsePOIRole : uint8_t
{
	EGlimpsePOIRole__Citizen       = 0,
	EGlimpsePOIRole__Shopkeeper    = 1,
	EGlimpsePOIRole__Bobby         = 2,
	EGlimpsePOIRole__Guard         = 3,
	EGlimpsePOIRole__Wastrel       = 4,
	EGlimpsePOIRole__Doctor        = 5,
	EGlimpsePOIRole__Crier         = 6,
	EGlimpsePOIRole__Beggar        = 7,
	EGlimpsePOIRole__SickWastrel   = 8,
	EGlimpsePOIRole__Worker        = 9,
	EGlimpsePOIRole__Peeper        = 10,
	EGlimpsePOIRole__Jubilator     = 11,
	EGlimpsePOIRole__Soldier       = 12,
	EGlimpsePOIRole__EGlimpsePOIRole_MAX = 13
};


// Enum GlimpseGame.EGlimpseTeamId
enum class EGlimpseTeamId : uint8_t
{
	EGlimpseTeamId__NoTeam         = 0,
	EGlimpseTeamId__PlayerCharacter = 1,
	EGlimpseTeamId__Collaborator   = 2,
	EGlimpseTeamId__Citizen        = 3,
	EGlimpseTeamId__Downer         = 4,
	EGlimpseTeamId__Guard          = 5,
	EGlimpseTeamId__Berserk        = 6,
	EGlimpseTeamId__Neutral        = 7,
	EGlimpseTeamId__LB_Fan         = 8,
	EGlimpseTeamId__EGlimpseTeamId_MAX = 9
};


// Enum GlimpseGame.EAICustomBehaviour
enum class EAICustomBehaviour : uint8_t
{
	EAICustomBehaviour__Passive    = 0,
	EAICustomBehaviour__AcceptGift = 1,
	EAICustomBehaviour__RefuseGift = 2,
	EAICustomBehaviour__Combat     = 3,
	EAICustomBehaviour__Berserk    = 4,
	EAICustomBehaviour__InvestigateCorpse = 5,
	EAICustomBehaviour__Decorator  = 6,
	EAICustomBehaviour__EAICustomBehaviour_MAX = 7
};


// Enum GlimpseGame.ENavArea
enum class ENavArea : uint8_t
{
	ENavArea__Default              = 0,
	ENavArea__Alley                = 1,
	ENavArea__Building             = 2,
	ENavArea__Guarded              = 3,
	ENavArea__Invalid              = 4,
	ENavArea__ENavArea_MAX         = 5
};


// Enum GlimpseGame.EPlayerDrugState
enum class EPlayerDrugState : uint8_t
{
	EPlayerDrugState__None         = 0,
	EPlayerDrugState__Joyed        = 1,
	EPlayerDrugState__Comedown     = 2,
	EPlayerDrugState__Overdose     = 3,
	EPlayerDrugState__Crash        = 4,
	EPlayerDrugState__MAX          = 5,
	EPlayerDrugState__EPlayerDrugState_MAX = 6
};


// Enum GlimpseGame.ECharacterLiveness
enum class ECharacterLiveness : uint8_t
{
	ECharacterLiveness__Recycled   = 0,
	ECharacterLiveness__NotLive    = 1,
	ECharacterLiveness__Frozen     = 2,
	ECharacterLiveness__Paused     = 3,
	ECharacterLiveness__NoPhysics  = 4,
	ECharacterLiveness__Full       = 5,
	ECharacterLiveness__ECharacterLiveness_MAX = 6
};


// Enum GlimpseGame.EMeleeWeaponCategory
enum class EMeleeWeaponCategory : uint8_t
{
	EMeleeWeaponCategory__Blunt    = 0,
	EMeleeWeaponCategory__Sharp    = 1,
	EMeleeWeaponCategory__Special  = 2,
	EMeleeWeaponCategory__EMeleeWeaponCategory_MAX = 3
};


// Enum GlimpseGame.EHitReactionRecovery
enum class EHitReactionRecovery : uint8_t
{
	EHitReactionRecovery__None     = 0,
	EHitReactionRecovery__VeryQuick = 1,
	EHitReactionRecovery__Quick    = 2,
	EHitReactionRecovery__Normal   = 3,
	EHitReactionRecovery__EHitReactionRecovery_MAX = 4
};


// Enum GlimpseGame.EGlimpseDamageCategory
enum class EGlimpseDamageCategory : uint8_t
{
	EGlimpseDamageCategory__Combat = 0,
	EGlimpseDamageCategory__Fall   = 1,
	EGlimpseDamageCategory__Bleeding = 2,
	EGlimpseDamageCategory__Starvation = 3,
	EGlimpseDamageCategory__Dehydration = 4,
	EGlimpseDamageCategory__FoodPoisoning = 5,
	EGlimpseDamageCategory__Drowning = 6,
	EGlimpseDamageCategory__Gas    = 7,
	EGlimpseDamageCategory__Electricity = 8,
	EGlimpseDamageCategory__Burning = 9,
	EGlimpseDamageCategory__Cheat  = 10,
	EGlimpseDamageCategory__Plague = 11,
	EGlimpseDamageCategory__Bee    = 12,
	EGlimpseDamageCategory__ChildNeglect = 13,
	EGlimpseDamageCategory__AbnormalBloodSugar = 14,
	EGlimpseDamageCategory__MAX_GlimpseDamageCategory = 15,
	EGlimpseDamageCategory__EGlimpseDamageCategory_MAX = 16
};


// Enum GlimpseGame.EGlimpsePlayerDeathType
enum class EGlimpsePlayerDeathType : uint8_t
{
	EGlimpsePlayerDeathType__None  = 0,
	EGlimpsePlayerDeathType__SecondWind = 1,
	EGlimpsePlayerDeathType__Death = 2,
	EGlimpsePlayerDeathType__PermaDeath = 3,
	EGlimpsePlayerDeathType__FastTravel = 4,
	EGlimpsePlayerDeathType__RestoreSaveGame = 5,
	EGlimpsePlayerDeathType__EGlimpsePlayerDeathType_MAX = 6
};


// Enum GlimpseGame.EGlimpseGameDifficulty
enum class EGlimpseGameDifficulty : uint8_t
{
	EGlimpseGameDifficulty__Easy   = 0,
	EGlimpseGameDifficulty__Normal = 1,
	EGlimpseGameDifficulty__Hard   = 2,
	EGlimpseGameDifficulty__EGlimpseGameDifficulty_MAX = 3
};


// Enum GlimpseGame.EGlimpseGameMode
enum class EGlimpseGameMode : uint8_t
{
	EGlimpseGameMode__Sandbox      = 0,
	EGlimpseGameMode__Story        = 1,
	EGlimpseGameMode__Wellie       = 2,
	EGlimpseGameMode__Any          = 3,
	EGlimpseGameMode__Survival     = 4,
	EGlimpseGameMode__DLCStory     = 5,
	EGlimpseGameMode__EGlimpseGameMode_MAX = 6
};


// Enum GlimpseGame.ERobotType
enum class ERobotType : uint8_t
{
	ERobotType__None               = 0,
	ERobotType__Little             = 1,
	ERobotType__Medium             = 2,
	ERobotType__Big                = 3,
	ERobotType__ERobotType_MAX     = 4
};


// Enum GlimpseGame.EGlimpseRoad
enum class EGlimpseRoad : uint8_t
{
	EGlimpseRoad__None             = 0,
	EGlimpseRoad__MainRoad         = 1,
	EGlimpseRoad__SideRoad         = 2,
	EGlimpseRoad__Alley            = 3,
	EGlimpseRoad__EGlimpseRoad_MAX = 4
};


// Enum GlimpseGame.EStoryCharacter
enum class EStoryCharacter : uint8_t
{
	EStoryCharacter__None          = 0,
	EStoryCharacter__Arthur        = 1,
	EStoryCharacter__Sally         = 2,
	EStoryCharacter__Oliver        = 3,
	EStoryCharacter__Byng          = 4,
	EStoryCharacter__Victoria      = 5,
	EStoryCharacter__Roger         = 6,
	EStoryCharacter__Nick          = 7,
	EStoryCharacter__Any           = 8,
	EStoryCharacter__EStoryCharacter_MAX = 9
};


// Enum GlimpseGame.ECharacterGender
enum class ECharacterGender : uint8_t
{
	ECharacterGender__None         = 0,
	ECharacterGender__Male         = 1,
	ECharacterGender__Female       = 2,
	ECharacterGender__Neutral      = 3,
	ECharacterGender__ECharacterGender_MAX = 4
};


// Enum GlimpseGame.ETimeOfDay
enum class ETimeOfDay : uint8_t
{
	ETimeOfDay__Morning            = 0,
	ETimeOfDay__Afternoon          = 1,
	ETimeOfDay__Evening            = 2,
	ETimeOfDay__Night              = 3,
	ETimeOfDay__ETimeOfDay_MAX     = 4
};


// Enum GlimpseGame.EGlimpseGameState
enum class EGlimpseGameState : uint8_t
{
	EGlimpseGameState__None        = 0,
	EGlimpseGameState__Logos       = 1,
	EGlimpseGameState__WelcomeScreen = 2,
	EGlimpseGameState__MainMenu    = 3,
	EGlimpseGameState__Loading     = 4,
	EGlimpseGameState__WorldGen    = 5,
	EGlimpseGameState__Playing     = 6,
	EGlimpseGameState__EGlimpseGameState_MAX = 7
};


// Enum GlimpseGame.EInputDevice
enum class EInputDevice : uint8_t
{
	EInputDevice__MouseAndKeyboard = 0,
	EInputDevice__Controller       = 1,
	EInputDevice__EInputDevice_MAX = 2
};


// Enum GlimpseGame.EPuppetBrainTask
enum class EPuppetBrainTask : uint8_t
{
	EPuppetBrainTask__None         = 0,
	EPuppetBrainTask__Idle         = 1,
	EPuppetBrainTask__MoveTo       = 2,
	EPuppetBrainTask__TurnTo       = 3,
	EPuppetBrainTask__Attack       = 4,
	EPuppetBrainTask__Flee         = 5,
	EPuppetBrainTask__POI          = 6,
	EPuppetBrainTask__EPuppetBrainTask_MAX = 7
};


// Enum GlimpseGame.EPuppetBrainTaskResult
enum class EPuppetBrainTaskResult : uint8_t
{
	EPuppetBrainTaskResult__None   = 0,
	EPuppetBrainTaskResult__Complete = 1,
	EPuppetBrainTaskResult__Timeout = 2,
	EPuppetBrainTaskResult__Interrupted = 3,
	EPuppetBrainTaskResult__Failed = 4,
	EPuppetBrainTaskResult__EPuppetBrainTaskResult_MAX = 5
};


// Enum GlimpseGame.EPuppetBrainTaskState
enum class EPuppetBrainTaskState : uint8_t
{
	EPuppetBrainTaskState__None    = 0,
	EPuppetBrainTaskState__Ready   = 1,
	EPuppetBrainTaskState__Active  = 2,
	EPuppetBrainTaskState__Complete = 3,
	EPuppetBrainTaskState__EPuppetBrainTaskState_MAX = 4
};


// Enum GlimpseGame.EPuppetShowEvent
enum class EPuppetShowEvent : uint8_t
{
	EPuppetShowEvent__AudioEvent   = 0,
	EPuppetShowEvent__AnimMontage  = 1,
	EPuppetShowEvent__AnimChain    = 2,
	EPuppetShowEvent__PuppetTask   = 3,
	EPuppetShowEvent__PuppetIdle   = 4,
	EPuppetShowEvent__LookAt       = 5,
	EPuppetShowEvent__Exec         = 6,
	EPuppetShowEvent__Conversation = 7,
	EPuppetShowEvent__ConversationSettings = 8,
	EPuppetShowEvent__SetLookAt    = 9,
	EPuppetShowEvent__TextToSpeech = 10,
	EPuppetShowEvent__EPuppetShowEvent_MAX = 11
};


// Enum GlimpseGame.EGlimpseSuspicionRole
enum class EGlimpseSuspicionRole : uint8_t
{
	EGlimpseSuspicionRole__HoldPosition = 0,
	EGlimpseSuspicionRole__StandardSearch = 1,
	EGlimpseSuspicionRole__ExtendedSearch = 2,
	EGlimpseSuspicionRole__FailedPosition = 3,
	EGlimpseSuspicionRole__EGlimpseSuspicionRole_MAX = 4
};


// Enum GlimpseGame.EGlimpseSensingDirection
enum class EGlimpseSensingDirection : uint8_t
{
	EGlimpseSensingDirection__Front = 0,
	EGlimpseSensingDirection__Left = 1,
	EGlimpseSensingDirection__Right = 2,
	EGlimpseSensingDirection__Back = 3,
	EGlimpseSensingDirection__EGlimpseSensingDirection_MAX = 4
};


// Enum GlimpseGame.EGlimpseSmellingStatus
enum class EGlimpseSmellingStatus : uint8_t
{
	EGlimpseSmellingStatus__WithinSmellingRange = 0,
	EGlimpseSmellingStatus__TargetDoesNotSmell = 1,
	EGlimpseSmellingStatus__OutSmellingRange = 2,
	EGlimpseSmellingStatus__AgentDoesNotSmell = 3,
	EGlimpseSmellingStatus__EGlimpseSmellingStatus_MAX = 4
};


// Enum GlimpseGame.EGlimpseHearingStatus
enum class EGlimpseHearingStatus : uint8_t
{
	EGlimpseHearingStatus__WithinHearingRange = 0,
	EGlimpseHearingStatus__NotMakingNoise = 1,
	EGlimpseHearingStatus__NotHearingNoise = 2,
	EGlimpseHearingStatus__OutHearingZone = 3,
	EGlimpseHearingStatus__OutHearingRange = 4,
	EGlimpseHearingStatus__EGlimpseHearingStatus_MAX = 5
};


// Enum GlimpseGame.EGlimpseVisionStatus
enum class EGlimpseVisionStatus : uint8_t
{
	EGlimpseVisionStatus__Proximity = 0,
	EGlimpseVisionStatus__NearFront = 1,
	EGlimpseVisionStatus__NearAside = 2,
	EGlimpseVisionStatus__FarFront = 3,
	EGlimpseVisionStatus__FarAside = 4,
	EGlimpseVisionStatus__FurtherFront = 5,
	EGlimpseVisionStatus__NoLineOfSight = 6,
	EGlimpseVisionStatus__OutPeripheral = 7,
	EGlimpseVisionStatus__OutVertically = 8,
	EGlimpseVisionStatus__OutSightRange = 9,
	EGlimpseVisionStatus__EGlimpseVisionStatus_MAX = 10
};


// Enum GlimpseGame.EPlayerSuspicionLevel
enum class EPlayerSuspicionLevel : uint8_t
{
	EPlayerSuspicionLevel__Low     = 0,
	EPlayerSuspicionLevel__Normal  = 1,
	EPlayerSuspicionLevel__Medium  = 2,
	EPlayerSuspicionLevel__High    = 3,
	EPlayerSuspicionLevel__EPlayerSuspicionLevel_MAX = 4
};


// Enum GlimpseGame.EAIDetectionTarget
enum class EAIDetectionTarget : uint8_t
{
	EAIDetectionTarget__None       = 0,
	EAIDetectionTarget__Character  = 1,
	EAIDetectionTarget__Corpse     = 2,
	EAIDetectionTarget__Pickup     = 3,
	EAIDetectionTarget__Alarm      = 4,
	EAIDetectionTarget__Broadcast  = 5,
	EAIDetectionTarget__HomeAlarm  = 6,
	EAIDetectionTarget__DistractionHappy = 7,
	EAIDetectionTarget__DistractionMusic = 8,
	EAIDetectionTarget__DeadPlayer = 9,
	EAIDetectionTarget__CrierAlarm = 10,
	EAIDetectionTarget__ComplimentMachine = 11,
	EAIDetectionTarget__EAIDetectionTarget_MAX = 12
};


// Enum GlimpseGame.EAIBehaviourBark
enum class EAIBehaviourBark : uint8_t
{
	EAIBehaviourBark__FoundCorpse  = 0,
	EAIBehaviourBark__StartSearch  = 1,
	EAIBehaviourBark__FoundPlayer  = 2,
	EAIBehaviourBark__Cower        = 3,
	EAIBehaviourBark__Curfew       = 4,
	EAIBehaviourBark__AcceptGift   = 5,
	EAIBehaviourBark__RefuseGift   = 6,
	EAIBehaviourBark__SeeJoy       = 7,
	EAIBehaviourBark__SeeJoyWithdrawal = 8,
	EAIBehaviourBark__SeeBench     = 9,
	EAIBehaviourBark__Flee         = 10,
	EAIBehaviourBark__Alarmed      = 11,
	EAIBehaviourBark__FoundCulprit = 12,
	EAIBehaviourBark__Distracted   = 13,
	EAIBehaviourBark__EndDistraction = 14,
	EAIBehaviourBark__SeeProperSuit = 15,
	EAIBehaviourBark__Trespassing  = 16,
	EAIBehaviourBark__AttackGrunt  = 17,
	EAIBehaviourBark__DeadPlayer   = 18,
	EAIBehaviourBark__PostCorpse   = 19,
	EAIBehaviourBark__PostSuspicion = 20,
	EAIBehaviourBark__PostAlarm    = 21,
	EAIBehaviourBark__PostSearch   = 22,
	EAIBehaviourBark__WearableConform = 23,
	EAIBehaviourBark__WeaponConform = 24,
	EAIBehaviourBark__TrespassingConform = 25,
	EAIBehaviourBark__JoinInquiry  = 26,
	EAIBehaviourBark__JoinHostile  = 27,
	EAIBehaviourBark__CarryCorpseConform = 28,
	EAIBehaviourBark__StartHostile = 29,
	EAIBehaviourBark__CombatHostile = 30,
	EAIBehaviourBark__AnnoyedInquiry = 31,
	EAIBehaviourBark__Cheering     = 32,
	EAIBehaviourBark__AnnoyedConform = 33,
	EAIBehaviourBark__Hallucinating = 34,
	EAIBehaviourBark__SmellPostSearch = 35,
	EAIBehaviourBark__SmellJoyWithdrawal = 36,
	EAIBehaviourBark__SeeTargetEnterBush = 37,
	EAIBehaviourBark__MidCombatTaunt = 38,
	EAIBehaviourBark__FriendlyHit  = 39,
	EAIBehaviourBark__FriendlyLandHit = 40,
	EAIBehaviourBark__Feint        = 41,
	EAIBehaviourBark__Feint_Interrupted = 42,
	EAIBehaviourBark__HittingConform = 43,
	EAIBehaviourBark__HostileTeam  = 44,
	EAIBehaviourBark__InstantSuspicion_Hostile = 45,
	EAIBehaviourBark__EAIBehaviourBark_MAX = 46
};


// Enum GlimpseGame.EAIAggroPriority
enum class EAIAggroPriority : uint8_t
{
	EAIAggroPriority__Default      = 0,
	EAIAggroPriority__PreferPlayer = 1,
	EAIAggroPriority__PreferNPC    = 2,
	EAIAggroPriority__EAIAggroPriority_MAX = 3
};


// Enum GlimpseGame.EAISuspicionStimulusType
enum class EAISuspicionStimulusType : uint8_t
{
	EAISuspicionStimulusType__MovementNoise = 0,
	EAISuspicionStimulusType__Normal = 1,
	EAISuspicionStimulusType__Proximity = 2,
	EAISuspicionStimulusType__Sprint = 3,
	EAISuspicionStimulusType__Crouch = 4,
	EAISuspicionStimulusType__Jump = 5,
	EAISuspicionStimulusType__Mantle = 6,
	EAISuspicionStimulusType__CarryCorpse = 7,
	EAISuspicionStimulusType__LockPick = 8,
	EAISuspicionStimulusType__Landing = 9,
	EAISuspicionStimulusType__Looting = 10,
	EAISuspicionStimulusType__Weapon = 11,
	EAISuspicionStimulusType__HostileAggro = 12,
	EAISuspicionStimulusType__Custom = 13,
	EAISuspicionStimulusType__Stealing = 14,
	EAISuspicionStimulusType__Vandal = 15,
	EAISuspicionStimulusType__Hitting = 16,
	EAISuspicionStimulusType__EAISuspicionStimulusType_MAX = 17
};


// Enum GlimpseGame.EAISuspicionReaction
enum class EAISuspicionReaction : uint8_t
{
	EAISuspicionReaction__Enable   = 0,
	EAISuspicionReaction__Passive  = 1,
	EAISuspicionReaction__Aggressive = 2,
	EAISuspicionReaction__EAISuspicionReaction_MAX = 3
};


// Enum GlimpseGame.ECanInsertResult
enum class ECanInsertResult : uint8_t
{
	ECanInsertResult__Allowed      = 0,
	ECanInsertResult__StackAllowed = 1,
	ECanInsertResult__StackPartial = 2,
	ECanInsertResult__SwapAllowed  = 3,
	ECanInsertResult__BadLayout    = 4,
	ECanInsertResult__Denied       = 5,
	ECanInsertResult__ECanInsertResult_MAX = 6
};


// Enum GlimpseGame.ECanAddResult
enum class ECanAddResult : uint8_t
{
	ECanAddResult__Allowed         = 0,
	ECanAddResult__NoCapacity      = 1,
	ECanAddResult__BadLayout       = 2,
	ECanAddResult__Denied          = 3,
	ECanAddResult__ECanAddResult_MAX = 4
};


// Enum GlimpseGame.EPOISlotPhase
enum class EPOISlotPhase : uint8_t
{
	EPOISlotPhase__Empty           = 0,
	EPOISlotPhase__Waiting         = 1,
	EPOISlotPhase__Loop            = 2,
	EPOISlotPhase__Exit            = 3,
	EPOISlotPhase__Finished        = 4,
	EPOISlotPhase__EPOISlotPhase_MAX = 5
};


// Enum GlimpseGame.EGlimpseWorldModelBridgeType
enum class EGlimpseWorldModelBridgeType : uint8_t
{
	River                          = 0,
	Railroad                       = 1,
	Wall                           = 2,
	EGlimpseWorldModelBridgeType_MAX = 3
};


// Enum GlimpseGame.EGlimpseWorldModelZoneLayout
enum class EGlimpseWorldModelZoneLayout : uint8_t
{
	EGlimpseWorldModelZoneLayout__Grid = 0,
	EGlimpseWorldModelZoneLayout__Single = 1,
	EGlimpseWorldModelZoneLayout__Barren = 2,
	EGlimpseWorldModelZoneLayout__GardenDistrict = 3,
	EGlimpseWorldModelZoneLayout__GrapeLike = 4,
	EGlimpseWorldModelZoneLayout__EGlimpseWorldModelZoneLayout_MAX = 5
};


// Enum GlimpseGame.EGlimpseBiome
enum class EGlimpseBiome : uint8_t
{
	EGlimpseBiome__Any             = 0,
	EGlimpseBiome__Village         = 1,
	EGlimpseBiome__Wastes          = 2,
	EGlimpseBiome__EmeraldCity     = 3,
	EGlimpseBiome__EGlimpseBiome_MAX = 4
};


// Enum GlimpseGame.EGlimpseBroadcastType
enum class EGlimpseBroadcastType : uint8_t
{
	EGlimpseBroadcastType__TV      = 0,
	EGlimpseBroadcastType__Radio   = 1,
	EGlimpseBroadcastType__PA      = 2,
	EGlimpseBroadcastType__EGlimpseBroadcastType_MAX = 3
};


// Enum GlimpseGame.EQuestCategory
enum class EQuestCategory : uint8_t
{
	EQuestCategory__Story          = 0,
	EQuestCategory__Primary        = 1,
	EQuestCategory__Secondary      = 2,
	EQuestCategory__EQuestCategory_MAX = 3
};


// Enum GlimpseGame.EQuestStatus
enum class EQuestStatus : uint8_t
{
	EQuestStatus__Unavailable      = 0,
	EQuestStatus__Available        = 1,
	EQuestStatus__Active           = 2,
	EQuestStatus__Complete         = 3,
	EQuestStatus__Failed           = 4,
	EQuestStatus__EQuestStatus_MAX = 5
};


// Enum GlimpseGame.EObjectiveCounter
enum class EObjectiveCounter : uint8_t
{
	EObjectiveCounter__None        = 0,
	EObjectiveCounter__Generic     = 1,
	EObjectiveCounter__Pickup      = 2,
	EObjectiveCounter__EObjectiveCounter_MAX = 3
};


// Enum GlimpseGame.EObjectiveStatus
enum class EObjectiveStatus : uint8_t
{
	EObjectiveStatus__Active       = 0,
	EObjectiveStatus__Complete     = 1,
	EObjectiveStatus__Failed       = 2,
	EObjectiveStatus__OnHold       = 3,
	EObjectiveStatus__Unavailable  = 4,
	EObjectiveStatus__EObjectiveStatus_MAX = 5
};


// Enum GlimpseGame.ELootRollMethod
enum class ELootRollMethod : uint8_t
{
	ELootRollMethod__RollBest      = 0,
	ELootRollMethod__RollAll       = 1,
	ELootRollMethod__SelectAll     = 2,
	ELootRollMethod__ELootRollMethod_MAX = 3
};


// Enum GlimpseGame.EGlimpseOutfitType
enum class EGlimpseOutfitType : uint8_t
{
	EGlimpseOutfitType__Irrelevant = 0,
	EGlimpseOutfitType__TornSuit   = 1,
	EGlimpseOutfitType__ProperSuit = 2,
	EGlimpseOutfitType__WorkerSuit = 3,
	EGlimpseOutfitType__MilitaryUniform = 4,
	EGlimpseOutfitType__BlendingSuit = 5,
	EGlimpseOutfitType__FabThreads = 6,
	EGlimpseOutfitType__StrangeSuit = 7,
	EGlimpseOutfitType__BlendingHat = 8,
	EGlimpseOutfitType__StrangeHat = 9,
	EGlimpseOutfitType__NakedSuit  = 10,
	EGlimpseOutfitType__StrangeShoes = 11,
	EGlimpseOutfitType__MaidSuit   = 12,
	EGlimpseOutfitType__LB_BloodySuit = 13,
	EGlimpseOutfitType__EGlimpseOutfit_MAX = 14,
	EGlimpseOutfitType__EGlimpseOutfitType_MAX = 15
};


// Enum GlimpseGame.EOutfitSlot
enum class EOutfitSlot : uint8_t
{
	EOutfitSlot__Hat               = 0,
	EOutfitSlot__Body              = 1,
	EOutfitSlot__Feet              = 2,
	EOutfitSlot__EOutfitSlot_MAX   = 3
};


// Enum GlimpseGame.EPickupQuickslotGroup
enum class EPickupQuickslotGroup : uint8_t
{
	EPickupQuickslotGroup__None    = 0,
	EPickupQuickslotGroup__Concession = 1,
	EPickupQuickslotGroup__TricksOfTrade = 2,
	EPickupQuickslotGroup__Drugs   = 3,
	EPickupQuickslotGroup__Medical = 4,
	EPickupQuickslotGroup__EPickupQuickslotGroup_MAX = 5
};


// Enum GlimpseGame.ESelectedCategory
enum class ESelectedCategory : uint8_t
{
	ESelectedCategory__Health      = 0,
	ESelectedCategory__Food        = 1,
	ESelectedCategory__Gadget      = 2,
	ESelectedCategory__Drug        = 3,
	ESelectedCategory__Weapon      = 4,
	ESelectedCategory__Wearable    = 5,
	ESelectedCategory__Crafting    = 6,
	ESelectedCategory__Quest       = 7,
	ESelectedCategory__All         = 8,
	ESelectedCategory__MAX         = 9,
	ESelectedCategory__ESelectedCategory_MAX = 10
};


// Enum GlimpseGame.EPickupCategory
enum class EPickupCategory : uint8_t
{
	EPickupCategory__Survival      = 0,
	EPickupCategory__Wearable      = 1,
	EPickupCategory__Weapon        = 2,
	EPickupCategory__Tool          = 3,
	EPickupCategory__Chemical      = 4,
	EPickupCategory__Component     = 5,
	EPickupCategory__Manual        = 6,
	EPickupCategory__Recipe        = 7,
	EPickupCategory__Lore          = 8,
	EPickupCategory__Currency      = 9,
	EPickupCategory__Quest         = 10,
	EPickupCategory__EPickupCategory_MAX = 11
};


// Enum GlimpseGame.EPickupRarity
enum class EPickupRarity : uint8_t
{
	EPickupRarity__Common          = 0,
	EPickupRarity__Uncommon        = 1,
	EPickupRarity__Rare            = 2,
	EPickupRarity__VeryRare        = 3,
	EPickupRarity__Exotic          = 4,
	EPickupRarity__Unique          = 5,
	EPickupRarity__Always          = 6,
	EPickupRarity__EPickupRarity_MAX = 7
};


// Enum GlimpseGame.EGlimpseGameDifficultyCategory
enum class EGlimpseGameDifficultyCategory : uint8_t
{
	EGlimpseGameDifficultyCategory__Base = 0,
	EGlimpseGameDifficultyCategory__Conformity = 1,
	EGlimpseGameDifficultyCategory__Combat = 2,
	EGlimpseGameDifficultyCategory__Resources = 3,
	EGlimpseGameDifficultyCategory__Survival = 4,
	EGlimpseGameDifficultyCategory__EGlimpseGameDifficultyCategory_MAX = 5
};


// Enum GlimpseGame.EGlimpseFootprintTagType
enum class EGlimpseFootprintTagType : uint8_t
{
	EGlimpseFootprintTagType__Peer = 0,
	EGlimpseFootprintTagType__Alley = 1,
	EGlimpseFootprintTagType__Road = 2,
	EGlimpseFootprintTagType__Exclude = 3,
	EGlimpseFootprintTagType__Bounds = 4,
	EGlimpseFootprintTagType__BuildingFootprint = 5,
	EGlimpseFootprintTagType__EGlimpseFootprintTagType_MAX = 6
};


// Enum GlimpseGame.EGlimpseFootprintTagDir
enum class EGlimpseFootprintTagDir : uint8_t
{
	EGlimpseFootprintTagDir__In    = 0,
	EGlimpseFootprintTagDir__Out   = 1,
	EGlimpseFootprintTagDir__EGlimpseFootprintTagDir_MAX = 2
};


// Enum GlimpseGame.EGlimpseRoadBlueprintPattern
enum class EGlimpseRoadBlueprintPattern : uint8_t
{
	EGlimpseRoadBlueprintPattern__Random = 0,
	EGlimpseRoadBlueprintPattern__Sequence = 1,
	EGlimpseRoadBlueprintPattern__EGlimpseRoadBlueprintPattern_MAX = 2
};


// Enum GlimpseGame.EGlimpseRoadUnits
enum class EGlimpseRoadUnits : uint8_t
{
	EGlimpseRoadUnits__Fraction    = 0,
	EGlimpseRoadUnits__Real        = 1,
	EGlimpseRoadUnits__EGlimpseRoadUnits_MAX = 2
};


// Enum GlimpseGame.EGlimpseRoadReference
enum class EGlimpseRoadReference : uint8_t
{
	EGlimpseRoadReference__RoadCurb = 0,
	EGlimpseRoadReference__RoadCenter = 1,
	EGlimpseRoadReference__SidewalkCurb = 2,
	EGlimpseRoadReference__SidewalkCenter = 3,
	EGlimpseRoadReference__SidewalkEdge = 4,
	EGlimpseRoadReference__EGlimpseRoadReference_MAX = 5
};


// Enum GlimpseGame.EGlimpseRoadDecorationMode
enum class EGlimpseRoadDecorationMode : uint8_t
{
	EGlimpseRoadDecorationMode__Default = 0,
	EGlimpseRoadDecorationMode__Mirror = 1,
	EGlimpseRoadDecorationMode__Left = 2,
	EGlimpseRoadDecorationMode__Right = 3,
	EGlimpseRoadDecorationMode__EGlimpseRoadDecorationMode_MAX = 4
};


// Enum GlimpseGame.EValueModifierApplication
enum class EValueModifierApplication : uint8_t
{
	EValueModifierApplication__Additive = 0,
	EValueModifierApplication__Multiplicative = 1,
	EValueModifierApplication__Bonus = 2,
	EValueModifierApplication__EValueModifierApplication_MAX = 3
};


// Enum GlimpseGame.EStatusEffectType
enum class EStatusEffectType : uint8_t
{
	EStatusEffectType__Positive    = 0,
	EStatusEffectType__Neutral     = 1,
	EStatusEffectType__Negative    = 2,
	EStatusEffectType__Critical    = 3,
	EStatusEffectType__EStatusEffectType_MAX = 4
};


// Enum GlimpseGame.EStatusEffectUsage
enum class EStatusEffectUsage : uint8_t
{
	EStatusEffectUsage__Active     = 0,
	EStatusEffectUsage__Passive    = 1,
	EStatusEffectUsage__Internal   = 2,
	EStatusEffectUsage__All        = 3,
	EStatusEffectUsage__EStatusEffectUsage_MAX = 4
};


// Enum GlimpseGame.ENewGamePlaystyle
enum class ENewGamePlaystyle : uint8_t
{
	ENewGamePlaystyle__Easy        = 0,
	ENewGamePlaystyle__Normal      = 1,
	ENewGamePlaystyle__Hard        = 2,
	ENewGamePlaystyle__Custom      = 3,
	ENewGamePlaystyle__ENewGamePlaystyle_MAX = 4
};


// Enum GlimpseGame.ENewGameCharacter
enum class ENewGameCharacter : uint8_t
{
	ENewGameCharacter__Arthur      = 0,
	ENewGameCharacter__Sally       = 1,
	ENewGameCharacter__Oliver      = 2,
	ENewGameCharacter__Roger       = 3,
	ENewGameCharacter__Nick        = 4,
	ENewGameCharacter__Victoria    = 5,
	ENewGameCharacter__Bobby       = 6,
	ENewGameCharacter__Sandbox     = 7,
	ENewGameCharacter__ENewGameCharacter_MAX = 8
};


// Enum GlimpseGame.ENewGameMode
enum class ENewGameMode : uint8_t
{
	ENewGameMode__Sandbox          = 0,
	ENewGameMode__Story            = 1,
	ENewGameMode__DLCStory         = 2,
	ENewGameMode__Survival         = 3,
	ENewGameMode__Wellie           = 4,
	ENewGameMode__ENewGameMode_MAX = 5
};


// Enum GlimpseGame.EHUDNPCSuspicion
enum class EHUDNPCSuspicion : uint8_t
{
	EHUDNPCSuspicion__Aware        = 0,
	EHUDNPCSuspicion__Inquisitive_NotConforming = 1,
	EHUDNPCSuspicion__Inquisitive_Conforming = 2,
	EHUDNPCSuspicion__Hostile      = 3,
	EHUDNPCSuspicion__MAX_EHUDNPCSuspicion = 4,
	EHUDNPCSuspicion__EHUDNPCSuspicion_MAX = 5
};


// Enum GlimpseGame.ETheatreCollectibleCategory
enum class ETheatreCollectibleCategory : uint8_t
{
	ETheatreCollectibleCategory__Movie = 0,
	ETheatreCollectibleCategory__Audio = 1,
	ETheatreCollectibleCategory__ETheatreCollectibleCategory_MAX = 2
};


// Enum GlimpseGame.EDeathScreen
enum class EDeathScreen : uint8_t
{
	EDeathScreen__None             = 0,
	EDeathScreen__Combat           = 1,
	EDeathScreen__Falling          = 2,
	EDeathScreen__Bleeding         = 3,
	EDeathScreen__Hunger           = 4,
	EDeathScreen__Thirst           = 5,
	EDeathScreen__Drowning         = 6,
	EDeathScreen__FoodPoisoning    = 7,
	EDeathScreen__Plague           = 8,
	EDeathScreen__ChildNeglect     = 9,
	EDeathScreen__AbnormalBloodSugar = 10,
	EDeathScreen__TimeOutPAX       = 11,
	EDeathScreen__WinPAX           = 12,
	EDeathScreen__IntroPAX         = 13,
	EDeathScreen__EDeathScreen_MAX = 14
};


// Enum GlimpseGame.EMappingGroup
enum class EMappingGroup : uint8_t
{
	EMappingGroup__Gameplay        = 0,
	EMappingGroup__UI              = 1,
	EMappingGroup__EInputGroup_MAX = 2,
	EMappingGroup__EMappingGroup_MAX = 3
};


// Enum GlimpseGame.EGlimpseMapPOI
enum class EGlimpseMapPOI : uint8_t
{
	EGlimpseMapPOI__Shelter        = 0,
	EGlimpseMapPOI__Landmark       = 1,
	EGlimpseMapPOI__Encounter      = 2,
	EGlimpseMapPOI__Objective      = 3,
	EGlimpseMapPOI__House          = 4,
	EGlimpseMapPOI__Shop           = 5,
	EGlimpseMapPOI__Water          = 6,
	EGlimpseMapPOI__Motilene       = 7,
	EGlimpseMapPOI__DigSpot        = 8,
	EGlimpseMapPOI__ToxicFog       = 9,
	EGlimpseMapPOI__MechanicalCraftingTable = 10,
	EGlimpseMapPOI__ChemicalCraftingTable = 11,
	EGlimpseMapPOI__JoyBooth       = 12,
	EGlimpseMapPOI__FastTravel     = 13,
	EGlimpseMapPOI__Custom         = 14,
	EGlimpseMapPOI__EGlimpseMapPOI_MAX = 15
};


// Enum GlimpseGame.EInventoryListCountPosition
enum class EInventoryListCountPosition : uint8_t
{
	EInventoryListCountPosition__BeforeItem = 0,
	EInventoryListCountPosition__OnItem = 1,
	EInventoryListCountPosition__InlineText = 2,
	EInventoryListCountPosition__EInventoryListCountPosition_MAX = 3
};


// Enum GlimpseGame.EToolTipSide
enum class EToolTipSide : uint8_t
{
	EToolTipSide__Left             = 0,
	EToolTipSide__Right            = 1,
	EToolTipSide__EToolTipSide_MAX = 2
};


// Enum GlimpseGame.EDiscoveryPreset
enum class EDiscoveryPreset : uint8_t
{
	EDiscoveryPreset__StoryActive  = 0,
	EDiscoveryPreset__StoryFailed  = 1,
	EDiscoveryPreset__StoryComplete = 2,
	EDiscoveryPreset__EncounterActive = 3,
	EDiscoveryPreset__EncounterFailed = 4,
	EDiscoveryPreset__EncounterComplete = 5,
	EDiscoveryPreset__Location     = 6,
	EDiscoveryPreset__Timestamp    = 7,
	EDiscoveryPreset__EDiscoveryPreset_MAX = 8
};


// Enum GlimpseGame.EDiscoveryIcon
enum class EDiscoveryIcon : uint8_t
{
	EDiscoveryIcon__None           = 0,
	EDiscoveryIcon__WellingtonWells = 1,
	EDiscoveryIcon__Ministry       = 2,
	EDiscoveryIcon__EDiscoveryIcon_MAX = 3
};


// Enum GlimpseGame.EPlayerMenu
enum class EPlayerMenu : uint8_t
{
	EPlayerMenu__Status            = 0,
	EPlayerMenu__SkillTree         = 1,
	EPlayerMenu__Inventory         = 2,
	EPlayerMenu__Crafting          = 3,
	EPlayerMenu__Map               = 4,
	EPlayerMenu__Journal           = 5,
	EPlayerMenu__Notes             = 6,
	EPlayerMenu__EPlayerMenu_MAX   = 7
};


// Enum GlimpseGame.EIconBoxSide
enum class EIconBoxSide : uint8_t
{
	EIconBoxSide__Left             = 0,
	EIconBoxSide__Right            = 1,
	EIconBoxSide__EIconBoxSide_MAX = 2
};


// Enum GlimpseGame.EGlimpseWeatherFixedState
enum class EGlimpseWeatherFixedState : uint8_t
{
	EGlimpseWeatherFixedState__Custom = 0,
	EGlimpseWeatherFixedState__Clear = 1,
	EGlimpseWeatherFixedState__Overcast = 2,
	EGlimpseWeatherFixedState__Foggy = 3,
	EGlimpseWeatherFixedState__Raining = 4,
	EGlimpseWeatherFixedState__EGlimpseWeatherFixedState_MAX = 5
};


// Enum GlimpseGame.QuestRewardType
enum class EQuestRewardType : uint8_t
{
	QuestRewardType__None          = 0,
	QuestRewardType__Money         = 1,
	QuestRewardType__Pickup        = 2,
	QuestRewardType__QuestRewardType_MAX = 3
};


// Enum GlimpseGame.EQuestSelectorType
enum class EQuestSelectorType : uint8_t
{
	EQuestSelectorType__Prerequisite = 0,
	EQuestSelectorType__Active     = 1,
	EQuestSelectorType__UntilStarted = 2,
	EQuestSelectorType__UntilFinished = 3,
	EQuestSelectorType__EQuestSelectorType_MAX = 4
};


// Enum GlimpseGame.EGlimpseStreamingLevelState
enum class EGlimpseStreamingLevelState : uint8_t
{
	EGlimpseStreamingLevelState__Evicted = 0,
	EGlimpseStreamingLevelState__Loading = 1,
	EGlimpseStreamingLevelState__Loaded = 2,
	EGlimpseStreamingLevelState__Showing = 3,
	EGlimpseStreamingLevelState__Visible = 4,
	EGlimpseStreamingLevelState__Hiding = 5,
	EGlimpseStreamingLevelState__Unloading = 6,
	EGlimpseStreamingLevelState__Failed = 7,
	EGlimpseStreamingLevelState__EGlimpseStreamingLevelState_MAX = 8
};


// Enum GlimpseGame.EGlimpseStreamingRequest
enum class EGlimpseStreamingRequest : uint8_t
{
	EGlimpseStreamingRequest__Evicted = 0,
	EGlimpseStreamingRequest__Resident = 1,
	EGlimpseStreamingRequest__DontCare = 2,
	EGlimpseStreamingRequest__EGlimpseStreamingRequest_MAX = 3
};


// Enum GlimpseGame.ESaveDataActorType
enum class ESaveDataActorType : uint8_t
{
	ESaveDataActorType__None       = 0,
	ESaveDataActorType__LoosePickup = 1,
	ESaveDataActorType__Lootable   = 2,
	ESaveDataActorType__Blueprint  = 3,
	ESaveDataActorType__StaticNPC  = 4,
	ESaveDataActorType__Corpse     = 5,
	ESaveDataActorType__Lockable   = 6,
	ESaveDataActorType__SpawnModel = 7,
	ESaveDataActorType__ESaveDataActorType_MAX = 8
};


// Enum GlimpseGame.EGlimpseZoningFeature
enum class EGlimpseZoningFeature : uint8_t
{
	EGlimpseZoningFeature__River   = 0,
	EGlimpseZoningFeature__Railroad = 1,
	EGlimpseZoningFeature__Wall    = 2,
	EGlimpseZoningFeature__EGlimpseZoningFeature_MAX = 3
};


// Enum GlimpseGame.EGlimpseHighwayPatrol
enum class EGlimpseHighwayPatrol : uint8_t
{
	EGlimpseHighwayPatrol__Road    = 0,
	EGlimpseHighwayPatrol__Corner  = 1,
	EGlimpseHighwayPatrol__Block   = 2,
	EGlimpseHighwayPatrol__Street  = 3,
	EGlimpseHighwayPatrol__EGlimpseHighwayPatrol_MAX = 4
};


// Enum GlimpseGame.EGlimpseHighwayAgent
enum class EGlimpseHighwayAgent : uint8_t
{
	EGlimpseHighwayAgent__Character = 0,
	EGlimpseHighwayAgent__Vehicle  = 1,
	EGlimpseHighwayAgent__EGlimpeHighwayAgent_MAX = 2,
	EGlimpseHighwayAgent__EGlimpseHighwayAgent_MAX = 3
};


// Enum GlimpseGame.EGlimpseAITableType
enum class EGlimpseAITableType : uint8_t
{
	EGlimpseAITableType__Population = 0,
	EGlimpseAITableType__Patrol    = 1,
	EGlimpseAITableType__EGlimpseAITableType_MAX = 2
};


// Enum GlimpseGame.ESubtitleArchetype
enum class ESubtitleArchetype : uint8_t
{
	ESubtitleArchetype__None       = 0,
	ESubtitleArchetype__ClosedCaption = 1,
	ESubtitleArchetype__Arthur     = 2,
	ESubtitleArchetype__Sally      = 3,
	ESubtitleArchetype__Ollie      = 4,
	ESubtitleArchetype__Byng       = 5,
	ESubtitleArchetype__Victoria   = 6,
	ESubtitleArchetype__Roger      = 7,
	ESubtitleArchetype__Nick       = 8,
	ESubtitleArchetype__Percy      = 9,
	ESubtitleArchetype__Verloc     = 10,
	ESubtitleArchetype__WastrelMale = 11,
	ESubtitleArchetype__WastrelFemale = 12,
	ESubtitleArchetype__WellieMale = 13,
	ESubtitleArchetype__WellieFemale = 14,
	ESubtitleArchetype__Bobby      = 15,
	ESubtitleArchetype__Crier      = 16,
	ESubtitleArchetype__Doctor     = 17,
	ESubtitleArchetype__ImageCaption = 18,
	ESubtitleArchetype__DeathCaption = 19,
	ESubtitleArchetype__MainCharacter = 20,
	ESubtitleArchetype__Ticker     = 21,
	ESubtitleArchetype__Error      = 22,
	ESubtitleArchetype__ESubtitleArchetype_MAX = 23
};


// Enum GlimpseGame.EBarkPriority
enum class EBarkPriority : uint8_t
{
	EBarkPriority__Ambient         = 0,
	EBarkPriority__Gameplay        = 1,
	EBarkPriority__Quest           = 2,
	EBarkPriority__EBarkPriority_MAX = 3
};


// Enum GlimpseGame.EPlayerAudioDrugState
enum class EPlayerAudioDrugState : uint8_t
{
	EPlayerAudioDrugState__None    = 0,
	EPlayerAudioDrugState__Joyed   = 1,
	EPlayerAudioDrugState__Comedown = 2,
	EPlayerAudioDrugState__Overdose = 3,
	EPlayerAudioDrugState__Crash   = 4,
	EPlayerAudioDrugState__MAX     = 5,
	EPlayerAudioDrugState__EPlayerAudioDrugState_MAX = 6
};


// Enum GlimpseGame.EJoyMusicState
enum class EJoyMusicState : uint8_t
{
	EJoyMusicState__Basic          = 0,
	EJoyMusicState__Suspicion      = 1,
	EJoyMusicState__Fight          = 2,
	EJoyMusicState__EJoyMusicState_MAX = 3
};


// Enum GlimpseGame.EMusicState
enum class EMusicState : uint8_t
{
	EMusicState__Stopped           = 0,
	EMusicState__Menu              = 1,
	EMusicState__Silent            = 2,
	EMusicState__Village           = 3,
	EMusicState__Wastes            = 4,
	EMusicState__EmeraldCity       = 5,
	EMusicState__Suspicion         = 6,
	EMusicState__Fight             = 7,
	EMusicState__Joy               = 8,
	EMusicState__JoySpeed          = 9,
	EMusicState__LS_Happy          = 10,
	EMusicState__LS_Garden         = 11,
	EMusicState__LS_Village        = 12,
	EMusicState__LS_Stopped        = 13,
	EMusicState__Credits           = 14,
	EMusicState__LS_Houseboys      = 15,
	EMusicState__LS_Lightbearer    = 16,
	EMusicState__LS_Victoria       = 17,
	EMusicState__LB_Suspicion_Fight = 18,
	EMusicState__EMusicState_MAX   = 19
};


// Enum GlimpseGame.EHeartbeat
enum class EHeartbeat : uint8_t
{
	EHeartbeat__None               = 0,
	EHeartbeat__Slow               = 1,
	EHeartbeat__Quick              = 2,
	EHeartbeat__EHeartbeat_MAX     = 3
};


// Enum GlimpseGame.EGlimpseNoiseEvent
enum class EGlimpseNoiseEvent : uint8_t
{
	EGlimpseNoiseEvent__Awakening  = 0,
	EGlimpseNoiseEvent__WeakSuspicious = 1,
	EGlimpseNoiseEvent__NormalSuspicious = 2,
	EGlimpseNoiseEvent__StrongSuspicious = 3,
	EGlimpseNoiseEvent__WeakStamina = 4,
	EGlimpseNoiseEvent__NormalStamina = 5,
	EGlimpseNoiseEvent__StrongStamina = 6,
	EGlimpseNoiseEvent__WeakNoise  = 7,
	EGlimpseNoiseEvent__NormalNoise = 8,
	EGlimpseNoiseEvent__StrongNoise = 9,
	EGlimpseNoiseEvent__CustomNoise = 10,
	EGlimpseNoiseEvent__WeakestStamina = 11,
	EGlimpseNoiseEvent__Event_MAX  = 12,
	EGlimpseNoiseEvent__EGlimpseNoiseEvent_MAX = 13
};


// Enum GlimpseGame.EGlimpseResignReason
enum class EGlimpseResignReason : uint8_t
{
	EGlimpseResignReason__NotSuspicious = 0,
	EGlimpseResignReason__PostSuspicion = 1,
	EGlimpseResignReason__FleeTarget = 2,
	EGlimpseResignReason__WearableConform = 3,
	EGlimpseResignReason__CarryCorpseConform = 4,
	EGlimpseResignReason__WeaponConform = 5,
	EGlimpseResignReason__TrespassingConform = 6,
	EGlimpseResignReason__DrugConform = 7,
	EGlimpseResignReason__AnnoyedConform = 8,
	EGlimpseResignReason__SearchExpired = 9,
	EGlimpseResignReason__CorpseExpired = 10,
	EGlimpseResignReason__AlarmExpired = 11,
	EGlimpseResignReason__DistractionExpired = 12,
	EGlimpseResignReason__HittingConform = 13,
	EGlimpseResignReason__NoAggroSuspicionExpired = 14,
	EGlimpseResignReason__Event_MAX = 15,
	EGlimpseResignReason__EGlimpseResignReason_MAX = 16
};


// Enum GlimpseGame.EGlimpseSuspicionReason
enum class EGlimpseSuspicionReason : uint8_t
{
	EGlimpseSuspicionReason__InstantSuspicion = 0,
	EGlimpseSuspicionReason__ProximityReaction = 1,
	EGlimpseSuspicionReason__SightReaction = 2,
	EGlimpseSuspicionReason__NoiseReaction = 3,
	EGlimpseSuspicionReason__WearableInquiry = 4,
	EGlimpseSuspicionReason__CarryCorpseInquiry = 5,
	EGlimpseSuspicionReason__WeaponInquiry = 6,
	EGlimpseSuspicionReason__TrespassingInquiry = 7,
	EGlimpseSuspicionReason__DrugInquiry = 8,
	EGlimpseSuspicionReason__JoinInquiry = 9,
	EGlimpseSuspicionReason__FailInquiry = 10,
	EGlimpseSuspicionReason__CurfewHostile = 11,
	EGlimpseSuspicionReason__ThiefHostile = 12,
	EGlimpseSuspicionReason__MurdererHostile = 13,
	EGlimpseSuspicionReason__JoinHostile = 14,
	EGlimpseSuspicionReason__SearchTarget = 15,
	EGlimpseSuspicionReason__TargetFound = 16,
	EGlimpseSuspicionReason__CorpseInteract = 17,
	EGlimpseSuspicionReason__AlarmInteract = 18,
	EGlimpseSuspicionReason__DistractionInteract = 19,
	EGlimpseSuspicionReason__ProximityTrespassing = 20,
	EGlimpseSuspicionReason__AnnoyedInquiry = 21,
	EGlimpseSuspicionReason__SmellReaction = 22,
	EGlimpseSuspicionReason__VandalHostile = 23,
	EGlimpseSuspicionReason__HittingInquiry = 24,
	EGlimpseSuspicionReason__HostileTeam = 25,
	EGlimpseSuspicionReason__EGlimpseSuspicionReason_MAX = 26
};


// Enum GlimpseGame.EGlimpseSuspicionPriority
enum class EGlimpseSuspicionPriority : uint8_t
{
	EGlimpseSuspicionPriority__None = 0,
	EGlimpseSuspicionPriority__ComplimentMachine = 1,
	EGlimpseSuspicionPriority__Broadcast = 2,
	EGlimpseSuspicionPriority__Corpse = 3,
	EGlimpseSuspicionPriority__Distraction = 4,
	EGlimpseSuspicionPriority__Alarm = 5,
	EGlimpseSuspicionPriority__AIPickup = 6,
	EGlimpseSuspicionPriority__AICharacter = 7,
	EGlimpseSuspicionPriority__Summon = 8,
	EGlimpseSuspicionPriority__PlayerPickup = 9,
	EGlimpseSuspicionPriority__PlayerCharacter = 10,
	EGlimpseSuspicionPriority__DeadPlayer = 11,
	EGlimpseSuspicionPriority__EGlimpseSuspicionPriority_MAX = 12
};


// Enum GlimpseGame.EGlimpseAnnoyingState
enum class EGlimpseAnnoyingState : uint8_t
{
	EGlimpseAnnoyingState__ForgetAction = 0,
	EGlimpseAnnoyingState__PendingInquiry = 1,
	EGlimpseAnnoyingState__SucceedInquiry = 2,
	EGlimpseAnnoyingState__RepeatAction = 3,
	EGlimpseAnnoyingState__FailureInquiry = 4,
	EGlimpseAnnoyingState__Event_MAX = 5,
	EGlimpseAnnoyingState__EGlimpseAnnoyingState_MAX = 6
};


// Enum GlimpseGame.EGlimpseSuspicionAlarm
enum class EGlimpseSuspicionAlarm : uint8_t
{
	EGlimpseSuspicionAlarm__Attractor = 0,
	EGlimpseSuspicionAlarm__JoyDetector = 1,
	EGlimpseSuspicionAlarm__Broadcast = 2,
	EGlimpseSuspicionAlarm__BossFight = 3,
	EGlimpseSuspicionAlarm__EGlimpseSuspicionAlarm_MAX = 4
};


// Enum GlimpseGame.ETelemetryStates
enum class ETelemetryStates : uint8_t
{
	ETelemetryStates__Birdwatcher  = 0,
	ETelemetryStates__Downer       = 1,
	ETelemetryStates__Vigilante    = 2,
	ETelemetryStates__ETelemetryStates_MAX = 3
};


// Enum GlimpseGame.ESkillStatEvent
enum class ESkillStatEvent : uint8_t
{
	ESkillStatEvent__SkillAcquired = 0,
	ESkillStatEvent__ESkillStatEvent_MAX = 1
};


// Enum GlimpseGame.ESuspicionStatEvent
enum class ESuspicionStatEvent : uint8_t
{
	ESuspicionStatEvent__NPC_Distracted = 0,
	ESuspicionStatEvent__MAX       = 1,
	ESuspicionStatEvent__ESuspicionStatEvent_MAX = 2
};


// Enum GlimpseGame.ELocationStatEvent
enum class ELocationStatEvent : uint8_t
{
	ELocationStatEvent__ChangeZone = 0,
	ELocationStatEvent__MAX        = 1,
	ELocationStatEvent__ELocationStatEvent_MAX = 2
};


// Enum GlimpseGame.EQuestStatEvent
enum class EQuestStatEvent : uint8_t
{
	EQuestStatEvent__Quest_Succeeded = 0,
	EQuestStatEvent__Quest_Failed  = 1,
	EQuestStatEvent__Quest_Activated = 2,
	EQuestStatEvent__Quest_ObjectiveComplete = 3,
	EQuestStatEvent__MAX           = 4,
	EQuestStatEvent__EQuestStatEvent_MAX = 5
};


// Enum GlimpseGame.EPickupStatEvent
enum class EPickupStatEvent : uint8_t
{
	EPickupStatEvent__World        = 0,
	EPickupStatEvent__Container    = 1,
	EPickupStatEvent__Retrieved    = 2,
	EPickupStatEvent__Bought       = 3,
	EPickupStatEvent__Crafted      = 4,
	EPickupStatEvent__Remainder    = 5,
	EPickupStatEvent__Scrap        = 6,
	EPickupStatEvent__Rewarded     = 7,
	EPickupStatEvent__Cheat        = 8,
	EPickupStatEvent__MoneyIn      = 9,
	EPickupStatEvent__Used         = 10,
	EPickupStatEvent__Consumed     = 11,
	EPickupStatEvent__Broken       = 12,
	EPickupStatEvent__Thrown       = 13,
	EPickupStatEvent__Dropped      = 14,
	EPickupStatEvent__Stored       = 15,
	EPickupStatEvent__Stashed      = 16,
	EPickupStatEvent__Sold         = 17,
	EPickupStatEvent__TurnedIn     = 18,
	EPickupStatEvent__Respawn      = 19,
	EPickupStatEvent__MoneyOut     = 20,
	EPickupStatEvent__Spawned      = 21,
	EPickupStatEvent__Equipped     = 22,
	EPickupStatEvent__Unequipped   = 23,
	EPickupStatEvent__EPickupStatEvent_MAX = 24
};


// Enum GlimpseGame.EStatusStatEvent
enum class EStatusStatEvent : uint8_t
{
	EStatusStatEvent__Applied      = 0,
	EStatusStatEvent__StacksChanged = 1,
	EStatusStatEvent__Removed      = 2,
	EStatusStatEvent__RefreshTelemetry = 3,
	EStatusStatEvent__EStatusStatEvent_MAX = 4
};


// Enum GlimpseGame.EGlimpseImageCaptionTarget
enum class EGlimpseImageCaptionTarget : uint8_t
{
	EGlimpseImageCaptionTarget__None = 0,
	EGlimpseImageCaptionTarget__MaterialInstance = 1,
	EGlimpseImageCaptionTarget__ImageCaptionComponent = 2,
	EGlimpseImageCaptionTarget__EGlimpseImageCaptionTarget_MAX = 3
};


// Enum GlimpseGame.EGlimpsePlayerInput
enum class EGlimpsePlayerInput : uint8_t
{
	EGlimpsePlayerInput__Sprint    = 0,
	EGlimpsePlayerInput__Combat    = 1,
	EGlimpsePlayerInput__MovementAndCamera = 2,
	EGlimpsePlayerInput__Movement  = 3,
	EGlimpsePlayerInput__EGlimpsePlayerInput_MAX = 4
};


// Enum GlimpseGame.ECombatMoveTrigger
enum class ECombatMoveTrigger : uint8_t
{
	ECombatMoveTrigger__Attack     = 0,
	ECombatMoveTrigger__Interact   = 1,
	ECombatMoveTrigger__SecondInteract = 2,
	ECombatMoveTrigger__ECombatMoveTrigger_MAX = 3
};


// Enum GlimpseGame.ECombatMoveType
enum class ECombatMoveType : uint8_t
{
	ECombatMoveType__Any           = 0,
	ECombatMoveType__Unarmed       = 1,
	ECombatMoveType__AnyMelee      = 2,
	ECombatMoveType__OneHandMelee  = 3,
	ECombatMoveType__TwoHandMelee  = 4,
	ECombatMoveType__Bayonette     = 5,
	ECombatMoveType__Throw         = 6,
	ECombatMoveType__WeaponSpecific = 7,
	ECombatMoveType__PickupSpecific = 8,
	ECombatMoveType__HideWeapon    = 9,
	ECombatMoveType__SpecialMove   = 10,
	ECombatMoveType__TwoHandedBoneSaw = 11,
	ECombatMoveType__ECombatMoveType_MAX = 12
};


// Enum GlimpseGame.ECharacterLanding
enum class ECharacterLanding : uint8_t
{
	ECharacterLanding__None        = 0,
	ECharacterLanding__Soft        = 1,
	ECharacterLanding__Hard        = 2,
	ECharacterLanding__Brutal      = 3,
	ECharacterLanding__ECharacterLanding_MAX = 4
};


// Enum GlimpseGame.EGlimpseInteractionNoise
enum class EGlimpseInteractionNoise : uint8_t
{
	EGlimpseInteractionNoise__WithoutNoise = 0,
	EGlimpseInteractionNoise__WeakNoise = 1,
	EGlimpseInteractionNoise__NormalNoise = 2,
	EGlimpseInteractionNoise__StrongNoise = 3,
	EGlimpseInteractionNoise__SuspiciousNoise = 4,
	EGlimpseInteractionNoise__Event_MAX = 5,
	EGlimpseInteractionNoise__EGlimpseInteractionNoise_MAX = 6
};


// Enum GlimpseGame.UsageDeniedReason
enum class EUsageDeniedReason : uint8_t
{
	UsageDeniedReason__UsageAllowed = 0,
	UsageDeniedReason__NotNeeded   = 1,
	UsageDeniedReason__DeniedMisc  = 2,
	UsageDeniedReason__UsageDeniedReason_MAX = 3
};


// Enum GlimpseGame.EStatusEffectSelection
enum class EStatusEffectSelection : uint8_t
{
	EStatusEffectSelection__Add    = 0,
	EStatusEffectSelection__Remove = 1,
	EStatusEffectSelection__Set    = 2,
	EStatusEffectSelection__EStatusEffectSelection_MAX = 3
};


// Enum GlimpseGame.ERootMotionAnimType
enum class ERootMotionAnimType : uint8_t
{
	ERootMotionAnimType__Walk      = 0,
	ERootMotionAnimType__Run       = 1,
	ERootMotionAnimType__StrafeWalk = 2,
	ERootMotionAnimType__StrafeRight = 3,
	ERootMotionAnimType__StrafeRightRun = 4,
	ERootMotionAnimType__StrafeBack = 5,
	ERootMotionAnimType__Walk_Suspicious = 6,
	ERootMotionAnimType__Walk_Inquisitive = 7,
	ERootMotionAnimType__ERootMotionAnimType_MAX = 8
};


// Enum GlimpseGame.ELedgeGrabStyle
enum class ELedgeGrabStyle : uint8_t
{
	ELedgeGrabStyle__Never         = 0,
	ELedgeGrabStyle__Always        = 1,
	ELedgeGrabStyle__FromJumpOnly  = 2,
	ELedgeGrabStyle__HoldingJumpOnly = 3,
	ELedgeGrabStyle__ELedgeGrabStyle_MAX = 4
};


// Enum GlimpseGame.ECombatMoveScoreFail
enum class ECombatMoveScoreFail : uint8_t
{
	ECombatMoveScoreFail__Stamina  = 0,
	ECombatMoveScoreFail__Other    = 1,
	ECombatMoveScoreFail__MAX_CombatMoveScoreFail = 2,
	ECombatMoveScoreFail__ECombatMoveScoreFail_MAX = 3
};


// Enum GlimpseGame.ECharacterAnimationState
enum class ECharacterAnimationState : uint8_t
{
	ECharacterAnimationState__Standing = 0,
	ECharacterAnimationState__Combat = 1,
	ECharacterAnimationState__Sprinting = 2,
	ECharacterAnimationState__Crouching = 3,
	ECharacterAnimationState__Jumping = 4,
	ECharacterAnimationState__Landing = 5,
	ECharacterAnimationState__Dying = 6,
	ECharacterAnimationState__ECharacterAnimationState_MAX = 7
};


// Enum GlimpseGame.EGlimpseSkillTreeCategory
enum class EGlimpseSkillTreeCategory : uint8_t
{
	EGlimpseSkillTreeCategory__Personal1 = 0,
	EGlimpseSkillTreeCategory__Personal2 = 1,
	EGlimpseSkillTreeCategory__Survival = 2,
	EGlimpseSkillTreeCategory__Combat = 3,
	EGlimpseSkillTreeCategory__Stealth = 4,
	EGlimpseSkillTreeCategory__EGlimpseSkillCategory_MAX = 5,
	EGlimpseSkillTreeCategory__EGlimpseSkillTreeCategory_MAX = 6
};


// Enum GlimpseGame.EUnlockDirection
enum class EUnlockDirection : uint8_t
{
	EUnlockDirection__None         = 0,
	EUnlockDirection__Front        = 1,
	EUnlockDirection__Behind       = 2,
	EUnlockDirection__EUnlockAxis_MAX = 3,
	EUnlockDirection__EUnlockDirection_MAX = 4
};


// Enum GlimpseGame.ECanUnlock
enum class ECanUnlock : uint8_t
{
	ECanUnlock__Denied             = 0,
	ECanUnlock__HasKey             = 1,
	ECanUnlock__Directional        = 2,
	ECanUnlock__CanBash            = 3,
	ECanUnlock__CanCircumvent      = 4,
	ECanUnlock__ECanUnlock_MAX     = 5
};


// Enum GlimpseGame.ELockableState
enum class ELockableState : uint8_t
{
	ELockableState__Open           = 0,
	ELockableState__ClosedUnlocked = 1,
	ELockableState__ClosedLocked   = 2,
	ELockableState__Restricted     = 3,
	ELockableState__ELockableState_MAX = 4
};


// Enum GlimpseGame.ELockInteraction
enum class ELockInteraction : uint8_t
{
	ELockInteraction__Lock         = 0,
	ELockInteraction__Unlock       = 1,
	ELockInteraction__Lockpick     = 2,
	ELockInteraction__Force        = 3,
	ELockInteraction__ELockInteraction_MAX = 4
};


// Enum GlimpseGame.EOpenInteraction
enum class EOpenInteraction : uint8_t
{
	EOpenInteraction__Open         = 0,
	EOpenInteraction__OpenLocked   = 1,
	EOpenInteraction__Restricted   = 2,
	EOpenInteraction__EOpenInteraction_MAX = 3
};


// Enum GlimpseGame.ELootableState
enum class ELootableState : uint8_t
{
	ELootableState__None           = 0,
	ELootableState__StaticSpawned  = 1,
	ELootableState__Looted         = 2,
	ELootableState__ELootableState_MAX = 3
};


// Enum GlimpseGame.ELootInteraction
enum class ELootInteraction : uint8_t
{
	ELootInteraction__Search       = 0,
	ELootInteraction__SearchLocked = 1,
	ELootInteraction__SearchEmpty  = 2,
	ELootInteraction__ELootInteraction_MAX = 3
};


// Enum GlimpseGame.EAITickLevel
enum class EAITickLevel : uint8_t
{
	EAITickLevel__Normal           = 0,
	EAITickLevel__Mid              = 1,
	EAITickLevel__Low              = 2,
	EAITickLevel__EAITickLevel_MAX = 3
};


// Enum GlimpseGame.EGlimpseAIMovementMode
enum class EGlimpseAIMovementMode : uint8_t
{
	EGlimpseAIMovementMode__None   = 0,
	EGlimpseAIMovementMode__Cheapest = 1,
	EGlimpseAIMovementMode__Default = 2,
	EGlimpseAIMovementMode__EGlimpseAIMovementMode_MAX = 3
};


// Enum GlimpseGame.EDisappear
enum class EDisappear : uint8_t
{
	EDisappear__None               = 0,
	EDisappear__ForTheNight        = 1,
	EDisappear__ForTheDay          = 2,
	EDisappear__Despawn            = 3,
	EDisappear__EDisappear_MAX     = 4
};


// Enum GlimpseGame.EGlimpseSuspicionZone
enum class EGlimpseSuspicionZone : uint8_t
{
	EGlimpseSuspicionZone__Stealing = 0,
	EGlimpseSuspicionZone__Trespass = 1,
	EGlimpseSuspicionZone__Outdoors = 2,
	EGlimpseSuspicionZone__Disabled = 3,
	EGlimpseSuspicionZone__EGlimpseSuspicionZone_MAX = 4
};


// Enum GlimpseGame.ERoadPatrolType
enum class ERoadPatrolType : uint8_t
{
	ERoadPatrolType__Random        = 0,
	ERoadPatrolType__PingPong      = 1,
	ERoadPatrolType__Block         = 2,
	ERoadPatrolType__Both          = 3,
	ERoadPatrolType__ERoadPatrolType_MAX = 4
};


// Enum GlimpseGame.ECombatTaunt
enum class ECombatTaunt : uint8_t
{
	ECombatTaunt__MidCombat        = 0,
	ECombatTaunt__FriendlyHit      = 1,
	ECombatTaunt__FriendlyDoesHit  = 2,
	ECombatTaunt__Feint            = 3,
	ECombatTaunt__FeintInterrupted = 4,
	ECombatTaunt__ECombatTaunt_MAX = 5
};


// Enum GlimpseGame.EConditionVisibilityType
enum class EConditionVisibilityType : uint8_t
{
	EConditionVisibilityType__Children = 0,
	EConditionVisibilityType__Parent = 1,
	EConditionVisibilityType__EConditionVisibilityType_MAX = 2
};


// Enum GlimpseGame.ERecipeUnlock
enum class ERecipeUnlock : uint8_t
{
	ERecipeUnlock__None            = 0,
	ERecipeUnlock__UnlockIngredients = 1,
	ERecipeUnlock__UnlockRecipe    = 2,
	ERecipeUnlock__ERecipeUnlock_MAX = 3
};


// Enum GlimpseGame.EGlimpseDecoratorAIMode
enum class EGlimpseDecoratorAIMode : uint8_t
{
	EGlimpseDecoratorAIMode__Cycle = 0,
	EGlimpseDecoratorAIMode__Single = 1,
	EGlimpseDecoratorAIMode__EGlimpseDecoratorAIMode_MAX = 2
};


// Enum GlimpseGame.EDecoratorPOISchedule
enum class EDecoratorPOISchedule : uint8_t
{
	EDecoratorPOISchedule__DayOnly = 0,
	EDecoratorPOISchedule__NightOnly = 1,
	EDecoratorPOISchedule__AllTheTime = 2,
	EDecoratorPOISchedule__EDecoratorPOISchedule_MAX = 3
};


// Enum GlimpseGame.EFoot
enum class EFoot : uint8_t
{
	LeftFoot                       = 0,
	RightFoot                      = 1,
	EFoot_MAX                      = 2
};


// Enum GlimpseGame.EHeroStatEvent
enum class EHeroStatEvent : uint8_t
{
	EHeroStatEvent__SkillEarned    = 0,
	EHeroStatEvent__EnemyKilled    = 1,
	EHeroStatEvent__ProgressUpdated = 2,
	EHeroStatEvent__EHeroStatEvent_MAX = 3
};


// Enum GlimpseGame.EGlimpseAlley
enum class EGlimpseAlley : uint8_t
{
	EGlimpseAlley__Null            = 0,
	EGlimpseAlley__RoadAccess      = 1,
	EGlimpseAlley__BackLot         = 2,
	EGlimpseAlley__Tunnel          = 3,
	EGlimpseAlley__EGlimpseAlley_MAX = 4
};


// Enum GlimpseGame.EGlimpseCityBlockElement
enum class EGlimpseCityBlockElement : uint8_t
{
	EGlimpseCityBlockElement__Null = 0,
	EGlimpseCityBlockElement__Span = 1,
	EGlimpseCityBlockElement__Corner = 2,
	EGlimpseCityBlockElement__Used = 3,
	EGlimpseCityBlockElement__Blocked = 4,
	EGlimpseCityBlockElement__Alley = 5,
	EGlimpseCityBlockElement__Wall = 6,
	EGlimpseCityBlockElement__ShallowSpan = 7,
	EGlimpseCityBlockElement__EGlimpseCityBlockElement_MAX = 8
};


// Enum GlimpseGame.EGlimpseWorldConstraintRoadState
enum class EGlimpseWorldConstraintRoadState : uint8_t
{
	EGlimpseWorldConstraintRoadState__Optional = 0,
	EGlimpseWorldConstraintRoadState__Required = 1,
	EGlimpseWorldConstraintRoadState__Forbidden = 2,
	EGlimpseWorldConstraintRoadState__EGlimpseWorldConstraintRoadState_MAX = 3
};


// Enum GlimpseGame.EGlimpseWorldConstraint
enum class EGlimpseWorldConstraint : uint8_t
{
	EGlimpseWorldConstraint__Segment = 0,
	EGlimpseWorldConstraint__Intersection = 1,
	EGlimpseWorldConstraint__Circle = 2,
	EGlimpseWorldConstraint__Dedicated = 3,
	EGlimpseWorldConstraint__EGlimpseWorldConstraint_MAX = 4,
	EGlimpseWorldConstraint__None  = 5
};


// Enum GlimpseGame.EGlimpseFoliageClusterMode
enum class EGlimpseFoliageClusterMode : uint8_t
{
	EGlimpseFoliageClusterMode__Random = 0,
	EGlimpseFoliageClusterMode__Circular = 1,
	EGlimpseFoliageClusterMode__EGlimpseFoliageClusterMode_MAX = 2
};


// Enum GlimpseGame.EGlimpseFoliage
enum class EGlimpseFoliage : uint8_t
{
	EGlimpseFoliage__Grass         = 0,
	EGlimpseFoliage__Plant         = 1,
	EGlimpseFoliage__Tree          = 2,
	EGlimpseFoliage__EGlimpseFoliage_MAX = 3
};


// Enum GlimpseGame.EGraphicsQualitySetting
enum class EGraphicsQualitySetting : uint8_t
{
	EGraphicsQualitySetting__Preset = 0,
	EGraphicsQualitySetting__ViewDistance = 1,
	EGraphicsQualitySetting__AntiAliasing = 2,
	EGraphicsQualitySetting__Shadow = 3,
	EGraphicsQualitySetting__PostProcess = 4,
	EGraphicsQualitySetting__Texture = 5,
	EGraphicsQualitySetting__Effects = 6,
	EGraphicsQualitySetting__Light = 7,
	EGraphicsQualitySetting__Render = 8,
	EGraphicsQualitySetting__EGraphicsQualitySetting_MAX = 9
};


// Enum GlimpseGame.EGraphicsQuality
enum class EGraphicsQuality : uint8_t
{
	EGraphicsQuality__Low          = 0,
	EGraphicsQuality__Medium       = 1,
	EGraphicsQuality__High         = 2,
	EGraphicsQuality__Ultra        = 3,
	EGraphicsQuality__Custom       = 4,
	EGraphicsQuality__Auto         = 5,
	EGraphicsQuality__EGraphicsQuality_MAX = 6
};


// Enum GlimpseGame.ERenderQuality
enum class ERenderQuality : uint8_t
{
	ERenderQuality__Render720P     = 0,
	ERenderQuality__Render900P     = 1,
	ERenderQuality__Render1080P    = 2,
	ERenderQuality__RenderNative   = 3,
	ERenderQuality__ERenderQuality_MAX = 4
};


// Enum GlimpseGame.EFrameRateLimit
enum class EFrameRateLimit : uint8_t
{
	EFrameRateLimit__Smoothed60    = 0,
	EFrameRateLimit__Capped30      = 1,
	EFrameRateLimit__Capped50      = 2,
	EFrameRateLimit__Capped60      = 3,
	EFrameRateLimit__Capped72      = 4,
	EFrameRateLimit__Capped120     = 5,
	EFrameRateLimit__Unlimited     = 6,
	EFrameRateLimit__EFrameRateLimit_MAX = 7
};


// Enum GlimpseGame.EDrugEffectVisual
enum class EDrugEffectVisual : uint8_t
{
	EDrugEffectVisual__Joy         = 0,
	EDrugEffectVisual__JoyWithdrawal = 1,
	EDrugEffectVisual__JoyCrash    = 2,
	EDrugEffectVisual__JoyOverdose = 3,
	EDrugEffectVisual__EDrugEffect_MAX = 4,
	EDrugEffectVisual__EDrugEffectVisual_MAX = 5
};


// Enum GlimpseGame.EDayPeriod
enum class EDayPeriod : uint8_t
{
	EDayPeriod__Daytime            = 0,
	EDayPeriod__Twilight           = 1,
	EDayPeriod__Night              = 2,
	EDayPeriod__EDayPeriod_MAX     = 3
};


// Enum GlimpseGame.ELoadSaveAllowed
enum class ELoadSaveAllowed : uint8_t
{
	ELoadSaveAllowed__Success      = 0,
	ELoadSaveAllowed__Fail_MapNotInstalled = 1,
	ELoadSaveAllowed__Fail_DataMissing = 2,
	ELoadSaveAllowed__Fail_DataBroken = 3,
	ELoadSaveAllowed__ELoadSaveAllowed_MAX = 4
};


// Enum GlimpseGame.EFastTravelError
enum class EFastTravelError : uint8_t
{
	EFastTravelError__OnlyOnePointActive = 0,
	EFastTravelError__MAX          = 1,
	EFastTravelError__EFastTravelError_MAX = 2
};


// Enum GlimpseGame.EGlimpseFogState
enum class EGlimpseFogState : uint8_t
{
	EGlimpseFogState__DetectExclusionZone = 0,
	EGlimpseFogState__DisabledByTimeOfDay = 1,
	EGlimpseFogState__PlayerUnderEffect = 2,
	EGlimpseFogState__PlayerInExclusion = 3,
	EGlimpseFogState__PlayerWithinRadius = 4,
	EGlimpseFogState__PlayerOutOfRange = 5,
	EGlimpseFogState__EGlimpseFogState_MAX = 6
};


// Enum GlimpseGame.EGlimpseFogTimeOfDay
enum class EGlimpseFogTimeOfDay : uint8_t
{
	EGlimpseFogTimeOfDay__OnlyAtNight = 0,
	EGlimpseFogTimeOfDay__AllDayLong = 1,
	EGlimpseFogTimeOfDay__EGlimpseFogTimeOfDay_MAX = 2
};


// Enum GlimpseGame.EGlimpseGridLayoutRule
enum class EGlimpseGridLayoutRule : uint8_t
{
	EGlimpseGridLayoutRule__Adjacent = 0,
	EGlimpseGridLayoutRule__NotAdjacent = 1,
	EGlimpseGridLayoutRule__EGlimpseGridLayoutRule_MAX = 2
};


// Enum GlimpseGame.EGlimpseTagType
enum class EGlimpseTagType : uint8_t
{
	TAGTYPE_Bounds                 = 0,
	TAGTYPE_Peer                   = 1,
	TAGTYPE_Road                   = 2,
	TAGTYPE_Alley                  = 3,
	TAGTYPE_Exclude                = 4,
	TAGTYPE_Zoning                 = 5,
	TAGTYPE_Other                  = 6,
	TAGTYPE_RoadPattern            = 7,
	TAGTYPE_BuildingFootprint      = 8,
	TAGTYPE_Max                    = 9
};


// Enum GlimpseGame.EGlimpseTagDirection
enum class EGlimpseTagDirection : uint8_t
{
	TAGDIR_In                      = 0,
	TAGDIR_Out                     = 1,
	TAGDIR_MAX                     = 2
};


// Enum GlimpseGame.EGlimpseFeatureRefType
enum class EGlimpseFeatureRefType : uint8_t
{
	EGlimpseFeatureRefType__Primary = 0,
	EGlimpseFeatureRefType__Secondary = 1,
	EGlimpseFeatureRefType__Optional = 2,
	EGlimpseFeatureRefType__ByDependencyOnly = 3,
	EGlimpseFeatureRefType__Anchor = 4,
	EGlimpseFeatureRefType__LastPrimary = 5,
	EGlimpseFeatureRefType__All    = 6,
	EGlimpseFeatureRefType__EGlimpseFeatureRefType_MAX = 7
};


// Enum GlimpseGame.EGlimpseClusterTerrainConstraint
enum class EGlimpseClusterTerrainConstraint : uint8_t
{
	EGlimpseClusterTerrainConstraint__Flat = 0,
	EGlimpseClusterTerrainConstraint__Indifferent = 1,
	EGlimpseClusterTerrainConstraint__Mound = 2,
	EGlimpseClusterTerrainConstraint__EGlimpseClusterTerrainConstraint_MAX = 3
};


// Enum GlimpseGame.EGlimpseClusteringType
enum class EGlimpseClusteringType : uint8_t
{
	EGlimpseClusteringType__Circle = 0,
	EGlimpseClusteringType__Disc   = 1,
	EGlimpseClusteringType__SlantedDiamond = 2,
	EGlimpseClusteringType__EGlimpseClusteringType_MAX = 3
};


// Enum GlimpseGame.EMessageBox
enum class EMessageBox : uint8_t
{
	EMessageBox__Confirm           = 0,
	EMessageBox__ConfirmCancel     = 1,
	EMessageBox__EMessageBox_MAX   = 2
};


// Enum GlimpseGame.EGlimpseSandboxPermaDeath
enum class EGlimpseSandboxPermaDeath : uint8_t
{
	EGlimpseSandboxPermaDeath__Inactive = 0,
	EGlimpseSandboxPermaDeath__Active = 1,
	EGlimpseSandboxPermaDeath__EGlimpseSandboxPermaDeath_MAX = 2
};


// Enum GlimpseGame.EGlimpseSandboxPopulation
enum class EGlimpseSandboxPopulation : uint8_t
{
	EGlimpseSandboxPopulation__Absent = 0,
	EGlimpseSandboxPopulation__Low = 1,
	EGlimpseSandboxPopulation__Normal = 2,
	EGlimpseSandboxPopulation__Overpopulated = 3,
	EGlimpseSandboxPopulation__EGlimpseSandboxPopulation_MAX = 4
};


// Enum GlimpseGame.EGlimpseSandboxInventory
enum class EGlimpseSandboxInventory : uint8_t
{
	EGlimpseSandboxInventory__Empty = 0,
	EGlimpseSandboxInventory__Starter_Kit = 1,
	EGlimpseSandboxInventory__Opulent = 2,
	EGlimpseSandboxInventory__EGlimpseSandboxInventory_MAX = 3
};


// Enum GlimpseGame.EGlimpseSandboxHeightVariation
enum class EGlimpseSandboxHeightVariation : uint8_t
{
	EGlimpseSandboxHeightVariation__AlmostFlat = 0,
	EGlimpseSandboxHeightVariation__Dangerous = 1,
	EGlimpseSandboxHeightVariation__Unprofessional = 2,
	EGlimpseSandboxHeightVariation__EGlimpseSandboxHeightVariation_MAX = 3
};


// Enum GlimpseGame.EGlimpseSandboxLayout
enum class EGlimpseSandboxLayout : uint8_t
{
	EGlimpseSandboxLayout__Linear  = 0,
	EGlimpseSandboxLayout__Graph   = 1,
	EGlimpseSandboxLayout__EGlimpseSandboxLayout_MAX = 2
};


// Enum GlimpseGame.EGlimpseSandboxDifficultyLevel
enum class EGlimpseSandboxDifficultyLevel : uint8_t
{
	EGlimpseSandboxDifficultyLevel__Easy = 0,
	EGlimpseSandboxDifficultyLevel__Normal = 1,
	EGlimpseSandboxDifficultyLevel__Hard = 2,
	EGlimpseSandboxDifficultyLevel__EGlimpseSandboxDifficultyLevel_MAX = 3
};


// Enum GlimpseGame.EGlimpseSandboxDifficultyRamp
enum class EGlimpseSandboxDifficultyRamp : uint8_t
{
	EGlimpseSandboxDifficultyRamp__Flat = 0,
	EGlimpseSandboxDifficultyRamp__Linear = 1,
	EGlimpseSandboxDifficultyRamp__EGlimpseSandboxDifficultyRamp_MAX = 2
};


// Enum GlimpseGame.EGlimpseSandboxRuleset
enum class EGlimpseSandboxRuleset : uint8_t
{
	EGlimpseSandboxRuleset__Survival = 0,
	EGlimpseSandboxRuleset__TheConstabulary = 1,
	EGlimpseSandboxRuleset__FreeForm = 2,
	EGlimpseSandboxRuleset__EGlimpseSandboxRuleset_MAX = 3
};


// Enum GlimpseGame.EGlimpseSandboxZoneType
enum class EGlimpseSandboxZoneType : uint8_t
{
	EGlimpseSandboxZoneType__VillageOnly = 0,
	EGlimpseSandboxZoneType__GardenOnly = 1,
	EGlimpseSandboxZoneType__Mix   = 2,
	EGlimpseSandboxZoneType__EGlimpseSandboxZoneType_MAX = 3
};


// Enum GlimpseGame.EGlimpseSandboxSize
enum class EGlimpseSandboxSize : uint8_t
{
	EGlimpseSandboxSize__Small     = 0,
	EGlimpseSandboxSize__Medium    = 1,
	EGlimpseSandboxSize__Large     = 2,
	EGlimpseSandboxSize__EGlimpseSandboxSize_MAX = 3
};


// Enum GlimpseGame.ELoadingTransitionType
enum class ELoadingTransitionType : uint8_t
{
	ELoadingTransitionType__Default = 0,
	ELoadingTransitionType__ReturningToMainMenu = 1,
	ELoadingTransitionType__LoadingNewZone = 2,
	ELoadingTransitionType__LoadingNextStoryCharacter = 3,
	ELoadingTransitionType__ELoadingTransitionType_MAX = 4
};


// Enum GlimpseGame.ESaveSlotInteractionState
enum class ESaveSlotInteractionState : uint8_t
{
	ESaveSlotInteractionState__NavigatingMenu = 0,
	ESaveSlotInteractionState__Waiting_SaveLoad = 1,
	ESaveSlotInteractionState__Waiting_Delete = 2,
	ESaveSlotInteractionState__ESaveSlotInteractionState_MAX = 3
};


// Enum GlimpseGame.ESelectGameMode
enum class ESelectGameMode : uint8_t
{
	ESelectGameMode__LoadOrCreateGame = 0,
	ESelectGameMode__SaveGame      = 1,
	ESelectGameMode__ESelectGameMode_MAX = 2
};


// Enum GlimpseGame.ESaveSlotState
enum class ESaveSlotState : uint8_t
{
	ESaveSlotState__ShowInfo       = 0,
	ESaveSlotState__ConfirmLoadSelection = 1,
	ESaveSlotState__ConfirmSaveSelection = 2,
	ESaveSlotState__ESaveSlotState_MAX = 3
};


// Enum GlimpseGame.EHUDPlayerSuspicion
enum class EHUDPlayerSuspicion : uint8_t
{
	EHUDPlayerSuspicion__Conforming = 0,
	EHUDPlayerSuspicion__Suspicious = 1,
	EHUDPlayerSuspicion__InstantAggro = 2,
	EHUDPlayerSuspicion__MAX_EHUDPlayerSuspicion = 3,
	EHUDPlayerSuspicion__EHUDPlayerSuspicion_MAX = 4
};


// Enum GlimpseGame.EHUDPlayerLoudness
enum class EHUDPlayerLoudness : uint8_t
{
	EHUDPlayerLoudness__Silent     = 0,
	EHUDPlayerLoudness__Quiet      = 1,
	EHUDPlayerLoudness__Normal     = 2,
	EHUDPlayerLoudness__Loud       = 3,
	EHUDPlayerLoudness__MAX_EHUDPlayerLoudness = 4,
	EHUDPlayerLoudness__EHUDPlayerLoudness_MAX = 5
};


// Enum GlimpseGame.EHUDPlayerVisibility
enum class EHUDPlayerVisibility : uint8_t
{
	EHUDPlayerVisibility__Hidden   = 0,
	EHUDPlayerVisibility__HardToSee = 1,
	EHUDPlayerVisibility__Visible  = 2,
	EHUDPlayerVisibility__Targeted = 3,
	EHUDPlayerVisibility__MAX_EHUDPlayerVisibility = 4,
	EHUDPlayerVisibility__EHUDPlayerVisibility_MAX = 5
};


// Enum GlimpseGame.EHUDWaypoints
enum class EHUDWaypoints : uint8_t
{
	EHUDWaypoints__Quest           = 0,
	EHUDWaypoints__Custom          = 1,
	EHUDWaypoints__NUM_WAYPOINT_TYPES = 2,
	EHUDWaypoints__EHUDWaypoints_MAX = 3
};


// Enum GlimpseGame.EHUDCompassVisibility
enum class EHUDCompassVisibility : uint8_t
{
	EHUDCompassVisibility__Hidden  = 0,
	EHUDCompassVisibility__DirectionsOnly = 1,
	EHUDCompassVisibility__Visible = 2,
	EHUDCompassVisibility__EHUDCompassVisibility_MAX = 3
};


// Enum GlimpseGame.EHUDCrosshairsVisibility
enum class EHUDCrosshairsVisibility : uint8_t
{
	EHUDCrosshairsVisibility__Hidden = 0,
	EHUDCrosshairsVisibility__InteractionOnly = 1,
	EHUDCrosshairsVisibility__Visible = 2,
	EHUDCrosshairsVisibility__Dot  = 3,
	EHUDCrosshairsVisibility__Option1 = 4,
	EHUDCrosshairsVisibility__Option2 = 5,
	EHUDCrosshairsVisibility__Option3 = 6,
	EHUDCrosshairsVisibility__EHUDCrosshairsVisibility_MAX = 7
};


// Enum GlimpseGame.EHUDTextScale
enum class EHUDTextScale : uint8_t
{
	EHUDTextScale__Default         = 0,
	EHUDTextScale__Large           = 1,
	EHUDTextScale__EHUDElementVisibility_MAX = 2,
	EHUDTextScale__EHUDTextScale_MAX = 3
};


// Enum GlimpseGame.EHUDElementVisibility
enum class EHUDElementVisibility : uint8_t
{
	EHUDElementVisibility__Never   = 0,
	EHUDElementVisibility__TimedFade = 1,
	EHUDElementVisibility__AlwaysOn = 2,
	EHUDElementVisibility__EHUDElementVisibility_MAX = 3
};


// Enum GlimpseGame.EHUDVisibility
enum class EHUDVisibility : uint8_t
{
	EHUDVisibility__Hidden         = 0,
	EHUDVisibility__DiscoveryTextOnly = 1,
	EHUDVisibility__InfoOnly       = 2,
	EHUDVisibility__InteractionOnly = 3,
	EHUDVisibility__Visible        = 4,
	EHUDVisibility__PlayerMenu     = 5,
	EHUDVisibility__EHUDVisibility_MAX = 6
};


// Enum GlimpseGame.EGlimpseLocalPlayerSession
enum class EGlimpseLocalPlayerSession : uint8_t
{
	EGlimpseLocalPlayerSession__Clear = 0,
	EGlimpseLocalPlayerSession__Initializing = 1,
	EGlimpseLocalPlayerSession__Active = 2,
	EGlimpseLocalPlayerSession__EGlimpseLocalPlayerSession_MAX = 3
};


// Enum GlimpseGame.EGlimpseLocationReference
enum class EGlimpseLocationReference : uint8_t
{
	EGlimpseLocationReference__OpenArea = 0,
	EGlimpseLocationReference__RoadCurb = 1,
	EGlimpseLocationReference__RoadCenter = 2,
	EGlimpseLocationReference__SidewalkCurb = 3,
	EGlimpseLocationReference__SidewalkCenter = 4,
	EGlimpseLocationReference__SidewalkEdge = 5,
	EGlimpseLocationReference__EGlimpseLocationReference_MAX = 6
};


// Enum GlimpseGame.ENewsSource
enum class ENewsSource : uint8_t
{
	ENewsSource__Asset             = 0,
	ENewsSource__Json              = 1,
	ENewsSource__Forums            = 2,
	ENewsSource__ENewsSource_MAX   = 3
};


// Enum GlimpseGame.EGlimpseNavLinkTraversal
enum class EGlimpseNavLinkTraversal : uint8_t
{
	EGlimpseNavLinkTraversal__Walk = 0,
	EGlimpseNavLinkTraversal__Mantle = 1,
	EGlimpseNavLinkTraversal__None = 2,
	EGlimpseNavLinkTraversal__EGlimpseNavLinkTraversalType_MAX = 3,
	EGlimpseNavLinkTraversal__EGlimpseNavLinkTraversal_MAX = 4
};


// Enum GlimpseGame.EGlimpseWorldGroup
enum class EGlimpseWorldGroup : uint8_t
{
	EGlimpseWorldGroup__WorldSize  = 0,
	EGlimpseWorldGroup__Terrain    = 1,
	EGlimpseWorldGroup__Intersection = 2,
	EGlimpseWorldGroup__Road       = 3,
	EGlimpseWorldGroup__Building   = 4,
	EGlimpseWorldGroup__Decoration = 5,
	EGlimpseWorldGroup__Encounter  = 6,
	EGlimpseWorldGroup__Bridge     = 7,
	EGlimpseWorldGroup__Foliage    = 8,
	EGlimpseWorldGroup__FoliageLoot = 9,
	EGlimpseWorldGroup__Filler     = 10,
	EGlimpseWorldGroup__Wall       = 11,
	EGlimpseWorldGroup__Shore      = 12,
	EGlimpseWorldGroup__Max        = 13,
	EGlimpseWorldGroup__EGlimpseWorldGroup_MAX = 14
};


// Enum GlimpseGame.EGlimpseShapeComponentType
enum class EGlimpseShapeComponentType : uint8_t
{
	EGlimpseShapeComponentType__Point = 0,
	EGlimpseShapeComponentType__Circle = 1,
	EGlimpseShapeComponentType__Rectangle = 2,
	EGlimpseShapeComponentType__EGlimpseShapeComponentType_MAX = 3
};


// Enum GlimpseGame.EMenuEntryConfigType
enum class EMenuEntryConfigType : uint8_t
{
	EMenuEntryConfigType__None     = 0,
	EMenuEntryConfigType__Bool     = 1,
	EMenuEntryConfigType__Float    = 2,
	EMenuEntryConfigType__MultipleChoice = 3,
	EMenuEntryConfigType__EMenuEntryConfigType_MAX = 4
};


// Enum GlimpseGame.EMenuEntryPlatform
enum class EMenuEntryPlatform : uint8_t
{
	EMenuEntryPlatform__Desktop    = 0,
	EMenuEntryPlatform__Console    = 1,
	EMenuEntryPlatform__Both       = 2,
	EMenuEntryPlatform__Desktop_NotUWP = 3,
	EMenuEntryPlatform__EMenuEntryPlatform_MAX = 4
};


// Enum GlimpseGame.EMenuEntryBinding
enum class EMenuEntryBinding : uint8_t
{
	EMenuEntryBinding__Function    = 0,
	EMenuEntryBinding__SubMenu     = 1,
	EMenuEntryBinding__MenuPanel   = 2,
	EMenuEntryBinding__Config      = 3,
	EMenuEntryBinding__Custom      = 4,
	EMenuEntryBinding__ActionMapping = 5,
	EMenuEntryBinding__AxisMapping = 6,
	EMenuEntryBinding__EMenuEntryBinding_MAX = 7
};


// Enum GlimpseGame.EPaperBackgroundState
enum class EPaperBackgroundState : uint8_t
{
	EPaperBackgroundState__Hidden  = 0,
	EPaperBackgroundState__Left    = 1,
	EPaperBackgroundState__Centre  = 2,
	EPaperBackgroundState__Right   = 3,
	EPaperBackgroundState__Full    = 4,
	EPaperBackgroundState__FullRight = 5,
	EPaperBackgroundState__EPaperBackgroundState_Max = 6
};


// Enum GlimpseGame.EShellMenuPanel
enum class EShellMenuPanel : uint8_t
{
	EShellMenuPanel__MainPanel     = 0,
	EShellMenuPanel__NewGameSetupPanel = 1,
	EShellMenuPanel__NewGameConfirmPanel = 2,
	EShellMenuPanel__TheatreMenuPanel = 3,
	EShellMenuPanel__AchievementsMenuPanel = 4,
	EShellMenuPanel__SandboxMenuPanel = 5,
	EShellMenuPanel__DLCPanel      = 6,
	EShellMenuPanel__ENewGameMode_MAX = 7,
	EShellMenuPanel__EShellMenuPanel_MAX = 8
};


// Enum GlimpseGame.EDyingCause
enum class EDyingCause : uint8_t
{
	EDyingCause__Damage            = 0,
	EDyingCause__Hunger            = 1,
	EDyingCause__Thirst            = 2,
	EDyingCause__FoodPoisoning     = 3,
	EDyingCause__Plague            = 4,
	EDyingCause__AbnormalBloodSugar = 5,
	EDyingCause__Fatigue           = 6,
	EDyingCause__EDyingCause_MAX   = 7
};


// Enum GlimpseGame.EFoodPoisoningTier
enum class EFoodPoisoningTier : uint8_t
{
	EFoodPoisoningTier__Mild       = 0,
	EFoodPoisoningTier__Serious    = 1,
	EFoodPoisoningTier__Lethal     = 2,
	EFoodPoisoningTier__EFoodPoisoningTier_MAX = 3
};


// Enum GlimpseGame.ESubtitleStyle
enum class ESubtitleStyle : uint8_t
{
	ESubtitleStyle__None           = 0,
	ESubtitleStyle__SmallOutline   = 1,
	ESubtitleStyle__MediumOutline  = 2,
	ESubtitleStyle__LargeOutline   = 3,
	ESubtitleStyle__SmallBackground = 4,
	ESubtitleStyle__MediumBackground = 5,
	ESubtitleStyle__LargeBackground = 6,
	ESubtitleStyle__ESubtitleStyle_MAX = 7
};


// Enum GlimpseGame.EBranchOnDebug
enum class EBranchOnDebug : uint8_t
{
	EBranchOnDebug__Debug          = 0,
	EBranchOnDebug__Release        = 1,
	EBranchOnDebug__EBranchOnDebug_MAX = 2
};


// Enum GlimpseGame.EGlimpseBoxAnchor
enum class EGlimpseBoxAnchor : uint8_t
{
	BOXANCHOR_BoxMin               = 0,
	BOXANCHOR_BoxCenter            = 1,
	BOXANCHOR_BoxMax               = 2,
	BOXANCHOR_MAX                  = 3
};


// Enum GlimpseGame.EGlimpseTerrainModifierComponent
enum class EGlimpseTerrainModifierComponent : uint8_t
{
	EGlimpseTerrainModifierComponent__Circle = 0,
	EGlimpseTerrainModifierComponent__Rectangle = 1,
	EGlimpseTerrainModifierComponent__EGlimpseTerrainModifierComponent_MAX = 2
};


// Enum GlimpseGame.EFastTravelDeniedReason
enum class EFastTravelDeniedReason : uint8_t
{
	EFastTravelDeniedReason__FastTravelAllowed = 0,
	EFastTravelDeniedReason__LocationLocked = 1,
	EFastTravelDeniedReason__InCombat = 2,
	EFastTravelDeniedReason__DisabledInGameplayVolume = 3,
	EFastTravelDeniedReason__CarryingCorpse = 4,
	EFastTravelDeniedReason__Falling = 5,
	EFastTravelDeniedReason__EFastTravelDeniedReason_MAX = 6
};


// Enum GlimpseGame.EMapDisplayMode
enum class EMapDisplayMode : uint8_t
{
	EMapDisplayMode__Map           = 0,
	EMapDisplayMode__FastTravel    = 1,
	EMapDisplayMode__EMapDisplayMode_MAX = 2
};


// Enum GlimpseGame.EDLCStateUI
enum class EDLCStateUI : uint8_t
{
	EDLCStateUI__DoesntExist       = 0,
	EDLCStateUI__ComingSoon        = 1,
	EDLCStateUI__AvailableToBuy    = 2,
	EDLCStateUI__NotDownloaded     = 3,
	EDLCStateUI__Downloading       = 4,
	EDLCStateUI__Available         = 5,
	EDLCStateUI__EDLCState_Max     = 6,
	EDLCStateUI__EDLCStateUI_MAX   = 7
};


// Enum GlimpseGame.EDLCTypeUI
enum class EDLCTypeUI : uint8_t
{
	EDLCTypeUI__None               = 0,
	EDLCTypeUI__HouseBoys          = 1,
	EDLCTypeUI__NickLightbearer    = 2,
	EDLCTypeUI__Victoria           = 3,
	EDLCTypeUI__EDLCType_Max       = 4,
	EDLCTypeUI__EDLCTypeUI_MAX     = 5
};


// Enum GlimpseGame.EDLCMenuState
enum class EDLCMenuState : uint8_t
{
	EDLCMenuState__NavigatingDLC   = 0,
	EDLCMenuState__WaitingToConfirmAction = 1,
	EDLCMenuState__EDLCMenuState_Max = 2
};


// Enum GlimpseGame.EOnOff
enum class EOnOff : uint8_t
{
	EOnOff__Off                    = 0,
	EOnOff__On                     = 1,
	EOnOff__EOnOff_MAX             = 2
};


// Enum GlimpseGame.EInventoryAction
enum class EInventoryAction : uint8_t
{
	EInventoryAction__Use          = 0,
	EInventoryAction__Drop         = 1,
	EInventoryAction__Buy          = 2,
	EInventoryAction__Sell         = 3,
	EInventoryAction__Swap         = 4,
	EInventoryAction__Take         = 5,
	EInventoryAction__Place        = 6,
	EInventoryAction__ToggleEquip  = 7,
	EInventoryAction__Equip        = 8,
	EInventoryAction__Unequip      = 9,
	EInventoryAction__MAX          = 10,
	EInventoryAction__EInventoryAction_MAX = 11
};


// Enum GlimpseGame.ETransactionSuccess
enum class ETransactionSuccess : uint8_t
{
	ETransactionSuccess__Succeed   = 0,
	ETransactionSuccess__Fail_DoesntWant = 1,
	ETransactionSuccess__Fail_NoMoney = 2,
	ETransactionSuccess__Fail_Quest = 3,
	ETransactionSuccess__Fail_InUse = 4,
	ETransactionSuccess__ETransactionSuccess_MAX = 5
};


// Enum GlimpseGame.EInventoryMenuError
enum class EInventoryMenuError : uint8_t
{
	EInventoryMenuError__CantSell_DoesntWant = 0,
	EInventoryMenuError__CantSell_NoMoney = 1,
	EInventoryMenuError__CantSell_Quest = 2,
	EInventoryMenuError__CantBuy_NoMoney = 3,
	EInventoryMenuError__CantRemove_Quest = 4,
	EInventoryMenuError__CantRemove_InUse = 5,
	EInventoryMenuError__CantUseItem = 6,
	EInventoryMenuError__CantUseItemNotNeeded = 7,
	EInventoryMenuError__NeverNude = 8,
	EInventoryMenuError__CantRemove = 9,
	EInventoryMenuError__CantUnequipOutfit = 10,
	EInventoryMenuError__CantUnequipWeapon = 11,
	EInventoryMenuError__MAX       = 12,
	EInventoryMenuError__EInventoryMenuError_MAX = 13
};


// Enum GlimpseGame.EPlayerWeightStatus
enum class EPlayerWeightStatus : uint8_t
{
	EPlayerWeightStatus__Normal    = 0,
	EPlayerWeightStatus__Impeded   = 1,
	EPlayerWeightStatus__Overburdened = 2,
	EPlayerWeightStatus__MAX       = 3,
	EPlayerWeightStatus__EPlayerWeightStatus_MAX = 4
};


// Enum GlimpseGame.EInventorySort
enum class EInventorySort : uint8_t
{
	EInventorySort__WeightUp       = 0,
	EInventorySort__WeightDown     = 1,
	EInventorySort__ValueUp        = 2,
	EInventorySort__ValueDown      = 3,
	EInventorySort__EInventorySort_MAX = 4
};


// Enum GlimpseGame.EQuestListCategory
enum class EQuestListCategory : uint8_t
{
	EQuestListCategory__Primary    = 0,
	EQuestListCategory__Secondary  = 1,
	EQuestListCategory__Lore       = 2,
	EQuestListCategory__MaxCategory = 3,
	EQuestListCategory__EQuestListCategory_MAX = 4
};


// Enum GlimpseGame.EEffectListType
enum class EEffectListType : uint8_t
{
	EEffectListType__StatusEffects = 0,
	EEffectListType__PassiveEffects = 1,
	EEffectListType__EEffectListType_MAX = 2
};


// Enum GlimpseGame.EInputBindingDisplayMode
enum class EInputBindingDisplayMode : uint8_t
{
	EInputBindingDisplayMode__Action = 0,
	EInputBindingDisplayMode__Key  = 1,
	EInputBindingDisplayMode__KeyName = 2,
	EInputBindingDisplayMode__Hardcoded = 3,
	EInputBindingDisplayMode__EInputBindingDisplayMode_MAX = 4
};


// Enum GlimpseGame.InteractionState
enum class EInteractionState : uint8_t
{
	InteractionState__Normal       = 0,
	InteractionState__Hover        = 1,
	InteractionState__Selected     = 2,
	InteractionState__InteractionState_MAX = 3
};


// Enum GlimpseGame.EHUDJoyIndicatorState
enum class EHUDJoyIndicatorState : uint8_t
{
	EHUDJoyIndicatorState__Normal  = 0,
	EHUDJoyIndicatorState__Joy     = 1,
	EHUDJoyIndicatorState__Withdrawal = 2,
	EHUDJoyIndicatorState__Overdose = 3,
	EHUDJoyIndicatorState__Comedown = 4,
	EHUDJoyIndicatorState__MAX     = 5,
	EHUDJoyIndicatorState__EHUDJoyIndicatorState_MAX = 6
};


// Enum GlimpseGame.ENPCIndicatorState
enum class ENPCIndicatorState : uint8_t
{
	ENPCIndicatorState__Hidden     = 0,
	ENPCIndicatorState__SuspicionFilling = 1,
	ENPCIndicatorState__AggressionFilling = 2,
	ENPCIndicatorState__Combat     = 3,
	ENPCIndicatorState__Combat_Armoured = 4,
	ENPCIndicatorState__MAX        = 5,
	ENPCIndicatorState__ENPCIndicatorState_MAX = 6
};


// Enum GlimpseGame.EHUDQuestDialog
enum class EHUDQuestDialog : uint8_t
{
	EHUDQuestDialog__Active        = 0,
	EHUDQuestDialog__Complete      = 1,
	EHUDQuestDialog__Failed        = 2,
	EHUDQuestDialog__MAX_EHUDQuestDialog = 3,
	EHUDQuestDialog__EHUDQuestDialog_MAX = 4
};


// Enum GlimpseGame.EQuickSlotPosition
enum class EQuickSlotPosition : uint8_t
{
	EQuickSlotPosition__Top        = 0,
	EQuickSlotPosition__NextLeft   = 1,
	EQuickSlotPosition__Left       = 2,
	EQuickSlotPosition__Bottom     = 3,
	EQuickSlotPosition__Right      = 4,
	EQuickSlotPosition__MAX        = 5,
	EQuickSlotPosition__EQuickSlotPosition_MAX = 6
};


// Enum GlimpseGame.ESaveSlotWidgetState
enum class ESaveSlotWidgetState : uint8_t
{
	ESaveSlotWidgetState__Save_ShowInfo = 0,
	ESaveSlotWidgetState__Load_ShowInfo = 1,
	ESaveSlotWidgetState__Ghosted_LoadSave = 2,
	ESaveSlotWidgetState__Ghosted_Delete = 3,
	ESaveSlotWidgetState__WaitForLoadConfirm = 4,
	ESaveSlotWidgetState__WaitForSaveConfirm = 5,
	ESaveSlotWidgetState__WaitForDeleteConfirm = 6,
	ESaveSlotWidgetState__ESaveSlotWidgetState_MAX = 7
};


// Enum GlimpseGame.EVRHeadsetMode
enum class EVRHeadsetMode : uint8_t
{
	EVRHeadsetMode__Auto           = 0,
	EVRHeadsetMode__On             = 1,
	EVRHeadsetMode__Off            = 2,
	EVRHeadsetMode__EVRHeadsetMode_MAX = 3
};


// Enum GlimpseGame.EGlimpseWorldPlannerReview
enum class EGlimpseWorldPlannerReview : uint8_t
{
	EGlimpseWorldPlannerReview__Building = 0,
	EGlimpseWorldPlannerReview__Encounter = 1,
	EGlimpseWorldPlannerReview__EGlimpseWorldPlannerReview_MAX = 2
};


// Enum GlimpseGame.EGlimpseWorldBuilderSpawnStat
enum class EGlimpseWorldBuilderSpawnStat : uint8_t
{
	EGlimpseWorldBuilderSpawnStat__Blueprint = 0,
	EGlimpseWorldBuilderSpawnStat__SpawnModel = 1,
	EGlimpseWorldBuilderSpawnStat__EGlimpseWorldBuilderSpawnStat_MAX = 2
};


// Enum GlimpseGame.EGlimpseWorldBuilderActor
enum class EGlimpseWorldBuilderActor : uint8_t
{
	EGlimpseWorldBuilderActor__Road = 0,
	EGlimpseWorldBuilderActor__Filler = 1,
	EGlimpseWorldBuilderActor__Decoration = 2,
	EGlimpseWorldBuilderActor__Foliage = 3,
	EGlimpseWorldBuilderActor__Wall = 4,
	EGlimpseWorldBuilderActor__EGlimpseWorldBuilderActor_MAX = 5
};


// Enum GlimpseGame.EWorldBuilderBuilding
enum class EWorldBuilderBuilding : uint8_t
{
	EWorldBuilderBuilding__None    = 0,
	EWorldBuilderBuilding__Features = 1,
	EWorldBuilderBuilding__FeaturesAndBridges = 2,
	EWorldBuilderBuilding__All     = 3,
	EWorldBuilderBuilding__EWorldBuilderBuilding_MAX = 4
};


// Enum GlimpseGame.EGlimpseSandboxFeatureDistributionSelection
enum class EGlimpseSandboxFeatureDistributionSelection : uint8_t
{
	EGlimpseSandboxFeatureDistributionSelection__All = 0,
	EGlimpseSandboxFeatureDistributionSelection__HighestTier = 1,
	EGlimpseSandboxFeatureDistributionSelection__LowestTier = 2,
	EGlimpseSandboxFeatureDistributionSelection__EGlimpseSandboxFeatureDistributionSelection_MAX = 3
};


// Enum GlimpseGame.EGlimpseSandboxFeatureDistributionTarget
enum class EGlimpseSandboxFeatureDistributionTarget : uint8_t
{
	EGlimpseSandboxFeatureDistributionTarget__Island = 0,
	EGlimpseSandboxFeatureDistributionTarget__World = 1,
	EGlimpseSandboxFeatureDistributionTarget__WorldEven = 2,
	EGlimpseSandboxFeatureDistributionTarget__EGlimpseSandboxFeatureDistributionTarget_MAX = 3
};


// Enum GlimpseGame.EGlimpseZoningBoundaryType
enum class EGlimpseZoningBoundaryType : uint8_t
{
	EGlimpseZoningBoundaryType__ZoneDefault = 0,
	EGlimpseZoningBoundaryType__World = 1,
	EGlimpseZoningBoundaryType__EGlimpseZoningBoundaryType_MAX = 2
};


// Enum GlimpseGame.EFullscreenMovieState
enum class EFullscreenMovieState : uint8_t
{
	EFullscreenMovieState__Closed  = 0,
	EFullscreenMovieState__Opening = 1,
	EFullscreenMovieState__Opened  = 2,
	EFullscreenMovieState__Finished = 3,
	EFullscreenMovieState__Error   = 4,
	EFullscreenMovieState__EFullscreenMovieState_MAX = 5
};


// Enum GlimpseGame.EPuppetBrainBTState
enum class EPuppetBrainBTState : uint8_t
{
	EPuppetBrainBTState__None      = 0,
	EPuppetBrainBTState__Activated = 1,
	EPuppetBrainBTState__Deactivated = 2,
	EPuppetBrainBTState__EPuppetBrainBTState_MAX = 3
};


// Enum GlimpseGame.EQuestStateFunction
enum class EQuestStateFunction : uint8_t
{
	EQuestStateFunction__Enter     = 0,
	EQuestStateFunction__Exit      = 1,
	EQuestStateFunction__Transition = 2,
	EQuestStateFunction__EQuestStateFunction_MAX = 3
};


// Enum GlimpseGame.EStatThreshold
enum class EStatThreshold : uint8_t
{
	EStatThreshold__Below          = 0,
	EStatThreshold__Above          = 1,
	EStatThreshold__EStatThreshold_MAX = 2
};


// Enum GlimpseGame.EInteractionEvent
enum class EInteractionEvent : uint8_t
{
	EInteractionEvent__Begin       = 0,
	EInteractionEvent__End         = 1,
	EInteractionEvent__Complete    = 2,
	EInteractionEvent__Denied      = 3,
	EInteractionEvent__EInteractionEvent_MAX = 4
};


// Enum GlimpseGame.EQuestBoundPredicateMode
enum class EQuestBoundPredicateMode : uint8_t
{
	EQuestBoundPredicateMode__Any  = 0,
	EQuestBoundPredicateMode__Variable = 1,
	EQuestBoundPredicateMode__Context = 2,
	EQuestBoundPredicateMode__EQuestBoundPredicateMode_MAX = 3
};


// Enum GlimpseGame.EGlimpseLoadPhase
enum class EGlimpseLoadPhase : uint8_t
{
	EGlimpseLoadPhase__None        = 0,
	EGlimpseLoadPhase__LoadMap     = 1,
	EGlimpseLoadPhase__LootTables  = 2,
	EGlimpseLoadPhase__AIBalance   = 3,
	EGlimpseLoadPhase__QuestRewards = 4,
	EGlimpseLoadPhase__Preload     = 5,
	EGlimpseLoadPhase__Planner_MapLayout = 6,
	EGlimpseLoadPhase__Planner_InitWorldSize = 7,
	EGlimpseLoadPhase__Planner_MapLayoutFinish = 8,
	EGlimpseLoadPhase__Planner_Finalize = 9,
	EGlimpseLoadPhase__Planner_CityBlocks = 10,
	EGlimpseLoadPhase__Planner_RepairRoads = 11,
	EGlimpseLoadPhase__Planner_ElevateEncounters = 12,
	EGlimpseLoadPhase__Planner_DecoratorTags = 13,
	EGlimpseLoadPhase__Planner_RoadDecorator = 14,
	EGlimpseLoadPhase__Planner_TaggedDecorator = 15,
	EGlimpseLoadPhase__Planner_Foliage = 16,
	EGlimpseLoadPhase__Planner_Patrols = 17,
	EGlimpseLoadPhase__Streaming   = 18,
	EGlimpseLoadPhase__EGlimpseLoadPhase_MAX = 19
};


// Enum GlimpseGame.EGlimpseLoadSequence
enum class EGlimpseLoadSequence : uint8_t
{
	EGlimpseLoadSequence__None     = 0,
	EGlimpseLoadSequence__MainMenu = 1,
	EGlimpseLoadSequence__WorldGen = 2,
	EGlimpseLoadSequence__LoadSaveGame = 3,
	EGlimpseLoadSequence__Standalone = 4,
	EGlimpseLoadSequence__EGlimpseLoadSequence_MAX = 5
};


// Enum GlimpseGame.EGlimpseIntersectionEdge
enum class EGlimpseIntersectionEdge : uint8_t
{
	EGlimpseIntersectionEdge__Sidewalk = 0,
	EGlimpseIntersectionEdge__Ground = 1,
	EGlimpseIntersectionEdge__EGlimpseIntersectionEdge_MAX = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GlimpseGame.GlimpseConversationLineAnimation
// 0x0048
struct FGlimpseConversationLineAnimation
{
	int                                                CharacterIndex;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LookAtCharacterIndex;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UGlimpseAnimationChain>            AnimationChain;                                           // 0x0000(0x0020) (Edit)
	TAssetPtr<class UAnimMontage>                      AnimationMontage;                                         // 0x0000(0x0020) (Edit)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0020(0x0028) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseConversationLine
// 0x0070
struct FGlimpseConversationLine
{
	int                                                CharacterIndex;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Bark;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndTimeOffset;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UGlimpseAnimationChain>            AnimationChain;                                           // 0x0000(0x0020) (Edit)
	TAssetPtr<class UAnimMontage>                      Montage;                                                  // 0x0000(0x0020) (Edit)
	int                                                LookAtCharacterIndex;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FGlimpseConversationLineAnimation>   OtherCharactersAnimations;                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0010(0x0060) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseAnimationChain_Animation
// 0x0048 (0x0050 - 0x0008)
struct FGlimpseAnimationChain_Animation : public FTableRowBase
{
	unsigned char                                      bUseMontage : 1;                                          // 0x0000(0x0001) (Edit)
	class UAnimSequence*                               Animation;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeIn;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLooping : 1;                                             // 0x0000(0x0001) (Edit)
	unsigned char                                      bDisableLookAt : 1;                                       // 0x0000(0x0001) (Edit)
	class UAnimMontage*                                AnimationMontage;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendIn;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlendOut;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LoopTime;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAlphaBlendOption>                     BlendOption;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4F];                                      // 0x0001(0x004F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.PuppetShowEvent
// 0x00A8
struct FPuppetShowEvent
{
	class AGlimpseCharacter*                           Character;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     ObjectData;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // 0x0000(0x0018)
	TArray<class UObject*>                             ExtraObjects;                                             // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x98];                                      // 0x0010(0x0098) MISSED OFFSET
};

// ScriptStruct GlimpseGame.ActorSensingConfig
// 0x0050
struct FActorSensingConfig
{
	TEnumAsByte<ETimeOfDay>                            TimeOfDay;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FurtherVisionRadius;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SightVisionRadius;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CombatVisionRadius;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ProximityVisionRadius;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ProximityVisionAngle;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PeripheralVisionAngle;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ParacentralVisionAngle;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VerticalVisionAngle;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NearFrontVisionFactor;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NearAsideVisionFactor;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FarFrontVisionFactor;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FarAsideVisionFactor;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FurtherFrontVisionFactor;                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HearingVolumeFactor;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HearingMaximumDistance;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProximityVisionCosine;                                    // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ParacentralVisionCosine;                                  // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PeripheralVisionCosine;                                   // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              VerticalVisionCosine;                                     // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0004(0x004C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.BarkRequest
// 0x0038
struct FBarkRequest
{
	unsigned char                                      bUseSuspicionState : 1;                                   // 0x0000(0x0001) (Edit)
	TEnumAsByte<EAISuspicionState>                     SuspicionState;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseBehaviourBark : 1;                                    // 0x0000(0x0001) (Edit)
	TEnumAsByte<EAIBehaviourBark>                      BehaviourBarkType;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseStimulusResponse : 1;                                 // 0x0000(0x0001) (Edit)
	TEnumAsByte<EAISuspicionStimulusType>              StimulusType;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseConformityBark : 1;                                   // 0x0000(0x0001) (Edit)
	class UAkAudioEvent*                               ExplicitSoundEvent;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bForce : 1;                                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bIgnoreGlobalDelay : 1;                                   // 0x0000(0x0001) (Edit)
	float                                              RandomChance;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEvenIfDead : 1;                                          // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x37];                                      // 0x0001(0x0037) MISSED OFFSET
};

// ScriptStruct GlimpseGame.POIEntryData
// 0x002C
struct FPOIEntryData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreTargetRef;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapZ;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bNoCollision;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideNavEntry;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NavEntryLocation;                                         // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x000C(0x0020) MISSED OFFSET
};

// ScriptStruct GlimpseGame.POIExecution
// 0x0050
struct FPOIExecution
{
	bool                                               bUseStandardAnimation;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAnimationSequence;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AnimMontage;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EStandardAnimation>                    StandardAnimation;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               AnimSequence;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseLoopDuration;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoopDuration;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                WaitingAnimMontage;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseInteraction;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EInteraction>                          InteractionType;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       InteractionComponentName;                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseCustomHeightOffset;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CustomHeightOffsetOnEntry;                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0004(0x004C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.POISlot
// 0x0110
struct FPOISlot
{
	unsigned char                                      bMasterSlot : 1;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bWaitForMasterSlotReady : 1;                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bOutsideUse : 1;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bInsideUse : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bForceAlignToEntry : 1;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<TEnumAsByte<EGlimpsePOIRole>>               RestrictedRoles;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FPOIEntryData                               EntryData;                                                // 0x0000(0x002C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FPOIExecution                               Execution;                                                // 0x0000(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              MaxWaitingTime;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReuseDelay;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECharacterGender>                      Gender;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bDisabled : 1;                                            // 0x0000(0x0001) (Transient)
	float                                              LoopDurationOverride;                                     // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bRestoreCapsuleCollision : 1;                             // 0x0000(0x0001) (Transient)
	TEnumAsByte<ECollisionEnabled>                     InitialCapsuleCollision;                                  // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10F];                                     // 0x0001(0x010F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseConversation
// 0x0018
struct FGlimpseConversation
{
	int                                                RequiredNbCharacters;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSkipDeadCharacters : 1;                                  // 0x0000(0x0001) (Edit)
	TArray<struct FGlimpseConversationLine>            Lines;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.WeightedBlueprint
// 0x00B0
struct FWeightedBlueprint
{
	TAssetPtr<class UClass>                            BlueprintClass;                                           // 0x0000(0x0020) (Edit, BlueprintVisible)
	class UBlueprintGeneratedClass*                    Blueprint;                                                // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RarityFactor;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RarityRadius;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUnique;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxSpawnCount;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBox                                        CachedBoxes[0x3];                                         // 0x0000(0x001C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CachedSizes[0x2];                                         // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x98];                                      // 0x0018(0x0098) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseFootprintTag
// 0x0078
struct FGlimpseFootprintTag
{
	struct FName                                       ClassName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseFootprintTagType>              Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseFootprintTagDir>               Dir;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Position;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGlimpseShape                               Shape;                                                    // 0x0000(0x0040)
	uint32_t                                           ExcludeMask;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ExcludeNames;                                             // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bExcludeMaskSet;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x77];                                      // 0x0001(0x0077) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseStyleKey
// 0x0068
struct FGlimpseStyleKey
{
	TArray<class UGlimpsePlanSemantic*>                Semantics;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0010(0x0058) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseDecoratorTag
// 0x00C0
struct FGlimpseDecoratorTag
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (IsPlainOldData)
	struct FGlimpseStyleKey                            Semantics;                                                // 0x0000(0x0068)
	unsigned char                                      bAdjustToTerrainHeight : 1;                               // 0x0000(0x0001)
	unsigned char                                      bAdjustToTerrainSlope : 1;                                // 0x0000(0x0001)
	float                                              RelativeZ;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	class UGlimpseRoadModel*                           RoadModel;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGlimpseWorldElement*                        GraphElement;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bConsumed;                                                // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xBF];                                      // 0x0001(0x00BF) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseBiomeTag
// 0x0048
struct FGlimpseBiomeTag
{
	struct FGlimpseShape                               Shape;                                                    // 0x0000(0x0040)
	TEnumAsByte<EGlimpseBiome>                         Biome;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x47];                                      // 0x0001(0x0047) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseRoadDecal
// 0x0038
struct FGlimpseRoadDecal
{
	TAssetPtr<class UMaterialInterface>                DecalMaterial;                                            // 0x0000(0x0020) (Edit, BlueprintVisible)
	struct FVector                                     MinDecalScale;                                            // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MaxDecalScale;                                            // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x000C(0x002C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.WeightedBlueprintSet
// 0x0028
struct FWeightedBlueprintSet
{
	TArray<struct FWeightedBlueprint>                  Blueprints;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseRoadBlueprints
// 0x0030
struct FGlimpseRoadBlueprints
{
	struct FWeightedBlueprintSet                       Blueprints;                                               // 0x0000(0x0028) (Edit, BlueprintVisible)
	TEnumAsByte<EGlimpseRoadBlueprintPattern>          Pattern;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0001(0x002F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseRoadDecoration
// 0x0090
struct FGlimpseRoadDecoration
{
	struct FGlimpseRoadDecal                           Decal;                                                    // 0x0000(0x0038) (Edit, BlueprintVisible)
	struct FGlimpseRoadBlueprints                      Blueprints;                                               // 0x0000(0x0030) (Edit, BlueprintVisible)
	TEnumAsByte<EGlimpseRoadDecorationMode>            Mode;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseRoadReference>                 Reference;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseRoadUnits>                     Units;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinOffset;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxOffset;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinInterval;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxInterval;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRotation;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRotation;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFollowSlope;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlopeAngleLimit;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipCollisionCheck;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOmitCollisionArea;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bActuallyDoCollisionCheck;                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8F];                                      // 0x0001(0x008F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseRoadBanner
// 0x0098
struct FGlimpseRoadBanner
{
	TAssetPtr<class UClass>                            Blueprint;                                                // 0x0000(0x0020) (Edit, BlueprintVisible)
	struct FGlimpseStyleKey                            ConnectionSemantics;                                      // 0x0000(0x0068) (Edit, BlueprintVisible)
	float                                              MinInterval;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxInterval;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinLength;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLength;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x94];                                      // 0x0004(0x0094) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseTaggedDecoration
// 0x0040
struct FGlimpseTaggedDecoration
{
	class UGlimpsePlanSemantic*                        Tag;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSeparation;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FWeightedBlueprintSet                       Blueprints;                                               // 0x0000(0x0028) (Edit, BlueprintVisible)
	bool                                               Tangible;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3F];                                      // 0x0001(0x003F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseLivenessParams
// 0x0008
struct FGlimpseLivenessParams
{
	unsigned char                                      bAlwaysVisible : 1;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly)
	unsigned char                                      bAlwaysTick : 1;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly)
	int                                                DetailLevel;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct GlimpseGame.PlayerVolumeTrespassingOverride
// 0x0008
struct FPlayerVolumeTrespassingOverride
{
	TEnumAsByte<EAISuspicionStimulusType>              StimulusType;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAISuspicionState>                     MinimumState;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ValueMultiplier;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct GlimpseGame.InventoryItemStat
// 0x0020
struct FInventoryItemStat
{
	struct FText                                       StatName;                                                 // 0x0000(0x0018) (Edit)
	float                                              StatValue;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0004(0x001C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SuspicionEffect
// 0x0010
struct FSuspicionEffect
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAISuspicionState>                     MinimumState;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAISuspicionState>                     MaximumState;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceFalloff;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIgnoreModifiers : 1;                                     // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.QuestBindingRecord
// 0x0028
struct FQuestBindingRecord
{
	class ULevel*                                      Level;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       BindContext;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Variables;                                                // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bLocked;                                                  // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
};

// ScriptStruct GlimpseGame.PickupDesc
// 0x0010
struct FPickupDesc
{
	class UClass*                                      Type;                                                     // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Count;                                                    // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Durability;                                               // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseStaticLootSlot
// 0x0038
struct FGlimpseStaticLootSlot
{
	float                                              Probability;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Pickup;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGlimpseRandomInt                           StackSize;                                                // 0x0000(0x0010) (Edit)
	struct FGlimpseRandomFloat                         Durability;                                               // 0x0000(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseLootSlot
// 0x0058
struct FGlimpseLootSlot
{
	float                                              Probability;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SpecificPickup;                                           // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FGameplayTagContainer                       Tags;                                                     // 0x0000(0x0020) (Edit)
	struct FGameplayTagContainer                       ExcludeTags;                                              // 0x0000(0x0020) (Edit)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0020(0x0038) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseLootContents
// 0x0090
struct FGlimpseLootContents
{
	TArray<struct FGlimpseStaticLootSlot>              StaticLoot;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FGameplayTagContainer                       ContainerTags;                                            // 0x0000(0x0020) (Edit)
	unsigned char                                      bExplicitLocationTags : 1;                                // 0x0000(0x0001) (Edit)
	struct FGameplayTagContainer                       LocationTags;                                             // 0x0000(0x0020) (Edit)
	TArray<struct FGlimpseLootSlot>                    Slots;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FGlimpseRandomFloat                         ResetIntervalInDays;                                      // 0x0000(0x0010) (Edit)
	bool                                               bNoDuplicatePickups;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8F];                                      // 0x0001(0x008F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseQuestData
// 0x0060 (0x0068 - 0x0008)
struct FGlimpseQuestData : public FTableRowBase
{
	struct FText                                       ObjectiveText;                                            // 0x0000(0x0018) (Edit)
	struct FText                                       ActivationText;                                           // 0x0000(0x0018) (Edit)
	struct FText                                       CompletionText;                                           // 0x0000(0x0018) (Edit)
	struct FText                                       FailureText;                                              // 0x0000(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0018(0x0050) MISSED OFFSET
};

// ScriptStruct GlimpseGame.Objective
// 0x00F8
struct FObjective
{
	struct FName                                       ObjectiveKey;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               PrerequisiteObjectives;                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bOptional : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TEnumAsByte<EObjectiveCounter>                     Counter;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxCount;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      CountDown : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UClass*                                      Pickup;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGlimpseQuestData                           JournalData;                                              // 0x0000(0x0068) (Edit, DisableEditOnInstance)
	struct FText                                       ObjectiveText;                                            // 0x0000(0x0018) (Deprecated)
	struct FText                                       ObjectiveActivationText;                                  // 0x0000(0x0018) (Deprecated)
	struct FText                                       ObjectiveCompletionText;                                  // 0x0000(0x0018) (Deprecated)
	struct FText                                       ObjectiveFailureText;                                     // 0x0000(0x0018) (Deprecated)
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0018(0x00E0) MISSED OFFSET
};

// ScriptStruct GlimpseGame.ObjectiveProgress
// 0x0020
struct FObjectiveProgress
{
	struct FName                                       ObjectiveKey;                                             // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<EObjectiveStatus>                      ObjectiveStatus;                                          // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                CurrentCount;                                             // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FDateTime                                   ActivationTimestamp;                                      // 0x0000(0x0008) (ZeroConstructor, SaveGame)
	struct FDateTime                                   CompletionTimestamp;                                      // 0x0000(0x0008) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSpawnModelActorFixup
// 0x0010
struct FGlimpseSpawnModelActorFixup
{
	struct FName                                       ActorName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDestroy : 1;                                             // 0x0000(0x0001)
	unsigned char                                      bFollowTerrainHeight : 1;                                 // 0x0000(0x0001)
	unsigned char                                      bFollowTerrainSlope : 1;                                  // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.ObjectiveSelector
// 0x0060
struct FObjectiveSelector
{
	TEnumAsByte<EQuestSelectorType>                    SelectorType;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Quest;                                                    // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TAssetPtr<class UClass>                            QuestClass;                                               // 0x0000(0x0020) (Edit, BlueprintVisible)
	TArray<struct FName>                               Objectives;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0010(0x0050) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseMapPOI
// 0x0280
struct FGlimpseMapPOI
{
	TEnumAsByte<EGlimpseMapPOI>                        Category;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RevealDistance;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HintDistance;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       DisplayDescription;                                       // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CustomCloseZoomIcon;                                      // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 CustomFarZoomIcon;                                        // 0x0000(0x0090) (Edit, BlueprintVisible)
	struct FSlateBrush                                 AreaMarkerBrush;                                          // 0x0000(0x0090) (Edit, BlueprintVisible)
	float                                              AreaRadius;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   AreaCircleWorldPosition;                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   WorldPosition;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               Use3DWorldPosition;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldPosition3D;                                          // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoReveal : 1;                                          // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bForceHint : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible)
	struct FObjectiveSelector                          QuestSelector;                                            // 0x0000(0x0060) (Edit, BlueprintVisible)
	unsigned char                                      bQuestAutoReveal : 1;                                     // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bQuestShowQuestText : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bQuestShowObjectiveText : 1;                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverrideRevealDistance : 1;                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bOverrideHintDistance : 1;                                // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseCustomIcon : 1;                                       // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x27F];                                     // 0x0001(0x027F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSpawnModelMapPOI
// 0x0290
struct FGlimpseSpawnModelMapPOI
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FGlimpseMapPOI                              POIData;                                                  // 0x0000(0x0280)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0280(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSpawnModelLevel
// 0x0080
struct FGlimpseSpawnModelLevel
{
	struct FStringAssetReference                       LevelPackageReference;                                    // 0x0000(0x0010) (ZeroConstructor)
	struct FName                                       LevelKeyName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                StreamOrder;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  LevelTransform;                                           // 0x0000(0x0030) (IsPlainOldData)
	TEnumAsByte<EStoryCharacter>                       LevelStoryCharacter;                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseGameMode>                      LevelGameMode;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGlimpseSpawnModelActorFixup>        ActorFixups;                                              // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FGlimpseSpawnModelMapPOI>            MapPOIs;                                                  // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      bFollowTerrainSlope : 1;                                  // 0x0000(0x0001)
	unsigned char                                      bIsProxy : 1;                                             // 0x0000(0x0001)
	unsigned char                                      bSpawnAsDecorations : 1;                                  // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x7F];                                      // 0x0001(0x007F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSpawnModelPlayerSpawn
// 0x0028
struct FGlimpseSpawnModelPlayerSpawn
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<EStoryCharacter>                       StoryCharacter;                                           // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      bInitialSpawn : 1;                                        // 0x0000(0x0001) (SaveGame)
	unsigned char                                      bAllowSystemicSpawning : 1;                               // 0x0000(0x0001) (SaveGame)
	int                                                LevelIndex;                                               // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       ActorName;                                                // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       ComponentName;                                            // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSpawnModelFastTravelLocation
// 0x00D8
struct FGlimpseSpawnModelFastTravelLocation
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       TeleportName;                                             // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       FastTravelLocationName;                                   // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FText                                       FastTravelLocationLocalizedName;                          // 0x0000(0x0018) (SaveGame)
	TArray<struct FText>                               FastTravelLocationLocNameVariations;                      // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	struct FText                                       ArthurOverrideLocationLocalizedName;                      // 0x0000(0x0018) (SaveGame)
	struct FText                                       SallyOverrideLocationLocalizedName;                       // 0x0000(0x0018) (SaveGame)
	struct FText                                       OliverOverrideLocationLocalizedName;                      // 0x0000(0x0018) (SaveGame)
	int                                                LevelIndex;                                               // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       ActorName;                                                // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               StartActive;                                              // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD7];                                      // 0x0001(0x00D7) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSpawnModelLocationMarker
// 0x0020
struct FGlimpseSpawnModelLocationMarker
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       LocationName;                                             // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSpawnModelProxyAsset
// 0x0040
struct FGlimpseSpawnModelProxyAsset
{
	struct FStringAssetReference                       MeshAsset;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSpawnModelFoliage
// 0x0048
struct FGlimpseSpawnModelFoliage
{
	TAssetPtr<class UStaticMesh>                       FoliageMesh;                                              // 0x0000(0x0020)
	TArray<TAssetPtr<class UMaterialInterface>>        FoliageMaterials;                                         // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bAsFoliage;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x47];                                      // 0x0001(0x0047) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSpawnModelDecal
// 0x0040
struct FGlimpseSpawnModelDecal
{
	TAssetPtr<class UMaterialInterface>                Decal;                                                    // 0x0000(0x0020)
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<uint16_t>                                   DecalSizes;                                               // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0010(0x0030) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSpawnModelDecoration
// 0x0030
struct FGlimpseSpawnModelDecoration
{
	TAssetPtr<class UClass>                            DecorationClass;                                          // 0x0000(0x0020)
	TArray<struct FTransform>                          Transforms;                                               // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSpawnModelRoadPoint
// 0x0024
struct FGlimpseSpawnModelRoadPoint
{
	int                                                PointId;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                JunctionId;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RoadId;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Direction;                                                // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x000C(0x0018) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSpawnModelRoadJunction
// 0x0020
struct FGlimpseSpawnModelRoadJunction
{
	int                                                JunctionId;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        PointIds;                                                 // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSpawnModelRoad
// 0x0018
struct FGlimpseSpawnModelRoad
{
	int                                                RoadId;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RoadWidth;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        PointIds;                                                 // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSpawnModelRoadNetwork
// 0x00F0
struct FGlimpseSpawnModelRoadNetwork
{
	TMap<int, struct FGlimpseSpawnModelRoadPoint>      PointMap;                                                 // 0x0000(0x0050) (ZeroConstructor)
	TMap<int, struct FGlimpseSpawnModelRoadJunction>   JunctionMap;                                              // 0x0000(0x0050) (ZeroConstructor)
	TMap<int, struct FGlimpseSpawnModelRoad>           RoadMap;                                                  // 0x0000(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0050(0x00A0) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseStreamingPlayerSpawn
// 0x0040
struct FGlimpseStreamingPlayerSpawn
{
	struct FGlimpseSpawnModelPlayerSpawn               PlayerSpawn;                                              // 0x0000(0x0028)
	class UGlimpseStreamingLevel*                      Level;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGlimpseWorldElement*                        Element;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ZoneId;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0004(0x003C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseStreamingFastTravelLocation
// 0x00F0
struct FGlimpseStreamingFastTravelLocation
{
	struct FGlimpseSpawnModelFastTravelLocation        FTLocation;                                               // 0x0000(0x00D8)
	class UGlimpseStreamingLevel*                      Level;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGlimpseWorldElement*                        Element;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ZoneId;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xEC];                                      // 0x0004(0x00EC) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseStreamingLocationMarker
// 0x0030
struct FGlimpseStreamingLocationMarker
{
	struct FGlimpseSpawnModelLocationMarker            LocationMarker;                                           // 0x0000(0x0020)
	class UGlimpseWorldElement*                        Element;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ZoneId;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0004(0x002C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseStreamingLocationMarkerList
// 0x0010
struct FGlimpseStreamingLocationMarkerList
{
	TArray<struct FGlimpseStreamingLocationMarker>     Markers;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct GlimpseGame.GlimpseStreamingCriticalActor
// 0x0050
struct FGlimpseStreamingCriticalActor
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGlimpseStreamingLevel*                      StreamingLevel;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UGlimpseWorldElement*>                DependentElements;                                        // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0010(0x0040) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseManualStreamingElement
// 0x0010
struct FGlimpseManualStreamingElement
{
	class UGlimpseWorldElement*                        Element;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseStreamingLevelState>           State;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseStreamingCachedAsset
// 0x0010
struct FGlimpseStreamingCachedAsset
{
	class UObject*                                     CachedAsset;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              ExpiryTime;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseStreamingCachedActor
// 0x0010
struct FGlimpseStreamingCachedActor
{
	class AActor*                                      CachedAsset;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldConnection
// 0x0040
struct FGlimpseWorldConnection
{
	int                                                ConnectionId;                                             // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FGlimpseFrame2D                             Frame;                                                    // 0x0000(0x0014) (SaveGame)
	class UGlimpseWorldRoad*                           Road;                                                     // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bTerminal;                                                // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bDisabled;                                                // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                PreferredRoadLevel;                                       // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              LimitT;                                                   // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                PrevSidewalkIndex;                                        // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                NextSidewalkIndex;                                        // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                PrevGroundIndex;                                          // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                NextGroundIndex;                                          // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0004(0x003C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldIntersectionEdge
// 0x0098
struct FGlimpseWorldIntersectionEdge
{
	struct FGlimpseOutline                             Outline;                                                  // 0x0000(0x0098) (SaveGame)
};

// ScriptStruct GlimpseGame.GlimpseWorldConnectionRef
// 0x0010
struct FGlimpseWorldConnectionRef
{
	class UGlimpseWorldIntersection*                   Intersection;                                             // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                ConnectionId;                                             // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldIntersectionEdgeSequence
// 0x0030
struct FGlimpseWorldIntersectionEdgeSequence
{
	TArray<struct FGlimpseWorldIntersectionEdge>       Edges;                                                    // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	struct FGlimpseWorldConnectionRef                  CStart;                                                   // 0x0000(0x0010) (SaveGame)
	struct FGlimpseWorldConnectionRef                  CEnd;                                                     // 0x0000(0x0010) (SaveGame)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldIntersectionBed
// 0x0100
struct FGlimpseWorldIntersectionBed
{
	class UGlimpseRoadModel*                           RoadModel;                                                // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              BedWidth;                                                 // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              RoadWidth;                                                // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FGlimpseCurve                               Curve;                                                    // 0x0000(0x0030) (SaveGame)
	TArray<struct FGlimpseOutline>                     Outlines;                                                 // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	struct FGlimpseWorldConnectionRef                  CStart;                                                   // 0x0000(0x0010) (SaveGame)
	struct FGlimpseWorldConnectionRef                  CEnd;                                                     // 0x0000(0x0010) (SaveGame)
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0010(0x00F0) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseIntersectionCorner
// 0x0228
struct FGlimpseIntersectionCorner
{
	float                                              Angle;                                                    // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FGlimpseWorldConnectionRef                  c1;                                                       // 0x0000(0x0010) (SaveGame)
	struct FGlimpseWorldConnectionRef                  c2;                                                       // 0x0000(0x0010) (SaveGame)
	float                                              t1;                                                       // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              t2;                                                       // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector                                     Point;                                                    // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FGlimpseOutline                             c1Outline;                                                // 0x0000(0x0098) (SaveGame)
	struct FGlimpseOutline                             c2Outline;                                                // 0x0000(0x0098) (SaveGame)
	struct FGlimpseOutline                             UniqueOutline;                                            // 0x0000(0x0098) (SaveGame)
	struct FVector2D                                   c1Normal;                                                 // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector2D                                   c2Normal;                                                 // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               hasContinuousOutline;                                     // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x227];                                     // 0x0001(0x0227) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldRoadPoint
// 0x0018
struct FGlimpseWorldRoadPoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector                                     Tangent;                                                  // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldCycleEdgeRoad
// 0x0010
struct FGlimpseWorldCycleEdgeRoad
{
	class UGlimpseWorldRoad*                           Road;                                                     // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bPositiveSide;                                            // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldCycleEdge
// 0x00B0
struct FGlimpseWorldCycleEdge
{
	struct FGlimpseOutline                             Outline;                                                  // 0x0000(0x0098) (SaveGame)
	class UGlimpseWorldStreet*                         Street;                                                   // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FGlimpseWorldCycleEdgeRoad>          Roads;                                                    // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0010(0x00A0) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseRoadSidewalkCorner
// 0x0010
struct FGlimpseRoadSidewalkCorner
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseAITableRow
// 0x0048 (0x0050 - 0x0008)
struct FGlimpseAITableRow : public FTableRowBase
{
	struct FName                                       Zone;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       Region;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<EGlimpseAITableType>                   Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                PopulationSize;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              RepopulationRatePerDay;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<EGlimpseHighwayAgent>                  PatrolHighwayAgent;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      bPatrolsCanShareEdges : 1;                                // 0x0000(0x0001) (Edit, DisableEditOnInstance, SaveGame)
	unsigned char                                      bPatrolsCanShareNodes : 1;                                // 0x0000(0x0001) (Edit, DisableEditOnInstance, SaveGame)
	class UClass*                                      Blueprint;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<TEnumAsByte<ETimeOfDay>>                    RestrictedTimeOfDays;                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, SaveGame)
	class UClass*                                      Spawner;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseRegisteredAISpawner
// 0x0020
struct FGlimpseRegisteredAISpawner
{
	class AGlimpseAISpawner*                           Spawner;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FBox2D                                      Box;                                                      // 0x0000(0x0014) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.CandidateToIgnore
// 0x0028
struct FCandidateToIgnore
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct GlimpseGame.PickupListEntry
// 0x0020
struct FPickupListEntry
{
	class UClass*                                      Pickup;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   StackRange;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGlimpsePickupList*                          SubList;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPickupRarity>                         Rarity;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.PickupList
// 0x0048
struct FPickupList
{
	TArray<struct FPickupListEntry>                    Entries;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              PickupList;                                               // 0x0000(0x0010) (ZeroConstructor, Deprecated)
	TArray<class UGlimpsePickupList*>                  PickupSubLists;                                           // 0x0000(0x0010) (ZeroConstructor, Deprecated)
	TArray<TEnumAsByte<EPickupRarity>>                 PickupRarities;                                           // 0x0000(0x0010) (ZeroConstructor, Deprecated)
	unsigned char                                      bUseRarities : 1;                                         // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x47];                                      // 0x0001(0x0047) MISSED OFFSET
};

// ScriptStruct GlimpseGame.PickupSelector
// 0x0068
struct FPickupSelector
{
	unsigned char                                      bUsePickupList : 1;                                       // 0x0000(0x0001) (Edit)
	class UGlimpsePickupList*                          PickupList;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              PickupTypes;                                              // 0x0000(0x0010) (ZeroConstructor, Deprecated)
	struct FPickupList                                 Pickups;                                                  // 0x0000(0x0048) (Edit)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseDifficultySettings
// 0x0007
struct FGlimpseDifficultySettings
{
	TEnumAsByte<EGlimpseGameDifficulty>                suspicion;                                                // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<EGlimpseGameDifficulty>                SurvivalNeeds;                                            // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<EGlimpseGameDifficulty>                CombatDifficulty;                                         // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<EGlimpseGameDifficulty>                ResourceDifficulty;                                       // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bPermadeath;                                              // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bPauseInMenus;                                            // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bAllowDegradation;                                        // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0001(0x0006) MISSED OFFSET
};

// ScriptStruct GlimpseGame.TimeScale
// 0x0004
struct FTimeScale
{
	float                                              TimeScale;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GlimpseGame.GlimpseLootTableReference
// 0x0028
struct FGlimpseLootTableReference
{
	TEnumAsByte<EStoryCharacter>                       Character;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UDataTable>                        Table;                                                    // 0x0000(0x0020) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.TeamAttitudeItem
// 0x0009
struct FTeamAttitudeItem
{
	TEnumAsByte<ETeamAttitude>                         Attitudes[0x9];                                           // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct GlimpseGame.GlimpseAudioData
// 0x0068
struct FGlimpseAudioData
{
	float                                              AmbientMusicIdleDelay;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuspicionFightDelayIn;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuspicionFightDelayOut;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               OceanAmbienceSoundEvent_Start;                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               OceanAmbienceSoundEvent_Stop;                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               AmbienceSoundEvent_Start;                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               AmbienceSoundEvent_Stop;                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               CinematicEvent_Interrupt;                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinBarkDelayNormal;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinBarkDelaySuspicion;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBarkDelay;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               InterruptBarksEvent;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               InterruptLoopingEvent;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               HeartbeatOn;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               HeartbeatOff;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0008(0x0060) MISSED OFFSET
};

// ScriptStruct GlimpseGame.CorpsesData
// 0x0030
struct FCorpsesData
{
	float                                              SuspicionDuration;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DisappearanceTimeHours;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSuspicionEffect                            SuspicionEffect;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UParticleSystem*                             IgnoredCorpseVFX;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             RottenCorpseVFX;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               CorpseSFX;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct GlimpseGame.ImpactEffect
// 0x0028
struct FImpactEffect
{
	class UParticleSystem*                             VFX;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Decals;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     DecalScale;                                               // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x000C(0x001C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseCombatSettings
// 0x01C0
struct FGlimpseCombatSettings
{
	int                                                MaxHostilesOnPlayer;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TokenPeriodCurves[0x3];                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TokenPeriodRandomVariations[0x3];                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpecialMoveTokenPeriod[0x3];                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpecialMoveCountByAgent;                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              QuickAttackCooldown;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerRingRadius;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerRingShiftDegrees;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InnerRingNbSlots;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterRingRadius;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterRingShiftDegrees;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OuterRingNbSlots;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CheerRingRadius;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CheerRingShiftDegrees;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CheerRingNbSlots;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CheerRingTolerance;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FImpactEffect                               ImpactEffect_Blood;                                       // 0x0000(0x0028) (Edit, DisableEditOnInstance)
	struct FImpactEffect                               ImpactEffect_NonLethal;                                   // 0x0000(0x0028) (Edit, DisableEditOnInstance)
	struct FImpactEffect                               ImpactEffect_Concrete;                                    // 0x0000(0x0028) (Edit, DisableEditOnInstance)
	struct FImpactEffect                               ImpactEffect_Metal;                                       // 0x0000(0x0028) (Edit, DisableEditOnInstance)
	struct FImpactEffect                               ImpactEffect_Wood;                                        // 0x0000(0x0028) (Edit, DisableEditOnInstance)
	float                                              BloodFXScaleOnHeadHit;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadDamageMultiplier;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitReactionImpulseScale;                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 HitReactionImpulseCurve;                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RecoilTimeOnObjectsInterrupt;                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NearMissReach;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayerHitReactionsDurationFactors[0x3];                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VeryQuickReactionTime;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              QuickReactionTime;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShoveReach;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShoveRadius;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ShoveSoundEvent;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               BodyFallSoundEvent;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LightCombatMoveCooldown;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MediumCombatMoveCooldown;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeavyCombatMoveCooldown;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LightAttackWindUpTime;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MediumAttackWindUpTime;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeavyAttackWindUpTime;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HitWhileStaggerDamagerMultiplier;                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaggerKnockDownChanceLight;                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaggerKnockDownChanceCharged;                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackStrengthDamageMultiplierLight;                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackStrengthDamageMultiplierMedium;                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackStrengthDamageMultiplierHeavy;                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PreventFriendlyFire;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FriendlyFireDamageReduction;                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParryWindowDuration;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParryStaminaBoost;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1BC];                                     // 0x0004(0x01BC) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseThrowSettings
// 0x0040
struct FGlimpseThrowSettings
{
	class UMaterialInterface*                          ThrowableTargetingDecal;                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ThrowableTargetingDecalScale;                             // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  ThrowableTargetingReticle;                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrowableTargetingReticleScale;                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FColor                                      ThrowableTargetingReticleColour;                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrowableTargetingReticleRotationPeriod;                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          ThrowTrajectoryMaterial;                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrowTrajectoryThickness;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrowTrajectoryUpOffset;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0004(0x003C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseDrowningSettings
// 0x0020
struct FGlimpseDrowningSettings
{
	class UClass*                                      DrowningDamageType;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SplashVFX;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SplashVFXScale;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SplashSoundEvent;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseBirdsSettings
// 0x0020
struct FGlimpseBirdsSettings
{
	float                                              DistanceFromOutline;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceBetweenSpawns;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinHeight;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxHeight;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             VFX_Left;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             VFX_Right;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseLootContentOverride
// 0x00A0
struct FGlimpseLootContentOverride
{
	TArray<TAssetPtr<class UClass>>                    TargetLootables;                                          // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FGlimpseLootContents                        LootContents;                                             // 0x0000(0x0090) (Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseLootContentOverrideEntry
// 0x00A0 (0x00A8 - 0x0008)
struct FGlimpseLootContentOverrideEntry : public FTableRowBase
{
	struct FGlimpseLootContentOverride                 LootOverride;                                             // 0x0000(0x00A0) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseAIBalanceTableEntry
// 0x00F8 (0x0100 - 0x0008)
struct FGlimpseAIBalanceTableEntry : public FTableRowBase
{
	int                                                NPCTypeIdentifier;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Tier;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStoryCharacter>                       StoryCharacter;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UClass>                            Blueprint;                                                // 0x0000(0x0020) (Edit)
	struct FGameplayTagContainer                       LocationTags;                                             // 0x0000(0x0020) (Edit)
	bool                                               OverrideMaxHealth;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxHealth;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideStartingHealth;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartHealth;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideLoot;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGlimpseLootContents                        LootContents;                                             // 0x0000(0x0090) (Edit)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0090(0x0070) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseQuestRewardsTableEntry
// 0x00B8 (0x00C0 - 0x0008)
struct FGlimpseQuestRewardsTableEntry : public FTableRowBase
{
	TAssetPtr<class UClass>                            Quest;                                                    // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	int                                                NumSkillPointsToAward;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrencyReward;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGlimpseLootContents                        LootContentsReward;                                       // 0x0000(0x0090) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0090(0x0030) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseBroadcasterMaterial
// 0x0020
struct FGlimpseBroadcasterMaterial
{
	struct FString                                     MaterialName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UMaterialInterface*                          ParentMaterial;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TextureProperty;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct GlimpseGame.BroadcastTimeslotSchedule
// 0x0010
struct FBroadcastTimeslotSchedule
{
	struct FName                                       TimeslotKey;                                              // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       ItemKey;                                                  // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.BroadcastScheduleDay
// 0x0010
struct FBroadcastScheduleDay
{
	TArray<struct FBroadcastTimeslotSchedule>          BroadcastTimeslots;                                       // 0x0000(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct GlimpseGame.BroadcastSchedule
// 0x0010
struct FBroadcastSchedule
{
	TArray<struct FBroadcastScheduleDay>               BroadcastDays;                                            // 0x0000(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct GlimpseGame.BroadcastTimeslot
// 0x0038
struct FBroadcastTimeslot
{
	struct FName                                       TimeslotKey;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimespan                                   TimeslotTime;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bMandatory : 1;                                           // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	uint32_t                                           BroadcastTypes;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	uint32_t                                           Biomes;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bUseMaximumBroadcasts : 1;                                // 0x0000(0x0001)
	TArray<struct FName>                               TimeslotBroadcasts;                                       // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                MaximumBroadcasts;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x34];                                      // 0x0004(0x0034) MISSED OFFSET
};

// ScriptStruct GlimpseGame.TimeOfDayObserver
// 0x0020
struct FTimeOfDayObserver
{
	struct FTimespan                                   time;                                                     // 0x0000(0x0008) (ZeroConstructor)
	struct FScriptDelegate                             Delegate;                                                 // 0x0000(0x0014) (ZeroConstructor, InstancedReference)
	unsigned char                                      bOnce : 1;                                                // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SandboxStatistics
// 0x0048
struct FSandboxStatistics
{
	int                                                TotalScore;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TotalTime;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeSleeping;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeAwake;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Escaped;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Died;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumKills;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SkillPointsEarned;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PowerCellsFound;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                KeycardsFound;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       WeaponPreference;                                         // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              WithdrawalTime;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x44];                                      // 0x0004(0x0044) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseBroadcasterAudio
// 0x0010
struct FGlimpseBroadcasterAudio
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseBroadcastType>                 BroadcastType;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLongRange : 1;                                           // 0x0000(0x0001)
	unsigned char                                      bDontPlayIntermissionAudio : 1;                           // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.TargetingInfo
// 0x000C
struct FTargetingInfo
{
	float                                              TargetDistance;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetHorizontalDistance;                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TargetHalfAngle;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.ConversationModeSettings
// 0x0028
struct FConversationModeSettings
{
	float                                              BlendInTime;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReframingBlendTime;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDistance;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bMovePlayerInFront : 1;                                   // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bMaintainPlayerZ : 1;                                     // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bNoPlayerCrouch : 1;                                      // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bConversationPreservesPlayerState : 1;                    // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bDontLookAtOtherCharacters : 1;                           // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUsePlayerLookAtFromConversationAsset : 1;                // 0x0000(0x0001) (Edit, BlueprintVisible)
	struct FVector                                     TargetEyesOffset;                                         // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdjustmentCooldown;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdjustmentMinAngleDelta;                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0004(0x0024) MISSED OFFSET
};

// ScriptStruct GlimpseGame.TimespanTimer
// 0x0010
struct FTimespanTimer
{
	struct FTimespan                                   DurationUntilDue;                                         // 0x0000(0x0008) (ZeroConstructor, SaveGame)
	struct FTimespan                                   TimeUntilDue;                                             // 0x0000(0x0008) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.TimeModifier
// 0x0020
struct FTimeModifier
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FTimespanTimer                              Timer;                                                    // 0x0000(0x0010) (SaveGame)
	float                                              ModifierPercentage;                                       // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0004(0x001C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.RecurringTask
// 0x0038
struct FRecurringTask
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bPermanent;                                               // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FTimespanTimer                              Timer;                                                    // 0x0000(0x0010) (SaveGame)
	TArray<struct FTimeModifier>                       TimeModifiers;                                            // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) MISSED OFFSET
};

// ScriptStruct GlimpseGame.LoreProgress
// 0x0028
struct FLoreProgress
{
	struct FName                                       LoreKey;                                                  // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<bool>                                       LoreViewed;                                               // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	struct FDateTime                                   FoundTimestamp;                                           // 0x0000(0x0008) (ZeroConstructor, SaveGame)
	struct FDateTime                                   ReadTimestamp;                                            // 0x0000(0x0008) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseStats
// 0x0460
struct FGlimpseStats
{
	unsigned char                                      UnknownData00[0x460];                                     // 0x0000(0x0460) MISSED OFFSET
};

// ScriptStruct GlimpseGame.RecipeState
// 0x0020
struct FRecipeState
{
	struct FName                                       RecipeKey;                                                // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      bIsUnlocked : 1;                                          // 0x0000(0x0001) (SaveGame)
	unsigned char                                      bIsRead : 1;                                              // 0x0000(0x0001) (SaveGame)
	TArray<struct FName>                               UnlockedIngredients;                                      // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.Notification
// 0x00C0
struct FNotification
{
	struct FName                                       NotificationKey;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       NotificationTitle;                                        // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       NotificationText;                                         // 0x0000(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      bLargeNotification : 1;                                   // 0x0000(0x0001) (Edit, BlueprintVisible)
	class UTexture2D*                                  NotificationIcon;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCheckmarkIcon;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCritical;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSecondary;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoFadeTimeOverride;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoFade;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SoundEvent;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0008(0x00B8) MISSED OFFSET
};

// ScriptStruct GlimpseGame.DeathScreenMovie
// 0x0018
struct FDeathScreenMovie
{
	TEnumAsByte<EDeathScreen>                          DeathType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     DeathMovie;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.InGameTip
// 0x0060
struct FInGameTip
{
	struct FName                                       TipKey;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       TipTitle;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       TipBody;                                                  // 0x0000(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  TipIcon;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TipTint;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCompact : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bShowInGameplayVolumes : 1;                               // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAlwaysShow : 1;                                          // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAutoHide : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bUseSubMenuContext : 1;                                   // 0x0000(0x0001)
	float                                              AutoHideTime;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPlayerMenu>                           SubMenuContext;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5F];                                      // 0x0001(0x005F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.InteractionPrompt
// 0x0030
struct FInteractionPrompt
{
	struct FText                                       BasicPrompt;                                              // 0x0000(0x0018) (Edit)
	struct FText                                       DescriptivePrompt;                                        // 0x0000(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct GlimpseGame.BlinkSettings
// 0x0014
struct FBlinkSettings
{
	struct FRotator                                    EyeLidOrientationMask;                                    // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxClosingAngle_Top;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxClosingAngle_Bot;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0004(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.ValueModifier
// 0x0010
struct FValueModifier
{
	struct FGameplayTag                                ValueType;                                                // 0x0000(0x0008) (Edit)
	TEnumAsByte<EValueModifierApplication>             Application;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Modifier;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.StatusEffectSelector
// 0x0018
struct FStatusEffectSelector
{
	float                                              Probability;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStatusEffectSelection>                EffectSelection;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      StatusEffect;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumTiers;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct GlimpseGame.BlockWeaponData
// 0x0030
struct FBlockWeaponData
{
	float                                              BlockHealthRatio;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockStaminaRatio;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockDurabilityCost;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockBreakValue;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileBlockHealthRatio;                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               BlockSoundEvent;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               BlockStartSoundEventOverride;                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               BlockStopSoundEventOverride;                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct GlimpseGame.WeaponStatusEffectData
// 0x0010
struct FWeaponStatusEffectData
{
	class UClass*                                      StatusEffectType;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              ChanceToApply;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.MeleeWeaponData
// 0x00E0
struct FMeleeWeaponData
{
	unsigned char                                      bNoDamageWhenBlocked : 1;                                 // 0x0000(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bPointWeapon;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EstimatedDPStamina;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              EstimatedAttackSeconds;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damage;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMeleeWeaponCategory>                  MeleeWeaponCategory;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FWeaponStatusEffectData>             StatusEffects;                                            // 0x0000(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FStatusEffectSelector>               StatusEffectSelectors;                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00 : 1;                                        // 0x0000(0x0001)
	unsigned char                                      bUnblockableUnarmed : 1;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DamageReductionOnSubsequentHits;                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaggerChance;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaCost;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WorldHitDurabilityCost;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharacterHitDurabilityCost;                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockDurabilityCostMultiplier;                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeavyAttackMinChargeTime;                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeavyAttackChargeTime;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeavyAttackChargedMultiplier;                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeavyAttackChargedStaminaCost;                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Reach;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageBasic;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaBasic;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReachBasic;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Sweep;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EstimatedDPS;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bStickOnARope;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SweepOrientation;                                         // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AIReachTolerance;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimationSpeedMultiplier;                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               ImpactSoundEvent;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               WhooshSoundEvent;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        ImpactForceFeedback;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             CharacterHitVFX;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CharacterHitVFXScale;                                     // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BreakVFX;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       OverrideDamageModifierName;                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0xD8];                                      // 0x0008(0x00D8) MISSED OFFSET
};

// ScriptStruct GlimpseGame.ThrowableOnHitEffect
// 0x0080
struct FThrowableOnHitEffect
{
	class UParticleSystem*                             VFX;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VFXScale;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SoundEvent;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damage;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bRadialDamage : 1;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bStun : 1;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              ChanceOfStun;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bKnockback : 1;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FWeaponStatusEffectData>             StatusEffects;                                            // 0x0000(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FStatusEffectSelector>               StatusEffectSelectors;                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              SuspicionValue;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuspicionNoiseRange;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      SuspicionExplosion : 1;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	int                                                NumDistractedAgents;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAIDetectionTarget>                    SuspicionDetectionTarget;                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuspicionNoiseDuration;                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SpecialDamageGrunt;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0008(0x0078) MISSED OFFSET
};

// ScriptStruct GlimpseGame.ThrowableContinuousEffect
// 0x0070
struct FThrowableContinuousEffect
{
	class UParticleSystem*                             VFX;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     VFXScale;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SoundEvent_Start;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SoundEvent_Stop;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TickPeriod;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bCreateObstacle : 1;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bObstacleBlocksVisibility : 1;                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UClass*                                      DamageType;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Damage;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FWeaponStatusEffectData>             StatusEffects;                                            // 0x0000(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FStatusEffectSelector>               StatusEffectSelectors;                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bOnlyOncePerCharacter : 1;                                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bOnlyIfCanBeDamagedByGas : 1;                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x6F];                                      // 0x0001(0x006F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.ThrowWeaponData
// 0x0140
struct FThrowWeaponData
{
	unsigned char                                      bSnapToTargetOnQuickshot : 1;                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UAkAudioEvent*                               ThrowStartSoundEvent;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bDrop : 1;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              LaunchSpeed;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bImmediateLaunch : 1;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              LaunchPitchOffset;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FlightOrientation;                                        // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravityFactor;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaCost;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageStat;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaStat;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedStat;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReachStat;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AOEStat;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Lifetime;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bHiddenAfterHit : 1;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bStopPhysicsAfterHit : 1;                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FThrowableOnHitEffect                       OnHitEffect;                                              // 0x0000(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FThrowableContinuousEffect                  ContinuousEffect;                                         // 0x0000(0x0070) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0070(0x00D0) MISSED OFFSET
};

// ScriptStruct GlimpseGame.FireShotData
// 0x0088
struct FFireShotData
{
	struct FName                                       DamageModifierName;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FThrowableOnHitEffect                       OnHitEffect;                                              // 0x0000(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.FirearmData
// 0x0110
struct FFirearmData
{
	struct FFireShotData                               BaseShotData;                                             // 0x0000(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FFireShotData                               ChargedShotData;                                          // 0x0000(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0088(0x0088) MISSED OFFSET
};

// ScriptStruct GlimpseGame.WeaponAnimationData
// 0x0020
struct FWeaponAnimationData
{
	class UAnimMontage*                                BlockLoop;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                BlockReactLeft;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                BlockReactRight;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Parry;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SuspicionAnimationData
// 0x0008
struct FSuspicionAnimationData
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GlimpseGame.MantleAnimationCachedData
// 0x000C
struct FMantleAnimationCachedData
{
	struct FVector                                     RootTranslation;                                          // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct GlimpseGame.StandardAnimationCachedData
// 0x0028
struct FStandardAnimationCachedData
{
	TEnumAsByte<EAnimPlayback>                         Playback;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<struct FName>                               SectionNames;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<struct FName>                               OutroSectionNames;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct GlimpseGame.InterpMoveInfo
// 0x0044
struct FInterpMoveInfo
{
	float                                              TimeLeft;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurrentTargetLocation;                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CurrentTargetRotation;                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              LocationInterpSpeed;                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RotationInterpSpeed;                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableCollision : 1;                                     // 0x0000(0x0001)
	TEnumAsByte<ECollisionEnabled>                     PreviousCollisionEnabled;                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x43];                                      // 0x0001(0x0043) MISSED OFFSET
};

// ScriptStruct GlimpseGame.StateSettings_CarryCorpse_Impulse
// 0x0018
struct FStateSettings_CarryCorpse_Impulse
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Impulse;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.StateSettings_CarryCorpse
// 0x0038
struct FStateSettings_CarryCorpse
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               DropSoundEvent;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FStateSettings_CarryCorpse_Impulse>  ThrowImpulses;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UAnimMontage*                                PickupMontage;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                DropMontage;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ThrowMontage;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct GlimpseGame.StateSettings_Equip
// 0x0010
struct FStateSettings_Equip
{
	class UAkAudioEvent*                               EquipWeaponSoundEvent;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               EquipOutfitSoundEvent;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.StateSettings_Block
// 0x0010
struct FStateSettings_Block
{
	class UAkAudioEvent*                               BlockStartSoundEvent;                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               BlockStopSoundEvent;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.LootRoll
// 0x0008
struct FLootRoll
{
	float                                              ProbabilityWeight;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPickupRarity>                         MaximumRarity;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
};

// ScriptStruct GlimpseGame.CurrentStandardAnimationInfo
// 0x0020
struct FCurrentStandardAnimationInfo
{
	TEnumAsByte<EStandardAnimation>                    AnimationType;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStandardAnimationMode>                ModeType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStandardAnimationMovement>            MovementType;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timer;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsPaused : 1;                                            // 0x0000(0x0001)
	unsigned char                                      bIsBlendingOut : 1;                                       // 0x0000(0x0001)
	unsigned char                                      bHasOutro : 1;                                            // 0x0000(0x0001)
	class AActor*                                      Focus;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct GlimpseGame.CombatMoveTargetConditions
// 0x0038
struct FCombatMoveTargetConditions
{
	float                                              MinRange;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TAssetPtr<class UClass>>                    SpecificEnemiesList;                                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              SpecificEnemies;                                          // 0x0000(0x0010) (ZeroConstructor, Deprecated)
	float                                              MinTargetFacing;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTargetFacing;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bUnaware : 1;                                             // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bStunned : 1;                                             // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAsleep : 1;                                              // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bUseAngle : 1;                                            // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	float                                              HalfAngle;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x34];                                      // 0x0004(0x0034) MISSED OFFSET
};

// ScriptStruct GlimpseGame.CombatMoveGrabResist
// 0x0010
struct FCombatMoveGrabResist
{
	float                                              StartSlowFactor;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FullSlowFactor;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GainPerPress;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LossPerSecond;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.CombatMoveMeleeSnap
// 0x0018
struct FCombatMoveMeleeSnap
{
	bool                                               bUseTargetReference;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRadialTargetReference;                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bUseWeaponReach : 1;                                      // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	float                                              DesiredDistance;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Duration;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bTrackTarget : 1;                                         // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0001(0x0017) MISSED OFFSET
};

// ScriptStruct GlimpseGame.ChargedMoveOutros
// 0x0040
struct FChargedMoveOutros
{
	struct FName                                       MontageSectionName;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCombatMoveTargetConditions                 TargetConditions;                                         // 0x0000(0x0038) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.CombatMove
// 0x01C8
struct FCombatMove
{
	unsigned char                                      bComboOnly : 1;                                           // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bTakedown : 1;                                            // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bNoLookAtTarget : 1;                                      // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bTakedownWithItem : 1;                                    // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bGrab : 1;                                                // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bStunFinisher : 1;                                        // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bForceUncrouch : 1;                                       // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bStayCrouched : 1;                                        // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	struct FName                                       MoveName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECombatMoveTrigger>                    TriggerType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bChargedMove : 1;                                         // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	TEnumAsByte<ECombatMoveType>                       MoveType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00 : 1;                                        // 0x0000(0x0001)
	unsigned char                                      bBrushOffOnly : 1;                                        // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    SpecificWeaponList;                                       // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    SpecificPickupList;                                       // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TAssetPtr<class UClass>                            RequiredSkill;                                            // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	unsigned char                                      bRequireTarget : 1;                                       // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	struct FCombatMoveTargetConditions                 TargetConditions;                                         // 0x0000(0x0038) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01 : 6;                                        // 0x0000(0x0001)
	unsigned char                                      bHideEquippedPickup : 1;                                  // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	struct FCombatMoveGrabResist                       GrabResistSettings;                                       // 0x0000(0x0010) (Edit, DisableEditOnInstance)
	struct FName                                       SweepStartSocket;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StaminaCost;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bStaminaRequiredAtStart : 1;                              // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                TrueFemaleMontage;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                FemaleMontage;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                MirrorMontage;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                EquippedPickupMontage;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PSTemplate;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PSSocketName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PSLocationOffset;                                         // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    PSRotationOffset;                                         // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpeedMultiplier;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeOffsetAsCombo;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               ComboMoves;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               ComboChargedMoves;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bEnabled : 1;                                             // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bUseMeleeSnap : 1;                                        // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	struct FCombatMoveMeleeSnap                        MeleeSnap;                                                // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	TEnumAsByte<EStandardAnimationMovement>            MovementType;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bInterruptOnHitObject : 1;                                // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	class UAkAudioEvent*                               AttackGruntEvent;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       HUDPrompt;                                                // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	float                                              SelectionWeighting;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SelectionCooldown;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bSelectionFallback : 1;                                   // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bIgnoreWeaponAnimationSpeedMultiplier : 1;                // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	TEnumAsByte<EAttackStrength>                       AttackStrength;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AOEShoveRadius;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AOEShoveAngle;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AOEShoveKnockbackChance;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AOEShoveMaxDelay;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bOverrideGameModeWindUpTimes : 1;                         // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	float                                              WindUpTime;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EHitReactionCategory>                  OverrideHitReactionCategory;                              // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FChargedMoveOutros>                  ChargedMoveOutros;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x1B8];                                     // 0x0010(0x01B8) MISSED OFFSET
};

// ScriptStruct GlimpseGame.IncompatableWeaponData
// 0x0018
struct FIncompatableWeaponData
{
	bool                                               bCanUse;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackSpeedMultiplier;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageMultiplier;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWeightSpecific;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeightGrade>                          WeightLimit;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WeaponClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.DamageHistoryEvent
// 0x0024
struct FDamageHistoryEvent
{
	float                                              time;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseDamageCategory>                Category;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AController>                  Instigator;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       Causer;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BaseValue;                                                // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ActualValue;                                              // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bNonLethal : 1;                                           // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bInCombat : 1;                                            // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x23];                                      // 0x0001(0x0023) MISSED OFFSET
};

// ScriptStruct GlimpseGame.PlayerGiftData
// 0x0018
struct FPlayerGiftData
{
	class UClass*                                      GiftType;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AcceptAnimation;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                RefuseAnimation;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpsePlayerMatinee
// 0x0020
struct FGlimpsePlayerMatinee
{
	TArray<class USkeletalMesh*>                       Meshes;                                                   // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SkillState
// 0x0010
struct FSkillState
{
	struct FName                                       SkillKey;                                                 // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      bIsBought : 1;                                            // 0x0000(0x0001) (SaveGame)
	unsigned char                                      bIsAvailable : 1;                                         // 0x0000(0x0001) (SaveGame)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SuspicionEffectOverride
// 0x0010
struct FSuspicionEffectOverride
{
	TEnumAsByte<EAISuspicionStimulusType>              StimulusType;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAISuspicionState>                     MinimumState;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAISuspicionState>                     MaximumState;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ValueMultiplier;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       InsideActor;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SuspicionOverrides
// 0x0018
struct FSuspicionOverrides
{
	TArray<struct FSuspicionEffectOverride>            Overrides;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bTimeOfDaySpecific : 1;                                   // 0x0000(0x0001) (Edit, BlueprintVisible)
	TEnumAsByte<ETimeOfDay>                            TimeOfDay;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0001(0x0017) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SuspicionStageDefinition
// 0x0018
struct FSuspicionStageDefinition
{
	float                                              MinLevel;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAISuspicionState>                     State;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LockDuration;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecreasePerSecond;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Barks;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.AcceptableGift
// 0x0030
struct FAcceptableGift
{
	class UClass*                                      GiftType;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AcceptAnimation;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AcceptAnimation_Female;                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               DroppedGiftSoundEvent;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DroppedGiftVFX;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bRefusedGift : 1;                                         // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0001(0x002F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.AttackPattern
// 0x0018
struct FAttackPattern
{
	TArray<TEnumAsByte<EAttackStrength>>               AttackOrder;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              Weighting;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct GlimpseGame.CombatMoveSelection
// 0x0020
struct FCombatMoveSelection
{
	struct FName                                       MoveName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Weighting;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveCooldown;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveGlobalCooldown;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlobalCooldown;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bFallback : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TEnumAsByte<EAttackStrength>                       AttackStrength;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.CombatAgent
// 0x0028
struct FCombatAgent
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct GlimpseGame.PatrolPoint
// 0x0058
struct FPatrolPoint
{
	struct FVector                                     RelativeLocation;                                         // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUsePOI : 1;                                              // 0x0000(0x0001) (Edit)
	class AActor*                                      POIToUse;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       POIComponentToUse;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      AbortIfCantReachPOIToUse : 1;                             // 0x0000(0x0001) (Edit, DisableEditOnTemplate)
	float                                              LoopDuration;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<class UAnimMontage*>                        Montages;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bRandomizeMontageStart : 1;                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bUseOrientation : 1;                                      // 0x0000(0x0001) (Edit)
	float                                              Orientation;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverridePace : 1;                                        // 0x0000(0x0001) (Edit)
	unsigned char                                      bFaceLookAtActor : 1;                                     // 0x0000(0x0001) (Edit)
	TEnumAsByte<EWalkPace>                             Pace;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x57];                                      // 0x0001(0x0057) MISSED OFFSET
};

// ScriptStruct GlimpseGame.DiscoveryPreset
// 0x0028
struct FDiscoveryPreset
{
	TEnumAsByte<EDiscoveryIcon>                        Icon;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       TitleText;                                                // 0x0000(0x0018) (Edit)
	class UAkAudioEvent*                               SoundEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct GlimpseGame.DiscoveryTextStyle
// 0x03C0 (0x03C8 - 0x0008)
struct FDiscoveryTextStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 DiscoveryIcons[0x3];                                      // 0x0000(0x0090) (Edit)
	struct FSlateFontInfo                              TitleFont;                                                // 0x0000(0x0068) (Edit)
	struct FSlateFontInfo                              BodyFont;                                                 // 0x0000(0x0068) (Edit)
	struct FDiscoveryPreset                            Presets[0x8];                                             // 0x0000(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x288];                                     // 0x0140(0x0288) MISSED OFFSET
};

// ScriptStruct GlimpseGame.CompassStyle
// 0x1420 (0x1428 - 0x0008)
struct FCompassStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 CompassBorder;                                            // 0x0000(0x0090) (Edit)
	struct FTextBlockStyle                             DirectionTextStyle;                                       // 0x0000(0x0178) (Edit)
	TArray<struct FSlateBrush>                         CardinalIcons;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FSlateBrush                                 UndiscoveredIcons[0xF];                                   // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 DiscoveredIcons[0xF];                                     // 0x0000(0x0090) (Edit)
	struct FLinearColor                                POIColours[0xF];                                          // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 POIDistanceAlpha;                                         // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatRange                                 POIDistanceScale;                                         // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              POITrackedScale;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                POITrackedColour;                                         // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1418];                                    // 0x0010(0x1418) MISSED OFFSET
};

// ScriptStruct GlimpseGame.CraftingCategory
// 0x0048
struct FCraftingCategory
{
	TEnumAsByte<EPickupCategory>                       PickupCategory;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       CategoryName;                                             // 0x0000(0x0018) (Edit)
	struct FText                                       RecipeName;                                               // 0x0000(0x0018) (Edit)
	TArray<class UClass*>                              Recipes;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0010(0x0038) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSkeletalMeshSpec
// 0x0038
struct FGlimpseSkeletalMeshSpec
{
	unsigned char                                      bRandomizeGender : 1;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, SaveGame)
	TEnumAsByte<ECharacterGender>                      Gender;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<EGlimpseArchetype>                     Archetype;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      bRandomizeVariant : 1;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, SaveGame)
	int                                                MeshVariantIndex;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                MaterialVariantIndex;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                TintVariantIndex;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                SkinTintVariantIndex;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	class UMaterialInterface*                          CustomMaterial;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<int>                                        Attachments;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) MISSED OFFSET
};

// ScriptStruct GlimpseGame.DecoratorPOIScriptCharacter
// 0x0060
struct FDecoratorPOIScriptCharacter
{
	TAssetPtr<class UClass>                            NPCClass;                                                 // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGlimpseSkeletalMeshSpec                    CharacterSpec;                                            // 0x0000(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UAnimMontage*                                IdleMontage;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0008(0x0058) MISSED OFFSET
};

// ScriptStruct GlimpseGame.DecoratorPOIScriptEntry
// 0x0038
struct FDecoratorPOIScriptEntry
{
	class UAnimMontage*                                AnimMontage;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseLoopLength;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGlimpseRandomFloat                         AnimMontageLoopLength;                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UGlimpseConversationAsset*                   Conversation;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDecoratorPOISchedule>                 Schedule;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bRare : 1;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bUseInteraction;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00 : 1;                                        // 0x0000(0x0001)
	unsigned char                                      bWaitForPlayerProximity : 1;                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bAllowRepeat : 1;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TEnumAsByte<EInteraction>                          InteractionType;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x37];                                      // 0x0001(0x0037) MISSED OFFSET
};

// ScriptStruct GlimpseGame.DecoratorPOIScript
// 0x0038
struct FDecoratorPOIScript
{
	TEnumAsByte<EGlimpseDecoratorAIMode>               ScriptMode;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EDecoratorPOISchedule>                 Schedule;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseIdleLoop;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IdleWeight;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGlimpseRandomFloat                         IdleLoopLength;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FDecoratorPOIScriptCharacter>        Characters;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FDecoratorPOIScriptEntry>            Entries;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) MISSED OFFSET
};

// ScriptStruct GlimpseGame.AchievementsMenuEntry
// 0x0040
struct FAchievementsMenuEntry
{
	class UTexture2D*                                  AchievementIcon;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       AchievementName;                                          // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       AchievementDescription;                                   // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	int                                                XboxAchievementId;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0004(0x003C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseAICacheList
// 0x0010
struct FGlimpseAICacheList
{
	TArray<class AGlimpseAICharacter*>                 Characters;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct GlimpseGame.GlimpseAICorpse
// 0x0020
struct FGlimpseAICorpse
{
	struct FGlimpseObjectKey                           ObjectKey;                                                // 0x0000(0x0008)
	class AGlimpseAICharacter*                         AICharacter;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseAISpawnData
// 0x0040
struct FGlimpseAISpawnData
{
	class UClass*                                      Blueprint;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SpawnerType;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ClusterCount;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxSpawnCount;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<ETimeOfDay>>                    RestrictedTimeOfDays;                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EGlimpseRoad>>                  RestrictedRoadTypes;                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0010(0x0030) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseAIPatrolData
// 0x0048
struct FGlimpseAIPatrolData
{
	class UClass*                                      Blueprint;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EGlimpseHighwayAgent>                  HighwayAgent;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<ETimeOfDay>>                    RestrictedTimeOfDays;                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EGlimpseRoad>>                  RestrictedRoadTypes;                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                RespawnLimit;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RespawnIntervalInHours;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinInstances;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bAllowSharedEdges : 1;                                    // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      bAllowSharedNodes : 1;                                    // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	float                                              MinCoverage;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SquadSize;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x44];                                      // 0x0004(0x0044) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseAIPatrol
// 0x0060
struct FGlimpseAIPatrol
{
	class AActor*                                      PatrolActor;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0008(0x0058) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseAIPatrolGroup
// 0x0080
struct FGlimpseAIPatrolGroup
{
	struct FGlimpseAITableRow                          Data;                                                     // 0x0000(0x0050)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0050(0x0030) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseAIPopulationData
// 0x00B8
struct FGlimpseAIPopulationData
{
	struct FGlimpseAITableRow                          SpawnData;                                                // 0x0000(0x0050)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0050(0x0068) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseAIPopulationRegion
// 0x00A0
struct FGlimpseAIPopulationRegion
{
	TArray<struct FGlimpseAIPopulationData>            PopulationData;                                           // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0010(0x0090) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseAimAssistVariables
// 0x0020
struct FGlimpseAimAssistVariables
{
	float                                              MinMagnetismFactorWhenFiring;                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForgivenessMin;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForgivenessMax;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForgivenessMagnetFactorMin;                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForgivenessMagnetFactorMax;                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MagnetismBaseFactor;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NoInputMagnetFactor;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0004(0x001C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.BroadcastItem
// 0x0050
struct FBroadcastItem
{
	struct FName                                       BroadcastKey;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFilePath                                   MovieFilePath;                                            // 0x0000(0x0010) (Edit, DisableEditOnInstance)
	class UAkAudioEvent*                               SoundEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CaptionKey;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Duration;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FTimespan                                   InGameDuration;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst)
	bool                                               bUseCurfewRandom;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EGlimpseBiome>                         Biome;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bUseNextPartKey : 1;                                      // 0x0000(0x0001)
	struct FName                                       NextPartKey;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct GlimpseGame.CharacterMaterialTintParameter
// 0x0010
struct FCharacterMaterialTintParameter
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.CharacterMaterialTintVariantData
// 0x0010
struct FCharacterMaterialTintVariantData
{
	TArray<struct FCharacterMaterialTintParameter>     Parameters;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GlimpseGame.CharacterMaterialVariantData
// 0x0018
struct FCharacterMaterialVariantData
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FCharacterMaterialTintVariantData>   TintParametersVariants;                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.CharacterSkinTintVariantData
// 0x0010
struct FCharacterSkinTintVariantData
{
	struct FColor                                      SkinTint;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SkinColorPower;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      EyeTint;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RandomWeight;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.CharacterMeshVariantData
// 0x0048
struct FCharacterMeshVariantData
{
	class USkeletalMesh*                               BaseMesh;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FCharacterMaterialVariantData>       MaterialVariants;                                         // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCharacterSkinTintVariantData>       SkinTintVariants;                                         // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FName                                       SkinTintParameterName;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SkinColorPowerParameterName;                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           EyeMaterialIndex;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       EyeTintParameterName;                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct GlimpseGame.CharacterAttachmentVariantData
// 0x0020
struct FCharacterAttachmentVariantData
{
	float                                              AttachmentProbability;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDetachable : 1;                                          // 0x0000(0x0001) (Edit)
	struct FName                                       AttachBoneName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UStaticMesh*>                         AttachMeshVariants;                                       // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.CharacterVariantData
// 0x0020
struct FCharacterVariantData
{
	TArray<struct FCharacterMeshVariantData>           MeshVariants;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCharacterAttachmentVariantData>     Attachments;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseCityBlockRange
// 0x0024
struct FGlimpseCityBlockRange
{
	int                                                EdgeIndex;                                                // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FGlimpseOutlineParam                        RangeMin;                                                 // 0x0000(0x0008) (SaveGame)
	struct FGlimpseOutlineParam                        RangeMax;                                                 // 0x0000(0x0008) (SaveGame)
	struct FVector2D                                   NormalMin;                                                // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector2D                                   NormalMax;                                                // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0008(0x001C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseCityBlockElement
// 0x0030
struct FGlimpseCityBlockElement
{
	TEnumAsByte<EGlimpseCityBlockElement>              Type;                                                     // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FGlimpseCityBlockRange                      Range;                                                    // 0x0000(0x0024) (SaveGame)
	class UGlimpseWorldElement*                        GraphElement;                                             // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseAlleyEdgeRef
// 0x0004
struct FGlimpseAlleyEdgeRef
{
	int                                                EdgeIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GlimpseGame.GlimpseAlleyNode
// 0x0030
struct FGlimpseAlleyNode
{
	int                                                Index;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseAlley>                         Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGlimpseAlleyEdgeRef>                Edges;                                                    // 0x0000(0x0010) (ZeroConstructor)
	class UGlimpseWorldRoad*                           Road;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bCritical;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Position;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseAlleyNodeRef
// 0x0004
struct FGlimpseAlleyNodeRef
{
	int                                                NodeIndex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GlimpseGame.GlimpseAlleyEdge
// 0x001C
struct FGlimpseAlleyEdge
{
	int                                                Index;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseAlley>                         Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FGlimpseAlleyNodeRef                        Node0;                                                    // 0x0000(0x0004)
	struct FGlimpseAlleyNodeRef                        Node1;                                                    // 0x0000(0x0004)
	float                                              Z;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Interior;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0008(0x0014) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseAlleyGraph
// 0x0048
struct FGlimpseAlleyGraph
{
	TArray<struct FGlimpseAlleyNode>                   Nodes;                                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FGlimpseAlleyEdge>                   Edges;                                                    // 0x0000(0x0010) (ZeroConstructor)
	class UGlimpseCityBlock*                           Block;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseCityBuildingSetElement
// 0x0010
struct FGlimpseCityBuildingSetElement
{
	class UGlimpseSpawnModel*                          SpawnModel;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinCount;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxCount;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpsePlanRoadParams
// 0x002C
struct FGlimpsePlanRoadParams
{
	float                                              StepSize;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RoadAngleSpread;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndFeatureSearchDist;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndJunctionSearchDist;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinBranchDist;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BranchProbability;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RoadLevelLimit;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JunctionDist;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JunctionAngleDelta;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StubRoadLimit;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JunctionInsertDist;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0004(0x0028) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpsePlanRoadPattern
// 0x0010
struct FGlimpsePlanRoadPattern
{
	float                                              PrimaryDistance;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PrimaryDistanceVariance;                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SecondaryDistance;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SecondaryDistanceVariance;                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldConstraintRoadMask
// 0x0004
struct FGlimpseWorldConstraintRoadMask
{
	unsigned char                                      bMainRoad : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bSideRoad : 1;                                            // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAlley : 1;                                               // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldConstraintRoad
// 0x0010
struct FGlimpseWorldConstraintRoad
{
	TEnumAsByte<EGlimpseWorldConstraintRoadState>      RoadState;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRoadLength;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGlimpseWorldConstraintRoadMask             AllowedRoadTypes;                                         // 0x0000(0x0004) (Edit, BlueprintVisible)
	bool                                               bStraight;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseDynamicGrassCell
// 0x0018
struct FGlimpseDynamicGrassCell
{
	TArray<class UInstancedStaticMeshComponent*>       ISMComponents;                                            // 0x0000(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseDynamicGrassElem
// 0x0018
struct FGlimpseDynamicGrassElem
{
	class UStaticMesh*                                 GrassMesh;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGlimpseFoliageElementComponent*             Element;                                                  // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Weight;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseDynamicGrassStyle
// 0x0028
struct FGlimpseDynamicGrassStyle
{
	TArray<struct FGlimpseDynamicGrassElem>            Elements;                                                 // 0x0000(0x0010) (ZeroConstructor)
	float                                              TotalWeight;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GrassRadius;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0004(0x0024) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseGameUserSystemStamp
// 0x0038
struct FGlimpseGameUserSystemStamp
{
	struct FString                                     EngineVersion;                                            // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     CPUBrand;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     RHIAdapterName;                                           // 0x0000(0x0010) (ZeroConstructor)
	int                                                LocalRevision;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x34];                                      // 0x0004(0x0034) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseQualitySettings
// 0x0028
struct FGlimpseQualitySettings
{
	int                                                ViewDistanceQuality;                                      // 0x0000(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                AntiAliasingQuality;                                      // 0x0000(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ShadowQuality;                                            // 0x0000(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                PostProcessQuality;                                       // 0x0000(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                TextureQuality;                                           // 0x0000(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                EffectsQuality;                                           // 0x0000(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                FoliageQuality;                                           // 0x0000(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                LightQuality;                                             // 0x0000(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                RenderQuality;                                            // 0x0000(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bInitialized;                                             // 0x0000(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
};

// ScriptStruct GlimpseGame.DirectionalLightSettings
// 0x000C
struct FDirectionalLightSettings
{
	unsigned char                                      bOverride_Intensity : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_LightColor : 1;                                 // 0x0000(0x0001) (Edit)
	float                                              Intensity;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      LightColor;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.LightSettings
// 0x000C
struct FLightSettings
{
	unsigned char                                      bOverride_Intensity : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_LightColor : 1;                                 // 0x0000(0x0001) (Edit)
	float                                              Intensity;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FColor                                      LightColor;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.AtmosphereSettings
// 0x0034
struct FAtmosphereSettings
{
	unsigned char                                      bOverride_SunMultiplier : 1;                              // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_StartDistance : 1;                              // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_FogMultiplier : 1;                              // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_SunDiscScale : 1;                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_DensityMultiplier : 1;                          // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_DefaultBrightness : 1;                          // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_DensityOffset : 1;                              // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_bDisableSunDisk : 1;                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_DistanceScale : 1;                              // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_bDisableGroundScattering : 1;                   // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_AltitudeScale : 1;                              // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_DistanceOffset : 1;                             // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_GroundOffset : 1;                               // 0x0000(0x0001) (Edit)
	float                                              SunMultiplier;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FogMultiplier;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DensityMultiplier;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DensityOffset;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceScale;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AltitudeScale;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceOffset;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GroundOffset;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartDistance;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SunDiscScale;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultBrightness;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDisableSunDisk : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bDisableGroundScattering : 1;                             // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x33];                                      // 0x0001(0x0033) MISSED OFFSET
};

// ScriptStruct GlimpseGame.HeightFogSettings
// 0x003C
struct FHeightFogSettings
{
	unsigned char                                      bOverride_FogDensity : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_FogInscatteringColor : 1;                       // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_FogHeightFalloff : 1;                           // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_FogMaxOpacity : 1;                              // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_StartDistance : 1;                              // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_DirectionalInscatteringExponent : 1;            // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_DirectionalInscatteringStartDistance : 1;       // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_DirectionalInscatteringColor : 1;               // 0x0000(0x0001) (Edit)
	float                                              FogDensity;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FogInscatteringColor;                                     // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FogHeightFalloff;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FogMaxOpacity;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartDistance;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DirectionalInscatteringExponent;                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DirectionalInscatteringStartDistance;                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DirectionalInscatteringColor;                             // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0010(0x002C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SkySettings
// 0x007C
struct FSkySettings
{
	unsigned char                                      bOverride_CloudOpacity : 1;                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_OverallColor : 1;                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_ZenithColor : 1;                                // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_CloudMediumOpacity : 1;                         // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_HorizonColor : 1;                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_CloudHeavyOpacity : 1;                          // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_HorizonFalloff : 1;                             // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_CloudBorderOpacity : 1;                         // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_SunBrightness : 1;                              // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_CloudContrast : 1;                              // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_SunDiscScale : 1;                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_CloudFalloff : 1;                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_StarsBrightness : 1;                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_CloudSpeed : 1;                                 // 0x0000(0x0001) (Edit)
	struct FLinearColor                                OverallColor;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00 : 6;                                        // 0x0000(0x0001)
	unsigned char                                      bOverride_MoonBrightness : 1;                             // 0x0000(0x0001) (Edit)
	float                                              Rainbows;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01 : 1;                                        // 0x0000(0x0001)
	unsigned char                                      bOverride_Rainbows : 1;                                   // 0x0000(0x0001) (Edit)
	float                                              CloudOpacity;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloudMediumOpacity;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloudHeavyOpacity;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloudBorderOpacity;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloudContrast;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloudFalloff;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CloudSpeed;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                CloudColor;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ZenithColor;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                HorizonColor;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HorizonFalloff;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SunBrightness;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SunDiscScale;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StarsBrightness;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoonBrightness;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoonDiscScale;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02 : 7;                                        // 0x0000(0x0001)
	unsigned char                                      bOverride_CloudColor : 1;                                 // 0x0000(0x0001) (Edit)
	unsigned char                                      bOverride_MoonDiscScale : 1;                              // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData03[0x7B];                                      // 0x0001(0x007B) MISSED OFFSET
};

// ScriptStruct GlimpseGame.EnvironmentSettings
// 0x05E0
struct FEnvironmentSettings
{
	unsigned char                                      bPeriodSpecific : 1;                                      // 0x0000(0x0001) (Edit)
	unsigned char                                      bDrugEffectSpecific : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bQualitySpecific : 1;                                     // 0x0000(0x0001) (Edit)
	TEnumAsByte<EDayPeriod>                            Period;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDrugEffectVisual>                     DrugEffect;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGraphicsQualitySetting>               QualitySetting;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGraphicsQuality>                      QualityLevel;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CurrentWeight;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	struct FDirectionalLightSettings                   SunSettings;                                              // 0x0000(0x000C) (Edit)
	struct FDirectionalLightSettings                   MoonSettings;                                             // 0x0000(0x000C) (Edit)
	struct FLightSettings                              SkyLightSettings;                                         // 0x0000(0x000C) (Edit)
	struct FAtmosphereSettings                         AtmosphereSettings;                                       // 0x0000(0x0034) (Edit)
	struct FHeightFogSettings                          FogSettings;                                              // 0x0000(0x003C) (Edit)
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0000(0x04C0) (Edit)
	struct FSkySettings                                SkySettings;                                              // 0x0000(0x007C) (Edit)
	unsigned char                                      UnknownData00[0x564];                                     // 0x007C(0x0564) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataClass
// 0x0020
struct FSaveDataClass
{
	struct FStringClassReference                       ClassReference;                                           // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	class UClass*                                      CachedClass;                                              // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLoadAttempted;                                           // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataClassMap
// 0x0060
struct FSaveDataClassMap
{
	TArray<struct FSaveDataClass>                      Classes;                                                  // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TMap<struct FString, int>                          ClassToIndexMap;                                          // 0x0000(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSaveGameRequest
// 0x00E0
struct FGlimpseSaveGameRequest
{
	class UGlimpseSaveGameBase*                        SaveGame;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0008(0x00D8) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseFillerBuilding
// 0x0048
struct FGlimpseFillerBuilding
{
	TAssetPtr<class UClass>                            FillerBlueprint;                                          // 0x0000(0x0020) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0020(0x0028) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseFillerBuildingSet
// 0x0060
struct FGlimpseFillerBuildingSet
{
	TArray<struct FGlimpseFillerBuilding>              SingleFaceBuildings;                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FGlimpseFillerBuilding>              RightCornerBuildings;                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FGlimpseFillerBuilding>              LeftCornerBuildings;                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FGlimpseFillerBuilding>              AcuteCornerBuildings;                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FGlimpseFillerBuilding>              ObtuseCornerBuildings;                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UGlimpseWallModel*                           BlockedWallModel;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinBlockedWallLength;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0004(0x005C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseFoliageItem
// 0x0048
struct FGlimpseFoliageItem
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseFoliage>                       Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrassRadius;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlantRadius;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TreeRadius;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSlope;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSlope;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinWaterProximity;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWaterProximity;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinElevation;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxElevation;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinScale;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxScale;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinScaleRatio;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxScaleRatio;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFollowTerrainSlope;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bProvidePlayerStealth;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x47];                                      // 0x0001(0x0047) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseFoliageLoot
// 0x0038
struct FGlimpseFoliageLoot
{
	class UGlimpseWorldStyle*                          Style;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UnitsPerSquareMeter;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrassRadius;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlantRadius;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TreeRadius;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSlope;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSlope;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinWaterProximity;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWaterProximity;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinElevation;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxElevation;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIgnoreMinRadius : 1;                                     // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x37];                                      // 0x0001(0x0037) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpsePlanEnvTerrain
// 0x0010
struct FGlimpsePlanEnvTerrain
{
	float                                              BaseTerrainElevation;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseTerrainElevationVariance;                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TerrainNoisePeriod;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TerrainNoiseMagnitude;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseClusterPattern
// 0x0050
struct FGlimpseClusterPattern
{
	TEnumAsByte<EGlimpseClusteringType>                ClusteringType;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinNumber;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumber;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinRadius;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlueprintGeneratedClass*                    Blueprint;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseClusterTerrainConstraint>      TerrainConstraint;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TerrainIntensity;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CannotBeEmpty;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ScatterDistance;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      RandomOrientation : 1;                                    // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4F];                                      // 0x0001(0x004F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldModelRequiredFeature
// 0x0008
struct FGlimpseWorldModelRequiredFeature
{
	class UClass*                                      Feature;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GlimpseGame.GlimpseWorldModelOptionalFeature
// 0x0010
struct FGlimpseWorldModelOptionalFeature
{
	class UClass*                                      Feature;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Minimum;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Maximum;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldModelLayoutParams
// 0x000C
struct FGlimpseWorldModelLayoutParams
{
	TEnumAsByte<EGlimpseWorldModelZoneLayout>          LayoutStyle;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinBlockSize;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBlockSize;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldModelRegion
// 0x0058
struct FGlimpseWorldModelRegion
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               Types;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FGlimpseWorldModelLayoutParams              Layout;                                                   // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UGlimpsePlanRoadStyle*                       RoadStyle;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGlimpsePlanEnvStyle*                        EnvironmentStyle;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       LootLocationTags;                                         // 0x0000(0x0020) (Edit)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0020(0x0038) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseGridLayoutRule
// 0x0018
struct FGlimpseGridLayoutRule
{
	TEnumAsByte<EGlimpseGridLayoutRule>                Rule;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       A;                                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       B;                                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldModelZone
// 0x00F8
struct FGlimpseWorldModelZone
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible)
	bool                                               bCustomZone;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CustomZoneHeight;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGlimpsePlanRoadStyle*                       RoadStyle;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGlimpsePlanEnvStyle*                        EnvironmentStyle;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseBiome>                         Biome;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseWorldModelZoneLayout>          ZoneLayoutStyle;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinBlockSize;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBlockSize;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FGlimpseWorldModelRequiredFeature>   PrimaryFeatureList;                                       // 0x0000(0x0010) (ZeroConstructor, Deprecated)
	int                                                MaxPrimaryFeatures;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FGlimpseWorldModelRequiredFeature>   SecondaryFeatureList;                                     // 0x0000(0x0010) (ZeroConstructor, Deprecated)
	int                                                MaxSecondaryFeatures;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FGlimpseWorldModelOptionalFeature>   OptionalFeatureList;                                      // 0x0000(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FGlimpseWorldModelRegion>            Regions;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGlimpseGridLayoutRule>              RegionRules;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FIntPoint                                   SlotCoordinates;                                          // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FName>                               SlotNeighbours;                                           // 0x0000(0x0010) (ZeroConstructor, Transient)
	TArray<struct FName>                               BridgeNeighbours;                                         // 0x0000(0x0010) (ZeroConstructor, Transient)
	class UGlimpsePatternModelList*                    Patterns;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       LootLocationTags;                                         // 0x0000(0x0020) (Edit)
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0020(0x00D8) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldModelBridge
// 0x0020
struct FGlimpseWorldModelBridge
{
	TEnumAsByte<EGlimpseWorldModelBridgeType>          Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGlimpseBridgeModel*                         BridgeModel;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGlimpseSpawnModel*                          SpawnModel;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReverse;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldModelBridgeSet
// 0x0028
struct FGlimpseWorldModelBridgeSet
{
	struct FName                                       ZoneA;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ZoneB;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FGlimpseWorldModelBridge>            Bridges;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bVirtual;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldTerrainParams
// 0x0050
struct FGlimpseWorldTerrainParams
{
	class UMaterialInterface*                          TerrainMaterial;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          WaterTableMaterial;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaterTableHeight;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HeightmapResolution;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HeightmapMaskResolution;                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HeightmapSmoothingPasses;                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FoliageMaskResolution;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          FoliageMaskMaterial;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          NoiseMaterial;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinTerrainHeight;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTerrainHeight;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TerrainPatchSize;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TerrainRenderResolution;                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TerrainPhysicsResolution;                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TerrainNavResolution;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0004(0x004C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseFoliageActorComponent
// 0x0010
struct FGlimpseFoliageActorComponent
{
	TEnumAsByte<EGlimpseFoliage>                       Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	class UHierarchicalInstancedStaticMeshComponent*   Component;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseFoliageBudgetRow
// 0x0038 (0x0040 - 0x0008)
struct FGlimpseFoliageBudgetRow : public FTableRowBase
{
	TAssetPtr<class UClass>                            Blueprint;                                                // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FName                                       Zone;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Region;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MinBudget;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxBudget;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0004(0x003C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseFoliageTableRow
// 0x0030 (0x0038 - 0x0008)
struct FGlimpseFoliageTableRow : public FTableRowBase
{
	TAssetPtr<class UStaticMesh>                       Mesh;                                                     // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EGlimpseFoliage>                       Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 MeshAsset;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseFoliageCollisionBuildData
// 0x001C
struct FGlimpseFoliageCollisionBuildData
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseFoliageStyleItem
// 0x0028
struct FGlimpseFoliageStyleItem
{
	TAssetPtr<class UClass>                            Mesh;                                                     // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              Density;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0004(0x0024) MISSED OFFSET
};

// ScriptStruct GlimpseGame.LoadingScreenTip
// 0x0020 (0x0028 - 0x0008)
struct FLoadingScreenTip : public FTableRowBase
{
	struct FText                                       TipText;                                                  // 0x0000(0x0018) (Edit)
	unsigned char                                      bDisabled : 1;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bIsInputDeviceSpecific : 1;                               // 0x0000(0x0001) (Edit)
	TEnumAsByte<EInputDevice>                          InputDevice;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
};

// ScriptStruct GlimpseGame.LoadingScreenVideoDetails
// 0x00B0
struct FLoadingScreenVideoDetails
{
	struct FString                                     IslandName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     DistrictName;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     VideoName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       Caption;                                                  // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	float                                              CaptionDuration;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Caption2;                                                 // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	float                                              Caption2Duration;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimespan                                   LoopStartTime;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FTimespan                                   LoopEndTime;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FTimespan                                   HideTooltipsTime;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EMusicState>                           MusicState;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VideoList;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FString>                             MultipleVideoNames;                                       // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               MultipleVideoCaption;                                     // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0010(0x00A0) MISSED OFFSET
};

// ScriptStruct GlimpseGame.VideoSpecificTips
// 0x0020
struct FVideoSpecificTips
{
	struct FString                                     VideoName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FLoadingScreenTip>                   LoadingTips;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSupportedLanguage
// 0x0028
struct FGlimpseSupportedLanguage
{
	struct FString                                     Culture;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Config)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSandboxSettings
// 0x0050
struct FGlimpseSandboxSettings
{
	TEnumAsByte<EGlimpseSandboxDifficultyLevel>        SandboxDifficultyLevel;                                   // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseSandboxInventory>              SandboxInventory;                                         // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseSandboxPopulation>             SandboxPopulation;                                        // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4F];                                      // 0x0001(0x004F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseGameScreenShotInfo
// 0x0030
struct FGlimpseGameScreenShotInfo
{
	class UTexture2D*                                  TextureResource;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveSlotContainer
// 0x00E8
struct FSaveSlotContainer
{
	TMap<TEnumAsByte<EGlimpseSaveGameSlot>, struct FGlimpseGameScreenShotInfo> SlotGameScreenShotInfo;                                   // 0x0000(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x98];                                      // 0x0050(0x0098) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseHUDBarStyle
// 0x01B0 (0x01B8 - 0x0008)
struct FGlimpseHUDBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundImage;                                          // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 FillImage;                                                // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 BarImage;                                                 // 0x0000(0x0090) (Edit)
	unsigned char                                      UnknownData00[0x128];                                     // 0x0090(0x0128) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseConnectionComponent
// 0x0018
struct FGlimpseConnectionComponent
{
	struct FName                                       IntersectionName;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisabled;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RoadLevel;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct GlimpseGame.PickupStats_FoodDrink
// 0x0018
struct FPickupStats_FoodDrink
{
	float                                              Hunger;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Thirst;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Stamina;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Joy;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpoilageRate;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BloodSugar;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseLivenessLevel
// 0x0018
struct FGlimpseLivenessLevel
{
	unsigned char                                      bAlwaysVisible : 1;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config)
	unsigned char                                      bAlwaysTick : 1;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Config)
	float                                              VisibilityDistance;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              VisibilityDistanceGrace;                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              TickDistance;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              TickDistanceGrace;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxObjectSize;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseLivenessSceneComponent
// 0x0028
struct FGlimpseLivenessSceneComponent
{
	class USceneComponent*                             RootComponent;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class USceneComponent*>                     PreHidden;                                                // 0x0000(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseLivenessActor
// 0x0050
struct FGlimpseLivenessActor
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGlimpseLivenessSceneComponent>      SceneComponents;                                          // 0x0000(0x0010) (ZeroConstructor)
	TArray<class UActorComponent*>                     NonSceneComponents;                                       // 0x0000(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0010(0x0040) MISSED OFFSET
};

// ScriptStruct GlimpseGame.TrackedLoosePickup
// 0x0020
struct FTrackedLoosePickup
{
	class AGlimpsePickup*                              Pickup;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSkillLootWeightModifier
// 0x0088
struct FGlimpseSkillLootWeightModifier
{
	class UClass*                                      Skill;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       LocationTags;                                             // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       ContainerTags;                                            // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       PickupTags;                                               // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	float                                              RarityWeightModifiers[0x7];                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6C];                                      // 0x001C(0x006C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseLootTableEntry
// 0x00A8 (0x00B0 - 0x0008)
struct FGlimpseLootTableEntry : public FTableRowBase
{
	class UClass*                                      Pickup;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPickupRarity>                         Rarity;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Limit;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               LimitOnlyByZone;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReplenishPerDay;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGlimpseRandomInt                           StackSize;                                                // 0x0000(0x0010) (Edit)
	struct FGlimpseRandomFloat                         Durability;                                               // 0x0000(0x0010) (Edit)
	TArray<TEnumAsByte<EStoryCharacter>>               LimitToCharacters;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FGameplayTagContainer                       PickupTags;                                               // 0x0000(0x0020) (Edit)
	struct FGameplayTagContainer                       LocationTags;                                             // 0x0000(0x0020) (Edit)
	struct FGameplayTagContainer                       ContainerTags;                                            // 0x0000(0x0020) (Edit)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0020(0x0090) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseLootTableEntryKeyed
// 0x0130
struct FGlimpseLootTableEntryKeyed
{
	struct FGlimpseLootTableEntry                      Entry;                                                    // 0x0000(0x00B0)
	unsigned char                                      UnknownData00[0x80];                                      // 0x00B0(0x0080) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseLootTracker
// 0x0060
struct FGlimpseLootTracker
{
	class UClass*                                      LootClass;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0008(0x0058) MISSED OFFSET
};

// ScriptStruct GlimpseGame.Lore
// 0x0038
struct FLore
{
	struct FName                                       LoreKey;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       LoreTitle;                                                // 0x0000(0x0018) (Edit, BlueprintVisible)
	TArray<struct FText>                               LoreText;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bShowInJournal;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x37];                                      // 0x0001(0x0037) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseMapMakerParams
// 0x0100
struct FGlimpseMapMakerParams
{
	int                                                TextureSize;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      WorldRenderTarget;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UTexture2DDynamic>            FullResTexture;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	class UMaterialInterface*                          PresentationMaterial;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          BasePassMaterial;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RoadOutlineWidth;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AlleyWidth;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FoliageQuadSize;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          RoadOutlineMaterial;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          RoadFillMaterial;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          RiverBridgeMaterial;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          FoliageMaterial;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          BuildingMaterial;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          AlleyFillMaterial;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultFogRevealRadius;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultFogRevealDropoff;                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultPOIRevealRadius[0xF];                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DefaultPOIHint[0xF];                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultPOIHintRadius[0xF];                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WorldCaptureHeight;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverlayExtraViewSizeMult;                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xFC];                                      // 0x0004(0x00FC) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseMapFogUpdate
// 0x000C
struct FGlimpseMapFogUpdate
{
	struct FVector2D                                   Center;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseMapDrawCall
// 0x0018
struct FGlimpseMapDrawCall
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FCanvasUVTri>                        Triangles;                                                // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.TexturedBoxImage
// 0x00A8
struct FTexturedBoxImage
{
	struct FSlateBrush                                 Image;                                                    // 0x0000(0x0090) (Edit)
	struct FMargin                                     Padding;                                                  // 0x0000(0x0010) (Edit)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStretch>                              Stretch;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStretchDirection>                     StretchDirection;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA7];                                      // 0x0001(0x00A7) MISSED OFFSET
};

// ScriptStruct GlimpseGame.TexturedBoxStyle
// 0x0130 (0x0138 - 0x0008)
struct FTexturedBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BoxImage;                                                 // 0x0000(0x0090) (Edit)
	TArray<struct FTexturedBoxImage>                   BoxOverlayImages;                                         // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FSlateBrush                                 BoxBorderImage;                                           // 0x0000(0x0090) (Edit)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0090(0x00A8) MISSED OFFSET
};

// ScriptStruct GlimpseGame.MapStyle
// 0x2008 (0x2010 - 0x0008)
struct FMapStyle : public FSlateWidgetStyle
{
	struct FVector2D                                   PlayerIconSize;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 PlayerIcon;                                               // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 POIObjectiveIconGlowBrush;                                // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 POIEncounterIconGlowBrush;                                // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 POICustomIconGlowBrush;                                   // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 POIFastTravelIconGlowBrush;                               // 0x0000(0x0090) (Edit)
	struct FVector2D                                   POIIconGlowAdditionalSize;                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                POIIconGlowScaleCurve;                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   POICloseIconSizeMin;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   POICloseIconSizeMax;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   POIObjectiveIconSize;                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                POIObjectiveOffsetCurve;                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                POIObjectiveScaleCurve;                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   POIUntrackedObjectiveIconSize;                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   POIEncounterIconSize;                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                POIEncounterOffsetCurve;                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                POIEncounterScaleCurve;                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   POIFarIconSize;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 FastTravelHoveredIcon;                                    // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 FastTravelLockedIcon;                                     // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 ClosePOIIcons[0xF];                                       // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 FarPOIIcons[0xF];                                         // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 UntrackedObjectiveIcon;                                   // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 AreaMarkerIcon;                                           // 0x0000(0x0090) (Edit)
	struct FTexturedBoxStyle                           POIToolTipBoxStyle;                                       // 0x0000(0x0138) (Edit)
	struct FTextBlockStyle                             POIToolTipTextStyle;                                      // 0x0000(0x0178) (Edit)
	struct FMargin                                     POIToolTipPadding;                                        // 0x0000(0x0010) (Edit)
	struct FCheckBoxStyle                              LegendCheckBoxStyle;                                      // 0x0000(0x05E0) (Edit)
	struct FSlateFontInfo                              LegendEntryFont;                                          // 0x0000(0x0068) (Edit)
	struct FSlateBrush                                 LegendRowBorder;                                          // 0x0000(0x0090) (Edit)
	struct FLinearColor                                DisabledLegendIconColor;                                  // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ToolTipRenderOffset;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2008];                                    // 0x0008(0x2008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseLocationSpec
// 0x0024
struct FGlimpseLocationSpec
{
	TEnumAsByte<EGlimpseLocationReference>             Reference;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDistance;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinSlopeDegrees;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSlopeDegrees;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOrientToSlope;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinElevation;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxElevation;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDistanceFromWorldElement;                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0004(0x0020) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseMapZoneEncounter
// 0x0070
struct FGlimpseMapZoneEncounter
{
	class UBlueprintGeneratedClass*                    Blueprint;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	class UGlimpseSpawnModel*                          SpawnModel;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	struct FGlimpseLocationSpec                        LocationSpec;                                             // 0x0000(0x0024) (Edit, BlueprintVisible, SaveGame)
	bool                                               bUsed;                                                    // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // 0x0000(0x0030) (SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseNewsEntry
// 0x0020
struct FGlimpseNewsEntry
{
	struct FDateTime                                   EntryTime;                                                // 0x0000(0x0008) (Edit, ZeroConstructor)
	struct FText                                       EntryText;                                                // 0x0000(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseMenuNewsStyle
// 0x0F50 (0x0F58 - 0x0008)
struct FGlimpseMenuNewsStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              NewsHeaderFont;                                           // 0x0000(0x0068) (Edit)
	struct FSlateFontInfo                              UnreadNewsHeaderFont;                                     // 0x0000(0x0068) (Edit)
	struct FSlateFontInfo                              NewsDateFont;                                             // 0x0000(0x0068) (Edit)
	struct FSlateFontInfo                              NewsEntryFont;                                            // 0x0000(0x0068) (Edit)
	struct FHyperlinkStyle                             NewsHyperlinkStyle;                                       // 0x0000(0x0438) (Edit)
	struct FVector2D                                   BoxSize;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxHeightInterpSpeed;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 BoxBackgroundBrush;                                       // 0x0000(0x0090) (Edit)
	struct FScrollBoxStyle                             ScrollBorderStyle;                                        // 0x0000(0x0248) (Edit)
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0000(0x0518) (Edit)
	unsigned char                                      UnknownData00[0xA40];                                     // 0x0518(0x0A40) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpsePlayerArms
// 0x0028
struct FGlimpsePlayerArms
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class USkeletalMesh>                     Mesh;                                                     // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseFoliagePlacedItem
// 0x0030
struct FGlimpseFoliagePlacedItem
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0000(0x0010) (ZeroConstructor)
	TEnumAsByte<EGlimpseFoliage>                       Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGlimpseTransform>                   CompactTransforms;                                        // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseFoliagePlacedLoot
// 0x0018
struct FGlimpseFoliagePlacedLoot
{
	class UClass*                                      Blueprint;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGlimpseTransform>                   CompactTransforms;                                        // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseFoliagePlannerResult
// 0x0028
struct FGlimpseFoliagePlannerResult
{
	TArray<struct FGlimpseFoliagePlacedItem>           Items;                                                    // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FGlimpseFoliagePlacedLoot>           Loot;                                                     // 0x0000(0x0010) (ZeroConstructor)
	int                                                Format;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0004(0x0024) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldPatrol
// 0x0028
struct FGlimpseWorldPatrol
{
	int                                                PatrolId;                                                 // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FIntPoint                                   ZoneRegionPair;                                           // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<EGlimpseHighwayAgent>                  Agent;                                                    // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       AIKey;                                                    // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FVector>                             PatrolPoints;                                             // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseRoadManagerPiece
// 0x0068
struct FGlimpseRoadManagerPiece
{
	class UGlimpseWorldRoad*                           Road;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Actors;                                                   // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0010(0x0058) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseRoadManagerIntersection
// 0x0038
struct FGlimpseRoadManagerIntersection
{
	class UGlimpseWorldIntersection*                   Intersection;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Actors;                                                   // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) MISSED OFFSET
};

// ScriptStruct GlimpseGame.ProfileFlag
// 0x0010
struct FProfileFlag
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Value;                                                    // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpsePlaythroughEvent
// 0x0020
struct FGlimpsePlaythroughEvent
{
	struct FDateTime                                   WorldTime;                                                // 0x0000(0x0008) (ZeroConstructor, SaveGame)
	struct FTimespan                                   PlayTime;                                                 // 0x0000(0x0008) (ZeroConstructor, SaveGame)
	TArray<struct FString>                             Data;                                                     // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.ShuffledBroadcasts
// 0x0018
struct FShuffledBroadcasts
{
	int                                                BroadcastIndex;                                           // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FName>                               BroadcastKeys;                                            // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.ShuffledTimeslots
// 0x0050
struct FShuffledTimeslots
{
	TMap<struct FName, struct FShuffledBroadcasts>     Timeslots;                                                // 0x0000(0x0050) (ZeroConstructor, SaveGame)
};

// ScriptStruct GlimpseGame.BridgeInfo
// 0x0010
struct FBridgeInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SavedInputActionKeyMapping
// 0x0010
struct FSavedInputActionKeyMapping
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       Key;                                                      // 0x0000(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SavedInputAxisKeyMapping
// 0x0018
struct FSavedInputAxisKeyMapping
{
	struct FName                                       AxisName;                                                 // 0x0000(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       Key;                                                      // 0x0000(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	float                                              Scale;                                                    // 0x0000(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataUObject
// 0x0018
struct FSaveDataUObject
{
	int                                                ClassIndex;                                               // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                SerializedVersion;                                        // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<unsigned char>                              SerializedData;                                           // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataUObjectNamed
// 0x0030
struct FSaveDataUObjectNamed
{
	struct FSaveDataUObject                            Object;                                                   // 0x0000(0x0018) (SaveGame)
	struct FString                                     OuterReference;                                           // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	struct FName                                       ObjectName;                                               // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataTransform
// 0x0018
struct FSaveDataTransform
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataPickup
// 0x0014
struct FSaveDataPickup
{
	int                                                ClassIndex;                                               // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<EGlimpseTeamId>                        PickupTeam;                                               // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                CurrentStackSize;                                         // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Durability;                                               // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bLastOwnedByPlayer;                                       // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bCrafted;                                                 // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x0001(0x0013) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataInventoryItem
// 0x0014
struct FSaveDataInventoryItem
{
	struct FSaveDataPickup                             Pickup;                                                   // 0x0000(0x0014) (SaveGame)
};

// ScriptStruct GlimpseGame.SaveDataInventory
// 0x0010
struct FSaveDataInventory
{
	TArray<struct FSaveDataInventoryItem>              Items;                                                    // 0x0000(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct GlimpseGame.SaveDataNamedInventory
// 0x0018
struct FSaveDataNamedInventory
{
	struct FName                                       ObjectName;                                               // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FSaveDataInventory                          Inventory;                                                // 0x0000(0x0010) (SaveGame)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataBlueprint
// 0x0070
struct FSaveDataBlueprint
{
	int                                                SaveId;                                                   // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FSaveDataTransform                          Transform;                                                // 0x0000(0x0018) (SaveGame)
	bool                                               bTransformValid;                                          // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FSaveDataUObjectNamed                       ObjectNamed;                                              // 0x0000(0x0030) (SaveGame)
	TArray<struct FSaveDataUObjectNamed>               ComponentsNamed;                                          // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FSaveDataNamedInventory>             NamedInventory;                                           // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0010(0x0060) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataStreamingCriticalActor
// 0x0050
struct FSaveDataStreamingCriticalActor
{
	struct FName                                       ActorName;                                                // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FString                                     WorldElementPath;                                         // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	struct FName                                       LevelKey;                                                 // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector                                     ActorLocation;                                            // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FString>                             DependentElements;                                        // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FIntPoint>                           DependentDecorations;                                     // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0010(0x0040) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataStreamingManager
// 0x0050
struct FSaveDataStreamingManager
{
	TArray<struct FString>                             WhiteListedElements;                                      // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FString>                             ManuallyLoadedElements;                                   // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<TEnumAsByte<EGlimpseStreamingLevelState>>   ManuallyLoadedElementStates;                              // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FSaveDataStreamingCriticalActor>     CriticalActors;                                           // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FName>                               ResidentLevelPackages;                                    // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0010(0x0040) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataGameMode
// 0x0130
struct FSaveDataGameMode
{
	unsigned char                                      bGameModeInitialized : 1;                                 // 0x0000(0x0001) (SaveGame)
	struct FStringAssetReference                       GameModeClass;                                            // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TEnumAsByte<EGlimpseGameDifficulty>                GameDifficulty;                                           // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<EStoryCharacter>                       PlayerCharacterType;                                      // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      bEnableSecondWind : 1;                                    // 0x0000(0x0001) (SaveGame)
	struct FGlimpseDifficultySettings                  DifficultySettings;                                       // 0x0000(0x0007) (SaveGame)
	struct FTimespan                                   TotalTimeElapsed;                                         // 0x0000(0x0008) (ZeroConstructor, SaveGame)
	float                                              TimeFraction;                                             // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Day;                                                      // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FSaveDataUObject                            GameProfile;                                              // 0x0000(0x0018) (SaveGame)
	struct FBroadcastSchedule                          BroadcastGeneratedSchedule;                               // 0x0000(0x0010) (SaveGame)
	struct FName                                       CustomBroadcastKey;                                       // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FBroadcastTimeslot                          CustomTimeslot;                                           // 0x0000(0x0038) (SaveGame)
	float                                              CustomZeroScaleStartTime;                                 // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FGlimpseUniqueNamer                         UniqueNamer;                                              // 0x0000(0x0020) (SaveGame)
	struct FDateTime                                   StartingDate;                                             // 0x0000(0x0008) (ZeroConstructor, SaveGame)
	TMap<struct FName, struct FIntPoint>               IntegratedDLCVersions;                                    // 0x0000(0x0050) (ZeroConstructor, SaveGame)
	struct FString                                     OptionsString;                                            // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x120];                                     // 0x0010(0x0120) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataCharacter
// 0x0078
struct FSaveDataCharacter
{
	int                                                ClassIndex;                                               // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FSaveDataTransform                          Transform;                                                // 0x0000(0x0018) (SaveGame)
	struct FSaveDataInventory                          Inventory;                                                // 0x0000(0x0010) (SaveGame)
	int                                                Currency;                                                 // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              CurrentStats[0x7];                                        // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FSaveDataUObject>                    StatusEffects;                                            // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<int>                                        TransientPickupsCollected;                                // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      bLootSpawned : 1;                                         // 0x0000(0x0001) (SaveGame)
	unsigned char                                      bIsLooted : 1;                                            // 0x0000(0x0001) (SaveGame)
	unsigned char                                      UnknownData00[0x77];                                      // 0x0001(0x0077) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataPlayer
// 0x01B0
struct FSaveDataPlayer
{
	struct FSaveDataCharacter                          Character;                                                // 0x0000(0x0078) (SaveGame)
	struct FSaveDataInventory                          ClothingInventory;                                        // 0x0000(0x0010) (SaveGame)
	struct FSaveDataInventory                          HolsterInventory;                                         // 0x0000(0x0010) (SaveGame)
	struct FSaveDataInventory                          QuickSlotInventory;                                       // 0x0000(0x0010) (SaveGame)
	struct FSaveDataInventory                          StashInventory;                                           // 0x0000(0x0010) (SaveGame)
	float                                              CarryWeightOffset;                                        // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              JoySaturation;                                            // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              JoyCrashMeter;                                            // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              TimeInJoyState;                                           // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              JoyStateRemainingDuration;                                // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               InJoyTransition;                                          // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              JoyStateTransitionTimer;                                  // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              TimeForJoyTransition;                                     // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      CurrentDrugStateAsUint;                                   // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      TargetDrugStateAsUint;                                    // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              BloodSugarLevel;                                          // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                SelectedHolster;                                          // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                SelectedQuickSlot;                                        // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FSaveDataUObject>                    Quests;                                                   // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	struct FName                                       TrackedQuest;                                             // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FLoreProgress>                       LoreState;                                                // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FGlimpseStats>                       SpawnStats;                                               // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	uint32_t                                           NumberOfDeaths;                                           // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      bRecipesInitialized : 1;                                  // 0x0000(0x0001) (SaveGame)
	TArray<struct FRecipeState>                        RecipeUnlockStates;                                       // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TEnumAsByte<EGlimpseBiome>                         Biome;                                                    // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FText                                       ZoneName;                                                 // 0x0000(0x0018) (SaveGame)
	struct FName                                       ArmsOverride;                                             // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FRecurringTask>                      RecurringTasks;                                           // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	int                                                SkillPoints;                                              // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FSkillState>                         SkillStates;                                              // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	uint32_t                                           TutorialGreetingsCount;                                   // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bShowMainSheltersOnMap;                                   // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      bCanSeeNPCFootprints : 1;                                 // 0x0000(0x0001) (SaveGame)
	int                                                StatBuffRemainingTime[0x7];                               // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x194];                                     // 0x001C(0x0194) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataMapMaker
// 0x0030
struct FSaveDataMapMaker
{
	TArray<struct FString>                             RevealedPOIs;                                             // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	struct FVector                                     CustomMarkerLocation;                                     // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bCustomMarkerSet;                                         // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<unsigned char>                              FogMap;                                                   // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataFastTravelPoint
// 0x0020
struct FSaveDataFastTravelPoint
{
	struct FName                                       FastTravelPointName;                                      // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FString                                     FastTravelPointUID;                                       // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	bool                                               Found;                                                    // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               Active;                                                   // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataOverrideRespawn
// 0x0030
struct FSaveDataOverrideRespawn
{
	struct FString                                     DependentElementPath;                                     // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FString>                             ObjectPaths;                                              // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x000C(0x0024) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataShelterRespawn
// 0x0028
struct FSaveDataShelterRespawn
{
	struct FName                                       Label;                                                    // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FString>                             ObjectPaths;                                              // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                ZoneId;                                                   // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0004(0x0024) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataRespawnManager
// 0x0030
struct FSaveDataRespawnManager
{
	TArray<struct FSaveDataFastTravelPoint>            FastTravelPoints;                                         // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FSaveDataOverrideRespawn>            OverrideRespawns;                                         // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FSaveDataShelterRespawn>             ShelterRespawns;                                          // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataLootManagerTrackedZone
// 0x0010
struct FSaveDataLootManagerTrackedZone
{
	struct FName                                       Zone;                                                     // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                NumSpawned;                                               // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataLootManagerTracked
// 0x0018
struct FSaveDataLootManagerTracked
{
	int                                                ClassIndex;                                               // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                NumSpawned;                                               // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FSaveDataLootManagerTrackedZone>     NumSpawnedPerZone;                                        // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataLootManager
// 0x0020
struct FSaveDataLootManager
{
	TArray<int>                                        SpawnedUniqueClassIndices;                                // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FSaveDataLootManagerTracked>         LootTracking;                                             // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.LoosePickupSaved
// 0x0050
struct FLoosePickupSaved
{
	int                                                ClassIndex;                                               // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       ActorName;                                                // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<EGlimpseTeamId>                        PickupTeam;                                               // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                CurrentStackSize;                                         // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Durability;                                               // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bLastOwnedByPlayer;                                       // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bCrafted;                                                 // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FTimespan                                   ExpiryTime;                                               // 0x0000(0x0008) (ZeroConstructor, SaveGame)
	struct FIntPoint                                   CellIndex;                                                // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataLoosePickupManager
// 0x0020
struct FSaveDataLoosePickupManager
{
	TArray<struct FLoosePickupSaved>                   SavedPickups;                                             // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<int>                                        PickupClasses;                                            // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataAIManager
// 0x0010
struct FSaveDataAIManager
{
	TArray<struct FGlimpseAITableRow>                  AITableRows;                                              // 0x0000(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct GlimpseGame.SaveDataLockable
// 0x0088
struct FSaveDataLockable
{
	struct FSaveDataBlueprint                          Blueprint;                                                // 0x0000(0x0070) (SaveGame)
	struct FVector                                     MeshLocation;                                             // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FRotator                                    MeshRotation;                                             // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7C];                                      // 0x000C(0x007C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataLootContents
// 0x0030
struct FSaveDataLootContents
{
	TArray<bool>                                       bStaticSlotProcessed;                                     // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<bool>                                       bSlotProcessed;                                           // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	float                                              ResetTime;                                                // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              ResetIntervalRoll;                                        // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              SlotRoll;                                                 // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bBaseValuesRolled;                                        // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0001(0x002F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataLootable
// 0x00C8
struct FSaveDataLootable
{
	struct FSaveDataLockable                           Lockable;                                                 // 0x0000(0x0088) (SaveGame)
	struct FSaveDataInventory                          Inventory;                                                // 0x0000(0x0010) (SaveGame)
	struct FSaveDataLootContents                       LootContents;                                             // 0x0000(0x0030) (SaveGame)
	unsigned char                                      UnknownData00[0x98];                                      // 0x0030(0x0098) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataMeshVariant
// 0x0030
struct FSaveDataMeshVariant
{
	TEnumAsByte<ECharacterGender>                      Gender;                                                   // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                MeshVariantIndex;                                         // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                MaterialVariantIndex;                                     // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                TintVariantIndex;                                         // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                SkinTintVariantIndex;                                     // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	class UMaterialInterface*                          CustomMaterial;                                           // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<int>                                        Attachments;                                              // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataAICharacter
// 0x0150
struct FSaveDataAICharacter
{
	struct FSaveDataCharacter                          Character;                                                // 0x0000(0x0078) (SaveGame)
	struct FSaveDataInventory                          ShopkeeperInventory;                                      // 0x0000(0x0010) (SaveGame)
	struct FSaveDataMeshVariant                        MeshVariant;                                              // 0x0000(0x0030) (SaveGame)
	TEnumAsByte<ECorpseState>                          CorpseState;                                              // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      bCorpseMoved : 1;                                         // 0x0000(0x0001) (SaveGame)
	unsigned char                                      bCorpseCanDespawn : 1;                                    // 0x0000(0x0001) (SaveGame)
	TArray<struct FTransform>                          CorpseBodiesTransform;                                    // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      bCorpseUnconcious : 1;                                    // 0x0000(0x0001) (SaveGame)
	struct FTimespan                                   TimeOfDeath;                                              // 0x0000(0x0008) (ZeroConstructor, SaveGame)
	struct FString                                     POIReference;                                             // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	struct FSaveDataLootContents                       LootContents;                                             // 0x0000(0x0030) (SaveGame)
	struct FSaveDataLootContents                       ShopkeeperLootContents;                                   // 0x0000(0x0030) (SaveGame)
	unsigned char                                      UnknownData00[0x120];                                     // 0x0030(0x0120) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataStaticNPC
// 0x0160
struct FSaveDataStaticNPC
{
	struct FString                                     ActorPath;                                                // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	struct FSaveDataAICharacter                        AICharacter;                                              // 0x0000(0x0150) (SaveGame)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0150(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataSpawnLevel
// 0x0098
struct FSaveDataSpawnLevel
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FSaveDataLockable>                   Lockables;                                                // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FSaveDataLootable>                   Lootables;                                                // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FSaveDataBlueprint>                  Blueprints;                                               // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FSaveDataStaticNPC>                  StaticNPCs;                                               // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0010(0x0050) UNKNOWN PROPERTY: SetProperty GlimpseGame.SaveDataSpawnLevel.DestroyedActors
	unsigned char                                      UnknownData01[0x48];                                      // 0x0050(0x0048) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataSpawnModel
// 0x0018
struct FSaveDataSpawnModel
{
	int                                                SaveId;                                                   // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FSaveDataSpawnLevel>                 Levels;                                                   // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseShoreModelPiece
// 0x0018
struct FGlimpseShoreModelPiece
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinStartOverlap;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxStartOverlap;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinEndOverlap;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxEndOverlap;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct GlimpseGame.RecurringTaskInfo
// 0x0058
struct FRecurringTaskInfo
{
	struct FName                                       RecurringTaskName;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       StatusApplyText;                                          // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ShortDescription;                                         // 0x0000(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0018(0x0040) MISSED OFFSET
};

// ScriptStruct GlimpseGame.StatusEffectTier
// 0x0148
struct FStatusEffectTier
{
	unsigned char                                      bOverride_StatusType : 1;                                 // 0x0000(0x0001)
	unsigned char                                      bOverride_StatusRemoveText : 1;                           // 0x0000(0x0001)
	unsigned char                                      bOverride_StatusName : 1;                                 // 0x0000(0x0001)
	unsigned char                                      bOverride_StatusCriticalText : 1;                         // 0x0000(0x0001)
	unsigned char                                      bOverride_StatusDescription : 1;                          // 0x0000(0x0001)
	unsigned char                                      bOverride_StatusCriticalPriority : 1;                     // 0x0000(0x0001)
	unsigned char                                      bOverride_StatusDescriptionShort : 1;                     // 0x0000(0x0001)
	unsigned char                                      bOverride_ValueModifiers : 1;                             // 0x0000(0x0001)
	unsigned char                                      bOverride_StatusBrush : 1;                                // 0x0000(0x0001)
	unsigned char                                      bOverride_bStatusShouldPulseIcon : 1;                     // 0x0000(0x0001)
	unsigned char                                      bOverride_StatusPercent : 1;                              // 0x0000(0x0001)
	unsigned char                                      bOverride_StatusApplyText : 1;                            // 0x0000(0x0001)
	TEnumAsByte<EStatusEffectType>                     StatusType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       StatusName;                                               // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       StatusDescription;                                        // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       StatusDescriptionShort;                                   // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 StatusBrush;                                              // 0x0000(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              StatusPercent;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bStatusShouldPulseIcon : 1;                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       StatusApplyText;                                          // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       StatusRemoveText;                                         // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       StatusPersistentText;                                     // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	int                                                StatusPersistentPriority;                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FValueModifier>                      ValueModifiers;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x138];                                     // 0x0010(0x0138) MISSED OFFSET
};

// ScriptStruct GlimpseGame.InsultProbability
// 0x0008
struct FInsultProbability
{
	float                                              OnConversationInsultProbability;                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnTargetActorInsultProbability;                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSpawnModelLevelMetrics
// 0x0030 (0x0038 - 0x0008)
struct FGlimpseSpawnModelLevelMetrics : public FTableRowBase
{
	struct FBox                                        LevelBounds;                                              // 0x0000(0x001C) (ZeroConstructor, IsPlainOldData)
	int                                                NumActors;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumMeshComponents;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumUniqueMeshes;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumUniqueMaterials;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumVertices;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x34];                                      // 0x0004(0x0034) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSpawnModelMetrics
// 0x0008 (0x0010 - 0x0008)
struct FGlimpseSpawnModelMetrics : public FTableRowBase
{
	int                                                Priority;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OverrideCost;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSubtitleScriptReference
// 0x0018
struct FGlimpseSubtitleScriptReference
{
	struct FName                                       SubtitleKey;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Culture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  SubtitleScript;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSubtitleDataEntry
// 0x0010
struct FGlimpseSubtitleDataEntry
{
	struct FName                                       Culture;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  DataTable;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.TheatreMenuEntry
// 0x0078
struct FTheatreMenuEntry
{
	class UTexture2D*                                  CollectibleIcon;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       CollectibleName;                                          // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       CollectibleDescription;                                   // 0x0000(0x0018) (Edit, DisableEditOnInstance)
	class UAkAudioEvent*                               SoundEvent;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CustomBroadcastKey;                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0008(0x0070) MISSED OFFSET
};

// ScriptStruct GlimpseGame.IngredientInfo
// 0x0040
struct FIngredientInfo
{
	struct FText                                       ItemName;                                                 // 0x0000(0x0018) (BlueprintVisible)
	class UTexture2D*                                  ItemIcon;                                                 // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HaveAmount;                                               // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RequiredAmount;                                           // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       ItemLocationDescription;                                  // 0x0000(0x0018) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0018(0x0028) MISSED OFFSET
};

// ScriptStruct GlimpseGame.MapLegendData
// 0x0020
struct FMapLegendData
{
	TEnumAsByte<EGlimpseMapPOI>                        LegendType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseMapPOI>                        SecondaryLegendType;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       LegendText;                                               // 0x0000(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseDeathMenuVariants
// 0x0160
struct FGlimpseDeathMenuVariants
{
	struct FString                                     PlatformName;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UTexture2D*                                  ArthurDeathScreenAssets[0xE];                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  SallyDeathScreenAssets[0xE];                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  OliverDeathScreenAssets[0xE];                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0070(0x00F0) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveSlotStyle
// 0x0790 (0x0798 - 0x0008)
struct FSaveSlotStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 SlotBorderImage;                                          // 0x0000(0x0090) (Edit)
	struct FSlateFontInfo                              SlotNumberFont;                                           // 0x0000(0x0068) (Edit)
	struct FSlateFontInfo                              SlotHeaderFont;                                           // 0x0000(0x0068) (Edit)
	struct FSlateFontInfo                              SlotEmptyFont;                                            // 0x0000(0x0068) (Edit)
	struct FSlateFontInfo                              SlotTextFont;                                             // 0x0000(0x0068) (Edit)
	struct FSlateFontInfo                              SlotConfirmFont;                                          // 0x0000(0x0068) (Edit)
	struct FSlateFontInfo                              SlotInputDisplayFont;                                     // 0x0000(0x0068) (Edit)
	struct FSlateBrush                                 EntryIdleBulletImage;                                     // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 EntryHighlightBulletImage;                                // 0x0000(0x0090) (Edit)
	struct FButtonStyle                                EntryInternalButtonsStyle;                                // 0x0000(0x02A8) (Edit)
	struct FMargin                                     EntryInteralButtonTextPadding;                            // 0x0000(0x0010) (Edit)
	float                                              EntryInteralButtonTextMinWidth;                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class USlateWidgetStyleAsset*                      InputDisplayStyle;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpaceAboveInputDisplays;                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InputDisplaySize;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SaveImageDimensions;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EntryHighlightHeight;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 EntryHighlightBackgroundImage;                            // 0x0000(0x0090) (Edit)
	unsigned char                                      UnknownData00[0x708];                                     // 0x0090(0x0708) MISSED OFFSET
};

// ScriptStruct GlimpseGame.InventoryItemStyle
// 0x0540 (0x0548 - 0x0008)
struct FInventoryItemStyle : public FSlateWidgetStyle
{
	struct FMargin                                     ItemPadding;                                              // 0x0000(0x0010) (Edit)
	struct FTexturedBoxStyle                           BoxStyle;                                                 // 0x0000(0x0138) (Edit)
	struct FTexturedBoxStyle                           HighlightedBoxStyle;                                      // 0x0000(0x0138) (Edit)
	float                                              DurabilityHeight;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     DurabilityBarPadding;                                     // 0x0000(0x0010) (Edit)
	struct FSlateBrush                                 DurabilityBackground;                                     // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 DurabilityBarBackground;                                  // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 DurabilityImage;                                          // 0x0000(0x0090) (Edit)
	struct FSlateFontInfo                              StackCountFont;                                           // 0x0000(0x0068) (Edit)
	struct FSlateBrush                                 ProgressMaterial;                                         // 0x0000(0x0090) (Edit)
	unsigned char                                      UnknownData00[0x4B8];                                     // 0x0090(0x04B8) MISSED OFFSET
};

// ScriptStruct GlimpseGame.KeyImage
// 0x01B8
struct FKeyImage
{
	struct FName                                       KeyName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 KeyImage;                                                 // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 XBoxKeyImage;                                             // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 PS4KeyImage;                                              // 0x0000(0x0090) (Edit)
	unsigned char                                      UnknownData00[0x128];                                     // 0x0090(0x0128) MISSED OFFSET
};

// ScriptStruct GlimpseGame.InputBindingDisplayStyle
// 0x01D0 (0x01D8 - 0x0008)
struct FInputBindingDisplayStyle : public FSlateWidgetStyle
{
	struct FMargin                                     KeyPadding;                                               // 0x0000(0x0010) (Edit)
	struct FSlateBrush                                 KeyBackgroundImage;                                       // 0x0000(0x0090) (Edit)
	TArray<struct FKeyImage>                           KeyImageMap;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FSlateFontInfo                              KeyVisualFont;                                            // 0x0000(0x0068) (Edit)
	struct FSlateColor                                 KeyVisualColor;                                           // 0x0000(0x0028) (Edit)
	struct FSlateFontInfo                              KeyTextualFont;                                           // 0x0000(0x0068) (Edit)
	struct FSlateColor                                 KeyTextualColor;                                          // 0x0000(0x0028) (Edit)
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x0028(0x01B0) MISSED OFFSET
};

// ScriptStruct GlimpseGame.StatDisplayRanges
// 0x0048
struct FStatDisplayRanges
{
	float                                              MeleeDamageBestValue;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MeleeDamageWorstValue;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrownDamageBestValue;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrownDamageWorstValue;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StaminaMinValue;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StaminaMaxValue;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackTimeSecondsBestValue;                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackTimeSecondsWorstValue;                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrowRangeBestValue;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrowRangeWorstValue;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AOERadiusBestValue;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AOERadiusWorstValue;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArmourBestValue;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ArmourWorstValue;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VisibilityBestValue;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VisibilityWorstValue;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NoiseBestValue;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NoiseWorstValue;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x44];                                      // 0x0004(0x0044) MISSED OFFSET
};

// ScriptStruct GlimpseGame.HeaderTexturedBoxStyle
// 0x0278 (0x0280 - 0x0008)
struct FHeaderTexturedBoxStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              HeaderFont;                                               // 0x0000(0x0068) (Edit)
	struct FSlateColor                                 HeaderTextColor;                                          // 0x0000(0x0028) (Edit)
	struct FMargin                                     HeaderPadding;                                            // 0x0000(0x0010) (Edit)
	struct FSlateBrush                                 HeaderBackground;                                         // 0x0000(0x0090) (Edit)
	struct FMargin                                     ContentPadding;                                           // 0x0000(0x0010) (Edit)
	struct FTexturedBoxStyle                           BoxStyle;                                                 // 0x0000(0x0138) (Edit)
	unsigned char                                      UnknownData00[0x148];                                     // 0x0138(0x0148) MISSED OFFSET
};

// ScriptStruct GlimpseGame.InventoryListRowStyleOverride
// 0x0170
struct FInventoryListRowStyleOverride
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTexturedBoxStyle                           BoxStyle;                                                 // 0x0000(0x0138) (Edit)
	struct FSlateColor                                 Color;                                                    // 0x0000(0x0028) (Edit)
	struct FVector2D                                   Scale;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x168];                                     // 0x0008(0x0168) MISSED OFFSET
};

// ScriptStruct GlimpseGame.InventoryListStyle
// 0x0328 (0x0330 - 0x0008)
struct FInventoryListStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              ListFont;                                                 // 0x0000(0x0068) (Edit)
	struct FMargin                                     RowPadding;                                               // 0x0000(0x0010) (Edit)
	struct FTexturedBoxStyle                           RowBoxStyle;                                              // 0x0000(0x0138) (Edit)
	struct FSlateColor                                 RowColorAndOpacity;                                       // 0x0000(0x0028) (Edit)
	TArray<struct FInventoryListRowStyleOverride>      RowStyleOverrides;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FSlateBrush                                 UnreadItemBorder;                                         // 0x0000(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 UnreadItemIcon;                                           // 0x0000(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                UnreadItemMaxPulseColor;                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                UnreadItemMinPulseColor;                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x320];                                     // 0x0010(0x0320) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveSlotDetails
// 0x0098
struct FSaveSlotDetails
{
	struct FText                                       SaveDate;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       SaveTime;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       GameDate;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       GameTime;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       SlotName;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       LocationName;                                             // 0x0000(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<ENewGameCharacter>                     Character;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENewGameMode>                          GameMode;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseSaveGameSlot>                  SlotType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsEmpty;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Permadeath;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x97];                                      // 0x0001(0x0097) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWeatherSettings
// 0x05F0
struct FGlimpseWeatherSettings
{
	float                                              SunIntensityMultiplier;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoonIntensityMultiplier;                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyLightIntensityMultiplier;                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FEnvironmentSettings                        Settings;                                                 // 0x0000(0x05E0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x05E0(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWeatherState
// 0x000C
struct FGlimpseWeatherState
{
	float                                              CloudIntensity;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainIntensity;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FogIntensity;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldPlannerDebug
// 0x0008
struct FGlimpseWorldPlannerDebug
{
	bool                                               bSkipFeatures;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipFootprints;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipRoads;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipRoadDecorations;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipGroundDecorations;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipFoliage;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipRoadPlannerExport;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableRailroadBoundary;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldPlannerReview
// 0x0028
struct FGlimpseWorldPlannerReview
{
	TEnumAsByte<EGlimpseWorldPlannerReview>            Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	class UGlimpseFootprint*                           Footprint;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGlimpseFrame2D                             Frame;                                                    // 0x0000(0x0014)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0014(0x0014) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldPlannerFoliageType
// 0x0018
struct FGlimpseWorldPlannerFoliageType
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldBuilderDebug
// 0x0040
struct FGlimpseWorldBuilderDebug
{
	bool                                               bSpawnRoads;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnBuildings;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnFillers;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnTerrain;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnDecorations;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnEncounters;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnFoliage;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnWalls;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnShore;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxBuildingSpawnCount;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowZoning;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableTerrainLOD;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForcePlayerSpawn;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableLivenessManager;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableIndirectLightingCache;                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableAI;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLevelInstancing;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRoadNetworkDebug;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowTopLevelDebug;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowGraphDebug;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableRailroadBoundary;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowEarlyPlayerSpawn;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCreateTextLabels;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TextLabelColor;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TextLabelSize;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ZoneToReview;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseFootprintCache
// 0x00B0
struct FGlimpseFootprintCache
{
	TArray<class UGlimpseFootprint*>                   Footprints;                                               // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0010(0x00A0) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldBuilderActorGroup
// 0x0010
struct FGlimpseWorldBuilderActorGroup
{
	TArray<class AActor*>                              Actors;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct GlimpseGame.GlimpseSandBoxEncounterSpread
// 0x0010
struct FGlimpseSandBoxEncounterSpread
{
	class UDataTable*                                  FeatureList;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NbToDistribute;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseWorldSizeFilter;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseSandboxSize>                   WorldSizeFilter;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideNumberAndDuplicate;                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSandBoxZoneOverride
// 0x0010
struct FGlimpseSandBoxZoneOverride
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxSecondaryFeatures;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseWorldSizeFilter;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseSandboxSize>                   WorldSizeFilter;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSandBoxFeatureList
// 0x0028
struct FGlimpseSandBoxFeatureList
{
	class UDataTable*                                  FeatureList;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideMinMax;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinInstances;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxInstances;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0004(0x0024) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSandBoxFeatureListGroup
// 0x0018
struct FGlimpseSandBoxFeatureListGroup
{
	TArray<struct FGlimpseSandBoxFeatureList>          FeatureLists;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SelectNumber;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSandboxFeatureDistributionModel
// 0x0010
struct FGlimpseSandboxFeatureDistributionModel
{
	TEnumAsByte<EGlimpseSandboxFeatureDistributionTarget> Target;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseSandboxFeatureDistributionSelection> Selection;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDistributeAll;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinToDistribute;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxToDistribute;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNoDuplicate;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSandBoxFeatureDistribution
// 0x0030
struct FGlimpseSandBoxFeatureDistribution
{
	struct FGlimpseSandBoxFeatureListGroup             FeatureListGroup;                                         // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FGlimpseSandboxFeatureDistributionModel     DistributionModel;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseWorldSizeFilter;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseSandboxSize>                   WorldSizeFilter;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0001(0x002F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpsePopulationScaleModifier
// 0x000C
struct FGlimpsePopulationScaleModifier
{
	TEnumAsByte<EGlimpseSandboxPopulation>             SandboxPopulation;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Modifier;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpsePopulationScaleModifiers
// 0x0010
struct FGlimpsePopulationScaleModifiers
{
	TArray<struct FGlimpsePopulationScaleModifier>     Modifiers;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct GlimpseGame.GlimpseSandboxDifficultyCurve
// 0x0008
struct FGlimpseSandboxDifficultyCurve
{
	int                                                Start;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                End;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSandboxTargetedAIList
// 0x0010
struct FGlimpseSandboxTargetedAIList
{
	int                                                TargetedTier;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  AITable;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldShoreMesh
// 0x0018
struct FGlimpseWorldShoreMesh
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FTransform>                          Instances;                                                // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseZoneHouse
// 0x0018
struct FGlimpseZoneHouse
{
	TEnumAsByte<EGlimpseSuspicionZone>                 Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class AGlimpseGameplayVolume*>              Volumes;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseZoningCell
// 0x0010
struct FGlimpseZoningCell
{
	int                                                ZoneId;                                                   // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                VoronoiIndex;                                             // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector2D                                   RefPoint;                                                 // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseZone
// 0x0050
struct FGlimpseZone
{
	int                                                ZoneId;                                                   // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector2D                                   Anchor;                                                   // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0000(0x0010) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Priority;                                                 // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	class AGlimpseMapZone*                             MapZone;                                                  // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FGlimpseBounds2D                            Bounds;                                                   // 0x0000(0x0014) (SaveGame)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0014(0x003C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseZoningFeature
// 0x01B8
struct FGlimpseZoningFeature
{
	TEnumAsByte<EGlimpseZoningFeature>                 Type;                                                     // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FVector2D>                           Points;                                                   // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	struct FGlimpseCurve                               ModelCurve;                                               // 0x0000(0x0030) (SaveGame)
	struct FGlimpseCurve                               PlanCurve;                                                // 0x0000(0x0030) (SaveGame)
	bool                                               bStartAtWater;                                            // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bEndAtWater;                                              // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<int>                                        Cells;                                                    // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<int>                                        Edges;                                                    // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0010(0x01A8) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseZoningPoint
// 0x0038
struct FGlimpseZoningPoint
{
	struct FVector2D                                   Location;                                                 // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<int>                                        ZoneIds;                                                  // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<int>                                        BoundaryIds;                                              // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FIntPoint>                           EdgeIds;                                                  // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseZoningEdge
// 0x0028
struct FGlimpseZoningEdge
{
	int                                                PointAIndex;                                              // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                PointBIndex;                                              // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<int>                                        ZoneIds;                                                  // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<int>                                        BoundaryIds;                                              // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseZoningRegion
// 0x0178
struct FGlimpseZoningRegion
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FGlimpseOutline                             Outline;                                                  // 0x0000(0x0098) (SaveGame)
	struct FGlimpseOutline                             InnerOutline;                                             // 0x0000(0x0098) (SaveGame)
	class UGlimpsePlanEnvStyle*                        EnvStyle;                                                 // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	class UGlimpsePlanRoadStyle*                       RoadStyle;                                                // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FGameplayTagContainer                       LootLocationTags;                                         // 0x0000(0x0020) (SaveGame)
	unsigned char                                      UnknownData00[0x158];                                     // 0x0020(0x0158) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseZoningZone
// 0x0140
struct FGlimpseZoningZone
{
	int                                                ZoneId;                                                   // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	class AGlimpseMapZone*                             MapZone;                                                  // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<int>                                        OutlinePoints;                                            // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	struct FGlimpseOutline                             ShoreOutline;                                             // 0x0000(0x0098) (SaveGame)
	TArray<struct FGlimpseZoningRegion>                Regions;                                                  // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FGlimpseOutline>                     OccupiedRegions;                                          // 0x0000(0x0010) (ZeroConstructor, Transient)
	class UGlimpsePlanEnvStyle*                        EnvStyle;                                                 // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	class UGlimpsePlanRoadStyle*                       RoadStyle;                                                // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FGameplayTagContainer                       LootLocationTags;                                         // 0x0000(0x0020) (SaveGame)
	bool                                               bIsCustom;                                                // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13F];                                     // 0x0001(0x013F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseZoningBoundary
// 0x0038
struct FGlimpseZoningBoundary
{
	int                                                BoundaryId;                                               // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TEnumAsByte<EGlimpseZoningBoundaryType>            Type;                                                     // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<int>                                        PathPoints;                                               // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<int>                                        ZoneIds;                                                  // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	int                                                ConnHeadId;                                               // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bConnHeadAtTail;                                          // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                ConnTailId;                                               // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bConnTailAtTail;                                          // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x37];                                      // 0x0001(0x0037) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseZoningRiver
// 0x0150
struct FGlimpseZoningRiver
{
	struct FGlimpseOutline                             Path;                                                     // 0x0000(0x0098) (SaveGame)
	TArray<struct FVector2D>                           Shore0;                                                   // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FVector2D>                           Shore1;                                                   // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	struct FGlimpseOutline                             Outline;                                                  // 0x0000(0x0098) (SaveGame)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0098(0x00B8) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseZoningRiverMouth
// 0x0098
struct FGlimpseZoningRiverMouth
{
	struct FGlimpseOutline                             Outline;                                                  // 0x0000(0x0098) (SaveGame)
};

// ScriptStruct GlimpseGame.IconBoxStyle
// 0x01B0 (0x01B8 - 0x0008)
struct FIconBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BoxImage;                                                 // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 IconBorderImage;                                          // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 IconImage;                                                // 0x0000(0x0090) (Edit)
	unsigned char                                      UnknownData00[0x128];                                     // 0x0090(0x0128) MISSED OFFSET
};

// ScriptStruct GlimpseGame.InventoryGridStyle
// 0x05B8 (0x05C0 - 0x0008)
struct FInventoryGridStyle : public FSlateWidgetStyle
{
	struct FMargin                                     GridPadding;                                              // 0x0000(0x0010) (Edit)
	struct FTexturedBoxStyle                           GridBoxStyle;                                             // 0x0000(0x0138) (Edit)
	struct FMargin                                     SlotPadding;                                              // 0x0000(0x0010) (Edit)
	struct FTexturedBoxStyle                           SlotBoxStyle;                                             // 0x0000(0x0138) (Edit)
	struct FTexturedBoxStyle                           HighlightedSlotBoxStyle;                                  // 0x0000(0x0138) (Edit)
	struct FMargin                                     ItemMargin;                                               // 0x0000(0x0010) (Edit)
	struct FSlateBrush                                 ShadowImage;                                              // 0x0000(0x0090) (Edit)
	float                                              ShadowImageAnimationSpeed;                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShadowImageAnimationScale;                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTexturedBoxStyle                           LockedSlotBoxStyle;                                       // 0x0000(0x0138) (Edit)
	struct FMargin                                     LockedSlotPadding;                                        // 0x0000(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x5B0];                                     // 0x0010(0x05B0) MISSED OFFSET
};

// ScriptStruct GlimpseGame.InventoryItemToolTipStyle
// 0x1490 (0x1498 - 0x0008)
struct FInventoryItemToolTipStyle : public FSlateWidgetStyle
{
	struct FHeaderTexturedBoxStyle                     ToolTipBoxStyle;                                          // 0x0000(0x0280) (Edit)
	struct FVector2D                                   ItemTypeIconSize;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ToolTipWidth;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 ItemCategoryIcons[0xB];                                   // 0x0000(0x0090) (Edit)
	struct FSlateFontInfo                              FlavourTextFont;                                          // 0x0000(0x0068) (Edit)
	struct FSlateFontInfo                              UseEquipTextFont;                                         // 0x0000(0x0068) (Edit)
	struct FSlateFontInfo                              InputTextFont;                                            // 0x0000(0x0068) (Edit)
	struct FTexturedBoxStyle                           ItemStatBoxStyle;                                         // 0x0000(0x0138) (Edit)
	struct FSlateFontInfo                              ItemStatTextFont;                                         // 0x0000(0x0068) (Edit)
	struct FMargin                                     ItemStatMargin;                                           // 0x0000(0x0010) (Edit)
	struct FMargin                                     ItemStatPadding;                                          // 0x0000(0x0010) (Edit)
	struct FProgressBarStyle                           ItemStatBarStyle;                                         // 0x0000(0x01B8) (Edit)
	struct FSlateColor                                 PositiveColorAndOpacity;                                  // 0x0000(0x0028) (Edit)
	struct FSlateColor                                 NegativeColorAndOpacity;                                  // 0x0000(0x0028) (Edit)
	struct FIconBoxStyle                               StackInfoBoxStyle;                                        // 0x0000(0x01B8) (Edit)
	struct FIconBoxStyle                               DurabilityInfoBoxStyle;                                   // 0x0000(0x01B8) (Edit)
	struct FIconBoxStyle                               ValueInfoBoxStyle;                                        // 0x0000(0x01B8) (Edit)
	struct FTextBlockStyle                             InfoBoxTextStyle;                                         // 0x0000(0x0178) (Edit)
	struct FLinearColor                                StackInfoTextColor;                                       // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DurabilityInfoTextColor;                                  // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ValueInfoTextColor;                                       // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1488];                                    // 0x0010(0x1488) MISSED OFFSET
};

// ScriptStruct GlimpseGame.OnOffStyle
// 0x0298 (0x02A0 - 0x0008)
struct FOnOffStyle : public FSlateWidgetStyle
{
	struct FTextBlockStyle                             OnOffTextStyle;                                           // 0x0000(0x0178) (Edit)
	struct FSlateBrush                                 InactiveImage;                                            // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 ActiveImage;                                              // 0x0000(0x0090) (Edit)
	unsigned char                                      UnknownData00[0x210];                                     // 0x0090(0x0210) MISSED OFFSET
};

// ScriptStruct GlimpseGame.InputBindingStyle
// 0x01A0 (0x01A8 - 0x0008)
struct FInputBindingStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BindingBorderImage;                                       // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 BindingRebindingBorderImage;                              // 0x0000(0x0090) (Edit)
	struct FMargin                                     BindingBorderPadding;                                     // 0x0000(0x0010) (Edit)
	struct FSlateFontInfo                              BindingRebindTextFont;                                    // 0x0000(0x0068) (Edit)
	class USlateWidgetStyleAsset*                      BindingDisplayStyleAsset;                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0008(0x01A0) MISSED OFFSET
};

// ScriptStruct GlimpseGame.MenuEntryStyle
// 0x1C18 (0x1C20 - 0x0008)
struct FMenuEntryStyle : public FSlateWidgetStyle
{
	struct FTextBlockStyle                             EntryTextStyle;                                           // 0x0000(0x0178) (Edit)
	float                                              EntryTextWrapWidth;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTextBlockStyle                             SelectedEntryTextStyle;                                   // 0x0000(0x0178) (Edit)
	struct FButtonStyle                                EntryButtonStyle;                                         // 0x0000(0x02A8) (Edit)
	float                                              EntryHoverScale;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EntryHoverScaleSpeed;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 EntrySubMenuImage;                                        // 0x0000(0x0090) (Edit)
	float                                              BulletLeftPadding;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BulletRightPadding;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 EntryIdleBulletImage;                                     // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 EntryHighlightBulletImage;                                // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 EntryHighlightBackgroundImage;                            // 0x0000(0x0090) (Edit)
	struct FMargin                                     EntryHighlightPadding;                                    // 0x0000(0x0010) (Edit)
	float                                              EntryHighlightHeight;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 EntryTextHighlightBackgroundImage;                        // 0x0000(0x0090) (Edit)
	struct FMargin                                     EntryTextHighlightPadding;                                // 0x0000(0x0010) (Edit)
	float                                              EntryTextHighlightHeight;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseEntryTextHighlight;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EntryTextFillRatio;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EntryBindingFillRatio;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EntryBindingMinWidth;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 EntryBindingBorderImage;                                  // 0x0000(0x0090) (Edit)
	struct FOnOffStyle                                 EntryOnOffWidgetStyle;                                    // 0x0000(0x02A0) (Edit)
	struct FSliderStyle                                EntryFloatSliderStyle;                                    // 0x0000(0x0250) (Edit)
	struct FTextBlockStyle                             EntryMultipleChoiceTextStyle;                             // 0x0000(0x0178) (Edit)
	float                                              EntryMultipleChoiceWrapWidth;                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FButtonStyle                                EntryMultipleChoiceLeftButtonStyle;                       // 0x0000(0x02A8) (Edit)
	struct FButtonStyle                                EntryMultipleChoiceRightButtonStyle;                      // 0x0000(0x02A8) (Edit)
	struct FComboBoxStyle                              EntryMultipleChoiceStyle;                                 // 0x0000(0x0428) (Edit)
	struct FInputBindingStyle                          EntryInputBindingStyle;                                   // 0x0000(0x01A8) (Edit)
	struct FSlateBrush                                 EntryHighlightParentMenuImage;                            // 0x0000(0x0090) (Edit)
	bool                                               EntryMultipleChoiceButtonVAlignCenter;                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               HideMultipleChoiceButtonIfDisabled;                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               LoopMultipleChoice;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 EntryBorderImageStyle;                                    // 0x0000(0x0090) (Edit)
	struct FLinearColor                                EntryDisabledTint;                                        // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C10];                                    // 0x0010(0x1C10) MISSED OFFSET
};

// ScriptStruct GlimpseGame.MessageBoxStyle
// 0x0868 (0x0870 - 0x0008)
struct FMessageBoxStyle : public FSlateWidgetStyle
{
	struct FLinearColor                                DimBackgroundColor;                                       // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Padding;                                                  // 0x0000(0x0010) (Edit)
	struct FSlateBrush                                 BackgroundImage;                                          // 0x0000(0x0090) (Edit)
	struct FSlateBrush                                 BorderImage;                                              // 0x0000(0x0090) (Edit)
	struct FTextBlockStyle                             BodyTextStyle;                                            // 0x0000(0x0178) (Edit)
	struct FTextBlockStyle                             HeaderTextStyle;                                          // 0x0000(0x0178) (Edit)
	struct FTextBlockStyle                             ButtonTextStyle;                                          // 0x0000(0x0178) (Edit)
	struct FButtonStyle                                ButtonStyle;                                              // 0x0000(0x02A8) (Edit)
	class USlateWidgetStyleAsset*                      InputBindingDisplayStyle;                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MessageBoxMaxButtonWidth;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x86C];                                     // 0x0004(0x086C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.QuestState
// 0x0030
struct FQuestState
{
	struct FName                                       StateName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UFunction*                                   EnterFunction;                                            // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UFunction*                                   ExitFunction;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UFunction*>                           TransitionFunctions;                                      // 0x0000(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      bObjectiveState : 1;                                      // 0x0000(0x0001)
	unsigned char                                      bActivateObjectiveOnEnter : 1;                            // 0x0000(0x0001)
	unsigned char                                      bUpdateObjectiveOnChange : 1;                             // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x2F];                                      // 0x0001(0x002F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.QuestPendingAction
// 0x0018
struct FQuestPendingAction
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SquadSlot
// 0x0018
struct FSquadSlot
{
	struct FVector                                     OffsetLocation;                                           // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUsed : 1;                                                // 0x0000(0x0001) (Transient)
	class AActor*                                      SlotActor;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SubtitleStyle
// 0x00F8
struct FSubtitleStyle
{
	struct FSlateFontInfo                              SubtitleFont;                                             // 0x0000(0x0068) (Edit)
	struct FSlateBrush                                 SubtitleBackground;                                       // 0x0000(0x0090) (Edit)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0090(0x0068) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SubtitleStyleData
// 0x0920 (0x0928 - 0x0008)
struct FSubtitleStyleData : public FSlateWidgetStyle
{
	struct FSubtitleStyle                              SubtitleStyles[0x7];                                      // 0x0000(0x00F8) (Edit)
	struct FLinearColor                                SubtitleArchetypeColours[0x17];                           // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SubtitleBorderWidth;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     SubtitleBorderPadding;                                    // 0x0000(0x0010) (Edit)
	struct FMargin                                     SubtitleAreaPadding;                                      // 0x0000(0x0010) (Edit)
	float                                              SubtitleNudgeTime;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SubtitleGraceTime;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SubtitleFadeTime;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 SubtitleImage;                                            // 0x0000(0x0090) (Edit)
	struct FLinearColor                                SubtitleTextColour;                                       // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     SubtitleImagePadding;                                     // 0x0000(0x0010) (Edit)
	float                                              ImageCaptionMarginSize;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x924];                                     // 0x0004(0x0924) MISSED OFFSET
};

// ScriptStruct GlimpseGame.Energy
// 0x0130
struct FEnergy
{
	float                                              Current;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChangePerHour;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChangeDelay;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ChangeDelayOnMin;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESurvivalNeed>                         SurvivalType;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x12F];                                     // 0x0001(0x012F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SurvivalData
// 0x0018
struct FSurvivalData
{
	float                                              LowStatThreshold;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintingStaminaCost;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JumpingStaminaCost;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MantlingStaminaCost;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShovingStaminaCost;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockingStaminaMultiplier;                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct GlimpseGame.JoyStateStats
// 0x0014
struct FJoyStateStats
{
	TEnumAsByte<EPlayerDrugState>                      JoyState;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MaxDuration;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDuration;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DurationTimeOnJoyRatio;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JoyVisualIntensity;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0004(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.TickerStyle
// 0x00F8
struct FTickerStyle
{
	struct FSlateFontInfo                              TickerFont;                                               // 0x0000(0x0068) (Edit)
	struct FSlateBrush                                 TickerBackground;                                         // 0x0000(0x0090) (Edit)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0090(0x0068) MISSED OFFSET
};

// ScriptStruct GlimpseGame.TickerStyleData
// 0x0870 (0x0878 - 0x0008)
struct FTickerStyleData : public FSlateWidgetStyle
{
	struct FTickerStyle                                TickerStyles[0x7];                                        // 0x0000(0x00F8) (Edit)
	struct FLinearColor                                TickerArchetypeColours[0x17];                             // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TickerBorderWidth;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     TickerBorderPadding;                                      // 0x0000(0x0010) (Edit)
	struct FMargin                                     TickerAreaPadding;                                        // 0x0000(0x0010) (Edit)
	struct FLinearColor                                TickerTextColour;                                         // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x868];                                     // 0x0010(0x0868) MISSED OFFSET
};

// ScriptStruct GlimpseGame.PatrolState
// 0x0018
struct FPatrolState
{
	class AActor*                                      PatrolActor;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                PatrolId;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PatrolPointIndex;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LastPatrolPointIndex;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PatrolDirection;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct GlimpseGame.PickupListResult
// 0x0010
struct FPickupListResult
{
	class UClass*                                      Pickup;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   StackRange;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseTaggedDecorator
// 0x0060
struct FGlimpseTaggedDecorator
{
	class UGlimpseDecorator*                           Decorator;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGlimpseRandomStream                        LocalRandomStream;                                        // 0x0000(0x0010)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0010(0x0050) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseStreetDecorator
// 0x0020
struct FGlimpseStreetDecorator
{
	class UGlimpseDecorator*                           Decorator;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGlimpseWorldStreet*                         Street;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGlimpseRandomStream                        LocalRandomStream;                                        // 0x0000(0x0010)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseStreetRoadDecorator
// 0x0058 (0x0078 - 0x0020)
struct FGlimpseStreetRoadDecorator : public FGlimpseStreetDecorator
{
	int                                                NextRoad;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StreetCoordLimit;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      NextDecorationPlacement;                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        NextDecorationSequence;                                   // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0010(0x0068) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseStreetBannerDecorator
// 0x0038 (0x0058 - 0x0020)
struct FGlimpseStreetBannerDecorator : public FGlimpseStreetDecorator
{
	float                                              StreetCoord;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StreetCoordLimit;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x0004(0x0054) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseBaseGameInfo
// 0x0010
struct FGlimpseBaseGameInfo
{
	TEnumAsByte<ENewGameMode>                          Mode;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENewGameCharacter>                     Character;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENewGamePlaystyle>                     Playstyle;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FGlimpseDifficultySettings                  DifficultySettings;                                       // 0x0000(0x0007)
	unsigned char                                      bPrologue : 1;                                            // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseMapPOIElement
// 0x02C0
struct FGlimpseMapPOIElement
{
	struct FString                                     Identifier;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FGlimpseMapPOI                              POIData;                                                  // 0x0000(0x0280)
	unsigned char                                      bRevealed : 1;                                            // 0x0000(0x0001)
	unsigned char                                      bDestroyed : 1;                                           // 0x0000(0x0001)
	unsigned char                                      bTracked : 1;                                             // 0x0000(0x0001)
	unsigned char                                      bProcessed : 1;                                           // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x2BF];                                     // 0x0001(0x02BF) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseNoiseTrackItem
// 0x0024
struct FGlimpseNoiseTrackItem
{
	unsigned char                                      UnknownData00[0x24];                                      // 0x0000(0x0024) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SuspicionContextBark
// 0x0014
struct FSuspicionContextBark
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SuspiciousSlotPosition
// 0x0018
struct FSuspiciousSlotPosition
{
	TEnumAsByte<EGlimpseSuspicionRole>                 SlotRole;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SlotPosition;                                             // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               HasLineOfSight;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                AgentIndex;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SuspiciousTargetPosition
// 0x0058
struct FSuspiciousTargetPosition
{
	struct FVector                                     TargetPosition;                                           // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	TArray<struct FSuspiciousSlotPosition>             Slots;                                                    // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0010(0x0048) MISSED OFFSET
};

// ScriptStruct GlimpseGame.AttractorSearchLocations
// 0x0050
struct FAttractorSearchLocations
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SuspiciousSearchPattern
// 0x0068
struct FSuspiciousSearchPattern
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct GlimpseGame.AgentHeader
// 0x0088
struct FAgentHeader
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseStatsQueries
// 0x0001
struct FGlimpseStatsQueries
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct GlimpseGame.RobotNames
// 0x0018 (0x0020 - 0x0008)
struct FRobotNames : public FTableRowBase
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bFirstName : 1;                                           // 0x0000(0x0001) (Edit)
	unsigned char                                      bFreeBot : 1;                                             // 0x0000(0x0001) (Edit)
	unsigned char                                      bLight : 1;                                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bHeavy : 1;                                               // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.EnglishCharacterName
// 0x0018 (0x0020 - 0x0008)
struct FEnglishCharacterName : public FTableRowBase
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bFirstName : 1;                                           // 0x0000(0x0001) (Edit)
	unsigned char                                      bFemale : 1;                                              // 0x0000(0x0001) (Edit)
	unsigned char                                      bBobby : 1;                                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bDoctor : 1;                                              // 0x0000(0x0001) (Edit)
	unsigned char                                      bJubilator : 1;                                           // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SuspicionReaction
// 0x0002
struct FSuspicionReaction
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SpecialMoveToken
// 0x0020
struct FSpecialMoveToken
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct GlimpseGame.CheerSlot
// 0x0014
struct FCheerSlot
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct GlimpseGame.CombatSlot
// 0x001C
struct FCombatSlot
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.AOEShoveVictim
// 0x0010
struct FAOEShoveVictim
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseCollectibleRow
// 0x0048 (0x0050 - 0x0008)
struct FGlimpseCollectibleRow : public FTableRowBase
{
	struct FText                                       Title;                                                    // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFilePath                                   MovieFilePath;                                            // 0x0000(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0010(0x0040) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseFeatureRef
// 0x0048 (0x0050 - 0x0008)
struct FGlimpseFeatureRef : public FTableRowBase
{
	TAssetPtr<class UClass>                            Feature;                                                  // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EGlimpseFeatureRefType>                Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Zone;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       Region;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MinInstances;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxInstances;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0004(0x004C) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpsePatternPlanner
// 0x0028
struct FGlimpsePatternPlanner
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct GlimpseGame.UGlimpsePatternModelUsage
// 0x0040
struct FUGlimpsePatternModelUsage
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseClusterPlacement
// 0x0040
struct FGlimpseClusterPlacement
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveSlotState
// 0x0030
struct FSaveSlotState
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseOverrideSpawnPoint
// 0x0028
struct FGlimpseOverrideSpawnPoint
{
	class UGlimpseWorldElement*                        DependentElement;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataLoosePickup
// 0x0038
struct FSaveDataLoosePickup
{
	struct FSaveDataPickup                             Pickup;                                                   // 0x0000(0x0014) (SaveGame)
	struct FSaveDataTransform                          Transform;                                                // 0x0000(0x0018) (SaveGame)
	bool                                               bVolatile;                                                // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FTimespan                                   ExpiryTime;                                               // 0x0000(0x0008) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataAIClassPatrol
// 0x0001
struct FSaveDataAIClassPatrol
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataAIClassPopulation
// 0x0001
struct FSaveDataAIClassPopulation
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataAIClassPopulationData
// 0x0001
struct FSaveDataAIClassPopulationData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataAIClassPopulationRegion
// 0x0018
struct FSaveDataAIClassPopulationRegion
{
	struct FIntPoint                                   ZoneRegionPair;                                           // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FSaveDataAIClassPopulationData>      PopulationData;                                           // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SaveDataAICitizen
// 0x0060
struct FSaveDataAICitizen
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bInit;                                                    // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FText                                       DescriptiveName;                                          // 0x0000(0x0018) (SaveGame)
	struct FGlimpseSkeletalMeshSpec                    MeshSpec;                                                 // 0x0000(0x0038) (SaveGame)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET
};

// ScriptStruct GlimpseGame.BackgroundAnimationReference
// 0x0038
struct FBackgroundAnimationReference
{
	struct FName                                       AnimName[0x6];                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUMGSequencePlayMode>                  PlayMode[0x6];                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x32];                                      // 0x0006(0x0032) MISSED OFFSET
};

// ScriptStruct GlimpseGame.SuspicionInfo
// 0x0058
struct FSuspicionInfo
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSubtitleLine
// 0x0030 (0x0038 - 0x0008)
struct FGlimpseSubtitleLine : public FTableRowBase
{
	float                                              StartTime;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Subtitle;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<ESubtitleArchetype>                    Archetype;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMovieSubtitle;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x37];                                      // 0x0001(0x0037) MISSED OFFSET
};

// ScriptStruct GlimpseGame.MapLegendEntryData
// 0x0150
struct FMapLegendEntryData
{
	struct FText                                       EntryText;                                                // 0x0000(0x0018)
	unsigned char                                      UnknownData00[0x138];                                     // 0x0018(0x0138) MISSED OFFSET
};

// ScriptStruct GlimpseGame.NotificationCounter
// 0x0010
struct FNotificationCounter
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldBuilderStreamingLevel
// 0x0048
struct FGlimpseWorldBuilderStreamingLevel
{
	class ULevelStreaming*                             LevelStreaming;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     SourceAsset;                                              // 0x0000(0x0010) (ZeroConstructor)
	double                                             RequestTime;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             LoadFinishTime;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             LoadDuration;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             ShowDuration;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             TotalTime;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLevelLoaded : 1;                                         // 0x0000(0x0001)
	unsigned char                                      bLevelShown : 1;                                          // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x47];                                      // 0x0001(0x0047) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseWorldBuilderSpawnStat
// 0x0038
struct FGlimpseWorldBuilderSpawnStat
{
	TEnumAsByte<EGlimpseWorldBuilderSpawnStat>         Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	double                                             MinTime;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             MaxTime;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             AccumTime;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                NumSpawns;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x34];                                      // 0x0004(0x0034) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseSandboxTier
// 0x0010
struct FGlimpseSandboxTier
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseJsonContainerProxy
// 0x0020
struct FGlimpseJsonContainerProxy
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseTerrainSettings
// 0x0030
struct FGlimpseTerrainSettings
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct GlimpseGame.PassiveBark
// 0x0018
struct FPassiveBark
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseBatchEditPropertyNameAndIndex
// 0x0018
struct FGlimpseBatchEditPropertyNameAndIndex
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ArrayIndex;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       OverrideName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseBatchEditPropertyRef
// 0x0010
struct FGlimpseBatchEditPropertyRef
{
	TArray<struct FGlimpseBatchEditPropertyNameAndIndex> PropertyChain;                                            // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct GlimpseGame.GlimpseBatchEditSpec
// 0x0020
struct FGlimpseBatchEditSpec
{
	class UClass*                                      BaseClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FGlimpseBatchEditPropertyRef>        PropertyRefs;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bBlueprints;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseBatchEditPropertyChain
// 0x0028
struct FGlimpseBatchEditPropertyChain
{
	TArray<class UProperty*>                           PropertyChain;                                            // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        PropertyIndex;                                            // 0x0000(0x0010) (ZeroConstructor)
	class UStruct*                                     LastStruct;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseCityBlockPlannerUnit
// 0x0018
struct FGlimpseCityBlockPlannerUnit
{
	TArray<struct FGlimpseCityBlockElement>            Elements;                                                 // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bClosed;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0001(0x0017) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseCityBlockPlannerBlock
// 0x0030
struct FGlimpseCityBlockPlannerBlock
{
	class UGlimpseCityBlock*                           CityBlock;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGlimpseBounds2D                            Bounds;                                                   // 0x0000(0x0014)
	TArray<struct FGlimpseCityBlockPlannerUnit>        Units;                                                    // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseCityBlockFillerPlanner
// 0x00F8
struct FGlimpseCityBlockFillerPlanner
{
	class UGlimpseWorldPlanner*                        WorldPlanner;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGlimpseWorldInstance*                       WorldInstance;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGlimpseCityBlockPlannerBlock               PlannerBlock;                                             // 0x0000(0x0030)
	struct FGlimpseRandomStream                        LocalRandomStream;                                        // 0x0000(0x0010)
	float                                              MaxExtrusion;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AcuteFitLength;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AcuteFitSpread;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SpanCullSize;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	class AGlimpseMapZone*                             Zone;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0008(0x00F0) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseCityBlockAlleyPlanner
// 0x0050
struct FGlimpseCityBlockAlleyPlanner
{
	class UGlimpseWorldInstance*                       WorldInstance;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGlimpseCityBlock*                           Block;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGlimpseRandomStream                        LocalRandomStream;                                        // 0x0000(0x0010)
	float                                              AlleyWidth;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinSpanSize;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinAlleySeparation;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxAlleySeparation;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MinIntersectionDistance;                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StubLimit;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	class UGlimpseRoadModel*                           AlleyModel;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseIntersectionPieceEdge
// 0x00A0
struct FGlimpseIntersectionPieceEdge
{
	float                                              Width;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGlimpseOutline                             Mask;                                                     // 0x0000(0x0098)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseIntersectionPiece
// 0x0360
struct FGlimpseIntersectionPiece
{
	class UGlimpseWorldStreet*                         Street;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGlimpseRoadModel*                           RoadModel;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              BedWidth;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RoadWidth;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGlimpseCurve                               Curve;                                                    // 0x0000(0x0030)
	struct FGlimpseWorldConnectionRef                  CStart;                                                   // 0x0000(0x0010)
	struct FGlimpseWorldConnectionRef                  CEnd;                                                     // 0x0000(0x0010)
	int                                                Priority;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsThru;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FGlimpseOutline                             MinOutline;                                               // 0x0000(0x0098)
	struct FGlimpseOutline                             BedOutline;                                               // 0x0000(0x0098)
	TArray<struct FGlimpseOutline>                     BedLaidOutlines;                                          // 0x0000(0x0010) (ZeroConstructor)
	struct FGlimpseIntersectionPieceEdge               Edges[0x2];                                               // 0x0000(0x00A0)
	TArray<int>                                        ExtraMaskIndices;                                         // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x350];                                     // 0x0010(0x0350) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseIntersectionEdgeData
// 0x0148
struct FGlimpseIntersectionEdgeData
{
	TEnumAsByte<EGlimpseIntersectionEdge>              EdgeId;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	float                                              CircleRadius;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGlimpseOutline                             Circle;                                                   // 0x0000(0x0098)
	TArray<struct FGlimpseOutline>                     Fill;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FGlimpseOutline                             Outline;                                                  // 0x0000(0x0098)
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0098(0x00B0) MISSED OFFSET
};

// ScriptStruct GlimpseGame.GlimpseIntersectionData
// 0x03B0
struct FGlimpseIntersectionData
{
	class UGlimpseWorldIntersection*                   Intersection;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              IntersectionSize;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGlimpseIntersectionPiece>           Pieces;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        LaidPieces;                                               // 0x0000(0x0010) (ZeroConstructor)
	float                                              BedCircleRadius;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGlimpseOutline                             BedCircle;                                                // 0x0000(0x0098)
	TArray<struct FGlimpseOutline>                     LaidPieceMask;                                            // 0x0000(0x0010) (ZeroConstructor)
	struct FGlimpseWorldConnectionRef                  DeadEndRef;                                               // 0x0000(0x0010)
	struct FGlimpseIntersectionEdgeData                SidewalkEdgeData;                                         // 0x0000(0x0148)
	struct FGlimpseIntersectionEdgeData                GroundEdgeData;                                           // 0x0000(0x0148)
	bool                                               bNeedsCircle;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSharpCorners;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGlimpseOutline>                     ExtraMasks;                                               // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FGlimpseOutline>                     Seams;                                                    // 0x0000(0x0010) (ZeroConstructor)
	int                                                DebugIndex;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3AC];                                     // 0x0004(0x03AC) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
