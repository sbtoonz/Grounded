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
	 * 		Name   -> Function UI_VitalsVertical.UI_VitalsVertical_C.GetStaminaTooltip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_VitalsVertical_C::GetStaminaTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsVertical.UI_VitalsVertical_C.GetStaminaTooltip");
		
		UUI_VitalsVertical_C_GetStaminaTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VitalsVertical.UI_VitalsVertical_C.GetWaterTooltip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_VitalsVertical_C::GetWaterTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsVertical.UI_VitalsVertical_C.GetWaterTooltip");
		
		UUI_VitalsVertical_C_GetWaterTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VitalsVertical.UI_VitalsVertical_C.SetHungerTooltip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_VitalsVertical_C::SetHungerTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsVertical.UI_VitalsVertical_C.SetHungerTooltip");
		
		UUI_VitalsVertical_C_SetHungerTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VitalsVertical.UI_VitalsVertical_C.SetHealthTooltip
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_VitalsVertical_C::SetHealthTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsVertical.UI_VitalsVertical_C.SetHealthTooltip");
		
		UUI_VitalsVertical_C_SetHealthTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VitalsVertical.UI_VitalsVertical_C.GetPercentageColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_VitalsVertical_C::GetPercentageColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsVertical.UI_VitalsVertical_C.GetPercentageColor");
		
		UUI_VitalsVertical_C_GetPercentageColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VitalsVertical.UI_VitalsVertical_C.GetWaterGlobal
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_VitalsVertical_C::GetWaterGlobal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsVertical.UI_VitalsVertical_C.GetWaterGlobal");
		
		UUI_VitalsVertical_C_GetWaterGlobal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VitalsVertical.UI_VitalsVertical_C.GetFoodGlobal
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_VitalsVertical_C::GetFoodGlobal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsVertical.UI_VitalsVertical_C.GetFoodGlobal");
		
		UUI_VitalsVertical_C_GetFoodGlobal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VitalsVertical.UI_VitalsVertical_C.GetStaminaGlobal
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_VitalsVertical_C::GetStaminaGlobal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsVertical.UI_VitalsVertical_C.GetStaminaGlobal");
		
		UUI_VitalsVertical_C_GetStaminaGlobal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VitalsVertical.UI_VitalsVertical_C.GetEnergyGlobal
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_VitalsVertical_C::GetEnergyGlobal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsVertical.UI_VitalsVertical_C.GetEnergyGlobal");
		
		UUI_VitalsVertical_C_GetEnergyGlobal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VitalsVertical.UI_VitalsVertical_C.GetHealthGlobal
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_VitalsVertical_C::GetHealthGlobal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsVertical.UI_VitalsVertical_C.GetHealthGlobal");
		
		UUI_VitalsVertical_C_GetHealthGlobal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VitalsVertical.UI_VitalsVertical_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_VitalsVertical_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsVertical.UI_VitalsVertical_C.OnGlobalColorChange");
		
		UUI_VitalsVertical_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_VitalsVertical.UI_VitalsVertical_C.ExecuteUbergraph_UI_VitalsVertical
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_VitalsVertical_C::ExecuteUbergraph_UI_VitalsVertical(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_VitalsVertical.UI_VitalsVertical_C.ExecuteUbergraph_UI_VitalsVertical");
		
		UUI_VitalsVertical_C_ExecuteUbergraph_UI_VitalsVertical_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_VitalsVertical_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_VitalsVertical_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_VitalsVertical.UI_VitalsVertical_C");
		return ptr;
	}

}


