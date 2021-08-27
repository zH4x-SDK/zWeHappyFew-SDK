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

// BlueprintGeneratedClass Map_DigSpot.Map_DigSpot_C
// 0x0020 (0x07E8 - 0x07C8)
class AMap_DigSpot_C : public ALorePickup_Base_C
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x07C8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Map_DigSpot.Map_DigSpot_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Map_DigSpot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
