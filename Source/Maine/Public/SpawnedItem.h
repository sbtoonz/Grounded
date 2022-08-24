#pragma once
#include "CoreMinimal.h"
#include "LODableActorInterface.h"
#include "GameFramework/Actor.h"
#include "DamageInfo.h"
#include "InteractableInterface.h"
#include "SwappableFoliageInterface.h"
#include "GenericTeamAgentInterface.h"
#include "Engine/DataTable.h"
#include "ItemContainerInterface.h"
#include "GoapActionProviderInterface.h"
#include "UObject/NoExportTypes.h"
#include "OnSpawnedItemInteractDelegate.h"
#include "OnSpawnedItemDestroyedDelegate.h"
#include "GameplayTagContainer.h"
#include "ESpawnedItemEmbedType.h"
#include "UObject/NoExportTypes.h"
#include "EWaveCompletionReason.h"
#include "EEquipmentSlot.h"
#include "SpawnedItem.generated.h"

class USpawnedItemLiteData;
class UObsidianIDComponent;
class UItem;
class ASurvivalCharacter;
class UObject;
class UBaseLODActor;
class USoundCue;
class AZiplineLine;
class APawn;
class UGoapAction;
class UPrimitiveComponent;
class UAttack;
class UPhysicalMaterial;
class APhysicsVolume;
class USurvivalGameInstance;

UCLASS(Abstract, Blueprintable)
class MAINE_API ASpawnedItem : public AActor, public IInteractableInterface, public ISwappableFoliageInterface, public IGenericTeamAgentInterface, public IItemContainerInterface, public IGoapActionProviderInterface, public ILODableActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PlacedItemData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpawnedItemInteract OnSpawnedItemInteract;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpawnedItemDestroyed OnSpawnedItemDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideGameHourLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseOverrideGameHourLifetime: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLifetimeDespawnWhenProxiedOnly: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpawnedItemLiteData* LiteData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag GoapRegionTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASurvivalCharacter* EquippedOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* AttackOwner;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UBaseLODActor> DroppedByActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsThrown: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasImpacted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanAiInteract: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CanLODItem: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInteractOnTouch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableCollisionOnSleep: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSleepPhysicsDuringWaves: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnorePawnCollision: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpawnedItemEmbedType EmbedOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange EmbedRotationOnHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumEmbedNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRotateOnEmbed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bThrowStraight: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsTickingAttack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bThrowAttackCleared: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RootComponentAsleep, meta=(AllowPrivateAccess=true))
    uint8 bRootComponentAsleep: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsAttached, meta=(AllowPrivateAccess=true))
    uint8 bIsAttached: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PreviousVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZiplineMaxSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PhysicsImpactAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideImpactSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideImpactEffectDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideMinImpactThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideMaxImpactThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideMinImpactVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideMaxImpactVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateTickRateWhenNotRendered;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttachedZipline, meta=(AllowPrivateAccess=true))
    AZiplineLine* AttachedZipline;
    
public:
    ASpawnedItem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ValidateItemData(UPARAM(Ref) TArray<FText>& ValidationErrors) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void TickZipline(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TickBuoyancy(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TickAttached(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void Throw(APawn* Thrower, FVector Impulse, FVector AngularImpulse);
    
    UFUNCTION(BlueprintCallable)
    void StartThrownAttack(AActor* Thrower);
    
    UFUNCTION(BlueprintCallable)
    void SetEquippedOwner(ASurvivalCharacter* NewOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 RemoveItem(UItem* InItem, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void OnWaveComplete(EWaveCompletionReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThrown();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectedAmmoChanged(FName SelectedAmmoType);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RootComponentAsleep();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsAttached();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_AttachedZipline();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPhysicsWake(UPrimitiveComponent* SleepingComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void OnPhysicsSleep(UPrimitiveComponent* SleepingComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLaunchAttack(UAttack* Attack);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemUnequipped(ASurvivalCharacter* Character, EEquipmentSlot Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemEquipped(ASurvivalCharacter* Character, EEquipmentSlot Slot);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitWithAttack(const FDamageInfo& DamageInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDefenseComplete(bool Success);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifySwapped(bool bFromDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifySpawned();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Initialize();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThrownAttackTimerActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHaulingItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEmbeddableMaterial(const UPhysicalMaterial* Material) const;
    
    UFUNCTION(BlueprintCallable)
    void HandleTouch(AActor* Actor);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleThrowAttackTimerExpired();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandlePhysicsVolumeChanged(APhysicsVolume* Volume);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetThrowStraight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundCue* GetPickupAudio();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<UItem*> GetItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItem* GetItem() const;
    
    UFUNCTION(BlueprintCallable)
    ASurvivalCharacter* GetEquippedOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundCue* GetEquipAudio();
    
    UFUNCTION(BlueprintCallable)
    ASurvivalCharacter* GetDroppedBySpawnedActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBaseLODActor* GetDroppedBy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceFromThrownLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundCue* GetConsumeAudio();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetAttackOwner() const;
    
    UFUNCTION(BlueprintCallable)
    void DoDetach();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DelayedDestroy();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearThrownAttackTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUse(const AActor* InstigatedBy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEquipTo(const AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEquip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanAddItems(const TArray<UItem*>& InItems) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanAddItemRowHandles(const TArray<FDataTableRowHandle>& ItemRowHandles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanAddItemRowHandle(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanAddItem(UItem* InItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UGoapAction*> AllocateGOAPActions(USurvivalGameInstance* GameInstance, UObject* InOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddItem(UItem* InItem, bool bIsNewItem);
    
    
    // Fix for true pure virtual functions not being implemented
};

