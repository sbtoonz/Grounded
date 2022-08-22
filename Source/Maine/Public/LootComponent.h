#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "GoapActionProviderInterface.h"
#include "LootData.h"
#include "LODableComponentInterface.h"
#include "ELootSpawnType.h"
#include "DamageInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "LootComponent.generated.h"

class UGoapActionHarvest;
class UHealthComponent;
class USoundCue;
class AActor;
class UObject;
class USceneComponent;
class AController;
class UBaseLODActor;
class UGoapAction;
class USurvivalGameInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API ULootComponent : public UActorComponent, public IGoapActionProviderInterface, public ILODableComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundCue* OnLootSpawnSFX;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<FLootData> Items;
    
    UPROPERTY(EditAnywhere)
    uint8 bDestroyBody: 1;
    
    UPROPERTY(EditAnywhere)
    float InteractDelayOnDeath;
    
    UPROPERTY(EditDefaultsOnly)
    UGoapActionHarvest* TemplateHarvestAction;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    uint8 bInteractable: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Replicated)
    uint8 bForceGiveBestiaryLootIfLastOfActorClass: 1;
    
public:
    ULootComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StartCacheSpawnPointVelocities();
    
    UFUNCTION(BlueprintCallable)
    void SpawnLoot(AActor* Looter, ELootSpawnType SpawnType);
    
    UFUNCTION(BlueprintCallable)
    void SetSpawnPointForItem(USceneComponent* SpawnPoint, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetAllDropChanceMultipliers(float Value);
    
protected:
    UFUNCTION()
    void OnDecayed(UHealthComponent* Sender);
    
    UFUNCTION()
    void OnDeath(const FDamageInfo& DamageInfo);
    
    UFUNCTION()
    void OnDamaged(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
public:
    UFUNCTION(BlueprintPure)
    bool CanDropItem(const FDataTableRowHandle& ItemType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UGoapAction*> AllocateGOAPActions(USurvivalGameInstance* GameInstance, UObject* InOwner);
    
    
    // Fix for true pure virtual functions not being implemented
};

