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
	 * 		Name   -> Function BP_SpringArmPhotoPawn.BP_SpringArmPhotoPawn_C.ExitPhotoMode
	 * 		Flags  -> ()
	 */
	void ABP_SpringArmPhotoPawn_C::ExitPhotoMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpringArmPhotoPawn.BP_SpringArmPhotoPawn_C.ExitPhotoMode");
		
		ABP_SpringArmPhotoPawn_C_ExitPhotoMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpringArmPhotoPawn.BP_SpringArmPhotoPawn_C.BrowsePhotos
	 * 		Flags  -> ()
	 */
	void ABP_SpringArmPhotoPawn_C::BrowsePhotos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpringArmPhotoPawn.BP_SpringArmPhotoPawn_C.BrowsePhotos");
		
		ABP_SpringArmPhotoPawn_C_BrowsePhotos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpringArmPhotoPawn.BP_SpringArmPhotoPawn_C.ChangeCameraType
	 * 		Flags  -> ()
	 */
	void ABP_SpringArmPhotoPawn_C::ChangeCameraType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpringArmPhotoPawn.BP_SpringArmPhotoPawn_C.ChangeCameraType");
		
		ABP_SpringArmPhotoPawn_C_ChangeCameraType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SpringArmPhotoPawn.BP_SpringArmPhotoPawn_C.ExecuteUbergraph_BP_SpringArmPhotoPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SpringArmPhotoPawn_C::ExecuteUbergraph_BP_SpringArmPhotoPawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpringArmPhotoPawn.BP_SpringArmPhotoPawn_C.ExecuteUbergraph_BP_SpringArmPhotoPawn");
		
		ABP_SpringArmPhotoPawn_C_ExecuteUbergraph_BP_SpringArmPhotoPawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SpringArmPhotoPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SpringArmPhotoPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpringArmPhotoPawn.BP_SpringArmPhotoPawn_C");
		return ptr;
	}

}


