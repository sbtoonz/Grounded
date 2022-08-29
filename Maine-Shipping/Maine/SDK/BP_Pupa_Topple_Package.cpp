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
	 * 		Name   -> Function BP_Pupa_Topple.BP_Pupa_Topple_C.GetItemSourceWorldLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemType                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	struct FVector ABP_Pupa_Topple_C::GetItemSourceWorldLocation(const struct FDataTableRowHandle& ItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pupa_Topple.BP_Pupa_Topple_C.GetItemSourceWorldLocation");
		
		ABP_Pupa_Topple_C_GetItemSourceWorldLocation_Params params {};
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pupa_Topple.BP_Pupa_Topple_C.IsSourceForItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemType                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	bool ABP_Pupa_Topple_C::IsSourceForItem(const struct FDataTableRowHandle& ItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pupa_Topple.BP_Pupa_Topple_C.IsSourceForItem");
		
		ABP_Pupa_Topple_C_IsSourceForItem_Params params {};
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pupa_Topple.BP_Pupa_Topple_C.Handle Death
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDamageInfo                                 DamageInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABP_Pupa_Topple_C::Handle_Death(const struct FDamageInfo& DamageInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pupa_Topple.BP_Pupa_Topple_C.Handle Death");
		
		ABP_Pupa_Topple_C_Handle_Death_Params params {};
		params.DamageInfo = DamageInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pupa_Topple.BP_Pupa_Topple_C.MulticastHandleDestroy
	 * 		Flags  -> ()
	 */
	void ABP_Pupa_Topple_C::MulticastHandleDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pupa_Topple.BP_Pupa_Topple_C.MulticastHandleDestroy");
		
		ABP_Pupa_Topple_C_MulticastHandleDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Pupa_Topple.BP_Pupa_Topple_C.ExecuteUbergraph_BP_Pupa_Topple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Pupa_Topple_C::ExecuteUbergraph_BP_Pupa_Topple(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Pupa_Topple.BP_Pupa_Topple_C.ExecuteUbergraph_BP_Pupa_Topple");
		
		ABP_Pupa_Topple_C_ExecuteUbergraph_BP_Pupa_Topple_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Pupa_Topple_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Pupa_Topple_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Pupa_Topple.BP_Pupa_Topple_C");
		return ptr;
	}

}


