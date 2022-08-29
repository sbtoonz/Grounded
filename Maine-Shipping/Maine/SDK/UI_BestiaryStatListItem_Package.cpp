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
	 * 		Name   -> Function UI_BestiaryStatListItem.UI_BestiaryStatListItem_C.SetStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerStatConfig*                           StatConfig                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BestiaryStatListItem_C::SetStat(class UPlayerStatConfig* StatConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BestiaryStatListItem.UI_BestiaryStatListItem_C.SetStat");
		
		UUI_BestiaryStatListItem_C_SetStat_Params params {};
		params.StatConfig = StatConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BestiaryStatListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BestiaryStatListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BestiaryStatListItem.UI_BestiaryStatListItem_C");
		return ptr;
	}

}


