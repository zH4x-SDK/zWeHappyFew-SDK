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

// BlueprintGeneratedClass Caltrops.Caltrops_C
// 0x0024 (0x0C14 - 0x0BF0)
class ACaltrops_C : public AGlimpsePickupWeapon
{
public:
	unsigned char                                      UnknownData00[0x24];                                      // 0x0BF0(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Caltrops.Caltrops_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveOnHitThrow(class APawn** InstigatorPawn);
	void ReceiveDestroyed();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
