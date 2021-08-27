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

// BlueprintGeneratedClass BeeCannon.BeeCannon_C
// 0x0052 (0x0C42 - 0x0BF0)
class ABeeCannon_C : public AGlimpsePickupWeapon
{
public:
	unsigned char                                      UnknownData00[0x52];                                      // 0x0BF0(0x0052) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BeeCannon.BeeCannon_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnChargeComplete(class APawn** InstigatorPawn);
	void OnChargeCancelled(class APawn** InstigatorPawn);
	void OnCharging(class APawn** InstigatorPawn, float* ChargePercent);
	void OnChargeBegin(class APawn** InstigatorPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
