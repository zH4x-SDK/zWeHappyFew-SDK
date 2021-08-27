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

// BlueprintGeneratedClass WheresThePower2.WheresThePower2_C
// 0x0060 (0x0550 - 0x04F0)
class UWheresThePower2_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x04F0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WheresThePower2.WheresThePower2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
