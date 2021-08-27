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

// BlueprintGeneratedClass YamAltar.YamAltar_C
// 0x0129 (0x0619 - 0x04F0)
class UYamAltar_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x129];                                     // 0x04F0(0x0129) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass YamAltar.YamAltar_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
