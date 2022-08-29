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
	 * 		Name   -> Function BP_VolumeFog_Global.BP_VolumeFog_Global_C.UpdateFogMask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OffsetMaskX                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OffsetMaskY                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScaleX                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScaleY                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VolumeFog_Global_C::UpdateFogMask(float OffsetMaskX, float OffsetMaskY, float ScaleX, float ScaleY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VolumeFog_Global.BP_VolumeFog_Global_C.UpdateFogMask");
		
		ABP_VolumeFog_Global_C_UpdateFogMask_Params params {};
		params.OffsetMaskX = OffsetMaskX;
		params.OffsetMaskY = OffsetMaskY;
		params.ScaleX = ScaleX;
		params.ScaleY = ScaleY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VolumeFog_Global.BP_VolumeFog_Global_C.Set 3D Box Mask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Reset                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABP_VolumeFog_C*                             NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VolumeFog_Global_C::Set_D_Box_Mask(bool Reset, class ABP_VolumeFog_C* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VolumeFog_Global.BP_VolumeFog_Global_C.Set 3D Box Mask");
		
		ABP_VolumeFog_Global_C_Set_D_Box_Mask_Params params {};
		params.Reset = Reset;
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_VolumeFog_Global.BP_VolumeFog_Global_C.ExecuteUbergraph_BP_VolumeFog_Global
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_VolumeFog_Global_C::ExecuteUbergraph_BP_VolumeFog_Global(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VolumeFog_Global.BP_VolumeFog_Global_C.ExecuteUbergraph_BP_VolumeFog_Global");
		
		ABP_VolumeFog_Global_C_ExecuteUbergraph_BP_VolumeFog_Global_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_VolumeFog_Global_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VolumeFog_Global_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VolumeFog_Global.BP_VolumeFog_Global_C");
		return ptr;
	}

}


