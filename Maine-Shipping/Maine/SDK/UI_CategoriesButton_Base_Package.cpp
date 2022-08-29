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
	 * 		Name   -> Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.GetWorkbenchIconColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_CategoriesButton_Base_C::GetWorkbenchIconColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.GetWorkbenchIconColor");
		
		UUI_CategoriesButton_Base_C_GetWorkbenchIconColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.GetCategoryIconVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   CategoryVisibility                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CategoriesButton_Base_C::GetCategoryIconVisibility(ESlateVisibility* CategoryVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.GetCategoryIconVisibility");
		
		UUI_CategoriesButton_Base_C_GetCategoryIconVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CategoryVisibility != nullptr)
			*CategoryVisibility = params.CategoryVisibility;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.GetAttentionColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_CategoriesButton_Base_C::GetAttentionColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.GetAttentionColor");
		
		UUI_CategoriesButton_Base_C_GetAttentionColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.SetEnabledStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      CatIcon                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UButton*                                     Button_CategoryInner                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CategoriesButton_Base_C::SetEnabledStyle(class UImage** CatIcon, class UButton** Button_CategoryInner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.SetEnabledStyle");
		
		UUI_CategoriesButton_Base_C_SetEnabledStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CatIcon != nullptr)
			*CatIcon = params.CatIcon;
		if (Button_CategoryInner != nullptr)
			*Button_CategoryInner = params.Button_CategoryInner;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.SetDisabledStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      CatIcon                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UButton*                                     Button_CategoryInner                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CategoriesButton_Base_C::SetDisabledStyle(class UImage** CatIcon, class UButton** Button_CategoryInner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.SetDisabledStyle");
		
		UUI_CategoriesButton_Base_C_SetDisabledStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CatIcon != nullptr)
			*CatIcon = params.CatIcon;
		if (Button_CategoryInner != nullptr)
			*Button_CategoryInner = params.Button_CategoryInner;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.NormalButtonUnhover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           self2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CategoriesButton_Base_C::NormalButtonUnhover(class APlayerController* self2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.NormalButtonUnhover");
		
		UUI_CategoriesButton_Base_C_NormalButtonUnhover_Params params {};
		params.self2 = self2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.NormalButtonHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           self2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CategoriesButton_Base_C::NormalButtonHover(class APlayerController* self2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.NormalButtonHover");
		
		UUI_CategoriesButton_Base_C_NormalButtonHover_Params params {};
		params.self2 = self2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CategoriesButton_Base_C::SetSelected(bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.SetSelected");
		
		UUI_CategoriesButton_Base_C_SetSelected_Params params {};
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.SetIsValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CategoriesButton_Base_C::SetIsValid(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.SetIsValid");
		
		UUI_CategoriesButton_Base_C_SetIsValid_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.OnAddedToFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_CategoriesButton_Base_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.OnAddedToFocusPath");
		
		UUI_CategoriesButton_Base_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.OnRemovedFromFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_CategoriesButton_Base_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.OnRemovedFromFocusPath");
		
		UUI_CategoriesButton_Base_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CategoriesButton_Base_C::BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UUI_CategoriesButton_Base_C_BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_CategoriesButton_Base_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.OnGlobalColorChange");
		
		UUI_CategoriesButton_Base_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_CategoriesButton_Base_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.Construct");
		
		UUI_CategoriesButton_Base_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CategoriesButton_Base_C::BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_CategoriesButton_Base_C_BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CategoriesButton_Base_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.Tick");
		
		UUI_CategoriesButton_Base_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CategoriesButton_Base_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.PreConstruct");
		
		UUI_CategoriesButton_Base_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CategoriesButton_Base_C::BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UUI_CategoriesButton_Base_C_BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CategoriesButton_Base_C::BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UUI_CategoriesButton_Base_C_BndEvt__Button_NormalInner_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.ExecuteUbergraph_UI_CategoriesButton_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CategoriesButton_Base_C::ExecuteUbergraph_UI_CategoriesButton_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.ExecuteUbergraph_UI_CategoriesButton_Base");
		
		UUI_CategoriesButton_Base_C_ExecuteUbergraph_UI_CategoriesButton_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_CategoriesButton_Base_C::OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Base.UI_CategoriesButton_Base_C.OnNormalButtonClicked__DelegateSignature");
		
		UUI_CategoriesButton_Base_C_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CategoriesButton_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CategoriesButton_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CategoriesButton_Base.UI_CategoriesButton_Base_C");
		return ptr;
	}

}


