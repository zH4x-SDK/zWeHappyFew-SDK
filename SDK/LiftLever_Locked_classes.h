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

// BlueprintGeneratedClass LiftLever_Locked.LiftLever_Locked_C
// 0x005B (0x048B - 0x0430)
class ALiftLever_Locked_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x5B];                                      // 0x0430(0x005B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LiftLever_Locked.LiftLever_Locked_C");
		return ptr;
	}


	TEnumAsByte<EInteractionResult> CanInteract(class APawn* InteractSource);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
