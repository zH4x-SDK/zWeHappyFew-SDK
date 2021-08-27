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

// BlueprintGeneratedClass Teleporter_Base.Teleporter_Base_C
// 0x0148 (0x0578 - 0x0430)
class ATeleporter_Base_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0430(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Teleporter_Base.Teleporter_Base_C");
		return ptr;
	}


	TEnumAsByte<EInteractionResult> CanUse(class APawn* InteractSource);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
