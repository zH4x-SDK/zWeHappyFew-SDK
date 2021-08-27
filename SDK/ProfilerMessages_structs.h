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

// ScriptStruct ProfilerMessages.ProfilerServiceRequest
// 0x0004
struct FProfilerServiceRequest
{
	uint32_t                                           Request;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProfilerMessages.ProfilerServicePreview
// 0x0001
struct FProfilerServicePreview
{
	bool                                               bRequestedPreviewState;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProfilerMessages.ProfilerServiceCapture
// 0x0001
struct FProfilerServiceCapture
{
	bool                                               bRequestedCaptureState;                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProfilerMessages.ProfilerServiceUnsubscribe
// 0x0020
struct FProfilerServiceUnsubscribe
{
	struct FGuid                                       SessionId;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       InstanceId;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct ProfilerMessages.ProfilerServiceSubscribe
// 0x0020
struct FProfilerServiceSubscribe
{
	struct FGuid                                       SessionId;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       InstanceId;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct ProfilerMessages.ProfilerServicePong
// 0x0001
struct FProfilerServicePong
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ProfilerMessages.ProfilerServicePing
// 0x0001
struct FProfilerServicePing
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ProfilerMessages.ProfilerServiceFileChunk
// 0x0050
struct FProfilerServiceFileChunk
{
	struct FGuid                                       InstanceId;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     Filename;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     HexData;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<unsigned char>                              Header;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<unsigned char>                              ChunkHash;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0010(0x0040) MISSED OFFSET
};

// ScriptStruct ProfilerMessages.ProfilerServicePreviewAck
// 0x0010
struct FProfilerServicePreviewAck
{
	struct FGuid                                       InstanceId;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ProfilerMessages.ProfilerServiceData2
// 0x0030
struct FProfilerServiceData2
{
	struct FGuid                                       InstanceId;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	int64_t                                            Frame;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CompressedSize;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                UncompressedSize;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     HexData;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct ProfilerMessages.ProfilerServiceAuthorize
// 0x0020
struct FProfilerServiceAuthorize
{
	struct FGuid                                       SessionId;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       InstanceId;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
