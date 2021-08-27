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

// ScriptStruct SlateReflector.WidgetSnapshotResponse
// 0x0020
struct FWidgetSnapshotResponse
{
	struct FGuid                                       SnapshotRequestId;                                        // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              SnapshotData;                                             // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct SlateReflector.WidgetSnapshotRequest
// 0x0020
struct FWidgetSnapshotRequest
{
	struct FGuid                                       TargetInstanceId;                                         // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       SnapshotRequestId;                                        // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
