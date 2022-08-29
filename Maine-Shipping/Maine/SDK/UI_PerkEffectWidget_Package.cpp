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
	 * 		Name   -> Function UI_PerkEffectWidget.UI_PerkEffectWidget_C.SetStatusEffectTypeAndCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FStatusEffectUIData                         Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PerkEffectWidget_C::SetStatusEffectTypeAndCount(const struct FStatusEffectUIData& Type, int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkEffectWidget.UI_PerkEffectWidget_C.SetStatusEffectTypeAndCount");
		
		UUI_PerkEffectWidget_C_SetStatusEffectTypeAndCount_Params params {};
		params.Type = Type;
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkEffectWidget.UI_PerkEffectWidget_C.SetShowEffectText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PerkEffectWidget_C::SetShowEffectText(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkEffectWidget.UI_PerkEffectWidget_C.SetShowEffectText");
		
		UUI_PerkEffectWidget_C_SetShowEffectText_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkEffectWidget.UI_PerkEffectWidget_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_PerkEffectWidget_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkEffectWidget.UI_PerkEffectWidget_C.OnGlobalColorChange");
		
		UUI_PerkEffectWidget_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkEffectWidget.UI_PerkEffectWidget_C.SetStatusEffectData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FStatusEffectData                           StatusEffect                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_PerkEffectWidget_C::SetStatusEffectData(const struct FStatusEffectData& StatusEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkEffectWidget.UI_PerkEffectWidget_C.SetStatusEffectData");
		
		UUI_PerkEffectWidget_C_SetStatusEffectData_Params params {};
		params.StatusEffect = StatusEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkEffectWidget.UI_PerkEffectWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_PerkEffectWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkEffectWidget.UI_PerkEffectWidget_C.Construct");
		
		UUI_PerkEffectWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkEffectWidget.UI_PerkEffectWidget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PerkEffectWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkEffectWidget.UI_PerkEffectWidget_C.PreConstruct");
		
		UUI_PerkEffectWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PerkEffectWidget.UI_PerkEffectWidget_C.ExecuteUbergraph_UI_PerkEffectWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PerkEffectWidget_C::ExecuteUbergraph_UI_PerkEffectWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkEffectWidget.UI_PerkEffectWidget_C.ExecuteUbergraph_UI_PerkEffectWidget");
		
		UUI_PerkEffectWidget_C_ExecuteUbergraph_UI_PerkEffectWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PerkEffectWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PerkEffectWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PerkEffectWidget.UI_PerkEffectWidget_C");
		return ptr;
	}

}


