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

// BlueprintGeneratedClass InteractiveDoor_3StepBridge.InteractiveDoor_3StepBridge_C
// 0x000F (0x0928 - 0x0919)
class AInteractiveDoor_3StepBridge_C : public AInteractiveDoor_BASE_C
{
public:
	unsigned char                                      UnknownData00[0xF];                                       // 0x0919(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InteractiveDoor_3StepBridge.InteractiveDoor_3StepBridge_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
