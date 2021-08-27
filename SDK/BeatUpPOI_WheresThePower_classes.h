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

// BlueprintGeneratedClass BeatUpPOI_WheresThePower.BeatUpPOI_WheresThePower_C
// 0x0008 (0x0448 - 0x0440)
class ABeatUpPOI_WheresThePower_C : public ABeatUpPOI_C
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0440(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BeatUpPOI_WheresThePower.BeatUpPOI_WheresThePower_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
