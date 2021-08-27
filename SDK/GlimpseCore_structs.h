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

// Enum GlimpseCore.EGlimpseOutlineOp
enum class EGlimpseOutlineOp : uint8_t
{
	EGlimpseOutlineOp__Union       = 0,
	EGlimpseOutlineOp__Intersect   = 1,
	EGlimpseOutlineOp__Difference  = 2,
	EGlimpseOutlineOp__EGlimpseOutlineOp_MAX = 3
};


// Enum GlimpseCore.EGlimpseRandomType
enum class EGlimpseRandomType : uint8_t
{
	EGlimpseRandomType__Flat       = 0,
	EGlimpseRandomType__Bell       = 1,
	EGlimpseRandomType__BellMin    = 2,
	EGlimpseRandomType__BellMax    = 3,
	EGlimpseRandomType__EGlimpseRandomType_MAX = 4
};


// Enum GlimpseCore.EGlimpseShape
enum class EGlimpseShape : uint8_t
{
	EGlimpseShape__Point           = 0,
	EGlimpseShape__Rectangle       = 1,
	EGlimpseShape__Circle          = 2,
	EGlimpseShape__Curve           = 3,
	EGlimpseShape__Hull            = 4,
	EGlimpseShape__EGlimpseShape_MAX = 5
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GlimpseCore.GlimpseRandomFloat
// 0x0010
struct FGlimpseRandomFloat
{
	float                                              MinValue;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseRandomType>                    Distribution;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Shaping;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct GlimpseCore.GlimpseRandomInt
// 0x0010
struct FGlimpseRandomInt
{
	int                                                MinValue;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxValue;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseRandomType>                    Distribution;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Shaping;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct GlimpseCore.GlimpseFrame2D
// 0x0014
struct FGlimpseFrame2D
{
	struct FVector2D                                   Position;                                                 // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Angle;                                                    // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0004(0x0010) MISSED OFFSET
};

// ScriptStruct GlimpseCore.GlimpseShape
// 0x0040
struct FGlimpseShape
{
	struct FGlimpseFrame2D                             Frame;                                                    // 0x0000(0x0014) (SaveGame)
	TEnumAsByte<EGlimpseShape>                         Type;                                                     // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector2D                                   Extent;                                                   // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Distortion;                                               // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<struct FVector2D>                           HullPoints;                                               // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0010(0x0030) MISSED OFFSET
};

// ScriptStruct GlimpseCore.GlimpseRandomStream
// 0x0010
struct FGlimpseRandomStream
{
	uint32_t                                           X[0x4];                                                   // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
};

// ScriptStruct GlimpseCore.GlimpseBounds2D
// 0x0014
struct FGlimpseBounds2D
{
	struct FVector2D                                   Min;                                                      // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector2D                                   Max;                                                      // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bIsValid;                                                 // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x0001(0x0013) MISSED OFFSET
};

// ScriptStruct GlimpseCore.GlimpseOutline
// 0x0098
struct FGlimpseOutline
{
	TArray<struct FVector>                             Points;                                                   // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	struct FGlimpseBounds2D                            Bounds;                                                   // 0x0000(0x0014) (SaveGame)
	struct FBox                                        Box;                                                      // 0x0000(0x001C) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bClosed;                                                  // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x97];                                      // 0x0001(0x0097) MISSED OFFSET
};

// ScriptStruct GlimpseCore.GlimpseCurvePoint
// 0x0028
struct FGlimpseCurvePoint
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector                                     Tangent;                                                  // 0x0000(0x000C) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Width0;                                                   // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Width1;                                                   // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Param;                                                    // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              ParamDelta;                                               // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0004(0x0024) MISSED OFFSET
};

// ScriptStruct GlimpseCore.GlimpseCurve
// 0x0030
struct FGlimpseCurve
{
	TArray<struct FGlimpseCurvePoint>                  Points;                                                   // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	float                                              CurveFactor;                                              // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bClosed;                                                  // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector                                     Tangent0;                                                 // 0x0000(0x000C) (ZeroConstructor, SaveGame, Deprecated, IsPlainOldData)
	struct FVector                                     Tangent1;                                                 // 0x0000(0x000C) (ZeroConstructor, SaveGame, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x000C(0x0024) MISSED OFFSET
};

// ScriptStruct GlimpseCore.GlimpseObjectKey
// 0x0008
struct FGlimpseObjectKey
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseCore.GlimpseOutlineParam
// 0x0008
struct FGlimpseOutlineParam
{
	int                                                Index;                                                    // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              Offset;                                                   // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct GlimpseCore.GlimpseTransform
// 0x0018
struct FGlimpseTransform
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GlimpseCore.GlimpseUniqueNamer
// 0x0020
struct FGlimpseUniqueNamer
{
	struct FString                                     NameBase;                                                 // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	struct FName                                       CurrentNameBase;                                          // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Generation;                                               // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                Index;                                                    // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0004(0x001C) MISSED OFFSET
};

// ScriptStruct GlimpseCore.GlimpseMeshPreviewItem
// 0x0070
struct FGlimpseMeshPreviewItem
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (IsPlainOldData)
	int                                                NumVertices;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumIndices;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FBox                                        Bounds;                                                   // 0x0000(0x001C) (ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6C];                                      // 0x0004(0x006C) MISSED OFFSET
};

// ScriptStruct GlimpseCore.BlueprintIterator
// 0x0300
struct FBlueprintIterator
{
	class USimpleConstructionScript*                   SCS;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     CDO;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2F8];                                     // 0x0008(0x02F8) MISSED OFFSET
};

// ScriptStruct GlimpseCore.GlimpseAngleMask
// 0x0010
struct FGlimpseAngleMask
{
	TArray<struct FVector2D>                           Ranges;                                                   // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct GlimpseCore.GlimpsePlane2D
// 0x000C
struct FGlimpsePlane2D
{
	struct FVector2D                                   Normal;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              W;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct GlimpseCore.GlimpseVoronoiEdge
// 0x0014
struct FGlimpseVoronoiEdge
{
	int                                                CellA;                                                    // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                CellB;                                                    // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                PointA;                                                   // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                PointB;                                                   // 0x0000(0x0004) (ZeroConstructor, SaveGame, IsPlainOldData)
	bool                                               bInfinite;                                                // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x0001(0x0013) MISSED OFFSET
};

// ScriptStruct GlimpseCore.GlimpseVoronoiCell
// 0x0030
struct FGlimpseVoronoiCell
{
	bool                                               bInterior;                                                // 0x0000(0x0001) (ZeroConstructor, SaveGame, IsPlainOldData)
	struct FVector2D                                   Center;                                                   // 0x0000(0x0008) (ZeroConstructor, SaveGame, IsPlainOldData)
	TArray<int>                                        Edges;                                                    // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<int>                                        Points;                                                   // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct GlimpseCore.GlimpseVoronoiIndexList
// 0x0010
struct FGlimpseVoronoiIndexList
{
	TArray<int>                                        Indices;                                                  // 0x0000(0x0010) (ZeroConstructor, SaveGame)
};

// ScriptStruct GlimpseCore.GlimpseVoronoiGraph
// 0x0050
struct FGlimpseVoronoiGraph
{
	TArray<struct FVector2D>                           Points;                                                   // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FGlimpseVoronoiEdge>                 Edges;                                                    // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FGlimpseVoronoiCell>                 Cells;                                                    // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FGlimpseVoronoiIndexList>            PointEdges;                                               // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	TArray<struct FGlimpseVoronoiIndexList>            PointCells;                                               // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0010(0x0040) MISSED OFFSET
};

// ScriptStruct GlimpseCore.GlimpseRadialShape
// 0x0028
struct FGlimpseRadialShape
{
	struct FGlimpseFrame2D                             Frame;                                                    // 0x0000(0x0014) (SaveGame)
	TArray<float>                                      Radii;                                                    // 0x0000(0x0010) (ZeroConstructor, SaveGame)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct GlimpseCore.GlimpseRandomFloatSpread
// 0x0010
struct FGlimpseRandomFloatSpread
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Spread;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseRandomType>                    Distribution;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Shaping;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct GlimpseCore.GlimpseRandomIntSpread
// 0x0010
struct FGlimpseRandomIntSpread
{
	int                                                Value;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Spread;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGlimpseRandomType>                    Distribution;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Shaping;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
