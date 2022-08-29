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
	 * 		Name   -> Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.HideChannelIfUnbound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInteractionChannel                                Channel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUDInteractionManager_C::HideChannelIfUnbound(EInteractionChannel Channel, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.HideChannelIfUnbound");
		
		UUI_HUDInteractionManager_C_HideChannelIfUnbound_Params params {};
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.RefreshInteractable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsNew                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUDInteractionManager_C::RefreshInteractable(bool IsNew)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.RefreshInteractable");
		
		UUI_HUDInteractionManager_C_RefreshInteractable_Params params {};
		params.IsNew = IsNew;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.GetInteractableInRange
	 * 		Flags  -> ()
	 */
	void UUI_HUDInteractionManager_C::GetInteractableInRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.GetInteractableInRange");
		
		UUI_HUDInteractionManager_C_GetInteractableInRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.SetLargeFont
	 * 		Flags  -> ()
	 */
	void UUI_HUDInteractionManager_C::SetLargeFont()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.SetLargeFont");
		
		UUI_HUDInteractionManager_C_SetLargeFont_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.OnInteractableChanged
	 * 		Flags  -> ()
	 */
	void UUI_HUDInteractionManager_C::OnInteractableChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.OnInteractableChanged");
		
		UUI_HUDInteractionManager_C_OnInteractableChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.HandleInteractWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_HUDControl_C*                            ControlWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractionChannel                                InteractionChannel                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDInteractionManager_C::HandleInteractWidget(class UUI_HUDControl_C* ControlWidget, EInteractionChannel InteractionChannel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.HandleInteractWidget");
		
		UUI_HUDInteractionManager_C_HandleInteractWidget_Params params {};
		params.ControlWidget = ControlWidget;
		params.InteractionChannel = InteractionChannel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_HUDInteractionManager_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.Construct");
		
		UUI_HUDInteractionManager_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_HUDInteractionManager_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.Destruct");
		
		UUI_HUDInteractionManager_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.EventLargeFonts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_HUDInteractionManager_C::EventLargeFonts(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.EventLargeFonts");
		
		UUI_HUDInteractionManager_C_EventLargeFonts_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_HUDInteractionManager_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.OnGlobalColorChange");
		
		UUI_HUDInteractionManager_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.OnPossessedPlayerChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerCharacter*                    NewPlayerCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDInteractionManager_C::OnPossessedPlayerChange(class ASurvivalPlayerCharacter* NewPlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.OnPossessedPlayerChange");
		
		UUI_HUDInteractionManager_C_OnPossessedPlayerChange_Params params {};
		params.NewPlayerCharacter = NewPlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.RefreshAfterDelay
	 * 		Flags  -> ()
	 */
	void UUI_HUDInteractionManager_C::RefreshAfterDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.RefreshAfterDelay");
		
		UUI_HUDInteractionManager_C_RefreshAfterDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.ExecuteUbergraph_UI_HUDInteractionManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_HUDInteractionManager_C::ExecuteUbergraph_UI_HUDInteractionManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_HUDInteractionManager.UI_HUDInteractionManager_C.ExecuteUbergraph_UI_HUDInteractionManager");
		
		UUI_HUDInteractionManager_C_ExecuteUbergraph_UI_HUDInteractionManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_HUDInteractionManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_HUDInteractionManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDInteractionManager.UI_HUDInteractionManager_C");
		return ptr;
	}

}


