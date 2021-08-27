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

// BlueprintGeneratedClass BaitLight_Lantern_WorshipPOI.BaitLight_Lantern_WorshipPOI_C
// 0x0008 (0x0490 - 0x0488)
class ABaitLight_Lantern_WorshipPOI_C : public ABaitLight_Lantern_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0488(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaitLight_Lantern_WorshipPOI.BaitLight_Lantern_WorshipPOI_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
