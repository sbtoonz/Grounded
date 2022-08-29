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
	 * 		Name   -> Function UI_SCAB_Food.UI_SCAB_Food_C.GetWarningColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_SCAB_Food_C::GetWarningColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB_Food.UI_SCAB_Food_C.GetWarningColor");
		
		UUI_SCAB_Food_C_GetWarningColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB_Food.UI_SCAB_Food_C.GetFoodColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_SCAB_Food_C::GetFoodColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB_Food.UI_SCAB_Food_C.GetFoodColor");
		
		UUI_SCAB_Food_C_GetFoodColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB_Food.UI_SCAB_Food_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_SCAB_Food_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB_Food.UI_SCAB_Food_C.OnGlobalColorChange");
		
		UUI_SCAB_Food_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SCAB_Food.UI_SCAB_Food_C.ExecuteUbergraph_UI_SCAB_Food
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SCAB_Food_C::ExecuteUbergraph_UI_SCAB_Food(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SCAB_Food.UI_SCAB_Food_C.ExecuteUbergraph_UI_SCAB_Food");
		
		UUI_SCAB_Food_C_ExecuteUbergraph_UI_SCAB_Food_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SCAB_Food_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SCAB_Food_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SCAB_Food.UI_SCAB_Food_C");
		return ptr;
	}

}


