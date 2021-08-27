
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

// Function FastTravelWidget.FastTravelWidget_C.SetImageHeight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (Parm, ZeroConstructor, IsPlainOldData)

void UFastTravelWidget_C::SetImageHeight(class UImage* Image, float Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelWidget.FastTravelWidget_C.SetImageHeight");

	UFastTravelWidget_C_SetImageHeight_Params params;
	params.Image = Image;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelWidget.FastTravelWidget_C.SetExpanded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Expanded                       (Parm, ZeroConstructor, IsPlainOldData)

void UFastTravelWidget_C::SetExpanded(bool Expanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelWidget.FastTravelWidget_C.SetExpanded");

	UFastTravelWidget_C_SetExpanded_Params params;
	params.Expanded = Expanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelWidget.FastTravelWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFastTravelWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelWidget.FastTravelWidget_C.Construct");

	UFastTravelWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelWidget.FastTravelWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UFastTravelWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelWidget.FastTravelWidget_C.Tick");

	UFastTravelWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelWidget.FastTravelWidget_C.OnLocationSelectActive
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bInActive                      (Parm, ZeroConstructor, IsPlainOldData)

void UFastTravelWidget_C::OnLocationSelectActive(bool* bInActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelWidget.FastTravelWidget_C.OnLocationSelectActive");

	UFastTravelWidget_C_OnLocationSelectActive_Params params;
	params.bInActive = bInActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelWidget.FastTravelWidget_C.UpdateMapName
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  InMapName                      (ConstParm, Parm, OutParm, ReferenceParm)

void UFastTravelWidget_C::UpdateMapName(struct FText* InMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelWidget.FastTravelWidget_C.UpdateMapName");

	UFastTravelWidget_C_UpdateMapName_Params params;
	params.InMapName = InMapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FastTravelWidget.FastTravelWidget_C.ExecuteUbergraph_FastTravelWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UFastTravelWidget_C::ExecuteUbergraph_FastTravelWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FastTravelWidget.FastTravelWidget_C.ExecuteUbergraph_FastTravelWidget");

	UFastTravelWidget_C_ExecuteUbergraph_FastTravelWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
