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

// BlueprintGeneratedClass RunWakeUpSequence.RunWakeUpSequence_C
// 0x0000 (0x0028 - 0x0028)
class URunWakeUpSequence_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RunWakeUpSequence.RunWakeUpSequence_C");
		return ptr;
	}


	void RunWakeUpSequence();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
