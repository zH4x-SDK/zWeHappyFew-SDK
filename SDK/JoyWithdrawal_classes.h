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

// BlueprintGeneratedClass JoyWithdrawal.JoyWithdrawal_C
// 0x0010 (0x02B8 - 0x02A8)
class UJoyWithdrawal_C : public UJoyWithdrawalBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass JoyWithdrawal.JoyWithdrawal_C");
		return ptr;
	}


	void OnApply();
	void OnRemove();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
