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
	 * 		Name   -> Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.IsBurgleQuestObjective
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseObjective*                              Objective                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsBurgleObjective                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_QuestObjectiveListItem_C::IsBurgleQuestObjective(class UBaseObjective* Objective, bool* IsBurgleObjective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.IsBurgleQuestObjective");
		
		UUI_QuestObjectiveListItem_C_IsBurgleQuestObjective_Params params {};
		params.Objective = Objective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsBurgleObjective != nullptr)
			*IsBurgleObjective = params.IsBurgleObjective;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.GetDisabledColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor UUI_QuestObjectiveListItem_C::GetDisabledColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.GetDisabledColor");
		
		UUI_QuestObjectiveListItem_C_GetDisabledColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.GetBasicText
	 * 		Flags  -> ()
	 */
	struct FSlateColor UUI_QuestObjectiveListItem_C::GetBasicText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.GetBasicText");
		
		UUI_QuestObjectiveListItem_C_GetBasicText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBaseObjective*                              Objective                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_QuestObjectiveListItem_C::Initialize(class UBaseObjective* Objective)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.Initialize");
		
		UUI_QuestObjectiveListItem_C_Initialize_Params params {};
		params.Objective = Objective;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_QuestObjectiveListItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.Construct");
		
		UUI_QuestObjectiveListItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.OnGlobalColorChange
	 * 		Flags  -> ()
	 */
	void UUI_QuestObjectiveListItem_C::OnGlobalColorChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.OnGlobalColorChange");
		
		UUI_QuestObjectiveListItem_C_OnGlobalColorChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.OnLanguageChanged
	 * 		Flags  -> ()
	 */
	void UUI_QuestObjectiveListItem_C::OnLanguageChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.OnLanguageChanged");
		
		UUI_QuestObjectiveListItem_C_OnLanguageChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_QuestObjectiveListItem_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.Destruct");
		
		UUI_QuestObjectiveListItem_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.UpdateText
	 * 		Flags  -> ()
	 */
	void UUI_QuestObjectiveListItem_C::UpdateText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.UpdateText");
		
		UUI_QuestObjectiveListItem_C_UpdateText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.ExecuteUbergraph_UI_QuestObjectiveListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_QuestObjectiveListItem_C::ExecuteUbergraph_UI_QuestObjectiveListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C.ExecuteUbergraph_UI_QuestObjectiveListItem");
		
		UUI_QuestObjectiveListItem_C_ExecuteUbergraph_UI_QuestObjectiveListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_QuestObjectiveListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_QuestObjectiveListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_QuestObjectiveListItem.UI_QuestObjectiveListItem_C");
		return ptr;
	}

}


