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

// BlueprintGeneratedClass DefaultGlimpseGame.DefaultGlimpseGame_C
// 0x0008 (0x1798 - 0x1790)
class ADefaultGlimpseGame_C : public AGlimpseGameMode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x1790(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DefaultGlimpseGame.DefaultGlimpseGame_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
