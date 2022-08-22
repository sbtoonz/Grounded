#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameStateBase -FallbackName=GameStateBase
#include "OnPlayerStateAddRemoveDelegate.h"
#include "OnDefensePointActiveChangedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "DeathInfo.h"
#include "GlobalVariableChangedEventDelegate.h"
#include "GameVersion.h"
#include "EPlayerDisconnectReason.h"
#include "WaveCompositionData.h"
#include "EWaveAttackState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "OnDefensePointCompletedDelegate.h"
#include "OnLobbyGameStartedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EWaveCompletionReason.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EGamePackageType.h"
#include "SurvivalGameState.generated.h"

class UInterfaceManagerComponent;
class UWorldTraceManagerComponent;
class UMapComponent;
class UPartyComponent;
class UColonyManagerComponent;
class ULODActorManagerComponent;
class UCalendarComponent;
class UHUDMarkerManagerComponent;
class UConversationNavigatorComponent;
class UBreadcrumbManagerComponent;
class UItemManagerComponent;
class UBurgleQuestManagerComponent;
class UFoliageManagerComponent;
class UQuestManagerComponent;
class UAttractionManagerComponent;
class UWaveManagerComponent;
class UCVarManagerComponent;
class UPowerNetworkManagerComponent;
class UMovieSkipComponent;
class UAsyncTraceShareComponent;
class USoundCue;
class UBaseManagerComponent;
class UBuildingManagerComponent;
class UCutsceneComponent;
class UInterestManagerComponent;
class USurvivalModeManagerComponent;
class AActor;
class UAuraManagerComponent;
class UZoneManagerComponent;
class UPopulationMonitorComponent;
class UWaterManagerComponent;
class UPropManagerComponent;
class UVisualStateManagerComponent;
class URenderTargetManagerComponent;
class UResourceSurveyComponent;
class UPlayerStatsComponent;
class UBestiaryComponent;
class UDefensePointComponent;
class UPersistenceComponent;
class UObsidianIDComponent;
class UDynamicMaterialCache;
class UAmbienceManager;
class AItemSpawnManager;
class UVisualEffect;
class APlayerState;
class ASurvivalPlayerCharacter;
class ABossManager;

UCLASS()
class MAINE_API ASurvivalGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnPlayerStateAddRemove OnPlayerStateAdded;
    
    UPROPERTY(BlueprintAssignable)
    FOnPlayerStateAddRemove OnPlayerStateRemoved;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    ULODActorManagerComponent* LODActorManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCalendarComponent* CalendarComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPartyComponent* PartyComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UMapComponent* MapComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UHUDMarkerManagerComponent* HUDMarkerManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UItemManagerComponent* ItemManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UFoliageManagerComponent* FoliageManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UQuestManagerComponent* QuestManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBreadcrumbManagerComponent* BreadcrumbManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAttractionManagerComponent* AttractionManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UWaveManagerComponent* WaveManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCVarManagerComponent* CVarManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UMovieSkipComponent* MovieSkipComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAsyncTraceShareComponent* AsyncTraceShareComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBaseManagerComponent* BaseManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBuildingManagerComponent* BuildingManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPowerNetworkManagerComponent* PowerNetworkManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UConversationNavigatorComponent* ConversationNavigatorComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCutsceneComponent* CutsceneComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UInterestManagerComponent* InterestManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USurvivalModeManagerComponent* SurvivalModeManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAuraManagerComponent* AuraManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UZoneManagerComponent* ZoneManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UColonyManagerComponent* ColonyManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBurgleQuestManagerComponent* BurgleQuestManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPopulationMonitorComponent* PopulationMonitorComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UWorldTraceManagerComponent* WorldTraceManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UWaterManagerComponent* WaterManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPropManagerComponent* PropManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UVisualStateManagerComponent* VisualStateManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    URenderTargetManagerComponent* RenderTargetManagerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UResourceSurveyComponent* ResourceSurveyComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPlayerStatsComponent* TotalPartyPlayerStatsComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBestiaryComponent* BestiaryComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UInterfaceManagerComponent* InterfaceManagerComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UDynamicMaterialCache* DynamicMaterialCache;
    
    UPROPERTY(VisibleAnywhere)
    UAmbienceManager* AmbienceManager;
    
    UPROPERTY(BlueprintAssignable)
    FOnDefensePointActiveChanged OnDefensePointActiveChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnDefensePointCompleted OnDefensePointCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FOnLobbyGameStarted OnLobbyGameStarted;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    FGuid PlaythroughGuid;
    
    UPROPERTY(BlueprintReadWrite)
    FString PlaythroughName;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasResetCreatureLocations;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasRecoveredPlayerBackpacks;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AItemSpawnManager> ItemSpawnManagerTemplate;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_LobbyGameStarted)
    bool bLobbyGameStarted;
    
    UPROPERTY(Replicated)
    bool bBigHeads;
    
