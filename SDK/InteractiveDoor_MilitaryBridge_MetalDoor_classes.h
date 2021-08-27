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

// BlueprintGeneratedClass InteractiveDoor_MilitaryBridge_MetalDoor.InteractiveDoor_MilitaryBridge_MetalDoor_C
// 0x0008 (0x0930 - 0x0928)
class AInteractiveDoor_MilitaryBridge_MetalDoor_C : public AInteractiveDoor_AppleTree_MetalDoor01_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0928(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InteractiveDoor_MilitaryBridge_MetalDoor.InteractiveDoor_MilitaryBridge_MetalDoor_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
