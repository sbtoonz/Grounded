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
	 * BlueprintGeneratedClass BP_TutorialManagerComponent.BP_TutorialManagerComponent_C
	 * Size -> 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
	 */
	class UBP_TutorialManagerComponent_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		TArray<class FName>                                        MovementTutorialsKey;                                    // 0x00B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        MovementTutorialsCon;                                    // 0x00C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetPlayerStateFromComponent(class UActorComponent* ActorComponent, class ASurvivalPlayerState** PlayerState);
		void Day_Change(int32_t NewHour, int32_t NewDay);
		void Day_Quests(int32_t Hour);
		void ReceiveBeginPlay();
		void BindPlayerEvents(class ABP_SurvivalPlayerCharacter_C* SurvivalPlayer);
		void HandleOnItemCrafted(class UInventoryComponent* Sender, const struct FDataTableRowHandle& ItemHandle);
		void HandleOnBuildingComplete(const struct FDataTableRowHandle& BuildingRowHandle);
		void OnFoodChanged(class USurvivalComponent* Survival_Component, float Old, float New);
		void OnThirstChanged(class USurvivalComponent* Survival_Component, float Old, float New);
		void OnItemAdded_Event_1(class UInventoryComponent* InventoryComponentOwner, const struct FDataTableRowHandle& ItemHandle, bool IsNewItem, int32_t Count, int32_t TotalCount);
		void OnItemSpoiled(const struct FDataTableRowHandle& OriginalItemHandle, const struct FDataTableRowHandle& SpoiledItemHandle);
		void OnItemBroken(class ASurvivalCharacter* Player, class UItem* Item);
		void OnIneffectiveAttack(ECannotDamageReason CannotDamageReason, int32_t FailedDamageTypeFlag);
		void OnHealthChanged(class UHealthComponent* Health_Component, float New_Health, float Old_Health);
		void OnBeginOverlap(class AActor* Player, class AActor* Overlap);
		void PlayStartupTutorials(class ABP_SurvivalPlayerCharacter_C* SurvivalPlayer);
		void OnPlayerUseItem(class ASurvivalCharacter* User, const struct FDataTableRowHandle& ItemData);
		void ExecuteUbergraph_BP_TutorialManagerComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
