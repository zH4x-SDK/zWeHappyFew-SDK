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

// BlueprintGeneratedClass DigSpot_Lilies.DigSpot_Lilies_C
// 0x0010 (0x05C0 - 0x05B0)
class ADigSpot_Lilies_C : public ADigSpot_C
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DigSpot_Lilies.DigSpot_Lilies_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