public:
    ASurvivalGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnRegisterGlobalVariableChangedEvent(FGuid GlobalVariableID, FGlobalVariableChangedEvent Event);
    
    UFUNCTION(BlueprintCallable)
    void TriggerGameStartViaLobby();
    
    UFUNCTION(BlueprintCallable)
    void SetInCutscene(bool InCutscene);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetBigHeads(bool bState);
    
    UFUNCTION(BlueprintCallable)
    void RegisterGlobalVariableChangedEvent(FGuid GlobalVariableID, FGlobalVariableChangedEvent Event);
    
    UFUNCTION()
    void OnRep_LobbyGameStarted();
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastWaveSpawnFailed(const TArray<FGameplayTag>& FailedToSpawnFactions);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastWaveSpawned(bool ManualWave, AActor* InInstigator);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastWaveCompositionChanged(const TArray<FWaveCompositionData>& Composition);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastWaveComplete(EWaveCompletionReason Reason);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastWaveAttackStateChanged(EWaveAttackState AttackState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayVFXLocation(UVisualEffect* Effect, FVector Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayItemConsumeAudioAtLocation(FDataTableRowHandle ItemRowHandle, FVector Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayAudioAtLocation(USoundCue* Cue, FVector Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNotifyPlayerLeave(APlayerState* PlayerState, EPlayerDisconnectReason Reason);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNotifyPlayerJoin(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNotifyPlayerDown(APlayerState* PlayerState, const FDeathInfo& DeathInfo);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastNotifyPetDeparted(ASurvivalPlayerCharacter* ToPlayer, const FString& PetName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastNotifyEndOfEarlyAccessContent();
    
    UFUNCTION(BlueprintPure)
    bool IsDefensePointActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBossActive() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandlePatchSaveGameRepair(FGameVersion LoadedVersion, EGamePackageType GamePackageType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleEndEarlyAccessConent();
    
    UFUNCTION(BlueprintPure)
    AItemSpawnManager* GetItemSpawnManager() const;
    
    UFUNCTION(BlueprintPure)
    bool GetInCutscene();
    
    UFUNCTION(BlueprintPure)
    UHUDMarkerManagerComponent* GetHUDMarkerManagerComponent() const;
    
    UFUNCTION(BlueprintPure)
    UFoliageManagerComponent* GetFoliageManagerComponent() const;
    
    UFUNCTION(BlueprintPure)
    bool GetBigHeadsState() const;
    
    UFUNCTION(BlueprintPure)
    UAmbienceManager* GetAmbienceManager() const;
    
    UFUNCTION(BlueprintPure)
    UDefensePointComponent* GetActiveDefensePoint() const;
    
    UFUNCTION(BlueprintPure)
    ABossManager* GetActiveBossForPlayer(ASurvivalPlayerCharacter* PlayerCharacter) const;
    
    UFUNCTION(NetMulticast, Reliable)
    void ClientSendFileContents(const FString& Filename, const TArray<uint8>& Buffer);
    
    UFUNCTION(NetMulticast, Reliable)
    void ClientEndStreamFile(const FString& Filename, const FString& Hash);
    
    UFUNCTION(NetMulticast, Reliable)
    void ClientBeginStreamFile(const FString& SaveName, const FString& Filename, int64 FileSize);
    
    UFUNCTION(Exec)
    void BigHeads();
    
};

