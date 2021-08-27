
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

// Function LevelButton_Shelter.LevelButton_Shelter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALevelButton_Shelter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelButton_Shelter.LevelButton_Shelter_C.UserConstructionScript");

	ALevelButton_Shelter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelButton_Shelter.LevelButton_Shelter_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ALevelButton_Shelter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelButton_Shelter.LevelButton_Shelter_C.ReceiveBeginPlay");

	ALevelButton_Shelter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelButton_Shelter.LevelButton_Shelter_C.OnPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   InteractSource                 (Parm, ZeroConstructor, IsPlainOldData)

void ALevelButton_Shelter_C::OnPressed(class APawn* InteractSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelButton_Shelter.LevelButton_Shelter_C.OnPressed");

	ALevelButton_Shelter_C_OnPressed_Params params;
	params.InteractSource = InteractSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
