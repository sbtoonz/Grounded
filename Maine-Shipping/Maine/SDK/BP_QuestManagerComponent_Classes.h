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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_QuestManagerComponent.BP_QuestManagerComponent_C
	 * Size -> 0x0220 (FullSize[0x02D0] - InheritedSize[0x00B0])
	 */
	class UBP_QuestManagerComponent_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		TArray<class FName>                                        CampingRecipes;                                          // 0x00B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FDataTableRowHandle                                 DewDrop;                                                 // 0x00C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 Mushroom;                                                // 0x00D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 Axe;                                                     // 0x00E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 AxeRecipe;                                               // 0x00F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		TArray<class FName>                                        BaseRecipes;                                             // 0x0108(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FDataTableRowHandle                                 Marker;                                                  // 0x0118(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 Campfire;                                                // 0x0128(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 LeanTo;                                                  // 0x0138(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 Spear;                                                   // 0x0148(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 CookedAphidMeat;                                         // 0x0158(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 Wall;                                                    // 0x0168(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 SpikeBarricade;                                          // 0x0178(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 Workbench;                                               // 0x0188(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		TArray<class FName>                                        BasicArmorRecipes;                                       // 0x0198(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FDataTableRowHandle                                 CloverTop;                                               // 0x01A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 CloverHeadRecipe;                                        // 0x01B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 CloverChestRecipe;                                       // 0x01C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 CloverLegsRecipe;                                        // 0x01D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		TArray<struct FWaveSpawn>                                  Wave_Spawn;                                              // 0x01E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FDataTableRowHandle                                 FoodQuest;                                               // 0x01F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 WaterQuest;                                              // 0x0208(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 RespawnPointQuest;                                       // 0x0218(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 SleepQuest;                                              // 0x0228(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 AxeRecipeQuest;                                          // 0x0238(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 AxeCraftQuest;                                           // 0x0248(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 WorkbenchQuest;                                          // 0x0258(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 ArmorCraftQuest;                                         // 0x0268(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 ArmorRecipeQuest;                                        // 0x0278(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UDataTable*                                          EquipmentRecipeDataTable;                                // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableRowHandle                                 BandageRecipe;                                           // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 BandageQuest;                                            // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 BandageEfficientRecipe;                                  // 0x02B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FDataTableRowHandle                                 PersonalMilkNugQuest;                                    // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void VerifyTutorialQuestCompletion();
		void StartArmorCraftTutorial(class ASurvivalPlayerCharacter* PlayerCharacter);
		void HandleStartArmorCraftTutorial(class ASurvivalPlayerCharacter* PlayerCharacter);
		void StartAxeCraftTutorial(class ASurvivalPlayerCharacter* PlayerCharacter);
		void HandleStartAxeCraftTutorial(class ASurvivalPlayerCharacter* PlayerCharacter);
		void StartRespawnTutorial(class ASurvivalPlayerCharacter* PlayerCharacter);
		void HandleStartRespawnTutorial(class ABP_SurvivalPlayerCharacter_C* PlayerCharacter);
		void CheckBurgleQuests_Map();
		void UpdateTimeBasedQuests(int32_t NewHour, int32_t NewDay);
		void GetPlayerStateFromComponent(class UActorComponent* ActorComponent, class ASurvivalPlayerState** PlayerState);
		void GetPlayerStateFromActor(class AActor* Actor, class ASurvivalPlayerState** PlayerState);
		void CookingEvents(class AItemProcessingBuilding* Campfire);
		void OnFoodChanged(class USurvivalComponent* Survival_Component, float Old, float New);
		void OnThirstChanged(class USurvivalComponent* Survival_Component, float Old, float New);
		void ResourceResearched(const struct FDataTableRowHandle& ItemRowHandle, class ASurvivalPlayerState* AcquirerPlayerState, TArray<struct FDataTableRowHandle> RecipesLearned);
		void Item_Processed_Callback(class UItem* OldItem, class UItem* NewItem);
		void HandleHourChange(int32_t NewHour, int32_t NewDay);
		void HandleOnInteract(class AActor* Instigator);
		void HandleOnItemAdded(class UInventoryComponent* InventoryComponentOwner, const struct FDataTableRowHandle& ItemHandle, bool IsNewItem, int32_t Count, int32_t TotalCount);
		void HandleOnBuildingComplete(const struct FDataTableRowHandle& BuildingRowHandle);
		void HandleOnItemCrafted(class UInventoryComponent* Sender, const struct FDataTableRowHandle& ItemHandle);
		void OnPlayerUseItem(class ASurvivalCharacter* User, const struct FDataTableRowHandle& ItemData);
		void HandleAxeTutorialOverallFlow(bool WithTimer, bool IgnoreProgressStage);
		void BindPlayerEvents(class ABP_SurvivalPlayerCharacter_C* SurvivalPlayer);
		void HandleOnRest(float RestDuration);
		void ReceiveBeginPlay();
		void HandleBenchAndArmorTutorialOverallFlow();
		void HandleOnBurgleQuestStarted(class UBurgleQuestInstance* Quest);
		void BindPlayerStateEvents(class ASurvivalPlayerState* PlayerState);
		void RespawnPointChanged(class ASurvivalPlayerState* PlayerState, class AActor* RespawnPoint);
		void OnPlayerCombatStateChanged(class ASurvivalCharacter* Character, bool bInCombat);
		void OnUpgradePointsAquired(bool IsPartyUpgradePoints, int32_t Amount, class ASurvivalPlayerState* AcquirerPlayerState);
		void HandlePersonalMilkNugQuestStart(class ASurvivalPlayerState* SurvivalPlayerState, float Delay);
		void OnCollectibleUpgradesChanged(class UPlayerUpgradeComponent* PlayerUpgradeComponent);
		void OnPartyUpgradeSpent(const struct FGameplayTag& StackTag, class ASurvivalPlayerState* AquirerPlayerState);
		void ExecuteUbergraph_BP_QuestManagerComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
