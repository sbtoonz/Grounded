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
	 * 		Name   -> Function UI_ScienceFoundNotification.UI_ScienceFoundNotification_C.GetScienceColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ScienceFoundNotification_C::GetScienceColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScienceFoundNotification.UI_ScienceFoundNotification_C.GetScienceColor");
		
		UUI_ScienceFoundNotification_C_GetScienceColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScienceFoundNotification.UI_ScienceFoundNotification_C.BindPlayerEvents
	 * 		Flags  -> ()
	 */
	void UUI_ScienceFoundNotification_C::BindPlayerEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScienceFoundNotification.UI_ScienceFoundNotification_C.BindPlayerEvents");
		
		UUI_ScienceFoundNotification_C_BindPlayerEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScienceFoundNotification.UI_ScienceFoundNotification_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_ScienceFoundNotification_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScienceFoundNotification.UI_ScienceFoundNotification_C.Construct");
		
		UUI_ScienceFoundNotification_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScienceFoundNotification.UI_ScienceFoundNotification_C.OnScienceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ScienceAdded                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalScience                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScienceFoundNotification_C::OnScienceChanged(int32_t ScienceAdded, int32_t TotalScience)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScienceFoundNotification.UI_ScienceFoundNotification_C.OnScienceChanged");
		
		UUI_ScienceFoundNotification_C_OnScienceChanged_Params params {};
		params.ScienceAdded = ScienceAdded;
		params.TotalScience = TotalScience;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScienceFoundNotification.UI_ScienceFoundNotification_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_ScienceFoundNotification_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScienceFoundNotification.UI_ScienceFoundNotification_C.OnGlobalColorChange");
		
		UUI_ScienceFoundNotification_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScienceFoundNotification.UI_ScienceFoundNotification_C.FinishScienceAnim
	 * 		Flags  -> ()
	 */
	void UUI_ScienceFoundNotification_C::FinishScienceAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScienceFoundNotification.UI_ScienceFoundNotification_C.FinishScienceAnim");
		
		UUI_ScienceFoundNotification_C_FinishScienceAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ScienceFoundNotification.UI_ScienceFoundNotification_C.ExecuteUbergraph_UI_ScienceFoundNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ScienceFoundNotification_C::ExecuteUbergraph_UI_ScienceFoundNotification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ScienceFoundNotification.UI_ScienceFoundNotification_C.ExecuteUbergraph_UI_ScienceFoundNotification");
		
		UUI_ScienceFoundNotification_C_ExecuteUbergraph_UI_ScienceFoundNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ScienceFoundNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ScienceFoundNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ScienceFoundNotification.UI_ScienceFoundNotification_C");
		return ptr;
	}

}


