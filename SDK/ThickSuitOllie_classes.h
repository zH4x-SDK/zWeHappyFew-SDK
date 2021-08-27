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

// BlueprintGeneratedClass ThickSuitOllie.ThickSuitOllie_C
// 0x0008 (0x07B8 - 0x07B0)
class AThickSuitOllie_C : public AGlimpsePickupOutfit
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ThickSuitOllie.ThickSuitOllie_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
