#pragma once
#include "CoreMinimal.h"
#include "PersistentInterface.h"
#include "OnHotBarQuickSlotChangedDelegate.h"
#include "GameFramework/PlayerState.h"
#include "ResearchRequestDelegateDelegate.h"
#include "ActiveQuestStickiedData.h"
#include "KeyItemAddedDelegateDelegate.h"
#include "OnColorChangedDelegateDelegate.h"
#include "OnPlayerNameChangedDelegateDelegate.h"
#include "TutorialDelegateDelegate.h"
#include "EHotBarQuickSlotType.h"
#include "DeathInfo.h"
#include "OnStickiedQuestChangedDelegateDelegate.h"
#include "PointOfInterestDelegateDelegate.h"
#include "OnHUDMarkerStateChangeDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "OnResourceSurveyVisibleChangeDelegateDelegate.h"
#include "OnRespawnPointChangedDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "HotBarQuickSlotItemTypeKey.h"
#include "DataTableRowHandle_NetCrc.h"
#include "GameplayTagContainer.h"
#include "ECameraDisplayMode.h"
#include "UObject/NoExportTypes.h"
#include "ERelevanceType.h"
#include "EGameMode.h"
#include "SurvivalPlayerState.generated.h"

class UItem;
class UHotBarQuickSlot;
class UAchievementsComponent;
class UPlayerStatsComponent;
class UQuest;
class APawn;
class UPointOfInterestDataAsset;
class AActor;
class UPerkComponent;
class UPlayerUpgradeComponent;
class ASurvivalCharacter;
class ASurvivalPlayerState;
class AResourceAnalyzer;

UCLASS(Blueprintable)
class MAINE_API ASurvivalPlayerState : public APlayerState, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeyItemAddedDelegate OnKeyItemAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResearchRequestDelegate OnResearchRequest;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnColorChangedDelegate OnPlayerColorChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerNameChangedDelegate OnPlayerNameChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHotBarQuickSlotChanged OnHotBarQuickSlotChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialDelegate OnTutorialShownDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialDelegate OnTutorialCompleteDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HotBarQuickSlots, meta=(AllowPrivateAccess=true))
    TArray<UHotBarQuickSlot*> HotBarQuickSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharacterSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bUseCharactersRealName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStickiedQuestChangedDelegate OnStickiedQuestChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPointOfInterestDelegate OnPointOfInterestDiscovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHUDMarkerStateChangeDelegate OnHUDMarkerStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResourceSurveyVisibleChangeDelegate OnResourceSurveyVisibleChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRespawnPointChangedDelegate OnRespawnPointChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAchievementsComponent* AchievementsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPlayerStatsComponent* PlayerStatsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastDeathLocation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerColorSelectionChanged, meta=(AllowPrivateAccess=true))
    int32 ColorSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItem*> PersonalKeyItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> InspectedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> InspectedCraftingRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> InspectedBuildingRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle_NetCrc> ViewedTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ClientQuests, meta=(AllowPrivateAccess=true))
    TArray<UQuest*> ClientQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveQuestStickiedStates, meta=(AllowPrivateAccess=true))
    TArray<FActiveQuestStickiedData> ActiveQuestStickiedStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveQuestStickiedStates, meta=(AllowPrivateAccess=true))
    bool bBurgleQuestsStickied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPointOfInterestDataAsset*> DiscoveredPointsOfInterest;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_RespawnPoint)
    TWeakObjectPtr<AActor> RespawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector RespawnPointLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DesiredCameraMode, meta=(AllowPrivateAccess=true))
    ECameraDisplayMode DesiredCameraMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FDeathInfo LastDeathNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerGuid, meta=(AllowPrivateAccess=true))
    FGuid PlayerGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPerkComponent* PerkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPlayerUpgradeComponent* PlayerUpgradeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItem*> LastEquippedItemsBeforeDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItem*> LastInventoryItemsBeforeDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> LastBuildingRadialVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ToggledHUDMarkers, meta=(AllowPrivateAccess=true))
    TArray<FGuid> ToggledHUDMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ResourceSurveyVisible, meta=(AllowPrivateAccess=true))
    uint8 bResourceSurveyVisible: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastWaypointLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerViewTutorial(FDataTableRowHandle TutorialRowHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUseTechTreeKeyItem(UItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUpdateRelevanceConsensus(ASurvivalCharacter* Character, ASurvivalPlayerState* Player, ERelevanceType ClientRelevance);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnassignQuickSlotItem(int32 Index);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerToggleHUDMarker(FGuid HUDMarkerObject, bool IsVisible);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetTutorialComplete(FDataTableRowHandle TutorialRowHandle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetSurveyedResource(const FDataTableRowHandle& Resource);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
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
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveAchievement(FName AchievementName);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ToggledHUDMarkers();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RespawnPoint();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ResourceSurveyVisible();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerGuid();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerColorSelectionChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HotBarQuickSlots();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DesiredCameraMode();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ClientQuests();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveQuestStickiedStates();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerInventoryChanged();
    
    UFUNCTION(BlueprintCallable)
    void NavigateNextMetaBuildingVariant(const FDataTableRowHandle& MetaBuilding);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSendChatMessage(ASurvivalPlayerState* PlayerState, const FString& Message);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastGameModeChanged(EGameMode GameMode);
    
    UFUNCTION(BlueprintCallable)
    void LocallyHandlePawnUnpossess(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void LocallyHandlePawnPossess(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResourceSurveyVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBurgleQuestsStickied() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveQuestStickied(FDataTableRowHandle QuestRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasViewedTutorial(FDataTableRowHandle TutorialRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasKeyItem(FDataTableRowHandle ItemHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInspectedItem(FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInspectedCraftingRecipe(FDataTableRowHandle CraftingRecipeRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInspectedBuildingRecipe(FDataTableRowHandle BuildingRecipeRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDataTableRowHandle_NetCrc> GetViewedTutorials() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UItem*> GetTechTreeKeyItems(FGameplayTag KeyItemSubCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetRespawnPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerTextMute(const APlayerState* Target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerColorSelection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetPlayerColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UItem*> GetPersonalKeyItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDeathInfo GetLastDeathNotification() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FActiveQuestStickiedData> GetActiveQuestStickiedStates() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientViewTutorial(FDataTableRowHandle TutorialRowHandle);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetTutorialComplete(FDataTableRowHandle TutorialRowHandle);
    
    UFUNCTION(Client, Reliable)
    void ClientSendResourceSurveyBlock(int32 StartIndex, const TArray<uint8>& Buffer);
    
    UFUNCTION(Client, Reliable)
    void ClientSendFrankenlineImageBlock(FGuid ObsidianId, const TArray<uint8>& Buffer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnRestoreItems(bool bEquipmentDamaged);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnRequestResearch(FDataTableRowHandle ItemRowHandle, bool bSuccess);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientOnKeyItemAdded(FDataTableRowHandle ItemRowHandle, bool IsNewItem);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEndStreamFrankenlineImage(FGuid ObsidianId);
    
    UFUNCTION(Client, Reliable)
    void ClientBeginStreamFrankenlineImage(FGuid ObsidianId, int64 BufferSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AwardAchievement(FName AchievementName);
    
    
    // Fix for true pure virtual functions not being implemented
};

