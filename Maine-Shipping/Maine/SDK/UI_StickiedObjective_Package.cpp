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
	 * 		Name   -> Function UI_StickiedObjective.UI_StickiedObjective_C.EvaluateVisibility
	 * 		Flags  -> ()
	 */
	void UUI_StickiedObjective_C::EvaluateVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StickiedObjective.UI_StickiedObjective_C.EvaluateVisibility");
		
		UUI_StickiedObjective_C_EvaluateVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StickiedObjective.UI_StickiedObjective_C.GetObjectiveFGColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_StickiedObjective_C::GetObjectiveFGColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StickiedObjective.UI_StickiedObjective_C.GetObjectiveFGColor");
		
		UUI_StickiedObjective_C_GetObjectiveFGColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StickiedObjective.UI_StickiedObjective_C.GetIconDarkener
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_StickiedObjective_C::GetIconDarkener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StickiedObjective.UI_StickiedObjective_C.GetIconDarkener");
		
		UUI_StickiedObjective_C_GetIconDarkener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StickiedObjective.UI_StickiedObjective_C.GetShadowColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_StickiedObjective_C::GetShadowColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StickiedObjective.UI_StickiedObjective_C.GetShadowColor");
		
		UUI_StickiedObjective_C_GetShadowColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StickiedObjective.UI_StickiedObjective_C.GetObjectiveColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_StickiedObjective_C::GetObjectiveColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StickiedObjective.UI_StickiedObjective_C.GetObjectiveColor");
		
		UUI_StickiedObjective_C_GetObjectiveColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StickiedObjective.UI_StickiedObjective_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_StickiedObjective_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StickiedObjective.UI_StickiedObjective_C.Construct");
		
		UUI_StickiedObjective_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StickiedObjective.UI_StickiedObjective_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StickiedObjective_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StickiedObjective.UI_StickiedObjective_C.Tick");
		
		UUI_StickiedObjective_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StickiedObjective.UI_StickiedObjective_C.InitializeQuestData
	 * 		Flags  -> ()
	 */
	void UUI_StickiedObjective_C::InitializeQuestData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StickiedObjective.UI_StickiedObjective_C.InitializeQuestData");
		
		UUI_StickiedObjective_C_InitializeQuestData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StickiedObjective.UI_StickiedObjective_C.OnObjectiveComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UQuest*                                      QuestData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObjective*                                  ObjectiveData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StickiedObjective_C::OnObjectiveComplete(class UQuest* QuestData, class UObjective* ObjectiveData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StickiedObjective.UI_StickiedObjective_C.OnObjectiveComplete");
		
		UUI_StickiedObjective_C_OnObjectiveComplete_Params params {};
		params.QuestData = QuestData;
		params.ObjectiveData = ObjectiveData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StickiedObjective.UI_StickiedObjective_C.OnObjectiveActivated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UQuest*                                      QuestData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObjective*                                  ObjectiveData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StickiedObjective_C::OnObjectiveActivated(class UQuest* QuestData, class UObjective* ObjectiveData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StickiedObjective.UI_StickiedObjective_C.OnObjectiveActivated");
		
		UUI_StickiedObjective_C_OnObjectiveActivated_Params params {};
		params.QuestData = QuestData;
		params.ObjectiveData = ObjectiveData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StickiedObjective.UI_StickiedObjective_C.OnQuestStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UQuest*                                      QuestData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StickiedObjective_C::OnQuestStarted(class UQuest* QuestData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StickiedObjective.UI_StickiedObjective_C.OnQuestStarted");
		
		UUI_StickiedObjective_C_OnQuestStarted_Params params {};
		params.QuestData = QuestData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StickiedObjective.UI_StickiedObjective_C.OnStickiedQuestsChanged
	 * 		Flags  -> ()
	 */
	void UUI_StickiedObjective_C::OnStickiedQuestsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StickiedObjective.UI_StickiedObjective_C.OnStickiedQuestsChanged");
		
		UUI_StickiedObjective_C_OnStickiedQuestsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StickiedObjective.UI_StickiedObjective_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_StickiedObjective_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StickiedObjective.UI_StickiedObjective_C.Destruct");
		
		UUI_StickiedObjective_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StickiedObjective.UI_StickiedObjective_C.OnBurgleQuestChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBurgleQuestManagerComponent*                Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StickiedObjective_C::OnBurgleQuestChanged(class UBurgleQuestManagerComponent* Sender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StickiedObjective.UI_StickiedObjective_C.OnBurgleQuestChanged");
		
		UUI_StickiedObjective_C_OnBurgleQuestChanged_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StickiedObjective.UI_StickiedObjective_C.OnObjectiveUpdated_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBurgleQuestInstance*                        Quest                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBaseObjective*                              ObjectiveData                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StickiedObjective_C::OnObjectiveUpdated_Event_1(class UBurgleQuestInstance* Quest, class UBaseObjective* ObjectiveData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StickiedObjective.UI_StickiedObjective_C.OnObjectiveUpdated_Event_1");
		
		UUI_StickiedObjective_C_OnObjectiveUpdated_Event_1_Params params {};
		params.Quest = Quest;
		params.ObjectiveData = ObjectiveData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StickiedObjective.UI_StickiedObjective_C.RefreshStickyQuests
	 * 		Flags  -> ()
	 */
	void UUI_StickiedObjective_C::RefreshStickyQuests()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StickiedObjective.UI_StickiedObjective_C.RefreshStickyQuests");
		
		UUI_StickiedObjective_C_RefreshStickyQuests_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StickiedObjective.UI_StickiedObjective_C.OnQuestReplicationUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UQuest*                                      QuestData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StickiedObjective_C::OnQuestReplicationUpdate(class UQuest* QuestData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StickiedObjective.UI_StickiedObjective_C.OnQuestReplicationUpdate");
		
		UUI_StickiedObjective_C_OnQuestReplicationUpdate_Params params {};
		params.QuestData = QuestData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StickiedObjective.UI_StickiedObjective_C.BindPlayerEvent
	 * 		Flags  -> ()
	 */
	void UUI_StickiedObjective_C::BindPlayerEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StickiedObjective.UI_StickiedObjective_C.BindPlayerEvent");
		
		UUI_StickiedObjective_C_BindPlayerEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_StickiedObjective.UI_StickiedObjective_C.ExecuteUbergraph_UI_StickiedObjective
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_StickiedObjective_C::ExecuteUbergraph_UI_StickiedObjective(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_StickiedObjective.UI_StickiedObjective_C.ExecuteUbergraph_UI_StickiedObjective");
		
		UUI_StickiedObjective_C_ExecuteUbergraph_UI_StickiedObjective_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_StickiedObjective_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_StickiedObjective_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_StickiedObjective.UI_StickiedObjective_C");
		return ptr;
	}

}


