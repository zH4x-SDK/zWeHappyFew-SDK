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

// Class GlimpseDeformMesh.GlimpseDeformMeshActor
// 0x0000 (0x0430 - 0x0430)
class AGlimpseDeformMeshActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseDeformMesh.GlimpseDeformMeshActor");
		return ptr;
	}

};


// Class GlimpseDeformMesh.GlimpseDeformMeshComponent
// 0x0070 (0x08F0 - 0x0880)
class UGlimpseDeformMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0880(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseDeformMesh.GlimpseDeformMeshComponent");
		return ptr;
	}


	void SetControlPoint(const struct FIntVector& Index, const struct FVector& StartPos);
	struct FVector GetControlPoint(const struct FIntVector& Index);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
