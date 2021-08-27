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

// BlueprintGeneratedClass TutorialBridge.TutorialBridge_C
// 0x004A (0x053A - 0x04F0)
class UTutorialBridge_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x4A];                                      // 0x04F0(0x004A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TutorialBridge.TutorialBridge_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
