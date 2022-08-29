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
	 * 		Name   -> Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.SetCurrentPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CurrentPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialHeaderButton_C::SetCurrentPage(int32_t CurrentPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.SetCurrentPage");
		
		UUI_RadialHeaderButton_C_SetCurrentPage_Params params {};
		params.CurrentPage = CurrentPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CategoryIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PageCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        CategoryName                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_RadialHeaderButton_C::SetData(int32_t CategoryIndex, int32_t PageCount, const class FText& CategoryName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.SetData");
		
		UUI_RadialHeaderButton_C_SetData_Params params {};
		params.CategoryIndex = CategoryIndex;
		params.PageCount = PageCount;
		params.CategoryName = CategoryName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.GetTitleTextColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_RadialHeaderButton_C::GetTitleTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.GetTitleTextColor");
		
		UUI_RadialHeaderButton_C_GetTitleTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.GetCategoryColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_RadialHeaderButton_C::GetCategoryColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.GetCategoryColor");
		
		UUI_RadialHeaderButton_C_GetCategoryColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.SetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_RadialHeaderButton_C::SetActive(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.SetActive");
		
		UUI_RadialHeaderButton_C_SetActive_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.BndEvt__RadialButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_RadialHeaderButton_C::BndEvt__RadialButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.BndEvt__RadialButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");
		
		UUI_RadialHeaderButton_C_BndEvt__RadialButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.OnRadialButtonPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_RadialPageDot_C*                         RadialPageButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialHeaderButton_C::OnRadialButtonPressed(class UUI_RadialPageDot_C* RadialPageButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.OnRadialButtonPressed");
		
		UUI_RadialHeaderButton_C_OnRadialButtonPressed_Params params {};
		params.RadialPageButton = RadialPageButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.ExecuteUbergraph_UI_RadialHeaderButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialHeaderButton_C::ExecuteUbergraph_UI_RadialHeaderButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.ExecuteUbergraph_UI_RadialHeaderButton");
		
		UUI_RadialHeaderButton_C_ExecuteUbergraph_UI_RadialHeaderButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_RadialHeaderButton_C*                    RadialButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_RadialHeaderButton_C::OnPressed__DelegateSignature(class UUI_RadialHeaderButton_C* RadialButton, int32_t Page)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_RadialHeaderButton.UI_RadialHeaderButton_C.OnPressed__DelegateSignature");
		
		UUI_RadialHeaderButton_C_OnPressed__DelegateSignature_Params params {};
		params.RadialButton = RadialButton;
		params.Page = Page;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_RadialHeaderButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_RadialHeaderButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_RadialHeaderButton.UI_RadialHeaderButton_C");
		return ptr;
	}

}


