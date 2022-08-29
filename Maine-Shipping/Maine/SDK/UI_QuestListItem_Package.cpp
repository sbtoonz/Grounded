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
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.GetObjectives
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UBaseObjective*>                      Objective                                                  (Parm, OutParm)
	 */
	void UUI_QuestListItem_C::GetObjectives(TArray<class UBaseObjective*>* Objective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.GetObjectives");
		
		UUI_QuestListItem_C_GetObjectives_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Objective != nullptr)
			*Objective = params.Objective;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.GetDisplayDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Description                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_QuestListItem_C::GetDisplayDescription(class FString* Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.GetDisplayDescription");
		
		UUI_QuestListItem_C_GetDisplayDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Description != nullptr)
			*Description = params.Description;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.GetDisplayName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_QuestListItem_C::GetDisplayName(class FString* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.GetDisplayName");
		
		UUI_QuestListItem_C_GetDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.GetCompletedColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_QuestListItem_C::GetCompletedColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.GetCompletedColor");
		
		UUI_QuestListItem_C_GetCompletedColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.SetUnhoverStyle
	 * 		Flags  -> ()
	 */
	void UUI_QuestListItem_C::SetUnhoverStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.SetUnhoverStyle");
		
		UUI_QuestListItem_C_SetUnhoverStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.SetHoverStyle
	 * 		Flags  -> ()
	 */
	void UUI_QuestListItem_C::SetHoverStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.SetHoverStyle");
		
		UUI_QuestListItem_C_SetHoverStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.SetDisabledStyle
	 * 		Flags  -> ()
	 */
	void UUI_QuestListItem_C::SetDisabledStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.SetDisabledStyle");
		
		UUI_QuestListItem_C_SetDisabledStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.SetEnabledStyle
	 * 		Flags  -> ()
	 */
	void UUI_QuestListItem_C::SetEnabledStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.SetEnabledStyle");
		
		UUI_QuestListItem_C_SetEnabledStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.GetAttentionColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_QuestListItem_C::GetAttentionColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.GetAttentionColor");
		
		UUI_QuestListItem_C_GetAttentionColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.GetHeaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_QuestListItem_C::GetHeaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.GetHeaderColor");
		
		UUI_QuestListItem_C_GetHeaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseQuest*                                  Quest                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_QuestListItem_C::Initialize(class UBaseQuest* Quest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.Initialize");
		
		UUI_QuestListItem_C_Initialize_Params params {};
		params.Quest = Quest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.SetQuestComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Complete                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_QuestListItem_C::SetQuestComplete(bool Complete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.SetQuestComplete");
		
		UUI_QuestListItem_C_SetQuestComplete_Params params {};
		params.Complete = Complete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.SetIsValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_QuestListItem_C::SetIsValid(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.SetIsValid");
		
		UUI_QuestListItem_C_SetIsValid_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_QuestListItem_C::BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UUI_QuestListItem_C_BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_QuestListItem_C::BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UUI_QuestListItem_C_BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.SetIsStickied
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsStickied                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_QuestListItem_C::SetIsStickied(bool IsStickied)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.SetIsStickied");
		
		UUI_QuestListItem_C_SetIsStickied_Params params {};
		params.IsStickied = IsStickied;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.OnAddedToFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_QuestListItem_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.OnAddedToFocusPath");
		
		UUI_QuestListItem_C_OnAddedToFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_QuestListItem_C::SetSelected(bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.SetSelected");
		
		UUI_QuestListItem_C_SetSelected_Params params {};
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_QuestListItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.Construct");
		
		UUI_QuestListItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_QuestListItem_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.OnGlobalColorChange");
		
		UUI_QuestListItem_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.SetIsTutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsTutorial                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_QuestListItem_C::SetIsTutorial(bool IsTutorial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.SetIsTutorial");
		
		UUI_QuestListItem_C_SetIsTutorial_Params params {};
		params.IsTutorial = IsTutorial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.OnRemovedFromFocusPath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_QuestListItem_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.OnRemovedFromFocusPath");
		
		UUI_QuestListItem_C_OnRemovedFromFocusPath_Params params {};
		params.InFocusEvent = InFocusEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_QuestListItem_C::BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		UUI_QuestListItem_C_BndEvt__ObjectiveButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.ExecuteUbergraph_UI_QuestListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_QuestListItem_C::ExecuteUbergraph_UI_QuestListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.ExecuteUbergraph_UI_QuestListItem");
		
		UUI_QuestListItem_C_ExecuteUbergraph_UI_QuestListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestListItem.UI_QuestListItem_C.OnFocused__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_QuestListItem_C*                         QuestListItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_QuestListItem_C::OnFocused__DelegateSignature(class UUI_QuestListItem_C* QuestListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestListItem.UI_QuestListItem_C.OnFocused__DelegateSignature");
		
		UUI_QuestListItem_C_OnFocused__DelegateSignature_Params params {};
		params.QuestListItem = QuestListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_QuestListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_QuestListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_QuestListItem.UI_QuestListItem_C");
		return ptr;
	}

}


