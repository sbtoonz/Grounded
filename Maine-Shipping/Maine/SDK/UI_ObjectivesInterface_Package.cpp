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
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.HandleKeyEventChord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 InChord                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	bool UUI_ObjectivesInterface_C::HandleKeyEventChord(const struct FInputChord& InChord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.HandleKeyEventChord");
		
		UUI_ObjectivesInterface_C_HandleKeyEventChord_Params params {};
		params.InChord = InChord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.HandlePinnedStartingState
	 * 		Flags  -> ()
	 */
	void UUI_ObjectivesInterface_C::HandlePinnedStartingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.HandlePinnedStartingState");
		
		UUI_ObjectivesInterface_C_HandlePinnedStartingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.ToggleSelectedStickyQuest
	 * 		Flags  -> ()
	 */
	void UUI_ObjectivesInterface_C::ToggleSelectedStickyQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.ToggleSelectedStickyQuest");
		
		UUI_ObjectivesInterface_C_ToggleSelectedStickyQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.GetQuestListItemForQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseQuest*                                  BaseQuest                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_QuestListItem_C*                         QuestListItem                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ObjectivesInterface_C::GetQuestListItemForQuest(class UBaseQuest* BaseQuest, class UUI_QuestListItem_C** QuestListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.GetQuestListItemForQuest");
		
		UUI_ObjectivesInterface_C_GetQuestListItemForQuest_Params params {};
		params.BaseQuest = BaseQuest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QuestListItem != nullptr)
			*QuestListItem = params.QuestListItem;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.GetQuestContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Completed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPanelWidget*                                Container                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ObjectivesInterface_C::GetQuestContainer(bool Completed, class UPanelWidget** Container)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.GetQuestContainer");
		
		UUI_ObjectivesInterface_C_GetQuestContainer_Params params {};
		params.Completed = Completed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Container != nullptr)
			*Container = params.Container;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.CreateQuestListItemWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_QuestListItem_C*                         Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ObjectivesInterface_C::CreateQuestListItemWidget(class UUI_QuestListItem_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.CreateQuestListItemWidget");
		
		UUI_ObjectivesInterface_C_CreateQuestListItemWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.GetAccentOne
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ObjectivesInterface_C::GetAccentOne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.GetAccentOne");
		
		UUI_ObjectivesInterface_C_GetAccentOne_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.GetGlobalDarkener
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_ObjectivesInterface_C::GetGlobalDarkener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.GetGlobalDarkener");
		
		UUI_ObjectivesInterface_C_GetGlobalDarkener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.PopulateAllQuests
	 * 		Flags  -> ()
	 */
	void UUI_ObjectivesInterface_C::PopulateAllQuests()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.PopulateAllQuests");
		
		UUI_ObjectivesInterface_C_PopulateAllQuests_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.GetBasicText
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_ObjectivesInterface_C::GetBasicText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.GetBasicText");
		
		UUI_ObjectivesInterface_C_GetBasicText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.GetAccentTwo
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ObjectivesInterface_C::GetAccentTwo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.GetAccentTwo");
		
		UUI_ObjectivesInterface_C_GetAccentTwo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.RefreshBottomButtons
	 * 		Flags  -> ()
	 */
	void UUI_ObjectivesInterface_C::RefreshBottomButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.RefreshBottomButtons");
		
		UUI_ObjectivesInterface_C_RefreshBottomButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.GetHeaderColor
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_ObjectivesInterface_C::GetHeaderColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.GetHeaderColor");
		
		UUI_ObjectivesInterface_C_GetHeaderColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.PopulateQuestsOfType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CompletedQuests                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ObjectivesInterface_C::PopulateQuestsOfType(bool CompletedQuests)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.PopulateQuestsOfType");
		
		UUI_ObjectivesInterface_C_PopulateQuestsOfType_Params params {};
		params.CompletedQuests = CompletedQuests;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.RefreshUI
	 * 		Flags  -> ()
	 */
	void UUI_ObjectivesInterface_C::RefreshUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.RefreshUI");
		
		UUI_ObjectivesInterface_C_RefreshUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.BndEvt__Close_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_ObjectivesInterface_C::BndEvt__Close_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.BndEvt__Close_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature");
		
		UUI_ObjectivesInterface_C_BndEvt__Close_K2Node_ComponentBoundEvent_0_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.OnQuestFocused
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_QuestListItem_C*                         QuestListItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ObjectivesInterface_C::OnQuestFocused(class UUI_QuestListItem_C* QuestListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.OnQuestFocused");
		
		UUI_ObjectivesInterface_C_OnQuestFocused_Params params {};
		params.QuestListItem = QuestListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.SetSelectedQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_QuestListItem_C*                         SelectedQuest                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ObjectivesInterface_C::SetSelectedQuest(class UUI_QuestListItem_C* SelectedQuest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.SetSelectedQuest");
		
		UUI_ObjectivesInterface_C_SetSelectedQuest_Params params {};
		params.SelectedQuest = SelectedQuest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.SelectQuestByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ObjectivesInterface_C::SelectQuestByIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.SelectQuestByIndex");
		
		UUI_ObjectivesInterface_C_SelectQuestByIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.SelectQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseQuest*                                  Quest                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ObjectivesInterface_C::SelectQuest(class UBaseQuest* Quest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.SelectQuest");
		
		UUI_ObjectivesInterface_C_SelectQuest_Params params {};
		params.Quest = Quest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.BndEvt__StickyQuestButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_ObjectivesInterface_C::BndEvt__StickyQuestButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.BndEvt__StickyQuestButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature");
		
		UUI_ObjectivesInterface_C_BndEvt__StickyQuestButton_K2Node_ComponentBoundEvent_1_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.RefreshQuests
	 * 		Flags  -> ()
	 */
	void UUI_ObjectivesInterface_C::RefreshQuests()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.RefreshQuests");
		
		UUI_ObjectivesInterface_C_RefreshQuests_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.BndEvt__UnstickyQuestButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_ObjectivesInterface_C::BndEvt__UnstickyQuestButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.BndEvt__UnstickyQuestButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature");
		
		UUI_ObjectivesInterface_C_BndEvt__UnstickyQuestButton_K2Node_ComponentBoundEvent_2_OnNormalButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_ObjectivesInterface_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.OnGlobalColorChange");
		
		UUI_ObjectivesInterface_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_ObjectivesInterface_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.Construct");
		
		UUI_ObjectivesInterface_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.EventLargeFont
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_ObjectivesInterface_C::EventLargeFont(bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.EventLargeFont");
		
		UUI_ObjectivesInterface_C_EventLargeFont_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_ObjectivesInterface_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.Destruct");
		
		UUI_ObjectivesInterface_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.NotifyStickiedQuestsChanged
	 * 		Flags  -> ()
	 */
	void UUI_ObjectivesInterface_C::NotifyStickiedQuestsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.NotifyStickiedQuestsChanged");
		
		UUI_ObjectivesInterface_C_NotifyStickiedQuestsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.ExecuteUbergraph_UI_ObjectivesInterface
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ObjectivesInterface_C::ExecuteUbergraph_UI_ObjectivesInterface(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectivesInterface.UI_ObjectivesInterface_C.ExecuteUbergraph_UI_ObjectivesInterface");
		
		UUI_ObjectivesInterface_C_ExecuteUbergraph_UI_ObjectivesInterface_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ObjectivesInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ObjectivesInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ObjectivesInterface.UI_ObjectivesInterface_C");
		return ptr;
	}

}


