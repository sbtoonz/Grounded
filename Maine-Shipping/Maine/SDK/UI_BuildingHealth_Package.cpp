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
	 * 		Name   -> Function UI_BuildingHealth.UI_BuildingHealth_C.GetFragileBarColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FragileRatio                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FLinearColor UUI_BuildingHealth_C::GetFragileBarColor(float FragileRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingHealth.UI_BuildingHealth_C.GetFragileBarColor");
		
		UUI_BuildingHealth_C_GetFragileBarColor_Params params {};
		params.FragileRatio = FragileRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingHealth.UI_BuildingHealth_C.GetHealthBarColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HealthRatio                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FLinearColor UUI_BuildingHealth_C::GetHealthBarColor(float HealthRatio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingHealth.UI_BuildingHealth_C.GetHealthBarColor");
		
		UUI_BuildingHealth_C_GetHealthBarColor_Params params {};
		params.HealthRatio = HealthRatio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingHealth.UI_BuildingHealth_C.SetBuilding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABuilding*                                   Building                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuildingHealth_C::SetBuilding(class ABuilding* Building)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingHealth.UI_BuildingHealth_C.SetBuilding");
		
		UUI_BuildingHealth_C_SetBuilding_Params params {};
		params.Building = Building;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingHealth.UI_BuildingHealth_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_BuildingHealth_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingHealth.UI_BuildingHealth_C.OnGlobalColorChange");
		
		UUI_BuildingHealth_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingHealth.UI_BuildingHealth_C.UnsetActor
	 * 		Flags  -> ()
	 */
	void UUI_BuildingHealth_C::UnsetActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingHealth.UI_BuildingHealth_C.UnsetActor");
		
		UUI_BuildingHealth_C_UnsetActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingHealth.UI_BuildingHealth_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_BuildingHealth_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingHealth.UI_BuildingHealth_C.Construct");
		
		UUI_BuildingHealth_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildingHealth.UI_BuildingHealth_C.ExecuteUbergraph_UI_BuildingHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuildingHealth_C::ExecuteUbergraph_UI_BuildingHealth(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildingHealth.UI_BuildingHealth_C.ExecuteUbergraph_UI_BuildingHealth");
		
		UUI_BuildingHealth_C_ExecuteUbergraph_UI_BuildingHealth_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BuildingHealth_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BuildingHealth_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BuildingHealth.UI_BuildingHealth_C");
		return ptr;
	}

}


