#pragma once

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GlimpseDeformMesh.GlimpseDeformMeshParams
// 0x0038
struct FGlimpseDeformMeshParams
{
	int                                                LatticeSize;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ControlPoints;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FBox                                        ControlBox;                                               // 0x0000(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x001C(0x001C) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
