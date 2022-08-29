/**
 * Name: Maine
 * Version: Shipping
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIPackageMapClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIPackageMapClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIOnlineSubsystemUtils.OEIPackageMapClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOEIStringCrcSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOEIStringCrcSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIOnlineSubsystemUtils.OEIStringCrcSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineBridgeAchievementAdapter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineBridgeAchievementAdapter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIOnlineSubsystemUtils.OnlineBridgeAchievementAdapter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineBridgeAdapterManagerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineBridgeAdapterManagerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIOnlineSubsystemUtils.OnlineBridgeAdapterManagerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineBridgeChatInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineBridgeChatInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIOnlineSubsystemUtils.OnlineBridgeChatInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineBridgePresenceAdapter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineBridgePresenceAdapter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIOnlineSubsystemUtils.OnlineBridgePresenceAdapter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineBridgePrivilegeAdapter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineBridgePrivilegeAdapter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIOnlineSubsystemUtils.OnlineBridgePrivilegeAdapter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineBridgeSessionAdapter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineBridgeSessionAdapter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIOnlineSubsystemUtils.OnlineBridgeSessionAdapter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineBridgeUserAdapter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineBridgeUserAdapter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIOnlineSubsystemUtils.OnlineBridgeUserAdapter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineConstantInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineConstantInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OEIOnlineSubsystemUtils.OnlineConstantInterface");
		return ptr;
	}

}


