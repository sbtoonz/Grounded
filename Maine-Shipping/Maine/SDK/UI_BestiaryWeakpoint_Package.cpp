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
	 * 		Name   -> Function UI_BestiaryWeakpoint.UI_BestiaryWeakpoint_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyItemDisplayData                         DisplayData                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_BestiaryWeakpoint_C::SetData(const struct FKeyItemDisplayData& DisplayData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BestiaryWeakpoint.UI_BestiaryWeakpoint_C.SetData");
		
		UUI_BestiaryWeakpoint_C_SetData_Params params {};
		params.DisplayData = DisplayData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BestiaryWeakpoint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BestiaryWeakpoint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BestiaryWeakpoint.UI_BestiaryWeakpoint_C");
		return ptr;
	}

}


