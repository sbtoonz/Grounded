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
	 * 		Name   -> Function UI_MapPuzzleContainer.UI_MapPuzzleContainer_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_MapPuzzleContainer_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPuzzleContainer.UI_MapPuzzleContainer_C.OnGlobalColorChange");
		
		UUI_MapPuzzleContainer_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapPuzzleContainer.UI_MapPuzzleContainer_C.ExecuteUbergraph_UI_MapPuzzleContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapPuzzleContainer_C::ExecuteUbergraph_UI_MapPuzzleContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapPuzzleContainer.UI_MapPuzzleContainer_C.ExecuteUbergraph_UI_MapPuzzleContainer");
		
		UUI_MapPuzzleContainer_C_ExecuteUbergraph_UI_MapPuzzleContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MapPuzzleContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MapPuzzleContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MapPuzzleContainer.UI_MapPuzzleContainer_C");
		return ptr;
	}

}


