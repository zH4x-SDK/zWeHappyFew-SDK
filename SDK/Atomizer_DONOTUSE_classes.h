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

// BlueprintGeneratedClass Atomizer_DONOTUSE.Atomizer_DONOTUSE_C
// 0x0049 (0x0C39 - 0x0BF0)
class AAtomizer_DONOTUSE_C : public AGlimpsePickupWeapon
{
public:
	unsigned char                                      UnknownData00[0x49];                                      // 0x0BF0(0x0049) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Atomizer_DONOTUSE.Atomizer_DONOTUSE_C");
		return ptr;
	}


	bool OnFire(class APawn** InstigatorPawn);
	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
