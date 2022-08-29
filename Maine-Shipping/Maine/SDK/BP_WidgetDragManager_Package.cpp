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
	 * 		Name   -> Function BP_WidgetDragManager.BP_WidgetDragManager_C.Init
	 * 		Flags  -> ()
	 */
	void UBP_WidgetDragManager_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WidgetDragManager.BP_WidgetDragManager_C.Init");
		
		UBP_WidgetDragManager_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WidgetDragManager.BP_WidgetDragManager_C.IsDragging
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDragging                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_WidgetDragManager_C::IsDragging(bool* IsDragging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WidgetDragManager.BP_WidgetDragManager_C.IsDragging");
		
		UBP_WidgetDragManager_C_IsDragging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDragging != nullptr)
			*IsDragging = params.IsDragging;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WidgetDragManager.BP_WidgetDragManager_C.OnDragBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WidgetDragManager_C::OnDragBegin(class UUI_BaseSlot_C* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WidgetDragManager.BP_WidgetDragManager_C.OnDragBegin");
		
		UBP_WidgetDragManager_C_OnDragBegin_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WidgetDragManager.BP_WidgetDragManager_C.OnDragCancel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              SlotCanceledFrom                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ManualCancel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_WidgetDragManager_C::OnDragCancel(class UUI_BaseSlot_C* SlotCanceledFrom, bool ManualCancel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WidgetDragManager.BP_WidgetDragManager_C.OnDragCancel");
		
		UBP_WidgetDragManager_C_OnDragCancel_Params params {};
		params.SlotCanceledFrom = SlotCanceledFrom;
		params.ManualCancel = ManualCancel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WidgetDragManager.BP_WidgetDragManager_C.OnDragDrop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              DestinationItemSlot                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WidgetDragManager_C::OnDragDrop(class UUI_BaseSlot_C* DestinationItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WidgetDragManager.BP_WidgetDragManager_C.OnDragDrop");
		
		UBP_WidgetDragManager_C_OnDragDrop_Params params {};
		params.DestinationItemSlot = DestinationItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WidgetDragManager.BP_WidgetDragManager_C.HandleItemSlotFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WidgetDragManager_C::HandleItemSlotFocused(class UUI_BaseSlot_C* ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WidgetDragManager.BP_WidgetDragManager_C.HandleItemSlotFocused");
		
		UBP_WidgetDragManager_C_HandleItemSlotFocused_Params params {};
		params.ItemSlot = ItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WidgetDragManager.BP_WidgetDragManager_C.HandleItemSlotUnfocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WidgetDragManager_C::HandleItemSlotUnfocused(class UUI_BaseSlot_C* ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WidgetDragManager.BP_WidgetDragManager_C.HandleItemSlotUnfocused");
		
		UBP_WidgetDragManager_C_HandleItemSlotUnfocused_Params params {};
		params.ItemSlot = ItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WidgetDragManager.BP_WidgetDragManager_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetManager*                              WidgetManager                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WidgetDragManager_C::Initialize(class UWidgetManager* WidgetManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WidgetDragManager.BP_WidgetDragManager_C.Initialize");
		
		UBP_WidgetDragManager_C_Initialize_Params params {};
		params.WidgetManager = WidgetManager;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WidgetDragManager.BP_WidgetDragManager_C.OnWindowStackChanged
	 * 		Flags  -> ()
	 */
	void UBP_WidgetDragManager_C::OnWindowStackChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WidgetDragManager.BP_WidgetDragManager_C.OnWindowStackChanged");
		
		UBP_WidgetDragManager_C_OnWindowStackChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WidgetDragManager.BP_WidgetDragManager_C.ExecuteUbergraph_BP_WidgetDragManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WidgetDragManager_C::ExecuteUbergraph_BP_WidgetDragManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WidgetDragManager.BP_WidgetDragManager_C.ExecuteUbergraph_BP_WidgetDragManager");
		
		UBP_WidgetDragManager_C_ExecuteUbergraph_BP_WidgetDragManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_WidgetDragManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_WidgetDragManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WidgetDragManager.BP_WidgetDragManager_C");
		return ptr;
	}

}


