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

// BlueprintGeneratedClass LightSourceBase_Spotlight.LightSourceBase_Spotlight_C
// 0x0030 (0x04B8 - 0x0488)
class ALightSourceBase_Spotlight_C : public ALightSourceBase_C
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0488(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightSourceBase_Spotlight.LightSourceBase_Spotlight_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
