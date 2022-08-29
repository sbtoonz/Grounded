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
	 * 		Name   -> PredefinedFunction UOnlineAdapterManagerInterfacePlayFab.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineAdapterManagerInterfacePlayFab::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemPlayFab.OnlineAdapterManagerInterfacePlayFab");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineBridgeChatInterfacePlayFab.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineBridgeChatInterfacePlayFab::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemPlayFab.OnlineBridgeChatInterfacePlayFab");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineConstantInterfacePlayFab.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineConstantInterfacePlayFab::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemPlayFab.OnlineConstantInterfacePlayFab");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayFabPartyNetConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayFabPartyNetConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemPlayFab.PlayFabPartyNetConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayFabPartyNetDriver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayFabPartyNetDriver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemPlayFab.PlayFabPartyNetDriver");
		return ptr;
	}

}


