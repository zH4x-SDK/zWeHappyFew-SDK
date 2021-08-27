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

// BlueprintGeneratedClass FoodPoisoning.FoodPoisoning_C
// 0x000C (0x0314 - 0x0308)
class UFoodPoisoning_C : public UFoodPoisoningBase
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0308(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FoodPoisoning.FoodPoisoning_C");
		return ptr;
	}


	void ApplyBlackout();
	void ApplyBlurryVision(float Duration);
	void ApplyVomiting(bool bIsDry);
	void OnApply();
	void OnDizziness();
	void OnVomiting();
	void OnDryHeaving();
	void OnBlackout();
	void ExecuteUbergraph_FoodPoisoning(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
