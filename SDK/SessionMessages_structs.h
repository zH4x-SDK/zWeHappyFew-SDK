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

// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// 0x0001
struct FSessionServiceLogUnsubscribe
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServiceLogSubscribe
// 0x0001
struct FSessionServiceLogSubscribe
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServiceLog
// 0x0038
struct FSessionServiceLog
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     Data;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       InstanceId;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	double                                             TimeSeconds;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Verbosity;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x37];                                      // 0x0001(0x0037) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServicePong
// 0x0098
struct FSessionServicePong
{
	bool                                               Authorized;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     BuildDate;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DeviceName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       InstanceId;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     InstanceName;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               IsConsoleBuild;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlatformName;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FGuid                                       SessionId;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     SessionName;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     SessionOwner;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               Standalone;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x97];                                      // 0x0001(0x0097) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServicePing
// 0x0010
struct FSessionServicePing
{
	struct FString                                     UserName;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
