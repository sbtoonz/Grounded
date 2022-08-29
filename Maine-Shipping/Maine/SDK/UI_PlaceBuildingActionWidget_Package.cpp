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
	 * 		Name   -> Function UI_PlaceBuildingActionWidget.UI_PlaceBuildingActionWidget_C.GetIconColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_PlaceBuildingActionWidget_C::GetIconColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlaceBuildingActionWidget.UI_PlaceBuildingActionWidget_C.GetIconColor");
		
		UUI_PlaceBuildingActionWidget_C_GetIconColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlaceBuildingActionWidget.UI_PlaceBuildingActionWidget_C.Get_GamepadHolder_BrushColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_PlaceBuildingActionWidget_C::Get_GamepadHolder_BrushColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlaceBuildingActionWidget.UI_PlaceBuildingActionWidget_C.Get_GamepadHolder_BrushColor");
		
		UUI_PlaceBuildingActionWidget_C_Get_GamepadHolder_BrushColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlaceBuildingActionWidget.UI_PlaceBuildingActionWidget_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_PlaceBuildingActionWidget_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlaceBuildingActionWidget.UI_PlaceBuildingActionWidget_C.OnGlobalColorChange");
		
		UUI_PlaceBuildingActionWidget_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_PlaceBuildingActionWidget.UI_PlaceBuildingActionWidget_C.ExecuteUbergraph_UI_PlaceBuildingActionWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_PlaceBuildingActionWidget_C::ExecuteUbergraph_UI_PlaceBuildingActionWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PlaceBuildingActionWidget.UI_PlaceBuildingActionWidget_C.ExecuteUbergraph_UI_PlaceBuildingActionWidget");
		
		UUI_PlaceBuildingActionWidget_C_ExecuteUbergraph_UI_PlaceBuildingActionWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PlaceBuildingActionWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PlaceBuildingActionWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PlaceBuildingActionWidget.UI_PlaceBuildingActionWidget_C");
		return ptr;
	}

}


