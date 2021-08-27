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

// BlueprintGeneratedClass Waste2_WastrelWorshipper.Waste2_WastrelWorshipper_C
// 0x0040 (0x2040 - 0x2000)
class AWaste2_WastrelWorshipper_C : public AWaste2_Wastrel_C
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x2000(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Waste2_WastrelWorshipper.Waste2_WastrelWorshipper_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
