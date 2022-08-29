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
	 * 		Name   -> Function UI_BestiaryDamageType.UI_BestiaryDamageType_C.SetIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESurvivalDamageTypeFlags                           DamageTypeFlag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BestiaryDamageType_C::SetIcon(ESurvivalDamageTypeFlags DamageTypeFlag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BestiaryDamageType.UI_BestiaryDamageType_C.SetIcon");
		
		UUI_BestiaryDamageType_C_SetIcon_Params params {};
		params.DamageTypeFlag = DamageTypeFlag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BestiaryDamageType_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BestiaryDamageType_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BestiaryDamageType.UI_BestiaryDamageType_C");
		return ptr;
	}

}


