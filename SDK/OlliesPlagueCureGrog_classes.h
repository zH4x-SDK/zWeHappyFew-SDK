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

// BlueprintGeneratedClass OlliesPlagueCureGrog.OlliesPlagueCureGrog_C
// 0x0008 (0x0878 - 0x0870)
class AOlliesPlagueCureGrog_C : public AGlimpsePickupSurvival
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0870(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OlliesPlagueCureGrog.OlliesPlagueCureGrog_C");
		return ptr;
	}


	TEnumAsByte<EUsageDeniedReason> ReceiveCanBeUsed(class APawn** UseSource, class AActor** UseTarget);
	void UserConstructionScript();
	void ReceiveOnCompleteUse(class APawn** UseSource, class AActor** UseTarget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
