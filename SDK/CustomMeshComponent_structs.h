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

// ScriptStruct CustomMeshComponent.CustomMeshTriangle
// 0x0024
struct FCustomMeshTriangle
{
	struct FVector                                     Vertex0;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vertex1;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vertex2;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x000C(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
