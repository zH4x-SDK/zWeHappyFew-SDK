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

// BlueprintGeneratedClass BobbySpawner.BobbySpawner_C
// 0x0080 (0x04F0 - 0x0470)
class ABobbySpawner_C : public AGlimpseAISpawner
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0470(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BobbySpawner.BobbySpawner_C");
		return ptr;
	}


	bool IsAvailable();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
