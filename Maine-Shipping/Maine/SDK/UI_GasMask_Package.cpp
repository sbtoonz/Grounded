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
	 * 		Name   -> Function UI_GasMask.UI_GasMask_C.RefreshVisuals
	 * 		Flags  -> ()
	 */
	void UUI_GasMask_C::RefreshVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GasMask.UI_GasMask_C.RefreshVisuals");
		
		UUI_GasMask_C_RefreshVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GasMask.UI_GasMask_C.GetMaskDurabilityBarPercent
	 * 		Flags  -> ()
	 */
	float UUI_GasMask_C::GetMaskDurabilityBarPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GasMask.UI_GasMask_C.GetMaskDurabilityBarPercent");
		
		UUI_GasMask_C_GetMaskDurabilityBarPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GasMask.UI_GasMask_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_GasMask_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GasMask.UI_GasMask_C.OnGlobalColorChange");
		
		UUI_GasMask_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GasMask.UI_GasMask_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_GasMask_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GasMask.UI_GasMask_C.Construct");
		
		UUI_GasMask_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_GasMask.UI_GasMask_C.ExecuteUbergraph_UI_GasMask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_GasMask_C::ExecuteUbergraph_UI_GasMask(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_GasMask.UI_GasMask_C.ExecuteUbergraph_UI_GasMask");
		
		UUI_GasMask_C_ExecuteUbergraph_UI_GasMask_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_GasMask_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_GasMask_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_GasMask.UI_GasMask_C");
		return ptr;
	}

}


