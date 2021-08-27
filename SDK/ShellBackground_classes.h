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

// WidgetBlueprintGeneratedClass ShellBackground.ShellBackground_C
// 0x0040 (0x05C0 - 0x0580)
class UShellBackground_C : public UGlimpseUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0580(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ShellBackground.ShellBackground_C");
		return ptr;
	}


	void ResetBackgroundPositions();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
