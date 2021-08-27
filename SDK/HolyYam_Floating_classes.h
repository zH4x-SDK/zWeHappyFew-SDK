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

// BlueprintGeneratedClass HolyYam_Floating.HolyYam_Floating_C
// 0x00D1 (0x0949 - 0x0878)
class AHolyYam_Floating_C : public AYam_C
{
public:
	unsigned char                                      UnknownData00[0xD1];                                      // 0x0878(0x00D1) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HolyYam_Floating.HolyYam_Floating_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
