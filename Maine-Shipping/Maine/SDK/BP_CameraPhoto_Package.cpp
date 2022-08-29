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
	 * 		Name   -> Function BP_CameraPhoto.BP_CameraPhoto_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_CameraPhoto_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraPhoto.BP_CameraPhoto_C.ReceiveBeginPlay");
		
		ABP_CameraPhoto_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraPhoto.BP_CameraPhoto_C.SetTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture*                                    Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CameraPhoto_C::SetTexture(class UTexture* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraPhoto.BP_CameraPhoto_C.SetTexture");
		
		ABP_CameraPhoto_C_SetTexture_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CameraPhoto.BP_CameraPhoto_C.ExecuteUbergraph_BP_CameraPhoto
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CameraPhoto_C::ExecuteUbergraph_BP_CameraPhoto(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraPhoto.BP_CameraPhoto_C.ExecuteUbergraph_BP_CameraPhoto");
		
		ABP_CameraPhoto_C_ExecuteUbergraph_BP_CameraPhoto_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CameraPhoto_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CameraPhoto_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CameraPhoto.BP_CameraPhoto_C");
		return ptr;
	}

}


