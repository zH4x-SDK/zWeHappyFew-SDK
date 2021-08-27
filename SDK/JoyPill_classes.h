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

// BlueprintGeneratedClass JoyPill.JoyPill_C
// 0x0009 (0x0879 - 0x0870)
class AJoyPill_C : public AGlimpsePickupSurvival
{
public:
	unsigned char                                      UnknownData00[0x9];                                       // 0x0870(0x0009) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass JoyPill.JoyPill_C");
		return ptr;
	}


	TEnumAsByte<EUsageDeniedReason> ReceiveCanBeUsed(class APawn** UseSource, class AActor** UseTarget);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
