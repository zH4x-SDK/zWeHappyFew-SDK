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

// BlueprintGeneratedClass TemporaryRunSpeed.TemporaryRunSpeed_C
// 0x0008 (0x02A0 - 0x0298)
class UTemporaryRunSpeed_C : public UGlimpseTimedStatusEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0298(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TemporaryRunSpeed.TemporaryRunSpeed_C");
		return ptr;
	}


	void OnApply();
	void ExecuteUbergraph_TemporaryRunSpeed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif