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
	 * 		Name   -> Function UI_BasicTooltip.UI_BasicTooltip_C.TooltipHolderVisibility
	 * 		Flags  -> ()
	 */
	ESlateVisibility UUI_BasicTooltip_C::TooltipHolderVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BasicTooltip.UI_BasicTooltip_C.TooltipHolderVisibility");
		
		UUI_BasicTooltip_C_TooltipHolderVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BasicTooltip.UI_BasicTooltip_C.GetBasicText
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_BasicTooltip_C::GetBasicText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BasicTooltip.UI_BasicTooltip_C.GetBasicText");
		
		UUI_BasicTooltip_C_GetBasicText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BasicTooltip.UI_BasicTooltip_C.GetSCABOSAccentOne
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_BasicTooltip_C::GetSCABOSAccentOne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BasicTooltip.UI_BasicTooltip_C.GetSCABOSAccentOne");
		
		UUI_BasicTooltip_C_GetSCABOSAccentOne_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BasicTooltip.UI_BasicTooltip_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_BasicTooltip_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BasicTooltip.UI_BasicTooltip_C.Construct");
		
		UUI_BasicTooltip_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BasicTooltip.UI_BasicTooltip_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_BasicTooltip_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BasicTooltip.UI_BasicTooltip_C.Destruct");
		
		UUI_BasicTooltip_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BasicTooltip.UI_BasicTooltip_C.ExecuteUbergraph_UI_BasicTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BasicTooltip_C::ExecuteUbergraph_UI_BasicTooltip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BasicTooltip.UI_BasicTooltip_C.ExecuteUbergraph_UI_BasicTooltip");
		
		UUI_BasicTooltip_C_ExecuteUbergraph_UI_BasicTooltip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BasicTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BasicTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BasicTooltip.UI_BasicTooltip_C");
		return ptr;
	}

}


