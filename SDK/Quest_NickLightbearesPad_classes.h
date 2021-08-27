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

// BlueprintGeneratedClass Quest_NickLightbearesPad.Quest_NickLightbearesPad_C
// 0x01FB (0x06EB - 0x04F0)
class UQuest_NickLightbearesPad_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x1FB];                                     // 0x04F0(0x01FB) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_NickLightbearesPad.Quest_NickLightbearesPad_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
