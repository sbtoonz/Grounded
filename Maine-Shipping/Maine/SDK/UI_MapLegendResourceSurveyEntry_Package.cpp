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
	 * 		Name   -> Function UI_MapLegendResourceSurveyEntry.UI_MapLegendResourceSurveyEntry_C.HandleSelectInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bHandled                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MapLegendResourceSurveyEntry_C::HandleSelectInput(bool* bHandled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendResourceSurveyEntry.UI_MapLegendResourceSurveyEntry_C.HandleSelectInput");
		
		UUI_MapLegendResourceSurveyEntry_C_HandleSelectInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bHandled != nullptr)
			*bHandled = params.bHandled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendResourceSurveyEntry.UI_MapLegendResourceSurveyEntry_C.UpdateDisplayName
	 * 		Flags  -> ()
	 */
	void UUI_MapLegendResourceSurveyEntry_C::UpdateDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendResourceSurveyEntry.UI_MapLegendResourceSurveyEntry_C.UpdateDisplayName");
		
		UUI_MapLegendResourceSurveyEntry_C_UpdateDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendResourceSurveyEntry.UI_MapLegendResourceSurveyEntry_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UUI_MapLegendResourceSurveyEntry_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendResourceSurveyEntry.UI_MapLegendResourceSurveyEntry_C.OnInitialized");
		
		UUI_MapLegendResourceSurveyEntry_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendResourceSurveyEntry.UI_MapLegendResourceSurveyEntry_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_MapLegendResourceSurveyEntry_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendResourceSurveyEntry.UI_MapLegendResourceSurveyEntry_C.Destruct");
		
		UUI_MapLegendResourceSurveyEntry_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendResourceSurveyEntry.UI_MapLegendResourceSurveyEntry_C.HandleSurveyedResourceChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResourceSurveyComponent*                    Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDataTableRowHandle                         ResourceHandle                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_MapLegendResourceSurveyEntry_C::HandleSurveyedResourceChanged(class UResourceSurveyComponent* Sender, const struct FDataTableRowHandle& ResourceHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendResourceSurveyEntry.UI_MapLegendResourceSurveyEntry_C.HandleSurveyedResourceChanged");
		
		UUI_MapLegendResourceSurveyEntry_C_HandleSurveyedResourceChanged_Params params {};
		params.Sender = Sender;
		params.ResourceHandle = ResourceHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendResourceSurveyEntry.UI_MapLegendResourceSurveyEntry_C.HandleResourceSurveyVisibleChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerState*                        Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bResourceSurveyVisible                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_MapLegendResourceSurveyEntry_C::HandleResourceSurveyVisibleChanged(class ASurvivalPlayerState* Sender, bool bResourceSurveyVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendResourceSurveyEntry.UI_MapLegendResourceSurveyEntry_C.HandleResourceSurveyVisibleChanged");
		
		UUI_MapLegendResourceSurveyEntry_C_HandleResourceSurveyVisibleChanged_Params params {};
		params.Sender = Sender;
		params.bResourceSurveyVisible = bResourceSurveyVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_MapLegendResourceSurveyEntry.UI_MapLegendResourceSurveyEntry_C.ExecuteUbergraph_UI_MapLegendResourceSurveyEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_MapLegendResourceSurveyEntry_C::ExecuteUbergraph_UI_MapLegendResourceSurveyEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_MapLegendResourceSurveyEntry.UI_MapLegendResourceSurveyEntry_C.ExecuteUbergraph_UI_MapLegendResourceSurveyEntry");
		
		UUI_MapLegendResourceSurveyEntry_C_ExecuteUbergraph_UI_MapLegendResourceSurveyEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_MapLegendResourceSurveyEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_MapLegendResourceSurveyEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MapLegendResourceSurveyEntry.UI_MapLegendResourceSurveyEntry_C");
		return ptr;
	}

}


