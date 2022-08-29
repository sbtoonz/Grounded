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
	 * 		Name   -> Function LoadingScreen.LoadingScreenModuleHelper.StopLoadingScreen
	 * 		Flags  -> ()
	 */
	void ULoadingScreenModuleHelper::StopLoadingScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingScreen.LoadingScreenModuleHelper.StopLoadingScreen");
		
		ULoadingScreenModuleHelper_StopLoadingScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadingScreenModuleHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadingScreenModuleHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LoadingScreen.LoadingScreenModuleHelper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadingScreenSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadingScreenSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LoadingScreen.LoadingScreenSettings");
		return ptr;
	}

}


