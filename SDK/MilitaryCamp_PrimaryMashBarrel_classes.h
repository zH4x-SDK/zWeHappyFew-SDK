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

// BlueprintGeneratedClass MilitaryCamp_PrimaryMashBarrel.MilitaryCamp_PrimaryMashBarrel_C
// 0x0042 (0x0472 - 0x0430)
class AMilitaryCamp_PrimaryMashBarrel_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x42];                                      // 0x0430(0x0042) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MilitaryCamp_PrimaryMashBarrel.MilitaryCamp_PrimaryMashBarrel_C");
		return ptr;
	}


	TEnumAsByte<EInteractionResult> CanInteract(class APawn* InteractSource);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
