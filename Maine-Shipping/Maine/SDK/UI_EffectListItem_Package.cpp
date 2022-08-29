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
	 * 		Name   -> Function UI_EffectListItem.UI_EffectListItem_C.SetStatusEffectTimeRemaining
	 * 		Flags  -> ()
	 */
	void UUI_EffectListItem_C::SetStatusEffectTimeRemaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EffectListItem.UI_EffectListItem_C.SetStatusEffectTimeRemaining");
		
		UUI_EffectListItem_C_SetStatusEffectTimeRemaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EffectListItem.UI_EffectListItem_C.GetEffectSecondsLeft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Seconds                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EffectListItem_C::GetEffectSecondsLeft(int32_t* Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EffectListItem.UI_EffectListItem_C.GetEffectSecondsLeft");
		
		UUI_EffectListItem_C_GetEffectSecondsLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Seconds != nullptr)
			*Seconds = params.Seconds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EffectListItem.UI_EffectListItem_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EffectListItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EffectListItem.UI_EffectListItem_C.Tick");
		
		UUI_EffectListItem_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EffectListItem.UI_EffectListItem_C.SetStatusEffectData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FStatusEffectData                           StatusEffect                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_EffectListItem_C::SetStatusEffectData(const struct FStatusEffectData& StatusEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EffectListItem.UI_EffectListItem_C.SetStatusEffectData");
		
		UUI_EffectListItem_C_SetStatusEffectData_Params params {};
		params.StatusEffect = StatusEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EffectListItem.UI_EffectListItem_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_EffectListItem_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EffectListItem.UI_EffectListItem_C.OnGlobalColorChange");
		
		UUI_EffectListItem_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EffectListItem.UI_EffectListItem_C.SetStatusEffectUIData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FStatusEffectData                           StatusEffectData                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_EffectListItem_C::SetStatusEffectUIData(const struct FStatusEffectData& StatusEffectData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EffectListItem.UI_EffectListItem_C.SetStatusEffectUIData");
		
		UUI_EffectListItem_C_SetStatusEffectUIData_Params params {};
		params.StatusEffectData = StatusEffectData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EffectListItem.UI_EffectListItem_C.SetStatusEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStatusEffect*                               StatusEffect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EffectListItem_C::SetStatusEffect(class UStatusEffect* StatusEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EffectListItem.UI_EffectListItem_C.SetStatusEffect");
		
		UUI_EffectListItem_C_SetStatusEffect_Params params {};
		params.StatusEffect = StatusEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_EffectListItem.UI_EffectListItem_C.ExecuteUbergraph_UI_EffectListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_EffectListItem_C::ExecuteUbergraph_UI_EffectListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_EffectListItem.UI_EffectListItem_C.ExecuteUbergraph_UI_EffectListItem");
		
		UUI_EffectListItem_C_ExecuteUbergraph_UI_EffectListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_EffectListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_EffectListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_EffectListItem.UI_EffectListItem_C");
		return ptr;
	}

}


