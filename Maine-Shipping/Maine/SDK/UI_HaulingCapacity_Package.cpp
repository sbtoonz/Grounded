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
	 * 		Name   -> Function UI_HaulingCapacity.UI_HaulingCapacity_C.ClearPips
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StartIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HaulingCapacity_C::ClearPips(int32_t StartIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HaulingCapacity.UI_HaulingCapacity_C.ClearPips");
		
		UUI_HaulingCapacity_C_ClearPips_Params params {};
		params.StartIndex = StartIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HaulingCapacity.UI_HaulingCapacity_C.ActivatePip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UHaulingComponent*                           HaulingComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_HaulingPip_C*                            Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HaulingCapacity_C::ActivatePip(int32_t Index, class UHaulingComponent* HaulingComponent, class UUI_HaulingPip_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HaulingCapacity.UI_HaulingCapacity_C.ActivatePip");
		
		UUI_HaulingCapacity_C_ActivatePip_Params params {};
		params.Index = Index;
		params.HaulingComponent = HaulingComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HaulingCapacity.UI_HaulingCapacity_C.GetIconColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_HaulingCapacity_C::GetIconColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HaulingCapacity.UI_HaulingCapacity_C.GetIconColor");
		
		UUI_HaulingCapacity_C_GetIconColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HaulingCapacity.UI_HaulingCapacity_C.PopulatePips
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHaulingComponent*                           HaulingComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HaulingCapacity_C::PopulatePips(class UHaulingComponent* HaulingComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HaulingCapacity.UI_HaulingCapacity_C.PopulatePips");
		
		UUI_HaulingCapacity_C_PopulatePips_Params params {};
		params.HaulingComponent = HaulingComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HaulingCapacity.UI_HaulingCapacity_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_HaulingCapacity_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HaulingCapacity.UI_HaulingCapacity_C.OnGlobalColorChange");
		
		UUI_HaulingCapacity_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HaulingCapacity.UI_HaulingCapacity_C.OnPossessedPlayerChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerCharacter*                    NewPlayerCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HaulingCapacity_C::OnPossessedPlayerChange(class ASurvivalPlayerCharacter* NewPlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HaulingCapacity.UI_HaulingCapacity_C.OnPossessedPlayerChange");
		
		UUI_HaulingCapacity_C_OnPossessedPlayerChange_Params params {};
		params.NewPlayerCharacter = NewPlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HaulingCapacity.UI_HaulingCapacity_C.On Hauling Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHaulingComponent*                           Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HaulingCapacity_C::On_Hauling_Changed(class UHaulingComponent* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HaulingCapacity.UI_HaulingCapacity_C.On Hauling Changed");
		
		UUI_HaulingCapacity_C_On_Hauling_Changed_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HaulingCapacity.UI_HaulingCapacity_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HaulingCapacity_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HaulingCapacity.UI_HaulingCapacity_C.Tick");
		
		UUI_HaulingCapacity_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HaulingCapacity.UI_HaulingCapacity_C.ExecuteUbergraph_UI_HaulingCapacity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HaulingCapacity_C::ExecuteUbergraph_UI_HaulingCapacity(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HaulingCapacity.UI_HaulingCapacity_C.ExecuteUbergraph_UI_HaulingCapacity");
		
		UUI_HaulingCapacity_C_ExecuteUbergraph_UI_HaulingCapacity_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HaulingCapacity_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HaulingCapacity_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HaulingCapacity.UI_HaulingCapacity_C");
		return ptr;
	}

}


