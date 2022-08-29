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
	 * 		Name   -> Function UI_Armor.UI_Armor_C.ItemHasDurability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasDurability                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Armor_C::ItemHasDurability(class UItem* Item, bool* HasDurability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Armor.UI_Armor_C.ItemHasDurability");
		
		UUI_Armor_C_ItemHasDurability_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasDurability != nullptr)
			*HasDurability = params.HasDurability;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Armor.UI_Armor_C.GetSlotABGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_Armor_C::GetSlotABGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Armor.UI_Armor_C.GetSlotABGColor");
		
		UUI_Armor_C_GetSlotABGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Armor.UI_Armor_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_Armor_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Armor.UI_Armor_C.OnGlobalColorChange");
		
		UUI_Armor_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Armor.UI_Armor_C.OnEquipmentChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FArmorEquipmentSlot                         EquipmentSlot                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UUI_Armor_C::OnEquipmentChanged(const struct FArmorEquipmentSlot& EquipmentSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Armor.UI_Armor_C.OnEquipmentChanged");
		
		UUI_Armor_C_OnEquipmentChanged_Params params {};
		params.EquipmentSlot = EquipmentSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Armor.UI_Armor_C.OnDurabilityChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FArmorEquipmentSlot                         SlotStruct                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UUI_Armor_C::OnDurabilityChanged(const struct FArmorEquipmentSlot& SlotStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Armor.UI_Armor_C.OnDurabilityChanged");
		
		UUI_Armor_C_OnDurabilityChanged_Params params {};
		params.SlotStruct = SlotStruct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Armor.UI_Armor_C.HandleDurabilityChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_DurabilityFill_C*                        DurabilityWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DurabilityValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Armor_C::HandleDurabilityChanged(class UUI_DurabilityFill_C* DurabilityWidget, float DurabilityValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Armor.UI_Armor_C.HandleDurabilityChanged");
		
		UUI_Armor_C_HandleDurabilityChanged_Params params {};
		params.DurabilityWidget = DurabilityWidget;
		params.DurabilityValue = DurabilityValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Armor.UI_Armor_C.HandleEquipmentChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_DurabilityFill_C*                        UIDurabilityFill                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      IconImage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FArmorEquipmentSlot                         EquipmentSlotStruct                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_Armor_C::HandleEquipmentChanged(class UUI_DurabilityFill_C* UIDurabilityFill, class UImage* IconImage, const struct FArmorEquipmentSlot& EquipmentSlotStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Armor.UI_Armor_C.HandleEquipmentChanged");
		
		UUI_Armor_C_HandleEquipmentChanged_Params params {};
		params.UIDurabilityFill = UIDurabilityFill;
		params.IconImage = IconImage;
		params.EquipmentSlotStruct = EquipmentSlotStruct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Armor.UI_Armor_C.ExecuteUbergraph_UI_Armor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Armor_C::ExecuteUbergraph_UI_Armor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Armor.UI_Armor_C.ExecuteUbergraph_UI_Armor");
		
		UUI_Armor_C_ExecuteUbergraph_UI_Armor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Armor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Armor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Armor.UI_Armor_C");
		return ptr;
	}

}


