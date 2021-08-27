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

// BlueprintGeneratedClass BaitLight_Lantern.BaitLight_Lantern_C
// 0x0009 (0x0488 - 0x047F)
class ABaitLight_Lantern_C : public ABaitLightBase_C
{
public:
	unsigned char                                      UnknownData00[0x9];                                       // 0x047F(0x0009) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaitLight_Lantern.BaitLight_Lantern_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
