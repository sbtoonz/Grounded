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
	 * 		Name   -> Function BP_Base_PetWatchCameraRig.BP_Base_PetWatchCameraRig_C.GetLookAtLocation
	 * 		Flags  -> ()
	 */
	struct FVector ABP_Base_PetWatchCameraRig_C::GetLookAtLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PetWatchCameraRig.BP_Base_PetWatchCameraRig_C.GetLookAtLocation");
		
		ABP_Base_PetWatchCameraRig_C_GetLookAtLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PetWatchCameraRig.BP_Base_PetWatchCameraRig_C.HasLookAtLocation
	 * 		Flags  -> ()
	 */
	bool ABP_Base_PetWatchCameraRig_C::HasLookAtLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PetWatchCameraRig.BP_Base_PetWatchCameraRig_C.HasLookAtLocation");
		
		ABP_Base_PetWatchCameraRig_C_HasLookAtLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Base_PetWatchCameraRig.BP_Base_PetWatchCameraRig_C.GetCameraViewTransform
	 * 		Flags  -> ()
	 */
	struct FTransform ABP_Base_PetWatchCameraRig_C::GetCameraViewTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_PetWatchCameraRig.BP_Base_PetWatchCameraRig_C.GetCameraViewTransform");
		
		ABP_Base_PetWatchCameraRig_C_GetCameraViewTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Base_PetWatchCameraRig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_PetWatchCameraRig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_PetWatchCameraRig.BP_Base_PetWatchCameraRig_C");
		return ptr;
	}

}


