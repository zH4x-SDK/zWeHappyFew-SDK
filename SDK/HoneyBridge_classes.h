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

// BlueprintGeneratedClass HoneyBridge.HoneyBridge_C
// 0x0008 (0x03C8 - 0x03C0)
class UHoneyBridge_C : public UQuest
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HoneyBridge.HoneyBridge_C");
		return ptr;
	}


	void ReceiveQuestUpdated(class AGlimpsePlayerController** Controller, TEnumAsByte<EQuestStatus>* status);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
