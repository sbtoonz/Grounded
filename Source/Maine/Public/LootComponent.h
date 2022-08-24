#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GoapActionProviderInterface.h"
#include "LootData.h"
#include "Engine/DataTable.h"
#include "LODableComponentInterface.h"
#include "ELootSpawnType.h"
#include "DamageInfo.h"
#include "LootComponent.generated.h"

class USceneComponent;
class UGoapActionHarvest;
class USoundCue;
class AActor;
class UHealthComponent;
class AController;
class UObject;
class UBaseLODActor;
class UGoapAction;
class USurvivalGameInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API ULootComponent : public UActorComponent, public IGoapActionProviderInterface, public ILODableComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OnLootSpawnSFX;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLootData> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDestroyBody: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractDelayOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGoapActionHarvest* TemplateHarvestAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bInteractable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
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
    UFUNCTION(BlueprintCallable)
    void OnDecayed(UHealthComponent* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnDamaged(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDropItem(const FDataTableRowHandle& ItemType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UGoapAction*> AllocateGOAPActions(USurvivalGameInstance* GameInstance, UObject* InOwner);
    
    
    // Fix for true pure virtual functions not being implemented
};

