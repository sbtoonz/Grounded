#pragma once

/**
 * Name: Maine
 * Version: Shipping
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.VerifyTutorialQuestCompletion
	 */
	struct UBP_QuestManagerComponent_C_VerifyTutorialQuestCompletion_Params
	{	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.StartArmorCraftTutorial
	 */
	struct UBP_QuestManagerComponent_C_StartArmorCraftTutorial_Params
	{
	public:
		class ASurvivalPlayerCharacter*                            PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleStartArmorCraftTutorial
	 */
	struct UBP_QuestManagerComponent_C_HandleStartArmorCraftTutorial_Params
	{
	public:
		class ASurvivalPlayerCharacter*                            PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.StartAxeCraftTutorial
	 */
	struct UBP_QuestManagerComponent_C_StartAxeCraftTutorial_Params
	{
	public:
		class ASurvivalPlayerCharacter*                            PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleStartAxeCraftTutorial
	 */
	struct UBP_QuestManagerComponent_C_HandleStartAxeCraftTutorial_Params
	{
	public:
		class ASurvivalPlayerCharacter*                            PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.StartRespawnTutorial
	 */
	struct UBP_QuestManagerComponent_C_StartRespawnTutorial_Params
	{
	public:
		class ASurvivalPlayerCharacter*                            PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleStartRespawnTutorial
	 */
	struct UBP_QuestManagerComponent_C_HandleStartRespawnTutorial_Params
	{
	public:
		class ABP_SurvivalPlayerCharacter_C*                       PlayerCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.CheckBurgleQuests_Map
	 */
	struct UBP_QuestManagerComponent_C_CheckBurgleQuests_Map_Params
	{	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.UpdateTimeBasedQuests
	 */
	struct UBP_QuestManagerComponent_C_UpdateTimeBasedQuests_Params
	{
	public:
		int32_t                                                    NewHour;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewDay;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.GetPlayerStateFromComponent
	 */
	struct UBP_QuestManagerComponent_C_GetPlayerStateFromComponent_Params
	{
	public:
		class UActorComponent*                                     ActorComponent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASurvivalPlayerState*                                PlayerState;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.GetPlayerStateFromActor
	 */
	struct UBP_QuestManagerComponent_C_GetPlayerStateFromActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASurvivalPlayerState*                                PlayerState;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.CookingEvents
	 */
	struct UBP_QuestManagerComponent_C_CookingEvents_Params
	{
	public:
		class AItemProcessingBuilding*                             Campfire;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.OnFoodChanged
	 */
	struct UBP_QuestManagerComponent_C_OnFoodChanged_Params
	{
	public:
		class USurvivalComponent*                                  Survival_Component;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Old;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      New;                                                     // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.OnThirstChanged
	 */
	struct UBP_QuestManagerComponent_C_OnThirstChanged_Params
	{
	public:
		class USurvivalComponent*                                  Survival_Component;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Old;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      New;                                                     // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.ResourceResearched
	 */
	struct UBP_QuestManagerComponent_C_ResourceResearched_Params
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class ASurvivalPlayerState*                                AcquirerPlayerState;                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FDataTableRowHandle>                         RecipesLearned;                                          // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.Item Processed Callback
	 */
	struct UBP_QuestManagerComponent_C_Item_Processed_Callback_Params
	{
	public:
		class UItem*                                               OldItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UItem*                                               NewItem;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleHourChange
	 */
	struct UBP_QuestManagerComponent_C_HandleHourChange_Params
	{
	public:
		int32_t                                                    NewHour;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewDay;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleOnInteract
	 */
	struct UBP_QuestManagerComponent_C_HandleOnInteract_Params
	{
	public:
		unsigned char                                              UnknownData_C2AS[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Instigator;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleOnItemAdded
	 */
	struct UBP_QuestManagerComponent_C_HandleOnItemAdded_Params
	{
	public:
		class UInventoryComponent*                                 InventoryComponentOwner;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDataTableRowHandle                                 ItemHandle;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		bool                                                       IsNewItem;                                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6P9O[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Count;                                                   // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TotalCount;                                              // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleOnBuildingComplete
	 */
	struct UBP_QuestManagerComponent_C_HandleOnBuildingComplete_Params
	{
	public:
		struct FDataTableRowHandle                                 BuildingRowHandle;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleOnItemCrafted
	 */
	struct UBP_QuestManagerComponent_C_HandleOnItemCrafted_Params
	{
	public:
		class UInventoryComponent*                                 Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDataTableRowHandle                                 ItemHandle;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.OnPlayerUseItem
	 */
	struct UBP_QuestManagerComponent_C_OnPlayerUseItem_Params
	{
	public:
		class ASurvivalCharacter*                                  User;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDataTableRowHandle                                 ItemData;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleAxeTutorialOverallFlow
	 */
	struct UBP_QuestManagerComponent_C_HandleAxeTutorialOverallFlow_Params
	{
	public:
		bool                                                       WithTimer;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IgnoreProgressStage;                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.BindPlayerEvents
	 */
	struct UBP_QuestManagerComponent_C_BindPlayerEvents_Params
	{
	public:
		class ABP_SurvivalPlayerCharacter_C*                       SurvivalPlayer;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleOnRest
	 */
	struct UBP_QuestManagerComponent_C_HandleOnRest_Params
	{
	public:
		float                                                      RestDuration;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.ReceiveBeginPlay
	 */
	struct UBP_QuestManagerComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleBenchAndArmorTutorialOverallFlow
	 */
	struct UBP_QuestManagerComponent_C_HandleBenchAndArmorTutorialOverallFlow_Params
	{	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandleOnBurgleQuestStarted
	 */
	struct UBP_QuestManagerComponent_C_HandleOnBurgleQuestStarted_Params
	{
	public:
		class UBurgleQuestInstance*                                Quest;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.BindPlayerStateEvents
	 */
	struct UBP_QuestManagerComponent_C_BindPlayerStateEvents_Params
	{
	public:
		class ASurvivalPlayerState*                                PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.RespawnPointChanged
	 */
	struct UBP_QuestManagerComponent_C_RespawnPointChanged_Params
	{
	public:
		class ASurvivalPlayerState*                                PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              RespawnPoint;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.OnPlayerCombatStateChanged
	 */
	struct UBP_QuestManagerComponent_C_OnPlayerCombatStateChanged_Params
	{
	public:
		class ASurvivalCharacter*                                  Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInCombat;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.OnUpgradePointsAquired
	 */
	struct UBP_QuestManagerComponent_C_OnUpgradePointsAquired_Params
	{
	public:
		bool                                                       IsPartyUpgradePoints;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XVRO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Amount;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASurvivalPlayerState*                                AcquirerPlayerState;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.HandlePersonalMilkNugQuestStart
	 */
	struct UBP_QuestManagerComponent_C_HandlePersonalMilkNugQuestStart_Params
	{
	public:
		class ASurvivalPlayerState*                                SurvivalPlayerState;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Delay;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.OnCollectibleUpgradesChanged
	 */
	struct UBP_QuestManagerComponent_C_OnCollectibleUpgradesChanged_Params
	{
	public:
		class UPlayerUpgradeComponent*                             PlayerUpgradeComponent;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.OnPartyUpgradeSpent
	 */
	struct UBP_QuestManagerComponent_C_OnPartyUpgradeSpent_Params
	{
	public:
		struct FGameplayTag                                        StackTag;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class ASurvivalPlayerState*                                AquirerPlayerState;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_QuestManagerComponent.BP_QuestManagerComponent_C.ExecuteUbergraph_BP_QuestManagerComponent
	 */
	struct UBP_QuestManagerComponent_C_ExecuteUbergraph_BP_QuestManagerComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
