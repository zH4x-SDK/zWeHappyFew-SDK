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

// BlueprintGeneratedClass GenericSecurityButton.GenericSecurityButton_C
// 0x0028 (0x0488 - 0x0460)
class AGenericSecurityButton_C : public AGlimpseSecurityButton
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0460(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GenericSecurityButton.GenericSecurityButton_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
