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
	 * 		Name   -> Function BP_FreeCamPhotoPawn.BP_FreeCamPhotoPawn_C.ExitPhotoMode
	 * 		Flags  -> ()
	 */
	void ABP_FreeCamPhotoPawn_C::ExitPhotoMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FreeCamPhotoPawn.BP_FreeCamPhotoPawn_C.ExitPhotoMode");
		
		ABP_FreeCamPhotoPawn_C_ExitPhotoMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FreeCamPhotoPawn.BP_FreeCamPhotoPawn_C.BrowsePhotos
	 * 		Flags  -> ()
	 */
	void ABP_FreeCamPhotoPawn_C::BrowsePhotos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FreeCamPhotoPawn.BP_FreeCamPhotoPawn_C.BrowsePhotos");
		
		ABP_FreeCamPhotoPawn_C_BrowsePhotos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FreeCamPhotoPawn.BP_FreeCamPhotoPawn_C.ChangeCameraType
	 * 		Flags  -> ()
	 */
	void ABP_FreeCamPhotoPawn_C::ChangeCameraType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FreeCamPhotoPawn.BP_FreeCamPhotoPawn_C.ChangeCameraType");
		
		ABP_FreeCamPhotoPawn_C_ChangeCameraType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FreeCamPhotoPawn.BP_FreeCamPhotoPawn_C.ExecuteUbergraph_BP_FreeCamPhotoPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FreeCamPhotoPawn_C::ExecuteUbergraph_BP_FreeCamPhotoPawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FreeCamPhotoPawn.BP_FreeCamPhotoPawn_C.ExecuteUbergraph_BP_FreeCamPhotoPawn");
		
		ABP_FreeCamPhotoPawn_C_ExecuteUbergraph_BP_FreeCamPhotoPawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FreeCamPhotoPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FreeCamPhotoPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FreeCamPhotoPawn.BP_FreeCamPhotoPawn_C");
		return ptr;
	}

}


