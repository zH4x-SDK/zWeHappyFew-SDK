
#include "../SDK.h"

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function AchievementsMenuWidget.AchievementsMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAchievementsMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AchievementsMenuWidget.AchievementsMenuWidget_C.Construct");

	UAchievementsMenuWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AchievementsMenuWidget.AchievementsMenuWidget_C.ExecuteUbergraph_AchievementsMenuWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAchievementsMenuWidget_C::ExecuteUbergraph_AchievementsMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AchievementsMenuWidget.AchievementsMenuWidget_C.ExecuteUbergraph_AchievementsMenuWidget");

	UAchievementsMenuWidget_C_ExecuteUbergraph_AchievementsMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
