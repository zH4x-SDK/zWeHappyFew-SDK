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

// BlueprintGeneratedClass Search_LargeWardrobe01.Search_LargeWardrobe01_C
// 0x0040 (0x0A40 - 0x0A00)
class ASearch_LargeWardrobe01_C : public AGlimpseLootable
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0A00(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Search_LargeWardrobe01.Search_LargeWardrobe01_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
