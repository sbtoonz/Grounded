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
	 * 		Name   -> Function UI_Crosshair.UI_Crosshair_C.SetReticleColor
	 * 		Flags  -> ()
	 */
	void UUI_Crosshair_C::SetReticleColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Crosshair.UI_Crosshair_C.SetReticleColor");
		
		UUI_Crosshair_C_SetReticleColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Crosshair.UI_Crosshair_C.OnCameraModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECameraDisplayMode                                 DisplayMode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Crosshair_C::OnCameraModeChanged(ECameraDisplayMode DisplayMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Crosshair.UI_Crosshair_C.OnCameraModeChanged");
		
		UUI_Crosshair_C_OnCameraModeChanged_Params params {};
		params.DisplayMode = DisplayMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Crosshair.UI_Crosshair_C.UpdateCursorBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttackResolutionType                              AttackResolution                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Crosshair_C::UpdateCursorBrush(EAttackResolutionType AttackResolution)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Crosshair.UI_Crosshair_C.UpdateCursorBrush");
		
		UUI_Crosshair_C_UpdateCursorBrush_Params params {};
		params.AttackResolution = AttackResolution;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Crosshair.UI_Crosshair_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_Crosshair_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Crosshair.UI_Crosshair_C.OnGlobalColorChange");
		
		UUI_Crosshair_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Crosshair.UI_Crosshair_C.ExecuteUbergraph_UI_Crosshair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Crosshair_C::ExecuteUbergraph_UI_Crosshair(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Crosshair.UI_Crosshair_C.ExecuteUbergraph_UI_Crosshair");
		
		UUI_Crosshair_C_ExecuteUbergraph_UI_Crosshair_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Crosshair_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Crosshair_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Crosshair.UI_Crosshair_C");
		return ptr;
	}

}


