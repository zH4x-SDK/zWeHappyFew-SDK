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

// BlueprintGeneratedClass Search_Bed01_PO2v2.Search_Bed01_PO2v2_C
// 0x0050 (0x0550 - 0x0500)
class ASearch_Bed01_PO2v2_C : public ASleepingBed_Base_C
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0500(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Search_Bed01_PO2v2.Search_Bed01_PO2v2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
