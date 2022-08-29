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
	 * 		Name   -> Function BP_BASE_Hedge_Berry.BP_BASE_Hedge_Berry_C.GetItemSourceWorldLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemType                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	struct FVector ABP_BASE_Hedge_Berry_C::GetItemSourceWorldLocation(const struct FDataTableRowHandle& ItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_Hedge_Berry.BP_BASE_Hedge_Berry_C.GetItemSourceWorldLocation");
		
		ABP_BASE_Hedge_Berry_C_GetItemSourceWorldLocation_Params params {};
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BASE_Hedge_Berry.BP_BASE_Hedge_Berry_C.IsSourceForItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemType                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	bool ABP_BASE_Hedge_Berry_C::IsSourceForItem(const struct FDataTableRowHandle& ItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_Hedge_Berry.BP_BASE_Hedge_Berry_C.IsSourceForItem");
		
		ABP_BASE_Hedge_Berry_C_IsSourceForItem_Params params {};
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BASE_Hedge_Berry.BP_BASE_Hedge_Berry_C.Handle Death
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDamageInfo                                 DamageInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABP_BASE_Hedge_Berry_C::Handle_Death(const struct FDamageInfo& DamageInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_Hedge_Berry.BP_BASE_Hedge_Berry_C.Handle Death");
		
		ABP_BASE_Hedge_Berry_C_Handle_Death_Params params {};
		params.DamageInfo = DamageInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BASE_Hedge_Berry.BP_BASE_Hedge_Berry_C.MulticastHandleDestroy
	 * 		Flags  -> ()
	 */
	void ABP_BASE_Hedge_Berry_C::MulticastHandleDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_Hedge_Berry.BP_BASE_Hedge_Berry_C.MulticastHandleDestroy");
		
		ABP_BASE_Hedge_Berry_C_MulticastHandleDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BASE_Hedge_Berry.BP_BASE_Hedge_Berry_C.ExecuteUbergraph_BP_BASE_Hedge_Berry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BASE_Hedge_Berry_C::ExecuteUbergraph_BP_BASE_Hedge_Berry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BASE_Hedge_Berry.BP_BASE_Hedge_Berry_C.ExecuteUbergraph_BP_BASE_Hedge_Berry");
		
		ABP_BASE_Hedge_Berry_C_ExecuteUbergraph_BP_BASE_Hedge_Berry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BASE_Hedge_Berry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BASE_Hedge_Berry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BASE_Hedge_Berry.BP_BASE_Hedge_Berry_C");
		return ptr;
	}

}


