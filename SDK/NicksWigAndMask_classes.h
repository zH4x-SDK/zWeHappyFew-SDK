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

// BlueprintGeneratedClass NicksWigAndMask.NicksWigAndMask_C
// 0x0008 (0x07B8 - 0x07B0)
class ANicksWigAndMask_C : public AGlimpsePickupOutfit
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NicksWigAndMask.NicksWigAndMask_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
