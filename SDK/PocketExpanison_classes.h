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

// BlueprintGeneratedClass PocketExpanison.PocketExpanison_C
// 0x0008 (0x0808 - 0x0800)
class APocketExpanison_C : public AGlimpsePickupUsable
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0800(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PocketExpanison.PocketExpanison_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveOnCompleteUse(class APawn** UseSource, class AActor** UseTarget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
