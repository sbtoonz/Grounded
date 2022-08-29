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
	 * 		Name   -> PredefinedFunction UOnlineBridgePresenceAdapterXSAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineBridgePresenceAdapterXSAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemXSAPI.OnlineBridgePresenceAdapterXSAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineBridgePrivilegeAdapterXSAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineBridgePrivilegeAdapterXSAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemXSAPI.OnlineBridgePrivilegeAdapterXSAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineBridgeSessionAdapterXSAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineBridgeSessionAdapterXSAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemXSAPI.OnlineBridgeSessionAdapterXSAPI");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineBridgeUserAdapterXSAPI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineBridgeUserAdapterXSAPI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemXSAPI.OnlineBridgeUserAdapterXSAPI");
		return ptr;
	}

}


