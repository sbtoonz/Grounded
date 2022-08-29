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
	 * 		Name   -> Function UI_StatusEffectWidget.UI_StatusEffectWidget_C.SetStatusEffectTypeAndCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FStatusEffectUIData                         Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectWidget_C::SetStatusEffectTypeAndCount(const struct FStatusEffectUIData& Type, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectWidget.UI_StatusEffectWidget_C.SetStatusEffectTypeAndCount");
		
		UUI_StatusEffectWidget_C_SetStatusEffectTypeAndCount_Params params {};
		params.Type = Type;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectWidget.UI_StatusEffectWidget_C.SetShowEffectText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_StatusEffectWidget_C::SetShowEffectText(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectWidget.UI_StatusEffectWidget_C.SetShowEffectText");
		
		UUI_StatusEffectWidget_C_SetShowEffectText_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectWidget.UI_StatusEffectWidget_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectWidget_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectWidget.UI_StatusEffectWidget_C.OnGlobalColorChange");
		
		UUI_StatusEffectWidget_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectWidget.UI_StatusEffectWidget_C.SetStatusEffectData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FStatusEffectData                           StatusEffect                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_StatusEffectWidget_C::SetStatusEffectData(const struct FStatusEffectData& StatusEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectWidget.UI_StatusEffectWidget_C.SetStatusEffectData");
		
		UUI_StatusEffectWidget_C_SetStatusEffectData_Params params {};
		params.StatusEffect = StatusEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectWidget.UI_StatusEffectWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_StatusEffectWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectWidget.UI_StatusEffectWidget_C.Construct");
		
		UUI_StatusEffectWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectWidget.UI_StatusEffectWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_StatusEffectWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectWidget.UI_StatusEffectWidget_C.PreConstruct");
		
		UUI_StatusEffectWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StatusEffectWidget.UI_StatusEffectWidget_C.ExecuteUbergraph_UI_StatusEffectWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StatusEffectWidget_C::ExecuteUbergraph_UI_StatusEffectWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StatusEffectWidget.UI_StatusEffectWidget_C.ExecuteUbergraph_UI_StatusEffectWidget");
		
		UUI_StatusEffectWidget_C_ExecuteUbergraph_UI_StatusEffectWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_StatusEffectWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_StatusEffectWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_StatusEffectWidget.UI_StatusEffectWidget_C");
		return ptr;
	}

}


