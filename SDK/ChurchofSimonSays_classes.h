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

// BlueprintGeneratedClass ChurchofSimonSays.ChurchofSimonSays_C
// 0x0178 (0x0668 - 0x04F0)
class UChurchofSimonSays_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x178];                                     // 0x04F0(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChurchofSimonSays.ChurchofSimonSays_C");
		return ptr;
	}


	void Joy(class AGlimpseCharacter* Target);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
