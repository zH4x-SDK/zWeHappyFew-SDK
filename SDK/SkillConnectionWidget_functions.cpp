
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

// Function SkillConnectionWidget.SkillConnectionWidget_C.OnUpdateDisplay
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          ConnectedSkillAvailable        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ConnectedSkillBought           (Parm, ZeroConstructor, IsPlainOldData)

void USkillConnectionWidget_C::OnUpdateDisplay(bool* ConnectedSkillAvailable, bool* ConnectedSkillBought)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillConnectionWidget.SkillConnectionWidget_C.OnUpdateDisplay");

	USkillConnectionWidget_C_OnUpdateDisplay_Params params;
	params.ConnectedSkillAvailable = ConnectedSkillAvailable;
	params.ConnectedSkillBought = ConnectedSkillBought;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillConnectionWidget.SkillConnectionWidget_C.ExecuteUbergraph_SkillConnectionWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USkillConnectionWidget_C::ExecuteUbergraph_SkillConnectionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillConnectionWidget.SkillConnectionWidget_C.ExecuteUbergraph_SkillConnectionWidget");

	USkillConnectionWidget_C_ExecuteUbergraph_SkillConnectionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
