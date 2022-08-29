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
	 * 		Name   -> Function BP_EquippedItem.BP_EquippedItem_C.ValidateItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FText>                                ValidationErrors                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	bool ABP_EquippedItem_C::ValidateItemData(TArray<class FText>* ValidationErrors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EquippedItem.BP_EquippedItem_C.ValidateItemData");
		
		ABP_EquippedItem_C_ValidateItemData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValidationErrors != nullptr)
			*ValidationErrors = params.ValidationErrors;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EquippedItem.BP_EquippedItem_C.IsInteractionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInteractionChannel                                Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      InstigatedBy                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EInteractionState ABP_EquippedItem_C::IsInteractionEnabled(EInteractionChannel Channel, class AActor* InstigatedBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EquippedItem.BP_EquippedItem_C.IsInteractionEnabled");
		
		ABP_EquippedItem_C_IsInteractionEnabled_Params params {};
		params.Channel = Channel;
		params.InstigatedBy = InstigatedBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EquippedItem.BP_EquippedItem_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_EquippedItem_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EquippedItem.BP_EquippedItem_C.ReceiveBeginPlay");
		
		ABP_EquippedItem_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EquippedItem.BP_EquippedItem_C.PowerStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PowerState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_EquippedItem_C::PowerStateChanged(bool PowerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EquippedItem.BP_EquippedItem_C.PowerStateChanged");
		
		ABP_EquippedItem_C_PowerStateChanged_Params params {};
		params.PowerState = PowerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_EquippedItem.BP_EquippedItem_C.ExecuteUbergraph_BP_EquippedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_EquippedItem_C::ExecuteUbergraph_BP_EquippedItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_EquippedItem.BP_EquippedItem_C.ExecuteUbergraph_BP_EquippedItem");
		
		ABP_EquippedItem_C_ExecuteUbergraph_BP_EquippedItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_EquippedItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_EquippedItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_EquippedItem.BP_EquippedItem_C");
		return ptr;
	}

}


