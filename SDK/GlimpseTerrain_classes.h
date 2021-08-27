#pragma once

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class GlimpseTerrain.GlimpseTerrainHeightmap
// 0x00D8 (0x0100 - 0x0028)
class UGlimpseTerrainHeightmap : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0028(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseTerrain.GlimpseTerrainHeightmap");
		return ptr;
	}

};


// Class GlimpseTerrain.GlimpseTerrainData
// 0x0168 (0x0190 - 0x0028)
class UGlimpseTerrainData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0028(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseTerrain.GlimpseTerrainData");
		return ptr;
	}


	struct FVector QueryTerrainTangentZ(const struct FVector2D& Center, float Radius);
	struct FVector QueryTerrainPoint(const struct FVector2D& Center, float Radius);
	void QueryTerrainHeightRange(const struct FVector2D& Center, float Radius, float* MinHeight, float* MaxHeight);
	float QueryTerrainHeight(const struct FVector2D& Center, float Radius);
	void AddHillToTerrain(const struct FVector2D& Center, float PeakHeight, float PeakRadius, float BaseHeight, float BaseRadius, float PeakRadiusVariance, float BaseRadiusVariance, int RadialResolution, bool bRelativeToExisting, float* PeakHeightResult, float* BaseHeightResult);
	void AddCircleToTerrain(const struct FVector2D& Center, float Radius, float Height, float Dropoff, bool ForceMinHeight, float MinHeight, bool ForceMaxHeight, float MaxHeight);
};


// Class GlimpseTerrain.GlimpseTerrainDataActor
// 0x00B0 (0x04E0 - 0x0430)
class AGlimpseTerrainDataActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0430(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseTerrain.GlimpseTerrainDataActor");
		return ptr;
	}

};


// Class GlimpseTerrain.GlimpseTerrainDataCollisionComponent
// 0x0080 (0x07B0 - 0x0730)
class UGlimpseTerrainDataCollisionComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0730(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseTerrain.GlimpseTerrainDataCollisionComponent");
		return ptr;
	}

};


// Class GlimpseTerrain.GlimpseTerrainDataPatchComponent
// 0x0090 (0x07C0 - 0x0730)
class UGlimpseTerrainDataPatchComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0730(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseTerrain.GlimpseTerrainDataPatchComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
