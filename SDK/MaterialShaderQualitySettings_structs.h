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

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// 0x0005
struct FMaterialQualityOverrides
{
	bool                                               bEnableOverride;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceFullyRough;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceNonMetal;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceDisableLMDirectionality;                            // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceLQReflections;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0001(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
