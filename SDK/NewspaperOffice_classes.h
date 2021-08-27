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

// BlueprintGeneratedClass NewspaperOffice.NewspaperOffice_C
// 0x0081 (0x0571 - 0x04F0)
class UNewspaperOffice_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x81];                                      // 0x04F0(0x0081) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NewspaperOffice.NewspaperOffice_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
