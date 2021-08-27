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

// BlueprintGeneratedClass PlayerSpawnPoint.PlayerSpawnPoint_C
// 0x0031 (0x0461 - 0x0430)
class APlayerSpawnPoint_C : public AGlimpsePlayerSpawn
{
public:
	unsigned char                                      UnknownData00[0x31];                                      // 0x0430(0x0031) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerSpawnPoint.PlayerSpawnPoint_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
