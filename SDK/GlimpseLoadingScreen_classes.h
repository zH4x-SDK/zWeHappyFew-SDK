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

// Class GlimpseLoadingScreen.LoadingScreenStyle
// 0x04A8 (0x04D8 - 0x0030)
class ULoadingScreenStyle : public USlateWidgetStyleContainerBase
{
public:
	unsigned char                                      UnknownData00[0x4A8];                                     // 0x0030(0x04A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlimpseLoadingScreen.LoadingScreenStyle");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
