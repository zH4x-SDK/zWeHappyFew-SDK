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

// BlueprintGeneratedClass Switch.Switch_C
// 0x0073 (0x04A3 - 0x0430)
class ASwitch_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x73];                                      // 0x0430(0x0073) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Switch.Switch_C");
		return ptr;
	}


	TEnumAsByte<EInteractionResult> CanInteract(class APawn* InteractSource);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
