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

// BlueprintGeneratedClass PercysPortrait.PercysPortrait_C
// 0x0009 (0x0789 - 0x0780)
class APercysPortrait_C : public AGlimpsePickup
{
public:
	unsigned char                                      UnknownData00[0x9];                                       // 0x0780(0x0009) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PercysPortrait.PercysPortrait_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
