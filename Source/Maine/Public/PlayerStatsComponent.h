#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PersistentInterface.h"
#include "OnPlayerStatChangedDelegateDelegate.h"
#include "DamageInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "PlayerStatsComponent.generated.h"

class ASurvivalPlayerState;
class ASurvivalCreature;
class AActor;
class UInventoryComponent;
class UPlayerStatConfig;
class UPointOfInterestDataAsset;
class ASurvivalCharacter;
class UDefensePointComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPlayerStatsComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnPlayerStatChangedDelegate OnPlayerStatChanged;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<UPlayerStatConfig*> PlayerStatConfigs;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<UPlayerStatConfig*, int32> PlayerStats;
    
public:
    UPlayerStatsComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void SetPlayerStatIfLarger(UPlayerStatConfig* PlayerStat, int32 NewValue);
    
    UFUNCTION()
    void OnStaminaDepleted(float StaminaRatio);
    
    UFUNCTION()
    void OnReviveTarget(AActor* RevivedActor);
    
    UFUNCTION()
    void OnPointOfInterestDiscovered(UPointOfInterestDataAsset* PointOfInterest, ASurvivalPlayerState* UnlockerPlayerState);
    
public:
    UFUNCTION()
    void OnPhotoTaken();
    
protected:
    UFUNCTION()
    void OnPetTamed(ASurvivalCreature* Pet);
    
public:
    UFUNCTION()
    void OnKill(AActor* KilledActor, const FDamageInfo& DamageInfo);
    
protected:
    UFUNCTION()
    void OnItemUsed(ASurvivalCharacter* User, FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION()
    void OnItemCrafted(UInventoryComponent* Sender, FDataTableRowHandle RecipeHandle);
    
    UFUNCTION()
    void OnItemAdded(UInventoryComponent* InventoryComponent, FDataTableRowHandle ItemHandle, bool IsNewItem, int32 Count, int32 TotalCount);
    
public:
    UFUNCTION()
    void OnDefensePointComplete(UDefensePointComponent* DefensePoint);
    
protected:
    UFUNCTION(BlueprintCallable)
    void IncrementPlayerStat(UPlayerStatConfig* PlayerStat, int32 ValueToAdd);
    
    
    // Fix for true pure virtual functions not being implemented
};

