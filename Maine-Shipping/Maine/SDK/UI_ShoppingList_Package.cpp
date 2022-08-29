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
	 * 		Name   -> Function UI_ShoppingList.UI_ShoppingList_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_ShoppingList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShoppingList.UI_ShoppingList_C.Construct");
		
		UUI_ShoppingList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ShoppingList.UI_ShoppingList_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_ShoppingList_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShoppingList.UI_ShoppingList_C.OnGlobalColorChange");
		
		UUI_ShoppingList_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ShoppingList.UI_ShoppingList_C.ExecuteUbergraph_UI_ShoppingList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ShoppingList_C::ExecuteUbergraph_UI_ShoppingList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ShoppingList.UI_ShoppingList_C.ExecuteUbergraph_UI_ShoppingList");
		
		UUI_ShoppingList_C_ExecuteUbergraph_UI_ShoppingList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ShoppingList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ShoppingList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ShoppingList.UI_ShoppingList_C");
		return ptr;
	}

}


