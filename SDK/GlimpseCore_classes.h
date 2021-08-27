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

// Class GlimpseCore.GlimpseMeshPreview
// 0x0000 (0x0028 - 0x0028)
class UGlimpseMeshPreview : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseCore.GlimpseMeshPreview");
		return ptr;
	}

};


// Class GlimpseCore.GlimpseProceduralMeshComponent
// 0x00D0 (0x08D0 - 0x0800)
class UGlimpseProceduralMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0800(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseCore.GlimpseProceduralMeshComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
