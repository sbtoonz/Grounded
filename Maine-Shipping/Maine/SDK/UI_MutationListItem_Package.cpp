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
	 * 		Name   -> Function UI_MutationListItem.UI_MutationListItem_C.SetPerk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPerkData                                   PerkData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_MutationListItem_C::SetPerk(const struct FPerkData& PerkData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MutationListItem.UI_MutationListItem_C.SetPerk");
		
		UUI_MutationListItem_C_SetPerk_Params params {};
		params.PerkData = PerkData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MutationListItem.UI_MutationListItem_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_MutationListItem_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MutationListItem.UI_MutationListItem_C.OnGlobalColorChange");
		
		UUI_MutationListItem_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MutationListItem.UI_MutationListItem_C.ExecuteUbergraph_UI_MutationListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MutationListItem_C::ExecuteUbergraph_UI_MutationListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MutationListItem.UI_MutationListItem_C.ExecuteUbergraph_UI_MutationListItem");
		
		UUI_MutationListItem_C_ExecuteUbergraph_UI_MutationListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MutationListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MutationListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MutationListItem.UI_MutationListItem_C");
		return ptr;
	}

}


