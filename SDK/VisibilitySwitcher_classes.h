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

// BlueprintGeneratedClass VisibilitySwitcher.VisibilitySwitcher_C
// 0x0032 (0x0462 - 0x0430)
class AVisibilitySwitcher_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x32];                                      // 0x0430(0x0032) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VisibilitySwitcher.VisibilitySwitcher_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
