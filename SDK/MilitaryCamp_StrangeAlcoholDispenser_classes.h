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

// BlueprintGeneratedClass MilitaryCamp_StrangeAlcoholDispenser.MilitaryCamp_StrangeAlcoholDispenser_C
// 0x0050 (0x0480 - 0x0430)
class AMilitaryCamp_StrangeAlcoholDispenser_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0430(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MilitaryCamp_StrangeAlcoholDispenser.MilitaryCamp_StrangeAlcoholDispenser_C");
		return ptr;
	}


	TEnumAsByte<EInteractionResult> CanInteract(class APawn* InteractSource);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
