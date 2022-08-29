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
	 * 		Name   -> Function UI_KeyItemCollection.UI_KeyItemCollection_C.PopulateItems
	 * 		Flags  -> ()
	 */
	void UUI_KeyItemCollection_C::PopulateItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItemCollection.UI_KeyItemCollection_C.PopulateItems");
		
		UUI_KeyItemCollection_C_PopulateItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItemCollection.UI_KeyItemCollection_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                Subcategory                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyItemCollection_C::Initialize(const struct FGameplayTag& Category, const struct FGameplayTag& Subcategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItemCollection.UI_KeyItemCollection_C.Initialize");
		
		UUI_KeyItemCollection_C_Initialize_Params params {};
		params.Category = Category;
		params.Subcategory = Subcategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItemCollection.UI_KeyItemCollection_C.OnItemFocus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyItemCollection_C::OnItemFocus(class UUI_BaseSlot_C* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItemCollection.UI_KeyItemCollection_C.OnItemFocus");
		
		UUI_KeyItemCollection_C_OnItemFocus_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItemCollection.UI_KeyItemCollection_C.OnItemDoubleClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_BaseSlot_C*                              Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyItemCollection_C::OnItemDoubleClick(class UUI_BaseSlot_C* Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItemCollection.UI_KeyItemCollection_C.OnItemDoubleClick");
		
		UUI_KeyItemCollection_C_OnItemDoubleClick_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItemCollection.UI_KeyItemCollection_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_KeyItemCollection_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItemCollection.UI_KeyItemCollection_C.OnGlobalColorChange");
		
		UUI_KeyItemCollection_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItemCollection.UI_KeyItemCollection_C.ExecuteUbergraph_UI_KeyItemCollection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyItemCollection_C::ExecuteUbergraph_UI_KeyItemCollection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItemCollection.UI_KeyItemCollection_C.ExecuteUbergraph_UI_KeyItemCollection");
		
		UUI_KeyItemCollection_C_ExecuteUbergraph_UI_KeyItemCollection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItemCollection.UI_KeyItemCollection_C.OnItemClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_KeyItemCollection_C*                     ItemCollection                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_BaseSlot_C*                              ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyItemCollection_C::OnItemClicked__DelegateSignature(class UUI_KeyItemCollection_C* ItemCollection, class UUI_BaseSlot_C* ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItemCollection.UI_KeyItemCollection_C.OnItemClicked__DelegateSignature");
		
		UUI_KeyItemCollection_C_OnItemClicked__DelegateSignature_Params params {};
		params.ItemCollection = ItemCollection;
		params.ItemSlot = ItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyItemCollection.UI_KeyItemCollection_C.OnItemSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_KeyItemCollection_C*                     ItemCollection                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_BaseSlot_C*                              ItemSlot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyItemCollection_C::OnItemSelected__DelegateSignature(class UUI_KeyItemCollection_C* ItemCollection, class UUI_BaseSlot_C* ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyItemCollection.UI_KeyItemCollection_C.OnItemSelected__DelegateSignature");
		
		UUI_KeyItemCollection_C_OnItemSelected__DelegateSignature_Params params {};
		params.ItemCollection = ItemCollection;
		params.ItemSlot = ItemSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_KeyItemCollection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_KeyItemCollection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_KeyItemCollection.UI_KeyItemCollection_C");
		return ptr;
	}

}


