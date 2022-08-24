#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/GameStateBase.h"
#include "OnPlayerStateAddRemoveDelegate.h"
#include "WaveCompositionData.h"
#include "DeathInfo.h"
#include "GlobalVariableChangedEventDelegate.h"
#include "GameplayTagContainer.h"
#include "EPlayerDisconnectReason.h"
#include "OnDefensePointActiveChangedDelegate.h"
#include "OnDefensePointCompletedDelegate.h"
#include "OnLobbyGameStartedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "EWaveCompletionReason.h"
#include "EWaveAttackState.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GameVersion.h"
#include "EGamePackageType.h"
#include "SurvivalGameState.generated.h"

class AActor;
class UQuestManagerComponent;
class UHUDMarkerManagerComponent;
class AItemSpawnManager;
class UAuraManagerComponent;
class UConversationNavigatorComponent;
class UItemManagerComponent;
class UPopulationMonitorComponent;
class UMapComponent;
class UPartyComponent;
class UColonyManagerComponent;
class UInterestManagerComponent;
class ULODActorManagerComponent;
class UObsidianIDComponent;
class UResourceSurveyComponent;
class UCalendarComponent;
class UFoliageManagerComponent;
class UBreadcrumbManagerComponent;
class UAttractionManagerComponent;
class UAmbienceManager;
class UWaveManagerComponent;
class UCVarManagerComponent;
class UMovieSkipComponent;
class UAsyncTraceShareComponent;
class UBaseManagerComponent;
class UBuildingManagerComponent;
class UPowerNetworkManagerComponent;
class UCutsceneComponent;
class USurvivalModeManagerComponent;
class UZoneManagerComponent;
class UBurgleQuestManagerComponent;
class UWorldTraceManagerComponent;
class UWaterManagerComponent;
class UPropManagerComponent;
class UVisualStateManagerComponent;
class URenderTargetManagerComponent;
class UPersistenceComponent;
class UPlayerStatsComponent;
class UBestiaryComponent;
class UInterfaceManagerComponent;
class UDynamicMaterialCache;
class ABossManager;
class UVisualEffect;
class USoundCue;
class APlayerState;
class UDefensePointComponent;
class ASurvivalPlayerCharacter;

UCLASS(Blueprintable)
class MAINE_API ASurvivalGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerStateAddRemove OnPlayerStateAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerStateAddRemove OnPlayerStateRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    ULODActorManagerComponent* LODActorManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCalendarComponent* CalendarComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPartyComponent* PartyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMapComponent* MapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHUDMarkerManagerComponent* HUDMarkerManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UItemManagerComponent* ItemManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFoliageManagerComponent* FoliageManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UQuestManagerComponent* QuestManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBreadcrumbManagerComponent* BreadcrumbManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAttractionManagerComponent* AttractionManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWaveManagerComponent* WaveManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCVarManagerComponent* CVarManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMovieSkipComponent* MovieSkipComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAsyncTraceShareComponent* AsyncTraceShareComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBaseManagerComponent* BaseManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBuildingManagerComponent* BuildingManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPowerNetworkManagerComponent* PowerNetworkManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UConversationNavigatorComponent* ConversationNavigatorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCutsceneComponent* CutsceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInterestManagerComponent* InterestManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USurvivalModeManagerComponent* SurvivalModeManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAuraManagerComponent* AuraManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UZoneManagerComponent* ZoneManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UColonyManagerComponent* ColonyManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBurgleQuestManagerComponent* BurgleQuestManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPopulationMonitorComponent* PopulationMonitorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWorldTraceManagerComponent* WorldTraceManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UWaterManagerComponent* WaterManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPropManagerComponent* PropManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UVisualStateManagerComponent* VisualStateManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URenderTargetManagerComponent* RenderTargetManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UResourceSurveyComponent* ResourceSurveyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPlayerStatsComponent* TotalPartyPlayerStatsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBestiaryComponent* BestiaryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInterfaceManagerComponent* InterfaceManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDynamicMaterialCache* DynamicMaterialCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAmbienceManager* AmbienceManager;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDefensePointActiveChanged OnDefensePointActiveChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDefensePointCompleted OnDefensePointCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLobbyGameStarted OnLobbyGameStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGuid PlaythroughGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlaythroughName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasResetCreatureLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasRecoveredPlayerBackpacks;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItemSpawnManager> ItemSpawnManagerTemplate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LobbyGameStarted, meta=(AllowPrivateAccess=true))
    bool bLobbyGameStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LobbyGameStarted();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastWaveSpawnFailed(const TArray<FGameplayTag>& FailedToSpawnFactions);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastWaveSpawned(bool ManualWave, AActor* InInstigator);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastWaveCompositionChanged(const TArray<FWaveCompositionData>& Composition);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastWaveComplete(EWaveCompletionReason Reason);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
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
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastNotifyPetDeparted(ASurvivalPlayerCharacter* ToPlayer, const FString& PetName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastNotifyEndOfEarlyAccessContent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefensePointActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBossActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePatchSaveGameRepair(FGameVersion LoadedVersion, EGamePackageType GamePackageType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleEndEarlyAccessConent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AItemSpawnManager* GetItemSpawnManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInCutscene();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHUDMarkerManagerComponent* GetHUDMarkerManagerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFoliageManagerComponent* GetFoliageManagerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBigHeadsState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAmbienceManager* GetAmbienceManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDefensePointComponent* GetActiveDefensePoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ABossManager* GetActiveBossForPlayer(ASurvivalPlayerCharacter* PlayerCharacter) const;
    
    UFUNCTION(NetMulticast, Reliable)
    void ClientSendFileContents(const FString& Filename, const TArray<uint8>& Buffer);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientEndStreamFile(const FString& Filename, const FString& Hash);
    
    UFUNCTION(NetMulticast, Reliable)
    void ClientBeginStreamFile(const FString& SaveName, const FString& Filename, int64 FileSize);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BigHeads();
    
};

