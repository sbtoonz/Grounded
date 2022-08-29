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
	 * 		Name   -> Function UI_VitalsWidget.UI_VitalsWidget_C.GetStaminaTooltip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_VitalsWidget_C::GetStaminaTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsWidget.UI_VitalsWidget_C.GetStaminaTooltip");
		
		UUI_VitalsWidget_C_GetStaminaTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VitalsWidget.UI_VitalsWidget_C.GetWaterTooltip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_VitalsWidget_C::GetWaterTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsWidget.UI_VitalsWidget_C.GetWaterTooltip");
		
		UUI_VitalsWidget_C_GetWaterTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VitalsWidget.UI_VitalsWidget_C.SetHungerTooltip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_VitalsWidget_C::SetHungerTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsWidget.UI_VitalsWidget_C.SetHungerTooltip");
		
		UUI_VitalsWidget_C_SetHungerTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VitalsWidget.UI_VitalsWidget_C.SetHealthTooltip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_VitalsWidget_C::SetHealthTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsWidget.UI_VitalsWidget_C.SetHealthTooltip");
		
		UUI_VitalsWidget_C_SetHealthTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VitalsWidget.UI_VitalsWidget_C.GetPercentageColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_VitalsWidget_C::GetPercentageColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsWidget.UI_VitalsWidget_C.GetPercentageColor");
		
		UUI_VitalsWidget_C_GetPercentageColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VitalsWidget.UI_VitalsWidget_C.GetWaterGlobal
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_VitalsWidget_C::GetWaterGlobal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsWidget.UI_VitalsWidget_C.GetWaterGlobal");
		
		UUI_VitalsWidget_C_GetWaterGlobal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VitalsWidget.UI_VitalsWidget_C.GetFoodGlobal
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_VitalsWidget_C::GetFoodGlobal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsWidget.UI_VitalsWidget_C.GetFoodGlobal");
		
		UUI_VitalsWidget_C_GetFoodGlobal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VitalsWidget.UI_VitalsWidget_C.GetStaminaGlobal
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_VitalsWidget_C::GetStaminaGlobal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsWidget.UI_VitalsWidget_C.GetStaminaGlobal");
		
		UUI_VitalsWidget_C_GetStaminaGlobal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VitalsWidget.UI_VitalsWidget_C.GetEnergyGlobal
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_VitalsWidget_C::GetEnergyGlobal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsWidget.UI_VitalsWidget_C.GetEnergyGlobal");
		
		UUI_VitalsWidget_C_GetEnergyGlobal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VitalsWidget.UI_VitalsWidget_C.GetHealthGlobal
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_VitalsWidget_C::GetHealthGlobal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsWidget.UI_VitalsWidget_C.GetHealthGlobal");
		
		UUI_VitalsWidget_C_GetHealthGlobal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VitalsWidget.UI_VitalsWidget_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_VitalsWidget_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsWidget.UI_VitalsWidget_C.OnGlobalColorChange");
		
		UUI_VitalsWidget_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VitalsWidget.UI_VitalsWidget_C.ExecuteUbergraph_UI_VitalsWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_VitalsWidget_C::ExecuteUbergraph_UI_VitalsWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsWidget.UI_VitalsWidget_C.ExecuteUbergraph_UI_VitalsWidget");
		
		UUI_VitalsWidget_C_ExecuteUbergraph_UI_VitalsWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_VitalsWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_VitalsWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_VitalsWidget.UI_VitalsWidget_C");
		return ptr;
	}

}


