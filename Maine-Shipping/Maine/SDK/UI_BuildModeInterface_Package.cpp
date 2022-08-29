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
	 * 		Name   -> Function UI_BuildModeInterface.UI_BuildModeInterface_C.GetDefaultUserFocus
	 * 		Flags  -> ()
	 */
	class UWidget* UUI_BuildModeInterface_C::GetDefaultUserFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildModeInterface.UI_BuildModeInterface_C.GetDefaultUserFocus");
		
		UUI_BuildModeInterface_C_GetDefaultUserFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildModeInterface.UI_BuildModeInterface_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_BuildModeInterface_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildModeInterface.UI_BuildModeInterface_C.Construct");
		
		UUI_BuildModeInterface_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildModeInterface.UI_BuildModeInterface_C.RefreshWidget
	 * 		Flags  -> ()
	 */
	void UUI_BuildModeInterface_C::RefreshWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildModeInterface.UI_BuildModeInterface_C.RefreshWidget");
		
		UUI_BuildModeInterface_C_RefreshWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildModeInterface.UI_BuildModeInterface_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_BuildModeInterface_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildModeInterface.UI_BuildModeInterface_C.Destruct");
		
		UUI_BuildModeInterface_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_BuildModeInterface.UI_BuildModeInterface_C.ExecuteUbergraph_UI_BuildModeInterface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_BuildModeInterface_C::ExecuteUbergraph_UI_BuildModeInterface(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BuildModeInterface.UI_BuildModeInterface_C.ExecuteUbergraph_UI_BuildModeInterface");
		
		UUI_BuildModeInterface_C_ExecuteUbergraph_UI_BuildModeInterface_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BuildModeInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BuildModeInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BuildModeInterface.UI_BuildModeInterface_C");
		return ptr;
	}

}


