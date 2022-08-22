#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PersistentInterface.h"
#include "AchievementStatus.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "AchievementsComponent.generated.h"

class ASurvivalPlayerState;
class UPlayerUpgradeComponent;
class UPlayerStatConfig;
class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UAchievementsComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Achievements)
    TArray<FAchievementStatus> Achievements;
    
    UPROPERTY(EditDefaultsOnly)
    bool bShowDebug;
    
public:
    UAchievementsComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequestAchievementReevaluation();
    
    UFUNCTION()
    void OnTotalPartyPlayerStatChanged(UPlayerStatConfig* PlayerStat, int32 Value);
    
    UFUNCTION()
    void OnRep_Achievements();
    
    UFUNCTION()
    void OnPlayerUpgradesChanged(UPlayerUpgradeComponent* InPlayerUpgradeComponent);
    
    UFUNCTION()
    void OnPlayerStatChanged(UPlayerStatConfig* PlayerStat, int32 Value);
    
    UFUNCTION()
    void OnKeyItemObtained(FDataTableRowHandle ItemRowHandle, ASurvivalPlayerState* AcquirerPlayerState, const TArray<FDataTableRowHandle>& RecipesLearned);
    
    UFUNCTION()
    void OnGlobalVariableChanged(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator);
    
    UFUNCTION()
    void OnGameModeChanged();
    
    UFUNCTION(Client, Reliable)
    void ClientUpdateAchievementProgressOnline(const FString& AchievementUnlockTag, int32 Progress);
    
    
    // Fix for true pure virtual functions not being implemented
};

