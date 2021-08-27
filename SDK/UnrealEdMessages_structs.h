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

// ScriptStruct UnrealEdMessages.AssetEditorRequestOpenAsset
// 0x0010
struct FAssetEditorRequestOpenAsset
{
	struct FString                                     AssetName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct UnrealEdMessages.FileServerReady
// 0x0020
struct FFileServerReady
{
	TArray<struct FString>                             AddressList;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       InstanceId;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
