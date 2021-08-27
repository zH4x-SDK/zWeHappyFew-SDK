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

// WidgetBlueprintGeneratedClass StaminaBar.StaminaBar_C
// 0x0078 (0x0658 - 0x05E0)
class UStaminaBar_C : public UStaminaBarWidget
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x05E0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StaminaBar.StaminaBar_C");
		return ptr;
	}


	float Get_PenaltyBar_Percent_1();
	void Construct();
	void OnBuffChanged(bool* bInBuffed);
	void OnDebuffChanged(bool* bInDebuffed);
	void ExecuteUbergraph_StaminaBar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
