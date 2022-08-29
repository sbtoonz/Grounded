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
	 * 		Name   -> Function BP_WidgetManager.BP_WidgetManager_C.CreateStringInputWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TitleText                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      BodyText                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsPassword                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_StringInputPopup_C*                      ConfirmationWindow                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WidgetManager_C::CreateStringInputWindow(const class FString& TitleText, const class FString& BodyText, bool IsPassword, class UUI_StringInputPopup_C** ConfirmationWindow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WidgetManager.BP_WidgetManager_C.CreateStringInputWindow");
		
		UBP_WidgetManager_C_CreateStringInputWindow_Params params {};
		params.TitleText = TitleText;
		params.BodyText = BodyText;
		params.IsPassword = IsPassword;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConfirmationWindow != nullptr)
			*ConfirmationWindow = params.ConfirmationWindow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WidgetManager.BP_WidgetManager_C.OpenQuestsMenu
	 * 		Flags  -> ()
	 */
	void UBP_WidgetManager_C::OpenQuestsMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WidgetManager.BP_WidgetManager_C.OpenQuestsMenu");
		
		UBP_WidgetManager_C_OpenQuestsMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WidgetManager.BP_WidgetManager_C.ClearStates
	 * 		Flags  -> ()
	 */
	void UBP_WidgetManager_C::ClearStates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WidgetManager.BP_WidgetManager_C.ClearStates");
		
		UBP_WidgetManager_C_ClearStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WidgetManager.BP_WidgetManager_C.CreateConfirmationWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TitleText                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      BodyText                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               OkButtonOnly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UUI_ConfirmationPopUp_C*                     ConfirmationWindow                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WidgetManager_C::CreateConfirmationWindow(const class FString& TitleText, const class FString& BodyText, bool OkButtonOnly, class UUI_ConfirmationPopUp_C** ConfirmationWindow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WidgetManager.BP_WidgetManager_C.CreateConfirmationWindow");
		
		UBP_WidgetManager_C_CreateConfirmationWindow_Params params {};
		params.TitleText = TitleText;
		params.BodyText = BodyText;
		params.OkButtonOnly = OkButtonOnly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConfirmationWindow != nullptr)
			*ConfirmationWindow = params.ConfirmationWindow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WidgetManager.BP_WidgetManager_C.OpenMapMenu
	 * 		Flags  -> ()
	 */
	void UBP_WidgetManager_C::OpenMapMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WidgetManager.BP_WidgetManager_C.OpenMapMenu");
		
		UBP_WidgetManager_C_OpenMapMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WidgetManager.BP_WidgetManager_C.GetOrOpenInGameMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_InGameMenu_C*                            Menu                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WidgetManager_C::GetOrOpenInGameMenu(class UUI_InGameMenu_C** Menu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WidgetManager.BP_WidgetManager_C.GetOrOpenInGameMenu");
		
		UBP_WidgetManager_C_GetOrOpenInGameMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Menu != nullptr)
			*Menu = params.Menu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WidgetManager.BP_WidgetManager_C.OpenCraftingMenu
	 * 		Flags  -> ()
	 */
	void UBP_WidgetManager_C::OpenCraftingMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WidgetManager.BP_WidgetManager_C.OpenCraftingMenu");
		
		UBP_WidgetManager_C_OpenCraftingMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WidgetManager.BP_WidgetManager_C.OpenInventoryMenu
	 * 		Flags  -> ()
	 */
	void UBP_WidgetManager_C::OpenInventoryMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WidgetManager.BP_WidgetManager_C.OpenInventoryMenu");
		
		UBP_WidgetManager_C_OpenInventoryMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WidgetManager.BP_WidgetManager_C.HandleQuickMenuOpen
	 * 		Flags  -> ()
	 */
	void UBP_WidgetManager_C::HandleQuickMenuOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WidgetManager.BP_WidgetManager_C.HandleQuickMenuOpen");
		
		UBP_WidgetManager_C_HandleQuickMenuOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WidgetManager.BP_WidgetManager_C.OnGameStateReset
	 * 		Flags  -> ()
	 */
	void UBP_WidgetManager_C::OnGameStateReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WidgetManager.BP_WidgetManager_C.OnGameStateReset");
		
		UBP_WidgetManager_C_OnGameStateReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_WidgetManager.BP_WidgetManager_C.ExecuteUbergraph_BP_WidgetManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_WidgetManager_C::ExecuteUbergraph_BP_WidgetManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WidgetManager.BP_WidgetManager_C.ExecuteUbergraph_BP_WidgetManager");
		
		UBP_WidgetManager_C_ExecuteUbergraph_BP_WidgetManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_WidgetManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_WidgetManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WidgetManager.BP_WidgetManager_C");
		return ptr;
	}

}


