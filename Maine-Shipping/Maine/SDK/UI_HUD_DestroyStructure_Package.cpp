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
	 * 		Name   -> Function UI_HUD_DestroyStructure.UI_HUD_DestroyStructure_C.GetRecyleValue
	 * 		Flags  -> ()
	 */
	float UUI_HUD_DestroyStructure_C::GetRecyleValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_DestroyStructure.UI_HUD_DestroyStructure_C.GetRecyleValue");
		
		UUI_HUD_DestroyStructure_C_GetRecyleValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD_DestroyStructure.UI_HUD_DestroyStructure_C.GetCancelFillPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FillValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_DestroyStructure_C::GetCancelFillPercent(float* FillValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_DestroyStructure.UI_HUD_DestroyStructure_C.GetCancelFillPercent");
		
		UUI_HUD_DestroyStructure_C_GetCancelFillPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FillValue != nullptr)
			*FillValue = params.FillValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD_DestroyStructure.UI_HUD_DestroyStructure_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_HUD_DestroyStructure_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_DestroyStructure.UI_HUD_DestroyStructure_C.OnGlobalColorChange");
		
		UUI_HUD_DestroyStructure_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD_DestroyStructure.UI_HUD_DestroyStructure_C.UpdateData
	 * 		Flags  -> ()
	 */
	void UUI_HUD_DestroyStructure_C::UpdateData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_DestroyStructure.UI_HUD_DestroyStructure_C.UpdateData");
		
		UUI_HUD_DestroyStructure_C_UpdateData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD_DestroyStructure.UI_HUD_DestroyStructure_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_HUD_DestroyStructure_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_DestroyStructure.UI_HUD_DestroyStructure_C.Construct");
		
		UUI_HUD_DestroyStructure_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUD_DestroyStructure.UI_HUD_DestroyStructure_C.ExecuteUbergraph_UI_HUD_DestroyStructure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUD_DestroyStructure_C::ExecuteUbergraph_UI_HUD_DestroyStructure(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUD_DestroyStructure.UI_HUD_DestroyStructure_C.ExecuteUbergraph_UI_HUD_DestroyStructure");
		
		UUI_HUD_DestroyStructure_C_ExecuteUbergraph_UI_HUD_DestroyStructure_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HUD_DestroyStructure_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HUD_DestroyStructure_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUD_DestroyStructure.UI_HUD_DestroyStructure_C");
		return ptr;
	}

}


