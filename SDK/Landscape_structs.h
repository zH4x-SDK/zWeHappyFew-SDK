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

// Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8_t
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3
};


// Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8_t
{
	EGrassScaling__Uniform         = 0,
	EGrassScaling__Free            = 1,
	EGrassScaling__LockXY          = 2,
	EGrassScaling__EGrassScaling_MAX = 3
};


// Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear   = 0,
	ELandscapeLODFalloff__SquareRoot = 1,
	ELandscapeLODFalloff__ELandscapeLODFalloff_MAX = 2
};


// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly = 2,
	ELandscapeLayerPaintingRestriction__UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction__ELandscapeLayerPaintingRestriction_MAX = 4
};


// Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType__Additive = 0,
	ELandscapeImportAlphamapType__Layered = 1,
	ELandscapeImportAlphamapType__ELandscapeImportAlphamapType_MAX = 2
};


// Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8_t
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4
};


// Enum Landscape.LandscapeSplineMeshOrientation
enum class ELandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                       = 0,
	LSMO_YUp                       = 1,
	LSMO_MAX                       = 2
};


// Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                 = 0,
	LB_AlphaBlend                  = 1,
	LB_HeightBlend                 = 2,
	LB_MAX                         = 3
};


// Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                      = 0,
	LCCT_CustomUV0                 = 1,
	LCCT_CustomUV1                 = 2,
	LCCT_CustomUV2                 = 3,
	LCCT_WeightMapUV               = 4,
	LCCT_MAX                       = 5
};


// Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Landscape.WeightmapLayerAllocationInfo
// 0x0010
struct FWeightmapLayerAllocationInfo
{
	class ULandscapeLayerInfoObject*                   LayerInfo;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WeightmapTextureIndex;                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WeightmapTextureChannel;                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct Landscape.GrassVariety
// 0x0048
struct FGrassVariety
{
	class UStaticMesh*                                 GrassMesh;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GrassDensity;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseGrid;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlacementJitter;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StartCullDistance;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                EndCullDistance;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinLOD;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGrassScaling>                         Scaling;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ScaleX;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ScaleY;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFloatInterval                              ScaleZ;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RandomRotation;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AlignToSurface;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLandscapeLightmap;                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLightingChannels                           LightingChannels;                                         // 0x0000(0x0003) (Edit)
	bool                                               bReceivesDecals;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x47];                                      // 0x0001(0x0047) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeSplineSegmentConnection
// 0x0018
struct FLandscapeSplineSegmentConnection
{
	class ULandscapeSplineControlPoint*                ControlPoint;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              TangentLen;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeSplineInterpPoint
// 0x0040
struct FLandscapeSplineInterpPoint
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Left;                                                     // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Right;                                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     FalloffLeft;                                              // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     FalloffRight;                                             // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              StartEndFalloff;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0004(0x003C) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeSplineConnection
// 0x0010
struct FLandscapeSplineConnection
{
	class ULandscapeSplineSegment*                     Segment;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      End : 1;                                                  // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct Landscape.GrassInput
// 0x0048
struct FGrassInput
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ULandscapeGrassType*                         GrassType;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FExpressionInput                            Input;                                                    // 0x0000(0x0038)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
};

// ScriptStruct Landscape.LayerBlendInput
// 0x0098
struct FLayerBlendInput
{
	struct FName                                       LayerName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeLayerBlendType>              BlendType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FExpressionInput                            LayerInput;                                               // 0x0000(0x0038)
	struct FExpressionInput                            HeightInput;                                              // 0x0000(0x0038)
	float                                              PreviewWeight;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConstLayerInput;                                          // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ConstHeightInput;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x94];                                      // 0x0004(0x0094) MISSED OFFSET
};

// ScriptStruct Landscape.GizmoSelectData
// 0x0050
struct FGizmoSelectData
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeInfoLayerSettings
// 0x0010
struct FLandscapeInfoLayerSettings
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       LayerName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeImportLayerInfo
// 0x0001
struct FLandscapeImportLayerInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeLayerStruct
// 0x0008
struct FLandscapeLayerStruct
{
	class ULandscapeLayerInfoObject*                   LayerInfoObj;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeEditorLayerSettings
// 0x0001
struct FLandscapeEditorLayerSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeWeightmapUsage
// 0x0020
struct FLandscapeWeightmapUsage
{
	class ULandscapeComponent*                         ChannelUsage[0x4];                                        // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// 0x0038
struct FLandscapeSplineMeshEntry
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  MaterialOverrides;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      bCenterH : 1;                                             // 0x0000(0x0001) (Edit)
	struct FVector2D                                   CenterAdjust;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bScaleToWidth : 1;                                        // 0x0000(0x0001) (Edit)
	struct FVector                                     Scale;                                                    // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELandscapeSplineMeshOrientation>       Orientation;                                              // 0x0000(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<ESplineMeshAxis>                       ForwardAxis;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineMeshAxis>                       UpAxis;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x37];                                      // 0x0001(0x0037) MISSED OFFSET
};

// ScriptStruct Landscape.ForeignWorldSplineData
// 0x0001
struct FForeignWorldSplineData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.ForeignSplineSegmentData
// 0x0001
struct FForeignSplineSegmentData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Landscape.ForeignControlPointData
// 0x0001
struct FForeignControlPointData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
