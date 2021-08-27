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

// Enum GlimpseTerrain.EGlimpseTerrainDataUpdate
enum class EGlimpseTerrainDataUpdate : uint8_t
{
	EGlimpseTerrainDataUpdate__Idle = 0,
	EGlimpseTerrainDataUpdate__Pending = 1,
	EGlimpseTerrainDataUpdate__Heightmap = 2,
	EGlimpseTerrainDataUpdate__EGlimpseTerrainDataUpdate_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GlimpseTerrain.GlimpseTerrainDataActorParams
// 0x0038
struct FGlimpseTerrainDataActorParams
{
	class UGlimpseTerrainData*                         TerrainData;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          TerrainMaterial;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              PatchSize;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RenderResolution;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PhysicsResolution;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NavResolution;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WaterTableHeight;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          WaterTableMaterial;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bMovableWaterTable : 1;                                   // 0x0000(0x0001)
	float                                              WaterTableOffset;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x34];                                      // 0x0004(0x0034) MISSED OFFSET
};

// ScriptStruct GlimpseTerrain.GlimpseTerrainHeightmapLevel
// 0x0020
struct FGlimpseTerrainHeightmapLevel
{
	int                                                Size;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CellSize;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      Heights;                                                  // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
