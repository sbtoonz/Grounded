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
	 * 		Name   -> Function UI_HotBarInterface.UI_HotBarInterface_C.GetDefaultUserFocus
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_HotBarInterface_C::GetDefaultUserFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarInterface.UI_HotBarInterface_C.GetDefaultUserFocus");
		
		UUI_HotBarInterface_C_GetDefaultUserFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarInterface.UI_HotBarInterface_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_HotBarInterface_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarInterface.UI_HotBarInterface_C.Destruct");
		
		UUI_HotBarInterface_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HotBarInterface.UI_HotBarInterface_C.ExecuteUbergraph_UI_HotBarInterface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HotBarInterface_C::ExecuteUbergraph_UI_HotBarInterface(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HotBarInterface.UI_HotBarInterface_C.ExecuteUbergraph_UI_HotBarInterface");
		
		UUI_HotBarInterface_C_ExecuteUbergraph_UI_HotBarInterface_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HotBarInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HotBarInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HotBarInterface.UI_HotBarInterface_C");
		return ptr;
	}

}


