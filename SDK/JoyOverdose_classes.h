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

// BlueprintGeneratedClass JoyOverdose.JoyOverdose_C
// 0x0011 (0x02A9 - 0x0298)
class UJoyOverdose_C : public UJoyOverdoseBase
{
public:
	unsigned char                                      UnknownData00[0x11];                                      // 0x0298(0x0011) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass JoyOverdose.JoyOverdose_C");
		return ptr;
	}


	void OnApply();
	void OnRemove();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
