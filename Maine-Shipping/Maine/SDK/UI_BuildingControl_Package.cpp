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
	 * 		Name   -> Function UI_BuildingControl.UI_BuildingControl_C.UpdateAllColors
	 * 		Flags  -> ()
	 */
	void UUI_BuildingControl_C::UpdateAllColors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingControl.UI_BuildingControl_C.UpdateAllColors");
		
		UUI_BuildingControl_C_UpdateAllColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingControl.UI_BuildingControl_C.Set Action Allowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BuildingControl_C::Set_Action_Allowed(bool bNewEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingControl.UI_BuildingControl_C.Set Action Allowed");
		
		UUI_BuildingControl_C_Set_Action_Allowed_Params params {};
		params.bNewEnabled = bNewEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingControl.UI_BuildingControl_C.GetCancelHoldFillPercent
	 * 		Flags  -> ()
	 */
	float UUI_BuildingControl_C::GetCancelHoldFillPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingControl.UI_BuildingControl_C.GetCancelHoldFillPercent");
		
		UUI_BuildingControl_C_GetCancelHoldFillPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingControl.UI_BuildingControl_C.GetBasicColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_BuildingControl_C::GetBasicColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingControl.UI_BuildingControl_C.GetBasicColor");
		
		UUI_BuildingControl_C_GetBasicColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingControl.UI_BuildingControl_C.GetSelectedColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_BuildingControl_C::GetSelectedColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingControl.UI_BuildingControl_C.GetSelectedColor");
		
		UUI_BuildingControl_C_GetSelectedColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingControl.UI_BuildingControl_C.GetKeyColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_BuildingControl_C::GetKeyColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingControl.UI_BuildingControl_C.GetKeyColor");
		
		UUI_BuildingControl_C_GetKeyColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingControl.UI_BuildingControl_C.GetIconColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_BuildingControl_C::GetIconColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingControl.UI_BuildingControl_C.GetIconColor");
		
		UUI_BuildingControl_C_GetIconColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingControl.UI_BuildingControl_C.GetKeyTextVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_BuildingControl_C::GetKeyTextVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingControl.UI_BuildingControl_C.GetKeyTextVisibility");
		
		UUI_BuildingControl_C_GetKeyTextVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingControl.UI_BuildingControl_C.GetFaceButtonVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_BuildingControl_C::GetFaceButtonVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingControl.UI_BuildingControl_C.GetFaceButtonVisibility");
		
		UUI_BuildingControl_C_GetFaceButtonVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingControl.UI_BuildingControl_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_BuildingControl_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingControl.UI_BuildingControl_C.PreConstruct");
		
		UUI_BuildingControl_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingControl.UI_BuildingControl_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_BuildingControl_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingControl.UI_BuildingControl_C.OnGlobalColorChange");
		
		UUI_BuildingControl_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingControl.UI_BuildingControl_C.ExecuteUbergraph_UI_BuildingControl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuildingControl_C::ExecuteUbergraph_UI_BuildingControl(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingControl.UI_BuildingControl_C.ExecuteUbergraph_UI_BuildingControl");
		
		UUI_BuildingControl_C_ExecuteUbergraph_UI_BuildingControl_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BuildingControl_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BuildingControl_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BuildingControl.UI_BuildingControl_C");
		return ptr;
	}

}


