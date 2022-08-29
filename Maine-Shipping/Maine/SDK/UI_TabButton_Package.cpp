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
	 * 		Name   -> Function UI_TabButton.UI_TabButton_C.SetString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLocString                                  LocString                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TabButton_C::SetString(const struct FLocString& LocString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabButton.UI_TabButton_C.SetString");
		
		UUI_TabButton_C_SetString_Params params {};
		params.LocString = LocString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabButton.UI_TabButton_C.SetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TabButton_C::SetIcon(class UTexture2D* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabButton.UI_TabButton_C.SetIcon");
		
		UUI_TabButton_C_SetIcon_Params params {};
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabButton.UI_TabButton_C.GetNarration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FNarrationChunk>                     Chunks                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bVerbose                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TabButton_C::GetNarration(TArray<struct FNarrationChunk>* Chunks, bool bVerbose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabButton.UI_TabButton_C.GetNarration");
		
		UUI_TabButton_C_GetNarration_Params params {};
		params.bVerbose = bVerbose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Chunks != nullptr)
			*Chunks = params.Chunks;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabButton.UI_TabButton_C.GetVisibilityOSimg
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_TabButton_C::GetVisibilityOSimg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabButton.UI_TabButton_C.GetVisibilityOSimg");
		
		UUI_TabButton_C_GetVisibilityOSimg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabButton.UI_TabButton_C.GetVisibilityText
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_TabButton_C::GetVisibilityText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabButton.UI_TabButton_C.GetVisibilityText");
		
		UUI_TabButton_C_GetVisibilityText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabButton.UI_TabButton_C.GetAttentionColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_TabButton_C::GetAttentionColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabButton.UI_TabButton_C.GetAttentionColor");
		
		UUI_TabButton_C_GetAttentionColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabButton.UI_TabButton_C.GetNuggetVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_TabButton_C::GetNuggetVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabButton.UI_TabButton_C.GetNuggetVisibility");
		
		UUI_TabButton_C_GetNuggetVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabButton.UI_TabButton_C.GetSelectedColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_TabButton_C::GetSelectedColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabButton.UI_TabButton_C.GetSelectedColor");
		
		UUI_TabButton_C_GetSelectedColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabButton.UI_TabButton_C.RefreshColors
	 * 		Flags  -> ()
	 */
	void UUI_TabButton_C::RefreshColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabButton.UI_TabButton_C.RefreshColors");
		
		UUI_TabButton_C_RefreshColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabButton.UI_TabButton_C.SetCheckedState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECheckBoxState                                     InCheckedState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TabButton_C::SetCheckedState(ECheckBoxState InCheckedState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabButton.UI_TabButton_C.SetCheckedState");
		
		UUI_TabButton_C_SetCheckedState_Params params {};
		params.InCheckedState = InCheckedState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabButton.UI_TabButton_C.TabButtonUnhover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           self2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TabButton_C::TabButtonUnhover(class APlayerController* self2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabButton.UI_TabButton_C.TabButtonUnhover");
		
		UUI_TabButton_C_TabButtonUnhover_Params params {};
		params.self2 = self2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabButton.UI_TabButton_C.TabButtonHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           self2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TabButton_C::TabButtonHover(class APlayerController* self2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabButton.UI_TabButton_C.TabButtonHover");
		
		UUI_TabButton_C_TabButtonHover_Params params {};
		params.self2 = self2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabButton.UI_TabButton_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TabButton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabButton.UI_TabButton_C.PreConstruct");
		
		UUI_TabButton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabButton.UI_TabButton_C.BndEvt__Button_TabInner_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_TabButton_C::BndEvt__Button_TabInner_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabButton.UI_TabButton_C.BndEvt__Button_TabInner_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UUI_TabButton_C_BndEvt__Button_TabInner_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabButton.UI_TabButton_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_TabButton_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabButton.UI_TabButton_C.OnGlobalColorChange");
		
		UUI_TabButton_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabButton.UI_TabButton_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_TabButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabButton.UI_TabButton_C.Construct");
		
		UUI_TabButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabButton.UI_TabButton_C.ExecuteUbergraph_UI_TabButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TabButton_C::ExecuteUbergraph_UI_TabButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabButton.UI_TabButton_C.ExecuteUbergraph_UI_TabButton");
		
		UUI_TabButton_C_ExecuteUbergraph_UI_TabButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_TabButton.UI_TabButton_C.OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_TabButton_C*                             TabButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_TabButton_C::OnNormalButtonClicked__DelegateSignature(class UUI_TabButton_C* TabButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_TabButton.UI_TabButton_C.OnNormalButtonClicked__DelegateSignature");
		
		UUI_TabButton_C_OnNormalButtonClicked__DelegateSignature_Params params {};
		params.TabButton = TabButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_TabButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_TabButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TabButton.UI_TabButton_C");
		return ptr;
	}

}


