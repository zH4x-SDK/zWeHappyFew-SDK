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

// BlueprintGeneratedClass Village_ShopKeeperDoor.Village_ShopKeeperDoor_C
// 0x0018 (0x0950 - 0x0938)
class AVillage_ShopKeeperDoor_C : public AVillage_BasicDoor_C
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0938(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Village_ShopKeeperDoor.Village_ShopKeeperDoor_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
