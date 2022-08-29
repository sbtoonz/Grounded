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
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.SequenceEvent__ENTRYPOINTUI_ObjectiveNotification_1
	 * 		Flags  -> ()
	 */
	void UUI_ObjectiveNotification_C::SequenceEvent__ENTRYPOINTUI_ObjectiveNotification_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.SequenceEvent__ENTRYPOINTUI_ObjectiveNotification_1");
		
		UUI_ObjectiveNotification_C_SequenceEvent__ENTRYPOINTUI_ObjectiveNotification_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.NotifyObjectiveUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseQuest*                                  Quest                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseObjective*                              Objective                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ObjectiveNotification_C::NotifyObjectiveUpdated(class UBaseQuest* Quest, class UBaseObjective* Objective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.NotifyObjectiveUpdated");
		
		UUI_ObjectiveNotification_C_NotifyObjectiveUpdated_Params params {};
		params.Quest = Quest;
		params.Objective = Objective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.NotifyObjectiveComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseQuest*                                  Quest                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseObjective*                              Objective                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ObjectiveNotification_C::NotifyObjectiveComplete(class UBaseQuest* Quest, class UBaseObjective* Objective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.NotifyObjectiveComplete");
		
		UUI_ObjectiveNotification_C_NotifyObjectiveComplete_Params params {};
		params.Quest = Quest;
		params.Objective = Objective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.NotifyQuestComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseQuest*                                  Quest                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ObjectiveNotification_C::NotifyQuestComplete(class UBaseQuest* Quest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.NotifyQuestComplete");
		
		UUI_ObjectiveNotification_C_NotifyQuestComplete_Params params {};
		params.Quest = Quest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.NotifyQuestStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseQuest*                                  Quest                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ObjectiveNotification_C::NotifyQuestStarted(class UBaseQuest* Quest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.NotifyQuestStarted");
		
		UUI_ObjectiveNotification_C_NotifyQuestStarted_Params params {};
		params.Quest = Quest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.InitializeObjectives
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UBaseObjective*>                      Objectives                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_ObjectiveNotification_C::InitializeObjectives(TArray<class UBaseObjective*>* Objectives)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.InitializeObjectives");
		
		UUI_ObjectiveNotification_C_InitializeObjectives_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Objectives != nullptr)
			*Objectives = params.Objectives;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.HasQueuedQuestNotifications
	 * 		Flags  -> ()
	 */
	bool UUI_ObjectiveNotification_C::HasQueuedQuestNotifications()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.HasQueuedQuestNotifications");
		
		UUI_ObjectiveNotification_C_HasQueuedQuestNotifications_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.GetObjectiveFGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ObjectiveNotification_C::GetObjectiveFGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.GetObjectiveFGColor");
		
		UUI_ObjectiveNotification_C_GetObjectiveFGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.GetIconDarkener
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ObjectiveNotification_C::GetIconDarkener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.GetIconDarkener");
		
		UUI_ObjectiveNotification_C_GetIconDarkener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.GetShadowColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ObjectiveNotification_C::GetShadowColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.GetShadowColor");
		
		UUI_ObjectiveNotification_C_GetShadowColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnObjectiveUpdateComplete
	 * 		Flags  -> ()
	 */
	void UUI_ObjectiveNotification_C::OnObjectiveUpdateComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnObjectiveUpdateComplete");
		
		UUI_ObjectiveNotification_C_OnObjectiveUpdateComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.GetObjectiveColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_ObjectiveNotification_C::GetObjectiveColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.GetObjectiveColor");
		
		UUI_ObjectiveNotification_C_GetObjectiveColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_ObjectiveNotification_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.Construct");
		
		UUI_ObjectiveNotification_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnQuestStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UQuest*                                      QuestData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ObjectiveNotification_C::OnQuestStarted(class UQuest* QuestData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnQuestStarted");
		
		UUI_ObjectiveNotification_C_OnQuestStarted_Params params {};
		params.QuestData = QuestData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnQuestComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UQuest*                                      QuestData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ObjectiveNotification_C::OnQuestComplete(class UQuest* QuestData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnQuestComplete");
		
		UUI_ObjectiveNotification_C_OnQuestComplete_Params params {};
		params.QuestData = QuestData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnObjectiveComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UQuest*                                      QuestData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObjective*                                  ObjectiveData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ObjectiveNotification_C::OnObjectiveComplete(class UQuest* QuestData, class UObjective* ObjectiveData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnObjectiveComplete");
		
		UUI_ObjectiveNotification_C_OnObjectiveComplete_Params params {};
		params.QuestData = QuestData;
		params.ObjectiveData = ObjectiveData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.InitializeQuestData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseQuest*                                  Quest                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ObjectiveNotification_C::InitializeQuestData(class UBaseQuest* Quest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.InitializeQuestData");
		
		UUI_ObjectiveNotification_C_InitializeQuestData_Params params {};
		params.Quest = Quest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.SignalQuestUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseQuest*                                  Quest                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ObjectiveNotification_C::SignalQuestUpdate(class UBaseQuest* Quest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.SignalQuestUpdate");
		
		UUI_ObjectiveNotification_C_SignalQuestUpdate_Params params {};
		params.Quest = Quest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_ObjectiveNotification_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnGlobalColorChange");
		
		UUI_ObjectiveNotification_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.ProcessQueuedQuestNotification
	 * 		Flags  -> ()
	 */
	void UUI_ObjectiveNotification_C::ProcessQueuedQuestNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.ProcessQueuedQuestNotification");
		
		UUI_ObjectiveNotification_C_ProcessQueuedQuestNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnBurgleQuestStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBurgleQuestInstance*                        Quest                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ObjectiveNotification_C::OnBurgleQuestStarted(class UBurgleQuestInstance* Quest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnBurgleQuestStarted");
		
		UUI_ObjectiveNotification_C_OnBurgleQuestStarted_Params params {};
		params.Quest = Quest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnBurgleQuestComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBurgleQuestInstance*                        Quest                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ObjectiveNotification_C::OnBurgleQuestComplete(class UBurgleQuestInstance* Quest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnBurgleQuestComplete");
		
		UUI_ObjectiveNotification_C_OnBurgleQuestComplete_Params params {};
		params.Quest = Quest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnBurgleObjectiveComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBurgleQuestInstance*                        Quest                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseObjective*                              ObjectiveData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ObjectiveNotification_C::OnBurgleObjectiveComplete(class UBurgleQuestInstance* Quest, class UBaseObjective* ObjectiveData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnBurgleObjectiveComplete");
		
		UUI_ObjectiveNotification_C_OnBurgleObjectiveComplete_Params params {};
		params.Quest = Quest;
		params.ObjectiveData = ObjectiveData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnBurgleObjectiveUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBurgleQuestInstance*                        Quest                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseObjective*                              ObjectiveData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ObjectiveNotification_C::OnBurgleObjectiveUpdated(class UBurgleQuestInstance* Quest, class UBaseObjective* ObjectiveData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.OnBurgleObjectiveUpdated");
		
		UUI_ObjectiveNotification_C_OnBurgleObjectiveUpdated_Params params {};
		params.Quest = Quest;
		params.ObjectiveData = ObjectiveData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.ExecuteUbergraph_UI_ObjectiveNotification
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ObjectiveNotification_C::ExecuteUbergraph_UI_ObjectiveNotification(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ObjectiveNotification.UI_ObjectiveNotification_C.ExecuteUbergraph_UI_ObjectiveNotification");
		
		UUI_ObjectiveNotification_C_ExecuteUbergraph_UI_ObjectiveNotification_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ObjectiveNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ObjectiveNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ObjectiveNotification.UI_ObjectiveNotification_C");
		return ptr;
	}

}


