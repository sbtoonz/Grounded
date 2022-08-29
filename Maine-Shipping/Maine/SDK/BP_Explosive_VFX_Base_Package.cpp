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
	 * 		Name   -> Function BP_Explosive_VFX_Base.BP_Explosive_VFX_Base_C.TL_DecalEmissive__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Explosive_VFX_Base_C::TL_DecalEmissive__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosive_VFX_Base.BP_Explosive_VFX_Base_C.TL_DecalEmissive__FinishedFunc");
		
		ABP_Explosive_VFX_Base_C_TL_DecalEmissive__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosive_VFX_Base.BP_Explosive_VFX_Base_C.TL_DecalEmissive__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Explosive_VFX_Base_C::TL_DecalEmissive__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosive_VFX_Base.BP_Explosive_VFX_Base_C.TL_DecalEmissive__UpdateFunc");
		
		ABP_Explosive_VFX_Base_C_TL_DecalEmissive__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosive_VFX_Base.BP_Explosive_VFX_Base_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Explosive_VFX_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosive_VFX_Base.BP_Explosive_VFX_Base_C.ReceiveBeginPlay");
		
		ABP_Explosive_VFX_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Explosive_VFX_Base.BP_Explosive_VFX_Base_C.ExecuteUbergraph_BP_Explosive_VFX_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Explosive_VFX_Base_C::ExecuteUbergraph_BP_Explosive_VFX_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Explosive_VFX_Base.BP_Explosive_VFX_Base_C.ExecuteUbergraph_BP_Explosive_VFX_Base");
		
		ABP_Explosive_VFX_Base_C_ExecuteUbergraph_BP_Explosive_VFX_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Explosive_VFX_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Explosive_VFX_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Explosive_VFX_Base.BP_Explosive_VFX_Base_C");
		return ptr;
	}

}


