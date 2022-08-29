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
	 * 		Name   -> Function UI_IconKey.UI_IconKey_C.GetDurabilityColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_IconKey_C::GetDurabilityColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_IconKey.UI_IconKey_C.GetDurabilityColor");
		
		UUI_IconKey_C_GetDurabilityColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_IconKey.UI_IconKey_C.GetPowerColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_IconKey_C::GetPowerColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_IconKey.UI_IconKey_C.GetPowerColor");
		
		UUI_IconKey_C_GetPowerColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_IconKey.UI_IconKey_C.GetScienceColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_IconKey_C::GetScienceColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_IconKey.UI_IconKey_C.GetScienceColor");
		
		UUI_IconKey_C_GetScienceColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_IconKey.UI_IconKey_C.GetStaminaColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_IconKey_C::GetStaminaColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_IconKey.UI_IconKey_C.GetStaminaColor");
		
		UUI_IconKey_C_GetStaminaColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_IconKey.UI_IconKey_C.GetThirstColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_IconKey_C::GetThirstColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_IconKey.UI_IconKey_C.GetThirstColor");
		
		UUI_IconKey_C_GetThirstColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_IconKey.UI_IconKey_C.GetFoodColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_IconKey_C::GetFoodColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_IconKey.UI_IconKey_C.GetFoodColor");
		
		UUI_IconKey_C_GetFoodColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_IconKey.UI_IconKey_C.GetHealthColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_IconKey_C::GetHealthColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_IconKey.UI_IconKey_C.GetHealthColor");
		
		UUI_IconKey_C_GetHealthColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_IconKey.UI_IconKey_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_IconKey_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_IconKey.UI_IconKey_C.OnGlobalColorChange");
		
		UUI_IconKey_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_IconKey.UI_IconKey_C.ExecuteUbergraph_UI_IconKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_IconKey_C::ExecuteUbergraph_UI_IconKey(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_IconKey.UI_IconKey_C.ExecuteUbergraph_UI_IconKey");
		
		UUI_IconKey_C_ExecuteUbergraph_UI_IconKey_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_IconKey_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_IconKey_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_IconKey.UI_IconKey_C");
		return ptr;
	}

}


