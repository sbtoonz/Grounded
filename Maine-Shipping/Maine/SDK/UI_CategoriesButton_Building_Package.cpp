﻿/**
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
	 * 		Name   -> Function UI_CategoriesButton_Building.UI_CategoriesButton_Building_C.SetEnabledStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      CatIcon                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UButton*                                     Button_CategoryInner                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CategoriesButton_Building_C::SetEnabledStyle(class UImage** CatIcon, class UButton** Button_CategoryInner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Building.UI_CategoriesButton_Building_C.SetEnabledStyle");
		
		UUI_CategoriesButton_Building_C_SetEnabledStyle_Params params {};
		
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
	 * 		Name   -> Function UI_CategoriesButton_Building.UI_CategoriesButton_Building_C.SetDisabledStyle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      CatIcon                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UButton*                                     Button_CategoryInner                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CategoriesButton_Building_C::SetDisabledStyle(class UImage** CatIcon, class UButton** Button_CategoryInner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Building.UI_CategoriesButton_Building_C.SetDisabledStyle");
		
		UUI_CategoriesButton_Building_C_SetDisabledStyle_Params params {};
		
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
	 * 		Name   -> Function UI_CategoriesButton_Building.UI_CategoriesButton_Building_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_CategoriesButton_Building_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Building.UI_CategoriesButton_Building_C.PreConstruct");
		
		UUI_CategoriesButton_Building_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CategoriesButton_Building.UI_CategoriesButton_Building_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_CategoriesButton_Building_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Building.UI_CategoriesButton_Building_C.Construct");
		
		UUI_CategoriesButton_Building_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_CategoriesButton_Building.UI_CategoriesButton_Building_C.ExecuteUbergraph_UI_CategoriesButton_Building
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_CategoriesButton_Building_C::ExecuteUbergraph_UI_CategoriesButton_Building(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CategoriesButton_Building.UI_CategoriesButton_Building_C.ExecuteUbergraph_UI_CategoriesButton_Building");
		
		UUI_CategoriesButton_Building_C_ExecuteUbergraph_UI_CategoriesButton_Building_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CategoriesButton_Building_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CategoriesButton_Building_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CategoriesButton_Building.UI_CategoriesButton_Building_C");
		return ptr;
	}

}


