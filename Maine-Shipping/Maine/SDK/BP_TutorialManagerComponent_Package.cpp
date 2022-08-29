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
	 * 		Name   -> Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.GetPlayerStateFromComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActorComponent*                             ActorComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASurvivalPlayerState*                        PlayerState                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TutorialManagerComponent_C::GetPlayerStateFromComponent(class UActorComponent* ActorComponent, class ASurvivalPlayerState** PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.GetPlayerStateFromComponent");
		
		UBP_TutorialManagerComponent_C_GetPlayerStateFromComponent_Params params {};
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
	 * 		Name   -> Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.Day Change
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewHour                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewDay                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TutorialManagerComponent_C::Day_Change(int32_t NewHour, int32_t NewDay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.Day Change");
		
		UBP_TutorialManagerComponent_C_Day_Change_Params params {};
		params.NewHour = NewHour;
		params.NewDay = NewDay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.Day 1 Quests
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Hour                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TutorialManagerComponent_C::Day_Quests(int32_t Hour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.Day 1 Quests");
		
		UBP_TutorialManagerComponent_C_Day_Quests_Params params {};
		params.Hour = Hour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.Day 2 Quests
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Hour                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TutorialManagerComponent_C::Day_Quests(int32_t Hour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.Day 2 Quests");
		
		UBP_TutorialManagerComponent_C_Day_Quests_Params params {};
		params.Hour = Hour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBP_TutorialManagerComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.ReceiveBeginPlay");
		
		UBP_TutorialManagerComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.BindPlayerEvents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_SurvivalPlayerCharacter_C*               SurvivalPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TutorialManagerComponent_C::BindPlayerEvents(class ABP_SurvivalPlayerCharacter_C* SurvivalPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.BindPlayerEvents");
		
		UBP_TutorialManagerComponent_C_BindPlayerEvents_Params params {};
		params.SurvivalPlayer = SurvivalPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.HandleOnItemCrafted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDataTableRowHandle                         ItemHandle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_TutorialManagerComponent_C::HandleOnItemCrafted(class UInventoryComponent* Sender, const struct FDataTableRowHandle& ItemHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.HandleOnItemCrafted");
		
		UBP_TutorialManagerComponent_C_HandleOnItemCrafted_Params params {};
		params.Sender = Sender;
		params.ItemHandle = ItemHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.HandleOnBuildingComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         BuildingRowHandle                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_TutorialManagerComponent_C::HandleOnBuildingComplete(const struct FDataTableRowHandle& BuildingRowHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.HandleOnBuildingComplete");
		
		UBP_TutorialManagerComponent_C_HandleOnBuildingComplete_Params params {};
		params.BuildingRowHandle = BuildingRowHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnFoodChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USurvivalComponent*                          Survival_Component                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Old                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              New                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TutorialManagerComponent_C::OnFoodChanged(class USurvivalComponent* Survival_Component, float Old, float New)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnFoodChanged");
		
		UBP_TutorialManagerComponent_C_OnFoodChanged_Params params {};
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
	 * 		Name   -> Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnThirstChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USurvivalComponent*                          Survival_Component                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Old                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              New                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TutorialManagerComponent_C::OnThirstChanged(class USurvivalComponent* Survival_Component, float Old, float New)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnThirstChanged");
		
		UBP_TutorialManagerComponent_C_OnThirstChanged_Params params {};
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
	 * 		Name   -> Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnItemAdded_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         InventoryComponentOwner                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDataTableRowHandle                         ItemHandle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		bool                                               IsNewItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TutorialManagerComponent_C::OnItemAdded_Event_1(class UInventoryComponent* InventoryComponentOwner, const struct FDataTableRowHandle& ItemHandle, bool IsNewItem, int32_t Count, int32_t TotalCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnItemAdded_Event_1");
		
		UBP_TutorialManagerComponent_C_OnItemAdded_Event_1_Params params {};
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
	 * 		Name   -> Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnItemSpoiled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         OriginalItemHandle                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FDataTableRowHandle                         SpoiledItemHandle                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_TutorialManagerComponent_C::OnItemSpoiled(const struct FDataTableRowHandle& OriginalItemHandle, const struct FDataTableRowHandle& SpoiledItemHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnItemSpoiled");
		
		UBP_TutorialManagerComponent_C_OnItemSpoiled_Params params {};
		params.OriginalItemHandle = OriginalItemHandle;
		params.SpoiledItemHandle = SpoiledItemHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnItemBroken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalCharacter*                          Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TutorialManagerComponent_C::OnItemBroken(class ASurvivalCharacter* Player, class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnItemBroken");
		
		UBP_TutorialManagerComponent_C_OnItemBroken_Params params {};
		params.Player = Player;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnIneffectiveAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECannotDamageReason                                CannotDamageReason                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FailedDamageTypeFlag                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TutorialManagerComponent_C::OnIneffectiveAttack(ECannotDamageReason CannotDamageReason, int32_t FailedDamageTypeFlag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnIneffectiveAttack");
		
		UBP_TutorialManagerComponent_C_OnIneffectiveAttack_Params params {};
		params.CannotDamageReason = CannotDamageReason;
		params.FailedDamageTypeFlag = FailedDamageTypeFlag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnHealthChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHealthComponent*                            Health_Component                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              New_Health                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Old_Health                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TutorialManagerComponent_C::OnHealthChanged(class UHealthComponent* Health_Component, float New_Health, float Old_Health)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnHealthChanged");
		
		UBP_TutorialManagerComponent_C_OnHealthChanged_Params params {};
		params.Health_Component = Health_Component;
		params.New_Health = New_Health;
		params.Old_Health = Old_Health;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Overlap                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TutorialManagerComponent_C::OnBeginOverlap(class AActor* Player, class AActor* Overlap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnBeginOverlap");
		
		UBP_TutorialManagerComponent_C_OnBeginOverlap_Params params {};
		params.Player = Player;
		params.Overlap = Overlap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.PlayStartupTutorials
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_SurvivalPlayerCharacter_C*               SurvivalPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TutorialManagerComponent_C::PlayStartupTutorials(class ABP_SurvivalPlayerCharacter_C* SurvivalPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.PlayStartupTutorials");
		
		UBP_TutorialManagerComponent_C_PlayStartupTutorials_Params params {};
		params.SurvivalPlayer = SurvivalPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnPlayerUseItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASurvivalCharacter*                          User                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDataTableRowHandle                         ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBP_TutorialManagerComponent_C::OnPlayerUseItem(class ASurvivalCharacter* User, const struct FDataTableRowHandle& ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.OnPlayerUseItem");
		
		UBP_TutorialManagerComponent_C_OnPlayerUseItem_Params params {};
		params.User = User;
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.ExecuteUbergraph_BP_TutorialManagerComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_TutorialManagerComponent_C::ExecuteUbergraph_BP_TutorialManagerComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TutorialManagerComponent.BP_TutorialManagerComponent_C.ExecuteUbergraph_BP_TutorialManagerComponent");
		
		UBP_TutorialManagerComponent_C_ExecuteUbergraph_BP_TutorialManagerComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_TutorialManagerComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_TutorialManagerComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TutorialManagerComponent.BP_TutorialManagerComponent_C");
		return ptr;
	}

}


