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
	 * 		Name   -> Function BQ_Craft.BQ_Craft_C.Is Accepted Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBQ_Craft_C::Is_Accepted_Item(const struct FDataTableRowHandle& Item, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_Craft.BQ_Craft_C.Is Accepted Item");
		
		UBQ_Craft_C_Is_Accepted_Item_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_Craft.BQ_Craft_C.Is Accepted Recipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         Recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBQ_Craft_C::Is_Accepted_Recipe(const struct FDataTableRowHandle& Recipe, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_Craft.BQ_Craft_C.Is Accepted Recipe");
		
		UBQ_Craft_C_Is_Accepted_Recipe_Params params {};
		params.Recipe = Recipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_Craft.BQ_Craft_C.GenerateCountHelper
	 * 		Flags  -> ()
	 */
	void UBQ_Craft_C::GenerateCountHelper()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_Craft.BQ_Craft_C.GenerateCountHelper");
		
		UBQ_Craft_C_GenerateCountHelper_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_Craft.BQ_Craft_C.GetRecipeProgressRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRecipeData                                 Recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FFloatRange                                 Range                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBQ_Craft_C::GetRecipeProgressRange(const struct FRecipeData& Recipe, struct FFloatRange* Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_Craft.BQ_Craft_C.GetRecipeProgressRange");
		
		UBQ_Craft_C_GetRecipeProgressRange_Params params {};
		params.Recipe = Recipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Range != nullptr)
			*Range = params.Range;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_Craft.BQ_Craft_C.GetScienceReward
	 * 		Flags  -> ()
	 */
	int32_t UBQ_Craft_C::GetScienceReward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_Craft.BQ_Craft_C.GetScienceReward");
		
		UBQ_Craft_C_GetScienceReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_Craft.BQ_Craft_C.GetObjectiveText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ObjectiveIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UBQ_Craft_C::GetObjectiveText(int32_t ObjectiveIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_Craft.BQ_Craft_C.GetObjectiveText");
		
		UBQ_Craft_C_GetObjectiveText_Params params {};
		params.ObjectiveIndex = ObjectiveIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_Craft.BQ_Craft_C.GetDescriptionText
	 * 		Flags  -> ()
	 */
	class FString UBQ_Craft_C::GetDescriptionText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_Craft.BQ_Craft_C.GetDescriptionText");
		
		UBQ_Craft_C_GetDescriptionText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_Craft.BQ_Craft_C.GenerateParametersHelper
	 * 		Flags  -> ()
	 */
	void UBQ_Craft_C::GenerateParametersHelper()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_Craft.BQ_Craft_C.GenerateParametersHelper");
		
		UBQ_Craft_C_GenerateParametersHelper_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_Craft.BQ_Craft_C.GetTitle
	 * 		Flags  -> ()
	 */
	class FString UBQ_Craft_C::GetTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_Craft.BQ_Craft_C.GetTitle");
		
		UBQ_Craft_C_GetTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_Craft.BQ_Craft_C.Get Recipe Display Name
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBQ_Craft_C::Get_Recipe_Display_Name(class FString* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_Craft.BQ_Craft_C.Get Recipe Display Name");
		
		UBQ_Craft_C_Get_Recipe_Display_Name_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_Craft.BQ_Craft_C.GenerateParameters
	 * 		Flags  -> ()
	 */
	void UBQ_Craft_C::GenerateParameters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_Craft.BQ_Craft_C.GenerateParameters");
		
		UBQ_Craft_C_GenerateParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_Craft.BQ_Craft_C.CleanUpQuest
	 * 		Flags  -> ()
	 */
	void UBQ_Craft_C::CleanUpQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_Craft.BQ_Craft_C.CleanUpQuest");
		
		UBQ_Craft_C_CleanUpQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_Craft.BQ_Craft_C.InitializeStarted
	 * 		Flags  -> ()
	 */
	void UBQ_Craft_C::InitializeStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_Craft.BQ_Craft_C.InitializeStarted");
		
		UBQ_Craft_C_InitializeStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_Craft.BQ_Craft_C.On Item Crafted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemHandle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class ASurvivalPlayerState*                        InstigatorPlayerState                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBQ_Craft_C::On_Item_Crafted(const struct FDataTableRowHandle& ItemHandle, class ASurvivalPlayerState* InstigatorPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_Craft.BQ_Craft_C.On Item Crafted");
		
		UBQ_Craft_C_On_Item_Crafted_Params params {};
		params.ItemHandle = ItemHandle;
		params.InstigatorPlayerState = InstigatorPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BQ_Craft.BQ_Craft_C.ExecuteUbergraph_BQ_Craft
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBQ_Craft_C::ExecuteUbergraph_BQ_Craft(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BQ_Craft.BQ_Craft_C.ExecuteUbergraph_BQ_Craft");
		
		UBQ_Craft_C_ExecuteUbergraph_BQ_Craft_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBQ_Craft_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBQ_Craft_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BQ_Craft.BQ_Craft_C");
		return ptr;
	}

}


