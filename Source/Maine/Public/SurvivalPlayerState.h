#pragma once
#include "CoreMinimal.h"
#include "OnColorChangedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIOnlineSubsystemUtils -ObjectName=DataTableRowHandle_NetCrc -FallbackName=DataTableRowHandle_NetCrc
#include "PersistentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerState -FallbackName=PlayerState
#include "ECameraDisplayMode.h"
#include "ResearchRequestDelegateDelegate.h"
#include "KeyItemAddedDelegateDelegate.h"
#include "OnPlayerNameChangedDelegateDelegate.h"
#include "OnHotBarQuickSlotChangedDelegate.h"
#include "TutorialDelegateDelegate.h"
#include "OnStickiedQuestChangedDelegateDelegate.h"
#include "PointOfInterestDelegateDelegate.h"
#include "OnHUDMarkerStateChangeDelegateDelegate.h"
#include "HotBarQuickSlotItemTypeKey.h"
#include "OnResourceSurveyVisibleChangeDelegateDelegate.h"
#include "OnRespawnPointChangedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ActiveQuestStickiedData.h"
#include "DeathInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "ERelevanceType.h"
#include "EHotBarQuickSlotType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "EGameMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "SurvivalPlayerState.generated.h"

class APawn;
class UHotBarQuickSlot;
class AActor;
class UPerkComponent;
class UAchievementsComponent;
class UPlayerStatsComponent;
class UPointOfInterestDataAsset;
class UItem;
class UQuest;
class UPlayerUpgradeComponent;
class ASurvivalCharacter;
class ASurvivalPlayerState;
class AResourceAnalyzer;

UCLASS()
class MAINE_API ASurvivalPlayerState : public APlayerState, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FKeyItemAddedDelegate OnKeyItemAdded;
    
    UPROPERTY(BlueprintAssignable)
    FResearchRequestDelegate OnResearchRequest;
    
    UPROPERTY(BlueprintAssignable)
    FOnColorChangedDelegate OnPlayerColorChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerNameChangedDelegate OnPlayerNameChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnHotBarQuickSlotChanged OnHotBarQuickSlotChanged;
    
    UPROPERTY(BlueprintAssignable)
    FTutorialDelegate OnTutorialShownDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FTutorialDelegate OnTutorialCompleteDelegate;
    
    UPROPERTY(BlueprintReadWrite, Transient, ReplicatedUsing=OnRep_HotBarQuickSlots)
    TArray<UHotBarQuickSlot*> HotBarQuickSlots;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 CharacterSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    bool bUseCharactersRealName;
    
    UPROPERTY(BlueprintAssignable)
    FOnStickiedQuestChangedDelegate OnStickiedQuestChanged;
    
    UPROPERTY(BlueprintAssignable)
    FPointOfInterestDelegate OnPointOfInterestDiscovered;
    
    UPROPERTY(BlueprintAssignable)
    FOnHUDMarkerStateChangeDelegate OnHUDMarkerStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnResourceSurveyVisibleChangeDelegate OnResourceSurveyVisibleChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnRespawnPointChangedDelegate OnRespawnPointChangedDelegate;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAchievementsComponent* AchievementsComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPlayerStatsComponent* PlayerStatsComponent;
    
    UPROPERTY(Transient)
    FVector LastDeathLocation;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PlayerColorSelectionChanged)
    int32 ColorSelection;
    
    UPROPERTY(Replicated, Transient)
    TArray<UItem*> PersonalKeyItems;
    
    UPROPERTY(Replicated, Transient)
    TArray<FDataTableRowHandle> InspectedItems;
    
    UPROPERTY(Replicated, Transient)
    TArray<FDataTableRowHandle> InspectedCraftingRecipes;
    
    UPROPERTY(Replicated, Transient)
    TArray<FDataTableRowHandle> InspectedBuildingRecipes;
    
    UPROPERTY(Replicated, Transient)
    TArray<FDataTableRowHandle_NetCrc> ViewedTutorials;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ClientQuests)
    TArray<UQuest*> ClientQuests;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ActiveQuestStickiedStates)
    TArray<FActiveQuestStickiedData> ActiveQuestStickiedStates;
    
    UPROPERTY(ReplicatedUsing=OnRep_ActiveQuestStickiedStates)
    bool bBurgleQuestsStickied;
    
    UPROPERTY(Transient)
    TArray<UPointOfInterestDataAsset*> DiscoveredPointsOfInterest;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RespawnPoint)
    TWeakObjectPtr<AActor> RespawnPoint;
    
    UPROPERTY(Replicated, Transient)
    FVector RespawnPointLocation;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_DesiredCameraMode)
    ECameraDisplayMode DesiredCameraMode;
    
    UPROPERTY(Replicated, Transient)
    FDeathInfo LastDeathNotification;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PlayerGuid)
    FGuid PlayerGuid;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPerkComponent* PerkComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPlayerUpgradeComponent* PlayerUpgradeComponent;
    
    UPROPERTY(Transient)
    TArray<UItem*> LastEquippedItemsBeforeDeath;
    
    UPROPERTY(Transient)
    TArray<UItem*> LastInventoryItemsBeforeDeath;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<FDataTableRowHandle> LastBuildingRadialVariants;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ToggledHUDMarkers)
    TArray<FGuid> ToggledHUDMarkers;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ResourceSurveyVisible)
    uint8 bResourceSurveyVisible: 1;
    
    UPROPERTY(Transient)
    FVector LastWaypointLocation;
    
    UPROPERTY(Transient)
    FDataTableRowHandle LastWaypointItemHandle;
    
