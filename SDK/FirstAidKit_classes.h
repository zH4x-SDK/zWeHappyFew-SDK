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

// BlueprintGeneratedClass FirstAidKit.FirstAidKit_C
// 0x0010 (0x0880 - 0x0870)
class AFirstAidKit_C : public AGlimpsePickupSurvival
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0870(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FirstAidKit.FirstAidKit_C");
		return ptr;
	}


	TEnumAsByte<EUsageDeniedReason> ReceiveCanBeUsed(class APawn** UseSource, class AActor** UseTarget);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
