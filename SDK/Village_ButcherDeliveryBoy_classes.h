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

// BlueprintGeneratedClass Village_ButcherDeliveryBoy.Village_ButcherDeliveryBoy_C
// 0x007C (0x207C - 0x2000)
class AVillage_ButcherDeliveryBoy_C : public AWaste2_Wastrel_C
{
public:
	unsigned char                                      UnknownData00[0x7C];                                      // 0x2000(0x007C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Village_ButcherDeliveryBoy.Village_ButcherDeliveryBoy_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
