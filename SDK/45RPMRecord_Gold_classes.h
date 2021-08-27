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

// BlueprintGeneratedClass 45RPMRecord_Gold.45RPMRecord_Gold_C
// 0x0018 (0x0798 - 0x0780)
class A45RPMRecord_Gold_C : public AGlimpsePickup
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0780(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass 45RPMRecord_Gold.45RPMRecord_Gold_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
