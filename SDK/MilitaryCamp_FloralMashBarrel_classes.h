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

// BlueprintGeneratedClass MilitaryCamp_FloralMashBarrel.MilitaryCamp_FloralMashBarrel_C
// 0x0042 (0x0472 - 0x0430)
class AMilitaryCamp_FloralMashBarrel_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x42];                                      // 0x0430(0x0042) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MilitaryCamp_FloralMashBarrel.MilitaryCamp_FloralMashBarrel_C");
		return ptr;
	}


	TEnumAsByte<EInteractionResult> CanInteract(class APawn* InteractSource);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
