#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PersistentInterface.h"
#include "AchievementStatus.h"
#include "Engine/DataTable.h"
#include "AchievementsComponent.generated.h"

class UPlayerUpgradeComponent;
class ASurvivalPlayerState;
class UPlayerStatConfig;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UAchievementsComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Achievements, meta=(AllowPrivateAccess=true))
    TArray<FAchievementStatus> Achievements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebug;
    
public:
    UAchievementsComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestAchievementReevaluation();
    
    UFUNCTION(BlueprintCallable)
    void OnTotalPartyPlayerStatChanged(UPlayerStatConfig* PlayerStat, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Achievements();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerUpgradesChanged(UPlayerUpgradeComponent* InPlayerUpgradeComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStatChanged(UPlayerStatConfig* PlayerStat, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnKeyItemObtained(FDataTableRowHandle ItemRowHandle, ASurvivalPlayerState* AcquirerPlayerState, const TArray<FDataTableRowHandle>& RecipesLearned);
    
    UFUNCTION(BlueprintCallable)
    void OnGlobalVariableChanged(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void OnGameModeChanged();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateAchievementProgressOnline(const FString& AchievementUnlockTag, int32 Progress);
    
    
    // Fix for true pure virtual functions not being implemented
};

