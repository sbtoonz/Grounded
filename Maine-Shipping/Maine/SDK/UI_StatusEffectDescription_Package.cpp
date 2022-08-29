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
	 * 		Name   -> Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.SetSourceText
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectDescription_C::SetSourceText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.SetSourceText");
		
		UUI_StatusEffectDescription_C_SetSourceText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.SetDebuffTint
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectDescription_C::SetDebuffTint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.SetDebuffTint");
		
		UUI_StatusEffectDescription_C_SetDebuffTint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.SetBuffTint
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectDescription_C::SetBuffTint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.SetBuffTint");
		
		UUI_StatusEffectDescription_C_SetBuffTint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.SetDescriptionText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLocString                                  DescSetter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectDescription_C::SetDescriptionText(const struct FLocString& DescSetter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.SetDescriptionText");
		
		UUI_StatusEffectDescription_C_SetDescriptionText_Params params {};
		params.DescSetter = DescSetter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.SetImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  IconSetter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectDescription_C::SetImage(class UTexture2D* IconSetter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.SetImage");
		
		UUI_StatusEffectDescription_C_SetImage_Params params {};
		params.IconSetter = IconSetter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.SetTitleText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLocString                                  TitleSetter                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectDescription_C::SetTitleText(const struct FLocString& TitleSetter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.SetTitleText");
		
		UUI_StatusEffectDescription_C_SetTitleText_Params params {};
		params.TitleSetter = TitleSetter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.OnListItemObjectSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     ListItemObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectDescription_C::OnListItemObjectSet(class UObject* ListItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.OnListItemObjectSet");
		
		UUI_StatusEffectDescription_C_OnListItemObjectSet_Params params {};
		params.ListItemObject = ListItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.BP_OnItemExpansionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_StatusEffectDescription_C::BP_OnItemExpansionChanged(bool bIsExpanded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.BP_OnItemExpansionChanged");
		
		UUI_StatusEffectDescription_C_BP_OnItemExpansionChanged_Params params {};
		params.bIsExpanded = bIsExpanded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectDescription_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.OnGlobalColorChange");
		
		UUI_StatusEffectDescription_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.BP_OnEntryReleased
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectDescription_C::BP_OnEntryReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.BP_OnEntryReleased");
		
		UUI_StatusEffectDescription_C_BP_OnEntryReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.BP_OnItemSelectionChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_StatusEffectDescription_C::BP_OnItemSelectionChanged(bool bIsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.BP_OnItemSelectionChanged");
		
		UUI_StatusEffectDescription_C_BP_OnItemSelectionChanged_Params params {};
		params.bIsSelected = bIsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.SetEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffect*                               StatusEffect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectDescription_C::SetEffect(class UStatusEffect* StatusEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.SetEffect");
		
		UUI_StatusEffectDescription_C_SetEffect_Params params {};
		params.StatusEffect = StatusEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectDescription_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.Tick");
		
		UUI_StatusEffectDescription_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.UpdateTimeRemaining
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectDescription_C::UpdateTimeRemaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.UpdateTimeRemaining");
		
		UUI_StatusEffectDescription_C_UpdateTimeRemaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.ExecuteUbergraph_UI_StatusEffectDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectDescription_C::ExecuteUbergraph_UI_StatusEffectDescription(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectDescription.UI_StatusEffectDescription_C.ExecuteUbergraph_UI_StatusEffectDescription");
		
		UUI_StatusEffectDescription_C_ExecuteUbergraph_UI_StatusEffectDescription_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_StatusEffectDescription_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_StatusEffectDescription_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_StatusEffectDescription.UI_StatusEffectDescription_C");
		return ptr;
	}

}


