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
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.VerifyTutorialQuestCompletion
	 * 		Flags  -> ()
	 */
	void UBP_QuestManagerComponent_C::VerifyTutorialQuestCompletion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.VerifyTutorialQuestCompletion");
		
		UBP_QuestManagerComponent_C_VerifyTutorialQuestCompletion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.StartArmorCraftTutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerCharacter*                    PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::StartArmorCraftTutorial(class ASurvivalPlayerCharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.StartArmorCraftTutorial");
		
		UBP_QuestManagerComponent_C_StartArmorCraftTutorial_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleStartArmorCraftTutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerCharacter*                    PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::HandleStartArmorCraftTutorial(class ASurvivalPlayerCharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleStartArmorCraftTutorial");
		
		UBP_QuestManagerComponent_C_HandleStartArmorCraftTutorial_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.StartAxeCraftTutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerCharacter*                    PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::StartAxeCraftTutorial(class ASurvivalPlayerCharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.StartAxeCraftTutorial");
		
		UBP_QuestManagerComponent_C_StartAxeCraftTutorial_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleStartAxeCraftTutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerCharacter*                    PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::HandleStartAxeCraftTutorial(class ASurvivalPlayerCharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleStartAxeCraftTutorial");
		
		UBP_QuestManagerComponent_C_HandleStartAxeCraftTutorial_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.StartRespawnTutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerCharacter*                    PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::StartRespawnTutorial(class ASurvivalPlayerCharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.StartRespawnTutorial");
		
		UBP_QuestManagerComponent_C_StartRespawnTutorial_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleStartRespawnTutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_SurvivalPlayerCharacter_C*               PlayerCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::HandleStartRespawnTutorial(class ABP_SurvivalPlayerCharacter_C* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleStartRespawnTutorial");
		
		UBP_QuestManagerComponent_C_HandleStartRespawnTutorial_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.CheckBurgleQuests_Map
	 * 		Flags  -> ()
	 */
	void UBP_QuestManagerComponent_C::CheckBurgleQuests_Map()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.CheckBurgleQuests_Map");
		
		UBP_QuestManagerComponent_C_CheckBurgleQuests_Map_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.UpdateTimeBasedQuests
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewHour                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewDay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::UpdateTimeBasedQuests(int32_t NewHour, int32_t NewDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.UpdateTimeBasedQuests");
		
		UBP_QuestManagerComponent_C_UpdateTimeBasedQuests_Params params {};
		params.NewHour = NewHour;
		params.NewDay = NewDay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.GetPlayerStateFromComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActorComponent*                             ActorComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASurvivalPlayerState*                        PlayerState                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::GetPlayerStateFromComponent(class UActorComponent* ActorComponent, class ASurvivalPlayerState** PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.GetPlayerStateFromComponent");
		
		UBP_QuestManagerComponent_C_GetPlayerStateFromComponent_Params params {};
		params.ActorComponent = ActorComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerState != nullptr)
			*PlayerState = params.PlayerState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.GetPlayerStateFromActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASurvivalPlayerState*                        PlayerState                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::GetPlayerStateFromActor(class AActor* Actor, class ASurvivalPlayerState** PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.GetPlayerStateFromActor");
		
		UBP_QuestManagerComponent_C_GetPlayerStateFromActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerState != nullptr)
			*PlayerState = params.PlayerState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.CookingEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItemProcessingBuilding*                     Campfire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::CookingEvents(class AItemProcessingBuilding* Campfire)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.CookingEvents");
		
		UBP_QuestManagerComponent_C_CookingEvents_Params params {};
		params.Campfire = Campfire;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.OnFoodChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USurvivalComponent*                          Survival_Component                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Old                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              New                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::OnFoodChanged(class USurvivalComponent* Survival_Component, float Old, float New)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.OnFoodChanged");
		
		UBP_QuestManagerComponent_C_OnFoodChanged_Params params {};
		params.Survival_Component = Survival_Component;
		params.Old = Old;
		params.New = New;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.OnThirstChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USurvivalComponent*                          Survival_Component                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Old                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              New                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::OnThirstChanged(class USurvivalComponent* Survival_Component, float Old, float New)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.OnThirstChanged");
		
		UBP_QuestManagerComponent_C_OnThirstChanged_Params params {};
		params.Survival_Component = Survival_Component;
		params.Old = Old;
		params.New = New;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.ResourceResearched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         ItemRowHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class ASurvivalPlayerState*                        AcquirerPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FDataTableRowHandle>                 RecipesLearned                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_QuestManagerComponent_C::ResourceResearched(const struct FDataTableRowHandle& ItemRowHandle, class ASurvivalPlayerState* AcquirerPlayerState, TArray<struct FDataTableRowHandle> RecipesLearned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.ResourceResearched");
		
		UBP_QuestManagerComponent_C_ResourceResearched_Params params {};
		params.ItemRowHandle = ItemRowHandle;
		params.AcquirerPlayerState = AcquirerPlayerState;
		params.RecipesLearned = RecipesLearned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.Item Processed Callback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       OldItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItem*                                       NewItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::Item_Processed_Callback(class UItem* OldItem, class UItem* NewItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.Item Processed Callback");
		
		UBP_QuestManagerComponent_C_Item_Processed_Callback_Params params {};
		params.OldItem = OldItem;
		params.NewItem = NewItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleHourChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewHour                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewDay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::HandleHourChange(int32_t NewHour, int32_t NewDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleHourChange");
		
		UBP_QuestManagerComponent_C_HandleHourChange_Params params {};
		params.NewHour = NewHour;
		params.NewDay = NewDay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleOnInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::HandleOnInteract(class AActor* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleOnInteract");
		
		UBP_QuestManagerComponent_C_HandleOnInteract_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleOnItemAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         InventoryComponentOwner                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDataTableRowHandle                         ItemHandle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               IsNewItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::HandleOnItemAdded(class UInventoryComponent* InventoryComponentOwner, const struct FDataTableRowHandle& ItemHandle, bool IsNewItem, int32_t Count, int32_t TotalCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleOnItemAdded");
		
		UBP_QuestManagerComponent_C_HandleOnItemAdded_Params params {};
		params.InventoryComponentOwner = InventoryComponentOwner;
		params.ItemHandle = ItemHandle;
		params.IsNewItem = IsNewItem;
		params.Count = Count;
		params.TotalCount = TotalCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleOnBuildingComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         BuildingRowHandle                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_QuestManagerComponent_C::HandleOnBuildingComplete(const struct FDataTableRowHandle& BuildingRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleOnBuildingComplete");
		
		UBP_QuestManagerComponent_C_HandleOnBuildingComplete_Params params {};
		params.BuildingRowHandle = BuildingRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleOnItemCrafted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDataTableRowHandle                         ItemHandle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_QuestManagerComponent_C::HandleOnItemCrafted(class UInventoryComponent* Sender, const struct FDataTableRowHandle& ItemHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleOnItemCrafted");
		
		UBP_QuestManagerComponent_C_HandleOnItemCrafted_Params params {};
		params.Sender = Sender;
		params.ItemHandle = ItemHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.OnPlayerUseItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalCharacter*                          User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDataTableRowHandle                         ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_QuestManagerComponent_C::OnPlayerUseItem(class ASurvivalCharacter* User, const struct FDataTableRowHandle& ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.OnPlayerUseItem");
		
		UBP_QuestManagerComponent_C_OnPlayerUseItem_Params params {};
		params.User = User;
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleAxeTutorialOverallFlow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WithTimer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IgnoreProgressStage                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_QuestManagerComponent_C::HandleAxeTutorialOverallFlow(bool WithTimer, bool IgnoreProgressStage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleAxeTutorialOverallFlow");
		
		UBP_QuestManagerComponent_C_HandleAxeTutorialOverallFlow_Params params {};
		params.WithTimer = WithTimer;
		params.IgnoreProgressStage = IgnoreProgressStage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.BindPlayerEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_SurvivalPlayerCharacter_C*               SurvivalPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::BindPlayerEvents(class ABP_SurvivalPlayerCharacter_C* SurvivalPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.BindPlayerEvents");
		
		UBP_QuestManagerComponent_C_BindPlayerEvents_Params params {};
		params.SurvivalPlayer = SurvivalPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleOnRest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              RestDuration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::HandleOnRest(float RestDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleOnRest");
		
		UBP_QuestManagerComponent_C_HandleOnRest_Params params {};
		params.RestDuration = RestDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBP_QuestManagerComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.ReceiveBeginPlay");
		
		UBP_QuestManagerComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleBenchAndArmorTutorialOverallFlow
	 * 		Flags  -> ()
	 */
	void UBP_QuestManagerComponent_C::HandleBenchAndArmorTutorialOverallFlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleBenchAndArmorTutorialOverallFlow");
		
		UBP_QuestManagerComponent_C_HandleBenchAndArmorTutorialOverallFlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleOnBurgleQuestStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBurgleQuestInstance*                        Quest                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::HandleOnBurgleQuestStarted(class UBurgleQuestInstance* Quest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleOnBurgleQuestStarted");
		
		UBP_QuestManagerComponent_C_HandleOnBurgleQuestStarted_Params params {};
		params.Quest = Quest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.BindPlayerStateEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerState*                        PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::BindPlayerStateEvents(class ASurvivalPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.BindPlayerStateEvents");
		
		UBP_QuestManagerComponent_C_BindPlayerStateEvents_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.RespawnPointChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerState*                        PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      RespawnPoint                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::RespawnPointChanged(class ASurvivalPlayerState* PlayerState, class AActor* RespawnPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.RespawnPointChanged");
		
		UBP_QuestManagerComponent_C_RespawnPointChanged_Params params {};
		params.PlayerState = PlayerState;
		params.RespawnPoint = RespawnPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.OnPlayerCombatStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalCharacter*                          Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInCombat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_QuestManagerComponent_C::OnPlayerCombatStateChanged(class ASurvivalCharacter* Character, bool bInCombat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.OnPlayerCombatStateChanged");
		
		UBP_QuestManagerComponent_C_OnPlayerCombatStateChanged_Params params {};
		params.Character = Character;
		params.bInCombat = bInCombat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.OnUpgradePointsAquired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPartyUpgradePoints                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASurvivalPlayerState*                        AcquirerPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::OnUpgradePointsAquired(bool IsPartyUpgradePoints, int32_t Amount, class ASurvivalPlayerState* AcquirerPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.OnUpgradePointsAquired");
		
		UBP_QuestManagerComponent_C_OnUpgradePointsAquired_Params params {};
		params.IsPartyUpgradePoints = IsPartyUpgradePoints;
		params.Amount = Amount;
		params.AcquirerPlayerState = AcquirerPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandlePersonalMilkNugQuestStart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalPlayerState*                        SurvivalPlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::HandlePersonalMilkNugQuestStart(class ASurvivalPlayerState* SurvivalPlayerState, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandlePersonalMilkNugQuestStart");
		
		UBP_QuestManagerComponent_C_HandlePersonalMilkNugQuestStart_Params params {};
		params.SurvivalPlayerState = SurvivalPlayerState;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.OnCollectibleUpgradesChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlayerUpgradeComponent*                     PlayerUpgradeComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::OnCollectibleUpgradesChanged(class UPlayerUpgradeComponent* PlayerUpgradeComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.OnCollectibleUpgradesChanged");
		
		UBP_QuestManagerComponent_C_OnCollectibleUpgradesChanged_Params params {};
		params.PlayerUpgradeComponent = PlayerUpgradeComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.OnPartyUpgradeSpent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                StackTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class ASurvivalPlayerState*                        AquirerPlayerState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::OnPartyUpgradeSpent(const struct FGameplayTag& StackTag, class ASurvivalPlayerState* AquirerPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.OnPartyUpgradeSpent");
		
		UBP_QuestManagerComponent_C_OnPartyUpgradeSpent_Params params {};
		params.StackTag = StackTag;
		params.AquirerPlayerState = AquirerPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.ExecuteUbergraph_BP_QuestManagerComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_QuestManagerComponent_C::ExecuteUbergraph_BP_QuestManagerComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.ExecuteUbergraph_BP_QuestManagerComponent");
		
		UBP_QuestManagerComponent_C_ExecuteUbergraph_BP_QuestManagerComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_QuestManagerComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_QuestManagerComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_QuestManagerComponent.BP_QuestManagerComponent_C");
		return ptr;
	}

}


