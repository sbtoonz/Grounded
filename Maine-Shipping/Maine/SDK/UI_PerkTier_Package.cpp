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
	 * 		Name   -> Function UI_PerkTier.UI_PerkTier_C.SetFilled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Filled                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_PerkTier_C::SetFilled(bool Filled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_PerkTier.UI_PerkTier_C.SetFilled");
		
		UUI_PerkTier_C_SetFilled_Params params {};
		params.Filled = Filled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_PerkTier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_PerkTier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PerkTier.UI_PerkTier_C");
		return ptr;
	}

}


