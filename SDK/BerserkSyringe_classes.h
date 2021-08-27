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

// BlueprintGeneratedClass BerserkSyringe.BerserkSyringe_C
// 0x0000 (0x0870 - 0x0870)
class ABerserkSyringe_C : public AGlimpsePickupSurvival
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BerserkSyringe.BerserkSyringe_C");
		return ptr;
	}


	TEnumAsByte<EUsageDeniedReason> ReceiveCanBeUsed(class APawn** UseSource, class AActor** UseTarget);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
