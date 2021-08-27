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

// Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2
};


// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8_t
{
	ESequenceEvalReinit__NoReset   = 0,
	ESequenceEvalReinit__StartPosition = 1,
	ESequenceEvalReinit__ExplicitTime = 2,
	ESequenceEvalReinit__ESequenceEvalReinit_MAX = 3
};


// Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8_t
{
	ESphericalLimitType__Inner     = 0,
	ESphericalLimitType__Outer     = 1,
	ESphericalLimitType__ESphericalLimitType_MAX = 2
};


// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class EAnimPhysSimSpaceType : uint8_t
{
	AnimPhysSimSpaceType__Component = 0,
	AnimPhysSimSpaceType__Actor    = 1,
	AnimPhysSimSpaceType__World    = 2,
	AnimPhysSimSpaceType__RootRelative = 3,
	AnimPhysSimSpaceType__BoneRelative = 4,
	AnimPhysSimSpaceType__AnimPhysSimSpaceType_MAX = 5
};


// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class EAnimPhysLinearConstraintType : uint8_t
{
	AnimPhysLinearConstraintType__Free = 0,
	AnimPhysLinearConstraintType__Limited = 1,
	AnimPhysLinearConstraintType__AnimPhysLinearConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class EAnimPhysAngularConstraintType : uint8_t
{
	AnimPhysAngularConstraintType__Angular = 0,
	AnimPhysAngularConstraintType__Cone = 1,
	AnimPhysAngularConstraintType__AnimPhysAngularConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8_t
{
	EDrivenDestinationMode__Bone   = 0,
	EDrivenDestinationMode__MorphTarget = 1,
	EDrivenDestinationMode__MaterialParameter = 2,
	EDrivenDestinationMode__EDrivenDestinationMode_MAX = 3
};


// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8_t
{
	EDrivenBoneModificationMode__AddToInput = 0,
	EDrivenBoneModificationMode__ReplaceComponent = 1,
	EDrivenBoneModificationMode__AddToRefPose = 2,
	EDrivenBoneModificationMode__EDrivenBoneModificationMode_MAX = 3
};


// Enum AnimGraphRuntime.EComponentType
enum class EComponentType : uint8_t
{
	EComponentType__None           = 0,
	EComponentType__TranslationX   = 1,
	EComponentType__TranslationY   = 2,
	EComponentType__TranslationZ   = 3,
	EComponentType__RotationX      = 4,
	EComponentType__RotationY      = 5,
	EComponentType__RotationZ      = 6,
	EComponentType__Scale          = 7,
	EComponentType__ScaleX         = 8,
	EComponentType__ScaleY         = 9,
	EComponentType__ScaleZ         = 10,
	EComponentType__EComponentType_MAX = 11
};


// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class ECopyBoneDeltaMode : uint8_t
{
	CopyBoneDeltaMode__Accumulate  = 0,
	CopyBoneDeltaMode__Copy        = 1,
	CopyBoneDeltaMode__CopyBoneDeltaMode_MAX = 2
};


// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8_t
{
	EInterpolationBlend__Linear    = 0,
	EInterpolationBlend__Cubic     = 1,
	EInterpolationBlend__Sinusoidal = 2,
	EInterpolationBlend__EaseInOutExponent2 = 3,
	EInterpolationBlend__EaseInOutExponent3 = 4,
	EInterpolationBlend__EaseInOutExponent4 = 5,
	EInterpolationBlend__EaseInOutExponent5 = 6,
	EInterpolationBlend__MAX       = 7,
	EInterpolationBlend__EInterpolationBlend_MAX = 8
};


// Enum AnimGraphRuntime.EAxisOption
enum class EAxisOption : uint8_t
{
	EAxisOption__X                 = 0,
	EAxisOption__Y                 = 1,
	EAxisOption__Z                 = 2,
	EAxisOption__X_Neg             = 3,
	EAxisOption__Y_Neg             = 4,
	EAxisOption__Z_Neg             = 5,
	EAxisOption__EAxisOption_MAX   = 6
};


// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3
};


// Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8_t
{
	EPoseDriverType__SwingAndTwist = 0,
	EPoseDriverType__SwingOnly     = 1,
	EPoseDriverType__EPoseDriverType_MAX = 2
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// 0x0048 (0x0078 - 0x0030)
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FPoseLink                                   Additive;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	float                                              Alpha;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0000(0x0008) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActualAlpha;                                              // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x74];                                      // 0x0004(0x0074) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// 0x0098 (0x00C8 - 0x0030)
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
	TArray<struct FPoseLink>                           BlendPose;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<float>                                      BlendTime;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TEnumAsByte<EAlphaBlendOption>                     BlendType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CustomBlendCurve;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlendProfile*                               BlendProfile;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAlphaBlend>                         Blends;                                                   // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      BlendWeights;                                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<float>                                      RemainingBlendTimes;                                      // 0x0000(0x0010) (ZeroConstructor)
	int                                                LastActiveChildIndex;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FBlendSampleData>                    PerBoneSampleData;                                        // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bResetChildOnActivation;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC7];                                      // 0x0001(0x00C7) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// 0x0008 (0x00D0 - 0x00C8)
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
	bool                                               bActiveValue;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xCF];                                      // 0x0001(0x00CF) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// 0x0018 (0x00E0 - 0x00C8)
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
	TArray<int>                                        EnumToPoseIndex;                                          // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      ActiveEnumValue;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xDF];                                      // 0x0001(0x00DF) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// 0x0008 (0x00D0 - 0x00C8)
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
	int                                                ActiveChildIndex;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xCC];                                      // 0x0004(0x00CC) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// 0x00C8 (0x0120 - 0x0058)
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
	float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartPosition;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             BlendSpace;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBlendFilter                                BlendFilter;                                              // 0x0000(0x0090)
	TArray<struct FBlendSampleData>                    BlendSampleDataCache;                                     // 0x0000(0x0010) (ZeroConstructor)
	class UBlendSpaceBase*                             PreviousBlendSpace;                                       // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x118];                                     // 0x0008(0x0118) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// 0x0008 (0x0128 - 0x0120)
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
	float                                              NormalizedTime;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x124];                                     // 0x0004(0x0124) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// 0x0040 (0x0070 - 0x0030)
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                            // 0x0000(0x0018) (Edit, BlueprintVisible)
	float                                              Alpha;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0000(0x0008) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActualAlpha;                                              // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6C];                                      // 0x0004(0x006C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// 0x0060 (0x0090 - 0x0030)
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
	class USkeletalMeshComponent*                      SourceMeshComponent;                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0008(0x0088) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// 0x0070 (0x00A0 - 0x0030)
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	TArray<struct FPoseLink>                           BlendPoses;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<struct FInputBlendPose>                     LayerSetup;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	TArray<float>                                      BlendWeights;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor)
	bool                                               bMeshSpaceRotationBlend;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECurveBlendOption>                     CurveBlendOption;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBlendRootMotionBasedOnRootBone;                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasRelevantPoses;                                        // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x9F];                                      // 0x0001(0x009F) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// 0x0048 (0x00A0 - 0x0058)
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
	class UPoseAsset*                                  PoseAsset;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x98];                                      // 0x0008(0x0098) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// 0x0018 (0x00B8 - 0x00A0)
struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{
	struct FPoseLink                                   SourcePose;                                               // 0x0000(0x0018) (Edit, BlueprintVisible, EditFixedSize)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0018(0x00A0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// 0x0010 (0x00B0 - 0x00A0)
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
	struct FName                                       PoseName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PoseWeight;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xAC];                                      // 0x0004(0x00AC) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// 0x0058
struct FRandomPlayerSequenceEntry
{
	class UAnimSequence*                               Sequence;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToPlay;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MinLoopCount;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxLoopCount;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPlayRate;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPlayRate;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAlphaBlend                                 BlendIn;                                                  // 0x0000(0x0038) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// 0x0060 (0x0090 - 0x0030)
struct FAnimNode_RandomPlayer : public FAnimNode_Base
{
	bool                                               bShuffleMode;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FRandomPlayerSequenceEntry>          Entries;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0010(0x0080) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// 0x0000 (0x0030 - 0x0030)
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{

};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// 0x0008 (0x0038 - 0x0030)
struct FAnimNode_RefPose : public FAnimNode_Base
{
	TEnumAsByte<ERefPoseType>                          RefPoseType;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x37];                                      // 0x0001(0x0037) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Root
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_Root : public FAnimNode_Base
{
	struct FPoseLink                                   Result;                                                   // 0x0000(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0018(0x0030) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// 0x0030 (0x0060 - 0x0030)
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	float                                              Pitch;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    MeshToComponent;                                          // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x000C(0x0054) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// 0x0020 (0x0140 - 0x0120)
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
	struct FPoseLink                                   BasePose;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	int                                                LODThreshold;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLODEnabled;                                            // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13F];                                     // 0x0001(0x013F) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// 0x0018 (0x0070 - 0x0058)
struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplicitTime;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldLoopWhenInSyncGroup;                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportToExplicitTime;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartPosition;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESequenceEvalReinit>                   ReinitializationBehavior;                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReinitialized;                                           // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6F];                                      // 0x0001(0x006F) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// 0x0030 (0x0060 - 0x0030)
struct FAnimNode_Slot : public FAnimNode_Base
{
	struct FPoseLink                                   Source;                                                   // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FName                                       SlotName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0008(0x0058) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimationNode_TwoWayBlend
// 0x0040 (0x0070 - 0x0030)
struct FAnimationNode_TwoWayBlend : public FAnimNode_Base
{
	struct FPoseLink                                   A;                                                        // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FPoseLink                                   B;                                                        // 0x0000(0x0018) (Edit, BlueprintVisible)
	float                                              Alpha;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0000(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0008(0x0068) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// 0x005C
struct FAnimPhysConstraintSetup
{
	TEnumAsByte<EAnimPhysLinearConstraintType>         LinearXLimitType;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimPhysLinearConstraintType>         LinearYLimitType;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimPhysLinearConstraintType>         LinearZLimitType;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearAxesMin;                                            // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LinearAxesMax;                                            // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimPhysAngularConstraintType>        AngularConstraintType;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimPhysTwistAxis>                    TwistAxis;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConeAngle;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngularXAngle;                                            // 0x0000(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AngularYAngle;                                            // 0x0000(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AngularZAngle;                                            // 0x0000(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FVector                                     AngularLimitsMin;                                         // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularLimitsMax;                                         // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimPhysTwistAxis>                    AngularTargetAxis;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularTarget;                                            // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLinearFullyLocked;                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5B];                                      // 0x0001(0x005B) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// 0x0040
struct FAnimPhysPlanarLimit
{
	struct FBoneReference                              DrivingBone;                                              // 0x0000(0x0010) (Edit)
	struct FTransform                                  PlaneTransform;                                           // 0x0000(0x0030) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// 0x0028
struct FAnimPhysSphericalLimit
{
	struct FBoneReference                              DrivingBone;                                              // 0x0000(0x0010) (Edit)
	struct FVector                                     SphereLocalOffset;                                        // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LimitRadius;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESphericalLimitType>                   LimitType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// 0x01F8 (0x0268 - 0x0070)
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
	TEnumAsByte<EAnimPhysSimSpaceType>                 SimulationSpace;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              RelativeSpaceBone;                                        // 0x0000(0x0010) (Edit, BlueprintVisible)
	bool                                               bChain;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              BoundBone;                                                // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FBoneReference                              ChainEnd;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FVector                                     BoxExtents;                                               // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocalJointOffset;                                         // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GravityScale;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLinearSpring;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAngularSpring;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LinearSpringConstant;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularSpringConstant;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableWind;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindScale;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideLinearDamping;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LinearDampingOverride;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideAngularDamping;                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularDampingOverride;                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideAngularBias;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularBiasOverride;                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDoUpdate;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDoEval;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSolverIterationsPreUpdate;                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumSolverIterationsPostUpdate;                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAnimPhysConstraintSetup                    ConstraintSetup;                                          // 0x0000(0x005C) (Edit, BlueprintVisible)
	bool                                               bUsePlanarLimit;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnimPhysPlanarLimit>                PlanarLimits;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bUseSphericalLimits;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnimPhysSphericalLimit>             SphericalLimits;                                          // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EAnimPhysCollisionType>                CollisionType;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SphereCollisionRadius;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ExternalForce;                                            // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x25C];                                     // 0x000C(0x025C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// 0x0068 (0x00D8 - 0x0070)
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x0000(0x0010) (Edit)
	TEnumAsByte<EComponentType>                        SourceComponent;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DrivingCurve;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRange;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RangeMin;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RangeMax;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMin;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMax;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDrivenDestinationMode>                DestinationMode;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              TargetBone;                                               // 0x0000(0x0010) (Edit)
	TEnumAsByte<EComponentType>                        TargetComponent;                                          // 0x0000(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      bAffectTargetTranslationX : 1;                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectTargetScaleZ : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectTargetTranslationY : 1;                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectTargetTranslationZ : 1;                            // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectTargetRotationX : 1;                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectTargetRotationY : 1;                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectTargetRotationZ : 1;                               // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectTargetScaleX : 1;                                  // 0x0000(0x0001) (Edit)
	unsigned char                                      bAffectTargetScaleY : 1;                                  // 0x0000(0x0001) (Edit)
	TEnumAsByte<EDrivenBoneModificationMode>           ModificationMode;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD7];                                      // 0x0001(0x00D7) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// 0x0028 (0x0098 - 0x0070)
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FBoneReference                              TargetBone;                                               // 0x0000(0x0010) (Edit, BlueprintVisible)
	bool                                               bCopyTranslation;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyRotation;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyScale;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     ControlSpace;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x97];                                      // 0x0001(0x0097) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// 0x0030 (0x00A0 - 0x0070)
struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FBoneReference                              TargetBone;                                               // 0x0000(0x0010) (Edit, BlueprintVisible)
	bool                                               bCopyTranslation;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyRotation;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCopyScale;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECopyBoneDeltaMode>                    CopyMode;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TranslationMultiplier;                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationMultiplier;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScaleMultiplier;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x9C];                                      // 0x0004(0x009C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// 0x0080 (0x00F0 - 0x0070)
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
	struct FTransform                                  EffectorTransform;                                        // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     EffectorTransformSpace;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              EffectorTransformBone;                                    // 0x0000(0x0010) (Edit, BlueprintVisible)
	TEnumAsByte<EBoneRotationSource>                   EffectorRotationSource;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              TipBone;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FBoneReference                              RootBone;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible)
	float                                              Precision;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxIterations;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDebugDraw;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xEF];                                      // 0x0001(0x00EF) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_GlimpseBlink
// 0x0038 (0x00A8 - 0x0070)
struct FAnimNode_GlimpseBlink : public FAnimNode_SkeletalControlBase
{
	float                                              BlinkRatio;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngleTop;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngleBot;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    EyeLidOrientationMask;                                    // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeftTop;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeftBot;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightTop;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightBot;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0008(0x00A0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_GlimpseLookAt
// 0x0090 (0x0100 - 0x0070)
struct FAnimNode_GlimpseLookAt : public FAnimNode_SkeletalControlBase
{
	struct FVector                                     LookAtTarget;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAlternateWeights;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxEyeAngle;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeftEyeName;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightEyeName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeftEyeTopLidName;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeftEyeBottomLidName;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightEyeTopLidName;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightEyeBottomLidName;                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    EyeLidLookAtMask;                                         // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Bones;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      Weights;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      AlternateWeights;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              EyePitchOffset;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EyeYawOffset;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xFC];                                      // 0x0004(0x00FC) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// 0x0058 (0x00C8 - 0x0070)
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              RightHandFK;                                              // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftHandFK;                                               // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FBoneReference                              RightHandIK;                                              // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FBoneReference                              LeftHandIK;                                               // 0x0000(0x0010) (Edit, BlueprintVisible)
	TArray<struct FBoneReference>                      IKBonesToMove;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              HandFKWeight;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC4];                                      // 0x0004(0x00C4) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// 0x00E0 (0x0150 - 0x0070)
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FBoneReference                              LookAtBone;                                               // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FName                                       LookAtSocket;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LookAtLocation;                                           // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxisOption>                           LookAtAxis;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLookUpAxis;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxisOption>                           LookUpAxis;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtClamp;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInterpolationBlend>                   InterpolationType;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTime;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationTriggerThreashold;                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDebug;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14F];                                     // 0x0001(0x014F) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// 0x0040 (0x00B0 - 0x0070)
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToModify;                                             // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FVector                                     Translation;                                              // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 TranslationMode;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 RotationMode;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneModificationMode>                 ScaleMode;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     TranslationSpace;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     RotationSpace;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     ScaleSpace;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xAF];                                      // 0x0001(0x00AF) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// 0x0038 (0x00A8 - 0x0070)
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              BoneToObserve;                                            // 0x0000(0x0010) (Edit)
	TEnumAsByte<EBoneControlSpace>                     DisplaySpace;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRelativeToRefPose;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Translation;                                              // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x9C];                                      // 0x000C(0x009C) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// 0x0050 (0x00C0 - 0x0070)
struct FAnimNode_PoseDriver : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SourceBone;                                               // 0x0000(0x0010) (Edit)
	float                                              RadialScaling;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UPoseAsset*                                  PoseSource;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeRefPoseAsNeutralPose;                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPoseDriverType>                       Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneAxis>                             TwistAxis;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xBF];                                      // 0x0001(0x00BF) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// 0x0028 (0x0098 - 0x0070)
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TargetBone;                                               // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FBoneReference                              SourceBone;                                               // 0x0000(0x0010) (Edit, BlueprintVisible)
	float                                              Multiplier;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneAxis>                             RotationAxisToRefer;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAdditive;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x97];                                      // 0x0001(0x0097) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// 0x0058 (0x00C8 - 0x0070)
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              SpringBone;                                               // 0x0000(0x0010) (Edit, BlueprintVisible)
	bool                                               bLimitDisplacement;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDisplacement;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringStiffness;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringDamping;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ErrorResetThresh;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNoZSpring;                                               // 0x0000(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bTranslateX;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTranslateY;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTranslateZ;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRotateX;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRotateY;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRotateZ;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC7];                                      // 0x0001(0x00C7) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// 0x0130 (0x01A0 - 0x0070)
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              TrailBone;                                                // 0x0000(0x0010) (Edit, BlueprintVisible)
	int                                                ChainLength;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 ChainBoneAxis;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertChainBoneAxis;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TrailRelaxation;                                          // 0x0000(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FRuntimeFloatCurve                          TrailRelaxationSpeed;                                     // 0x0000(0x0080) (Edit, BlueprintVisible)
	bool                                               bLimitStretch;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StretchLimit;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FakeVelocity;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bActorSpaceFakeVel;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBoneReference                              BaseJoint;                                                // 0x0000(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x190];                                     // 0x0010(0x0190) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.Axis
// 0x0010
struct FAxis
{
	struct FVector                                     Axis;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInLocalSpace;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// 0x0020
struct FReferenceBoneFrame
{
	struct FBoneReference                              Bone;                                                     // 0x0000(0x0010) (Edit)
	struct FAxis                                       Axis;                                                     // 0x0000(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// 0x0078 (0x00E8 - 0x0070)
struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
	struct FReferenceBoneFrame                         BaseFrame;                                                // 0x0000(0x0020) (Edit)
	struct FReferenceBoneFrame                         TwistFrame;                                               // 0x0000(0x0020) (Edit)
	struct FAxis                                       TwistPlaneNormalAxis;                                     // 0x0000(0x0010) (Edit)
	float                                              RangeMax;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMin;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RemappedMax;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAnimCurveParam                             Curve;                                                    // 0x0000(0x0010) (Edit)
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0010(0x00D8) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// 0x0048 (0x00B8 - 0x0070)
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              IKBone;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FVector                                     EffectorLocation;                                         // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     JointTargetLocation;                                      // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   StretchLimits;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       EffectorSpaceBoneName;                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bTakeRotationFromEffectorSpace : 1;                       // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bMaintainEffectorRelRot : 1;                              // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bAllowStretching : 1;                                     // 0x0000(0x0001) (Edit, BlueprintVisible)
	TEnumAsByte<EBoneControlSpace>                     EffectorLocationSpace;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneControlSpace>                     JointTargetLocationSpace;                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       JointTargetSpaceBoneName;                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0008(0x00B0) MISSED OFFSET
};

// ScriptStruct AnimGraphRuntime.AnimNode_WheelHandler
// 0x0018 (0x0088 - 0x0070)
struct FAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase
{
	class UWheeledVehicleMovementComponent*            VehicleSimComponent;                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0008(0x0080) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
