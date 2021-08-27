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

// BlueprintGeneratedClass Joy.Joy_C
// 0x0008 (0x0378 - 0x0370)
class UJoy_C : public UJoyBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0370(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Joy.Joy_C");
		return ptr;
	}


	void OnApply();
	void OnRemove();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