public:
    ASurvivalPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ViewTutorial(FDataTableRowHandle TutorialRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void ToggleResourceSurveyVisible();
    
    UFUNCTION(BlueprintCallable)
    void SetTutorialComplete(FDataTableRowHandle TutorialRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetResourceSurveyVisible(bool bState);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerTextMute(APlayerState* Target, bool bState);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerColorSelection(int32 Selection);
    
    UFUNCTION(BlueprintCallable)
    void SetItemInspected(FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetCraftingRecipeInspected(FDataTableRowHandle CraftingRecipeRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetBuildingRecipeInspected(FDataTableRowHandle BuildingRecipeRowHandle);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerViewTutorial(FDataTableRowHandle TutorialRowHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUseTechTreeKeyItem(UItem* Item);
    
    UFUNCTION(Reliable, Server)
    void ServerUpdateRelevanceConsensus(ASurvivalCharacter* Character, ASurvivalPlayerState* Player, ERelevanceType ClientRelevance);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnassignQuickSlotItem(int32 Index);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerToggleHUDMarker(FGuid HUDMarkerObject, bool IsVisible);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetTutorialComplete(FDataTableRowHandle TutorialRowHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetSurveyedResource(const FDataTableRowHandle& Resource);
    
protected:
    UFUNCTION(Reliable, Server)
    void ServerSetResourceSurveyVisible(bool bIsVisible);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetQuickSlotAssignment(int32 Index, EHotBarQuickSlotType SlotType, FHotBarQuickSlotItemTypeKey ItemKey);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetQuestStickiedState(FDataTableRowHandle QuestRowHandle, bool IsStickied);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetItemInspected(FDataTableRowHandle ItemRowHandle);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetDesiredCameraMode(ECameraDisplayMode CameraMode);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetCraftingRecipeInspected(FDataTableRowHandle CraftingRecipeRowHandle);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetBurgleQuestsStickied(bool IsStickied);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetBuildingRecipeInspected(FDataTableRowHandle BuildingRecipeRowHandle);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSendChatMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestResearch(FDataTableRowHandle ItemRowHandle, AResourceAnalyzer* ResourceAnalyzer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveQuestStickiedState(FDataTableRowHandle QuestRowHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerGameModeChanged(EGameMode GameMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerEndViewResourceSurvey();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerBeginViewResourceSurvey();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddKeyItem(UItem* Item);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RemoveAchievement(FName AchievementName);
    
    UFUNCTION()
    void OnRep_ToggledHUDMarkers();
    
    UFUNCTION()
    void OnRep_RespawnPoint();
    
    UFUNCTION()
    void OnRep_ResourceSurveyVisible();
    
    UFUNCTION()
    void OnRep_PlayerGuid();
    
    UFUNCTION()
    void OnRep_PlayerColorSelectionChanged();
    
    UFUNCTION()
    void OnRep_HotBarQuickSlots();
    
    UFUNCTION()
    void OnRep_DesiredCameraMode();
    
    UFUNCTION()
    void OnRep_ClientQuests();
    
    UFUNCTION()
    void OnRep_ActiveQuestStickiedStates();
    
    UFUNCTION()
    void OnPlayerInventoryChanged();
    
    UFUNCTION(BlueprintCallable)
    void NavigateNextMetaBuildingVariant(const FDataTableRowHandle& MetaBuilding);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSendChatMessage(ASurvivalPlayerState* PlayerState, const FString& Message);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastGameModeChanged(EGameMode GameMode);
    
    UFUNCTION()
    void LocallyHandlePawnUnpossess(APawn* Pawn);
    
    UFUNCTION()
    void LocallyHandlePawnPossess(APawn* Pawn);
    
    UFUNCTION(BlueprintPure)
    bool IsResourceSurveyVisible() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBurgleQuestsStickied() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActiveQuestStickied(FDataTableRowHandle QuestRowHandle);
    
    UFUNCTION(BlueprintPure)
    bool HasViewedTutorial(FDataTableRowHandle TutorialRowHandle);
    
    UFUNCTION(BlueprintPure)
    bool HasKeyItem(FDataTableRowHandle ItemHandle);
    
    UFUNCTION(BlueprintPure)
    bool HasInspectedItem(FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintPure)
    bool HasInspectedCraftingRecipe(FDataTableRowHandle CraftingRecipeRowHandle);
    
    UFUNCTION(BlueprintPure)
    bool HasInspectedBuildingRecipe(FDataTableRowHandle BuildingRecipeRowHandle);
    
    UFUNCTION(BlueprintPure)
    TArray<FDataTableRowHandle_NetCrc> GetViewedTutorials() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UItem*> GetTechTreeKeyItems(FGameplayTag KeyItemSubCategory) const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetRespawnPoint() const;
    
    UFUNCTION(BlueprintPure)
    bool GetPlayerTextMute(const APlayerState* Target) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetPlayerColorSelection() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetPlayerColor();
    
    UFUNCTION(BlueprintPure)
    TArray<UItem*> GetPersonalKeyItems() const;
    
    UFUNCTION(BlueprintPure)
    FDeathInfo GetLastDeathNotification() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FActiveQuestStickiedData> GetActiveQuestStickiedStates() const;
    
    UFUNCTION(Client, Reliable)
    void ClientViewTutorial(FDataTableRowHandle TutorialRowHandle);
    
    UFUNCTION(Client, Reliable)
    void ClientSetTutorialComplete(FDataTableRowHandle TutorialRowHandle);
    
    UFUNCTION(Client, Reliable)
    void ClientSendResourceSurveyBlock(int32 StartIndex, const TArray<uint8>& Buffer);
    
    UFUNCTION(Client, Reliable)
    void ClientSendFrankenlineImageBlock(FGuid ObsidianId, const TArray<uint8>& Buffer);
    
    UFUNCTION(Client, Reliable)
    void ClientOnRestoreItems(bool bEquipmentDamaged);
    
    UFUNCTION(Client, Reliable)
    void ClientOnRequestResearch(FDataTableRowHandle ItemRowHandle, bool bSuccess);
    
    UFUNCTION(Client, Unreliable)
    void ClientOnKeyItemAdded(FDataTableRowHandle ItemRowHandle, bool IsNewItem);
    
    UFUNCTION(Client, Reliable)
    void ClientEndStreamFrankenlineImage(FGuid ObsidianId);
    
    UFUNCTION(Client, Reliable)
    void ClientBeginStreamFrankenlineImage(FGuid ObsidianId, int64 BufferSize);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AwardAchievement(FName AchievementName);
    
    
    // Fix for true pure virtual functions not being implemented
};

