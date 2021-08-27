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

// BlueprintGeneratedClass Switch_White.Switch_White_C
// 0x0063 (0x0493 - 0x0430)
class ASwitch_White_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x63];                                      // 0x0430(0x0063) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Switch_White.Switch_White_C");
		return ptr;
	}


	TEnumAsByte<EInteractionResult> CanInteract(class APawn* InteractSource);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
