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

// WidgetBlueprintGeneratedClass ActionDurationClock.ActionDurationClock_C
// 0x0074 (0x0644 - 0x05D0)
class UActionDurationClock_C : public UClockWidget
{
public:
	unsigned char                                      UnknownData00[0x74];                                      // 0x05D0(0x0074) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ActionDurationClock.ActionDurationClock_C");
		return ptr;
	}


	void UpdateSkullDisplay();
	void SetPendingDeath(bool DeathIsPending);
	void SetTime(float CurrentTimeHours, float NewTimeHours);
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void ExecuteUbergraph_ActionDurationClock(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
