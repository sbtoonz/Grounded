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
	 * 		Name   -> Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.GetExternalScienceReward
	 * 		Flags  -> ()
	 */
	int32_t UBQ_FetchBurgleChip_C::GetExternalScienceReward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.GetExternalScienceReward");
		
		UBQ_FetchBurgleChip_C_GetExternalScienceReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.GetOptionActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABurgleQuestChipOptionActor*                 Actor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBQ_FetchBurgleChip_C::GetOptionActor(class ABurgleQuestChipOptionActor** Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.GetOptionActor");
		
		UBQ_FetchBurgleChip_C_GetOptionActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actor != nullptr)
			*Actor = params.Actor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.GetScienceReward
	 * 		Flags  -> ()
	 */
	int32_t UBQ_FetchBurgleChip_C::GetScienceReward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.GetScienceReward");
		
		UBQ_FetchBurgleChip_C_GetScienceReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.GetObjectiveText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ObjectiveIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UBQ_FetchBurgleChip_C::GetObjectiveText(int32_t ObjectiveIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.GetObjectiveText");
		
		UBQ_FetchBurgleChip_C_GetObjectiveText_Params params {};
		params.ObjectiveIndex = ObjectiveIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.GetDescriptionText
	 * 		Flags  -> ()
	 */
	class FString UBQ_FetchBurgleChip_C::GetDescriptionText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.GetDescriptionText");
		
		UBQ_FetchBurgleChip_C_GetDescriptionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.FormatStringHelper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLocString                                  FormatString                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBQ_FetchBurgleChip_C::FormatStringHelper(const struct FLocString& FormatString, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.FormatStringHelper");
		
		UBQ_FetchBurgleChip_C_FormatStringHelper_Params params {};
		params.FormatString = FormatString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.GetTitle
	 * 		Flags  -> ()
	 */
	class FString UBQ_FetchBurgleChip_C::GetTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.GetTitle");
		
		UBQ_FetchBurgleChip_C_GetTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.On Tech Chip Redeemed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASurvivalPlayerController*                   Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBQ_FetchBurgleChip_C::On_Tech_Chip_Redeemed(class UItem* Item, class ASurvivalPlayerController* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.On Tech Chip Redeemed");
		
		UBQ_FetchBurgleChip_C_On_Tech_Chip_Redeemed_Params params {};
		params.Item = Item;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.CleanUpQuest
	 * 		Flags  -> ()
	 */
	void UBQ_FetchBurgleChip_C::CleanUpQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.CleanUpQuest");
		
		UBQ_FetchBurgleChip_C_CleanUpQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.GenerateParameters
	 * 		Flags  -> ()
	 */
	void UBQ_FetchBurgleChip_C::GenerateParameters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.GenerateParameters");
		
		UBQ_FetchBurgleChip_C_GenerateParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.On Key Item Obtained
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         KeyItemRowHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class ASurvivalPlayerState*                        AcquirerPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FDataTableRowHandle>                 RecipesLearned                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBQ_FetchBurgleChip_C::On_Key_Item_Obtained(const struct FDataTableRowHandle& KeyItemRowHandle, class ASurvivalPlayerState* AcquirerPlayerState, TArray<struct FDataTableRowHandle> RecipesLearned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.On Key Item Obtained");
		
		UBQ_FetchBurgleChip_C_On_Key_Item_Obtained_Params params {};
		params.KeyItemRowHandle = KeyItemRowHandle;
		params.AcquirerPlayerState = AcquirerPlayerState;
		params.RecipesLearned = RecipesLearned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.InitializeStarted
	 * 		Flags  -> ()
	 */
	void UBQ_FetchBurgleChip_C::InitializeStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.InitializeStarted");
		
		UBQ_FetchBurgleChip_C_InitializeStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.ExecuteUbergraph_BQ_FetchBurgleChip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBQ_FetchBurgleChip_C::ExecuteUbergraph_BQ_FetchBurgleChip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_FetchBurgleChip.BQ_FetchBurgleChip_C.ExecuteUbergraph_BQ_FetchBurgleChip");
		
		UBQ_FetchBurgleChip_C_ExecuteUbergraph_BQ_FetchBurgleChip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBQ_FetchBurgleChip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBQ_FetchBurgleChip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BQ_FetchBurgleChip.BQ_FetchBurgleChip_C");
		return ptr;
	}

}


