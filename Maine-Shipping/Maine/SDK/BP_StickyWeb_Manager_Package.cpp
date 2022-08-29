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
	 * 		Name   -> Function BP_StickyWeb_Manager.BP_StickyWeb_Manager_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_StickyWeb_Manager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StickyWeb_Manager.BP_StickyWeb_Manager_C.ReceiveBeginPlay");
		
		ABP_StickyWeb_Manager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StickyWeb_Manager.BP_StickyWeb_Manager_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void ABP_StickyWeb_Manager_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StickyWeb_Manager.BP_StickyWeb_Manager_C.CustomEvent_1");
		
		ABP_StickyWeb_Manager_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_StickyWeb_Manager.BP_StickyWeb_Manager_C.ExecuteUbergraph_BP_StickyWeb_Manager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_StickyWeb_Manager_C::ExecuteUbergraph_BP_StickyWeb_Manager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_StickyWeb_Manager.BP_StickyWeb_Manager_C.ExecuteUbergraph_BP_StickyWeb_Manager");
		
		ABP_StickyWeb_Manager_C_ExecuteUbergraph_BP_StickyWeb_Manager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_StickyWeb_Manager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_StickyWeb_Manager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_StickyWeb_Manager.BP_StickyWeb_Manager_C");
		return ptr;
	}

}


