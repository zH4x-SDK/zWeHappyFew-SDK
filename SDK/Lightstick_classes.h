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

// BlueprintGeneratedClass Lightstick.Lightstick_C
// 0x0038 (0x0C28 - 0x0BF0)
class ALightstick_C : public AGlimpsePickupWeapon
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0BF0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Lightstick.Lightstick_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnTrailActivated();
	void OnTrailDeactivated();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
