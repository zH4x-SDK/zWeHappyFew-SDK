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

// BlueprintGeneratedClass Dying.Dying_C
// 0x0008 (0x02C8 - 0x02C0)
class UDying_C : public UDyingBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dying.Dying_C");
		return ptr;
	}


	void OnApply();
	void ExecuteUbergraph_Dying(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
