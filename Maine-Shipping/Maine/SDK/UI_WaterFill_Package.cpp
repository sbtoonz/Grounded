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
	 * 		Name   -> Function UI_WaterFill.UI_WaterFill_C.UpdateThirstAnim
	 * 		Flags  -> ()
	 */
	void UUI_WaterFill_C::UpdateThirstAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaterFill.UI_WaterFill_C.UpdateThirstAnim");
		
		UUI_WaterFill_C_UpdateThirstAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaterFill.UI_WaterFill_C.HandleAnimFill
	 * 		Flags  -> ()
	 */
	void UUI_WaterFill_C::HandleAnimFill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaterFill.UI_WaterFill_C.HandleAnimFill");
		
		UUI_WaterFill_C_HandleAnimFill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_WaterFill.UI_WaterFill_C.ExecuteUbergraph_UI_WaterFill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_WaterFill_C::ExecuteUbergraph_UI_WaterFill(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_WaterFill.UI_WaterFill_C.ExecuteUbergraph_UI_WaterFill");
		
		UUI_WaterFill_C_ExecuteUbergraph_UI_WaterFill_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_WaterFill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_WaterFill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_WaterFill.UI_WaterFill_C");
		return ptr;
	}

}


