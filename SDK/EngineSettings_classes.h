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

// Class EngineSettings.ConsoleSettings
// 0x0048 (0x0070 - 0x0028)
class UConsoleSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.ConsoleSettings");
		return ptr;
	}

};


// Class EngineSettings.GameMapsSettings
// 0x0088 (0x00B0 - 0x0028)
class UGameMapsSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GameMapsSettings");
		return ptr;
	}

};


// Class EngineSettings.GameNetworkManagerSettings
// 0x0030 (0x0058 - 0x0028)
class UGameNetworkManagerSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GameNetworkManagerSettings");
		return ptr;
	}

};


// Class EngineSettings.GameSessionSettings
// 0x0010 (0x0038 - 0x0028)
class UGameSessionSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GameSessionSettings");
		return ptr;
	}

};


// Class EngineSettings.GeneralEngineSettings
// 0x0000 (0x0028 - 0x0028)
class UGeneralEngineSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GeneralEngineSettings");
		return ptr;
	}

};


// Class EngineSettings.GeneralProjectSettings
// 0x00E8 (0x0110 - 0x0028)
class UGeneralProjectSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0028(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GeneralProjectSettings");
		return ptr;
	}

};


// Class EngineSettings.HudSettings
// 0x0018 (0x0040 - 0x0028)
class UHudSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.HudSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
