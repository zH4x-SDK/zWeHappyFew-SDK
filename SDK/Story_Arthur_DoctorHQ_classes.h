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

// BlueprintGeneratedClass Story_Arthur_DoctorHQ.Story_Arthur_DoctorHQ_C
// 0x0130 (0x0620 - 0x04F0)
class UStory_Arthur_DoctorHQ_C : public UStateQuest
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x04F0(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Story_Arthur_DoctorHQ.Story_Arthur_DoctorHQ_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
