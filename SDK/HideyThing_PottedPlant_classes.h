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

// BlueprintGeneratedClass HideyThing_PottedPlant.HideyThing_PottedPlant_C
// 0x0028 (0x04D1 - 0x04A9)
class AHideyThing_PottedPlant_C : public AHideyThing_Standard_C
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x04A9(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HideyThing_PottedPlant.HideyThing_PottedPlant_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
