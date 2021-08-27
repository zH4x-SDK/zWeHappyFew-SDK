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

// BlueprintGeneratedClass LevelButton_Shelter.LevelButton_Shelter_C
// 0x0014 (0x04E2 - 0x04CE)
class ALevelButton_Shelter_C : public ALevelButton_C
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x04CE(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LevelButton_Shelter.LevelButton_Shelter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnPressed(class APawn* InteractSource);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
