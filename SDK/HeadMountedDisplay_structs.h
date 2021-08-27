#pragma once

// Name: WeHappyFew, Version: 1.8.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked    = 0,
	ETrackingStatus__InertialOnly  = 1,
	ETrackingStatus__Tracked       = 2,
	ETrackingStatus__ETrackingStatus_MAX = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
