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
	 * 		Name   -> Function UI_WaterTickFill.UI_WaterTickFill_C.GetFill
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_WaterTickFill_C::GetFill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaterTickFill.UI_WaterTickFill_C.GetFill");
		
		UUI_WaterTickFill_C_GetFill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaterTickFill.UI_WaterTickFill_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_WaterTickFill_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaterTickFill.UI_WaterTickFill_C.Construct");
		
		UUI_WaterTickFill_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaterTickFill.UI_WaterTickFill_C.UpdateThirstAnim
	 * 		Flags  -> ()
	 */
	void UUI_WaterTickFill_C::UpdateThirstAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaterTickFill.UI_WaterTickFill_C.UpdateThirstAnim");
		
		UUI_WaterTickFill_C_UpdateThirstAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaterTickFill.UI_WaterTickFill_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_WaterTickFill_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaterTickFill.UI_WaterTickFill_C.OnGlobalColorChange");
		
		UUI_WaterTickFill_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaterTickFill.UI_WaterTickFill_C.SetWaterDecreased
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WaterDecreased                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_WaterTickFill_C::SetWaterDecreased(bool WaterDecreased)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaterTickFill.UI_WaterTickFill_C.SetWaterDecreased");
		
		UUI_WaterTickFill_C_SetWaterDecreased_Params params {};
		params.WaterDecreased = WaterDecreased;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaterTickFill.UI_WaterTickFill_C.RefreshColor
	 * 		Flags  -> ()
	 */
	void UUI_WaterTickFill_C::RefreshColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaterTickFill.UI_WaterTickFill_C.RefreshColor");
		
		UUI_WaterTickFill_C_RefreshColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaterTickFill.UI_WaterTickFill_C.HandleFillAnim
	 * 		Flags  -> ()
	 */
	void UUI_WaterTickFill_C::HandleFillAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaterTickFill.UI_WaterTickFill_C.HandleFillAnim");
		
		UUI_WaterTickFill_C_HandleFillAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaterTickFill.UI_WaterTickFill_C.ExecuteUbergraph_UI_WaterTickFill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WaterTickFill_C::ExecuteUbergraph_UI_WaterTickFill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaterTickFill.UI_WaterTickFill_C.ExecuteUbergraph_UI_WaterTickFill");
		
		UUI_WaterTickFill_C_ExecuteUbergraph_UI_WaterTickFill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_WaterTickFill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_WaterTickFill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_WaterTickFill.UI_WaterTickFill_C");
		return ptr;
	}

}


