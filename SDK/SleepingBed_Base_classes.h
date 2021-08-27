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

// BlueprintGeneratedClass SleepingBed_Base.SleepingBed_Base_C
// 0x0020 (0x0500 - 0x04E0)
class ASleepingBed_Base_C : public AGlimpseLayoutActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x04E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SleepingBed_Base.SleepingBed_Base_C");
		return ptr;
	}


	TEnumAsByte<EInteractionResult> OnCanInteract(class APawn* InteractSource);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
