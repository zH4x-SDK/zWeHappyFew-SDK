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

// WidgetBlueprintGeneratedClass ShellMenuWidget.ShellMenuWidget_C
// 0x0420 (0x0F80 - 0x0B60)
class UShellMenuWidget_C : public UGlimpseShellMenu
{
public:
	unsigned char                                      UnknownData00[0x420];                                     // 0x0B60(0x0420) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ShellMenuWidget.ShellMenuWidget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
