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
	 * 		Name   -> Function UI_BestiaryDetails.UI_BestiaryDetails_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FDataTableRowHandle                         BestiaryRowHandle                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_BestiaryDetails_C::Initialize(const struct FDataTableRowHandle& ItemRowHandle, const struct FDataTableRowHandle& BestiaryRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_BestiaryDetails.UI_BestiaryDetails_C.Initialize");
		
		UUI_BestiaryDetails_C_Initialize_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		params.BestiaryRowHandle = BestiaryRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_BestiaryDetails_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_BestiaryDetails_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_BestiaryDetails.UI_BestiaryDetails_C");
		return ptr;
	}

}


