#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "LODableComponentInterface.h"
#include "ItemContainerInterface.h"
#include "PersistentInterface.h"
#include "DamageInfo.h"
#include "OnBeginHaulingDelegate.h"
#include "OnEndHaulingDelegate.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HaulingComponent.generated.h"

class UItem;
class UInputComponent;
class AController;
class UBaseLODActor;
class ACharacter;
class UAttack;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UHaulingComponent : public UActorComponent, public IItemContainerInterface, public IPersistentInterface, public ILODableComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Capacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHaulAnything;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBeginHauling OnBeginHauling;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndHauling OnEndHauling;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndHauling OnHaulingChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HauledItems, meta=(AllowPrivateAccess=true))
    TArray<UItem*> HauledItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItem*> SerializedHauledItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* HaulingInputComponent;
    
public:
    UHaulingComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveItem(UItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDropItem();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDropAll();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddItem(UItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 RemoveItem(UItem* Item, int32 Count);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStatusEffectChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HauledItems(const TArray<UItem*>& PreviousHauledItems);
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
    UFUNCTION()
    void OnCharacterMovementChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackLaunch(UAttack* Attack);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHaulingThrowableItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHaulingItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHaulingItem(UItem* Item) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void InputDropPressed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<UItem*> GetItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHaulingItemCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetDropItemTransform(const UItem* Item, FVector Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAdjustedCapacity() const;
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientOnItemAdded(FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanAddItems(const TArray<UItem*>& Items) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanAddItemRowHandles(const TArray<FDataTableRowHandle>& ItemRowHandles) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanAddItemRowHandle(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanAddItem(UItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddItem(UItem* Item, bool bIsNewItem);
    
    
    // Fix for true pure virtual functions not being implemented
};

