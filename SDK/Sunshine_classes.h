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

// BlueprintGeneratedClass Sunshine.Sunshine_C
// 0x000C (0x087C - 0x0870)
class ASunshine_C : public AGlimpsePickupSurvival
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0870(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sunshine.Sunshine_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveOnCompleteUse(class APawn** UseSource, class AActor** UseTarget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
