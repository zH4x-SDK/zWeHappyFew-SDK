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

// Enum ProceduralMeshComponent.EProcMeshSliceCapOption
enum class EProcMeshSliceCapOption : uint8_t
{
	EProcMeshSliceCapOption__NoCap = 0,
	EProcMeshSliceCapOption__CreateNewSectionForCap = 1,
	EProcMeshSliceCapOption__UseLastSectionForCap = 2,
	EProcMeshSliceCapOption__EProcMeshSliceCapOption_MAX = 3
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
// 0x0010
struct FProcMeshTangent
{
	struct FVector                                     TangentX;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipTangentY;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
};

// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
// 0x0034
struct FProcMeshVertex
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FProcMeshTangent                            Tangent;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FColor                                      Color;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV0;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0008(0x002C) MISSED OFFSET
};

// ScriptStruct ProceduralMeshComponent.ProcMeshSection
// 0x0040
struct FProcMeshSection
{
	TArray<struct FProcMeshVertex>                     ProcVertexBuffer;                                         // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        ProcIndexBuffer;                                          // 0x0000(0x0010) (ZeroConstructor)
	struct FBox                                        SectionLocalBox;                                          // 0x0000(0x001C) (ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSectionVisible;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3F];                                      // 0x0001(0x003F) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
