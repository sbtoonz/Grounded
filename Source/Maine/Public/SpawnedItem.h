#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LODableActorInterface.h"
#include "InteractableInterface.h"
#include "ESpawnedItemEmbedType.h"
#include "SwappableFoliageInterface.h"
#include "GoapActionProviderInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamAgentInterface -FallbackName=GenericTeamAgentInterface
#include "ItemContainerInterface.h"
#include "OnSpawnedItemInteractDelegate.h"
#include "OnSpawnedItemDestroyedDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EWaveCompletionReason.h"
#include "EEquipmentSlot.h"
#include "DamageInfo.h"
#include "SpawnedItem.generated.h"

class USpawnedItemLiteData;
class UObject;
class UBaseLODActor;
class UObsidianIDComponent;
class UItem;
class ASurvivalCharacter;
class USoundCue;
class AZiplineLine;
class UPhysicalMaterial;
class APawn;
class UPrimitiveComponent;
class UAttack;
class APhysicsVolume;
class UGoapAction;
class USurvivalGameInstance;

UCLASS(Abstract)
class MAINE_API ASpawnedItem : public AActor, public IInteractableInterface, public ISwappableFoliageInterface, public IGenericTeamAgentInterface, public IItemContainerInterface, public IGoapActionProviderInterface, public ILODableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FDataTableRowHandle PlacedItemData;
    
    UPROPERTY(BlueprintAssignable)
    FOnSpawnedItemInteract OnSpawnedItemInteract;
    
    UPROPERTY(BlueprintAssignable)
    FOnSpawnedItemDestroyed OnSpawnedItemDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float OverrideGameHourLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 bUseOverrideGameHourLifetime: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 bLifetimeDespawnWhenProxiedOnly: 1;
    
    UPROPERTY(VisibleDefaultsOnly)
    USpawnedItemLiteData* LiteData;
    
    UPROPERTY(Transient)
    FGameplayTag GoapRegionTag;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(Replicated, Transient)
    UItem* Item;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ASurvivalCharacter* EquippedOwner;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* AttackOwner;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UBaseLODActor> DroppedByActor;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    uint8 bIsThrown: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    uint8 bHasImpacted: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bCanAiInteract: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 CanLODItem: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bInteractOnTouch: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bDisableCollisionOnSleep: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bSleepPhysicsDuringWaves: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bIgnorePawnCollision: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESpawnedItemEmbedType EmbedOnHit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FFloatRange EmbedRotationOnHit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinimumEmbedNormal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bRotateOnEmbed: 1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 bThrowStraight: 1;
    
    UPROPERTY(Replicated, Transient)
    uint8 bIsTickingAttack: 1;
    
    UPROPERTY(Transient)
    uint8 bThrowAttackCleared: 1;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RootComponentAsleep)
    uint8 bRootComponentAsleep: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsAttached)
    uint8 bIsAttached: 1;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector PreviousVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float ZiplineMaxSpeedMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    USoundCue* PhysicsImpactAudio;
    
    UPROPERTY(EditDefaultsOnly)
    bool bOverrideImpactSettings;
    
    UPROPERTY(EditDefaultsOnly)
    float OverrideImpactEffectDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float OverrideMinImpactThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    float OverrideMaxImpactThreshold;
    
    UPROPERTY(EditDefaultsOnly)
    float OverrideMinImpactVolume;
    
    UPROPERTY(EditDefaultsOnly)
    float OverrideMaxImpactVolume;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUpdateTickRateWhenNotRendered;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_AttachedZipline)
    AZiplineLine* AttachedZipline;
    
public:
    ASpawnedItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool ValidateItemData(UPARAM(Ref) TArray<FText>& ValidationErrors) const;
    
private:
    UFUNCTION()
    void TickZipline(float DeltaTime);
    
    UFUNCTION()
    void TickBuoyancy(float DeltaTime);
    
    UFUNCTION()
    void TickAttached(float DeltaTime);
    
public:
    UFUNCTION()
    void Throw(APawn* Thrower, FVector Impulse, FVector AngularImpulse);
    
    UFUNCTION(BlueprintCallable)
    void StartThrownAttack(AActor* Thrower);
    
    UFUNCTION()
    void SetEquippedOwner(ASurvivalCharacter* NewOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 RemoveItem(UItem* InItem, int32 Count);
    
    UFUNCTION()
    void OnWaveComplete(EWaveCompletionReason Reason);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnThrown();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectedAmmoChanged(FName SelectedAmmoType);
    
    UFUNCTION()
    void OnRep_RootComponentAsleep();
    
    UFUNCTION()
    void OnRep_IsAttached();
    
private:
    UFUNCTION()
    void OnRep_AttachedZipline();
    
protected:
    UFUNCTION()
    void OnPhysicsWake(UPrimitiveComponent* SleepingComponent, FName BoneName);
    
    UFUNCTION()
    void OnPhysicsSleep(UPrimitiveComponent* SleepingComponent, FName BoneName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnLaunchAttack(UAttack* Attack);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemUnequipped(ASurvivalCharacter* Character, EEquipmentSlot Slot);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemEquipped(ASurvivalCharacter* Character, EEquipmentSlot Slot);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnHitWithAttack(const FDamageInfo& DamageInfo);
    
public:
    UFUNCTION()
    void OnDefenseComplete(bool Success);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifySwapped(bool bFromDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifySpawned();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_Initialize();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsThrownAttackTimerActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHaulingItem() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsEmbeddableMaterial(const UPhysicalMaterial* Material) const;
    
    UFUNCTION(BlueprintCallable)
    void HandleTouch(AActor* Actor);
    
private:
    UFUNCTION()
    void HandleThrowAttackTimerExpired();
    
public:
    UFUNCTION()
    void HandlePhysicsVolumeChanged(APhysicsVolume* Volume);
    
    UFUNCTION(BlueprintPure)
    bool GetThrowStraight() const;
    
    UFUNCTION(BlueprintPure)
    USoundCue* GetPickupAudio();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    TArray<UItem*> GetItems() const;
    
    UFUNCTION(BlueprintPure)
    UItem* GetItem() const;
    
    UFUNCTION()
    ASurvivalCharacter* GetEquippedOwner() const;
    
    UFUNCTION(BlueprintPure)
    USoundCue* GetEquipAudio();
    
    UFUNCTION(BlueprintCallable)
    ASurvivalCharacter* GetDroppedBySpawnedActor();
    
    UFUNCTION(BlueprintPure)
    UBaseLODActor* GetDroppedBy() const;
    
    UFUNCTION(BlueprintPure)
    float GetDistanceFromThrownLocation() const;
    
    UFUNCTION(BlueprintPure)
    USoundCue* GetConsumeAudio();
    
    UFUNCTION()
    AActor* GetAttackOwner() const;
    
    UFUNCTION(BlueprintCallable)
    void DoDetach();
    
protected:
    UFUNCTION()
    void DelayedDestroy();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearThrownAttackTimer();
    
    UFUNCTION(BlueprintPure)
    bool CanUse(const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintPure)
    bool CanEquipTo(const AActor* Actor) const;
    
    UFUNCTION(BlueprintPure)
    bool CanEquip() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanAddItems(const TArray<UItem*>& InItems) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanAddItemRowHandles(const TArray<FDataTableRowHandle>& ItemRowHandles) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanAddItemRowHandle(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanAddItem(UItem* InItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UGoapAction*> AllocateGOAPActions(USurvivalGameInstance* GameInstance, UObject* InOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddItem(UItem* InItem, bool bIsNewItem);
    
    
    // Fix for true pure virtual functions not being implemented
};

