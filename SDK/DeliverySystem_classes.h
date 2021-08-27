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

// BlueprintGeneratedClass DeliverySystem.DeliverySystem_C
// 0x00F1 (0x0521 - 0x0430)
class ADeliverySystem_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0xF1];                                      // 0x0430(0x00F1) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DeliverySystem.DeliverySystem_C");
		return ptr;
	}


	TEnumAsByte<EInteractionResult> CanUse(class APawn* Pawn);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
