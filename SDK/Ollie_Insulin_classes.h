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

// BlueprintGeneratedClass Ollie_Insulin.Ollie_Insulin_C
// 0x0008 (0x0878 - 0x0870)
class AOllie_Insulin_C : public AGlimpsePickupSurvival
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0870(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ollie_Insulin.Ollie_Insulin_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
