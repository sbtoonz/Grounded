#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OnBeginHaulingDelegate.h"
#include "ItemContainerInterface.h"
#include "OnEndHaulingDelegate.h"
#include "PersistentInterface.h"
#include "LODableComponentInterface.h"
#include "DamageInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "HaulingComponent.generated.h"

class UItem;
class UInputComponent;
class UBaseLODActor;
class AController;
class ACharacter;
class UAttack;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UHaulingComponent : public UActorComponent, public IItemContainerInterface, public IPersistentInterface, public ILODableComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Capacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHaulAnything;
    
    UPROPERTY(BlueprintAssignable)
    FOnBeginHauling OnBeginHauling;
    
    UPROPERTY(BlueprintAssignable)
    FOnEndHauling OnEndHauling;
    
    UPROPERTY(BlueprintAssignable)
    FOnEndHauling OnHaulingChanged;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_HauledItems)
    TArray<UItem*> HauledItems;
    
    UPROPERTY(Transient)
    TArray<UItem*> SerializedHauledItems;
    
    UPROPERTY(Export, Transient)
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
    UFUNCTION()
    void OnStatusEffectChanged();
    
    UFUNCTION()
    void OnRep_HauledItems(const TArray<UItem*>& PreviousHauledItems);
    
    UFUNCTION()
    void OnDeath(const FDamageInfo& DamageInfo);
    
    UFUNCTION()
    void OnDamage(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
    UFUNCTION()
    void OnCharacterMovementChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION()
    void OnAttackLaunch(UAttack* Attack);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsHaulingThrowableItems() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHaulingItems() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHaulingItem(UItem* Item) const;
    
private:
    UFUNCTION()
    void InputDropPressed();
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    TArray<UItem*> GetItems() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHaulingItemCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetDropItemTransform(const UItem* Item, FVector Offset);
    
    UFUNCTION(BlueprintPure)
    int32 GetAdjustedCapacity() const;
    
    UFUNCTION(Client, Unreliable)
    void ClientOnItemAdded(FDataTableRowHandle ItemRowHandle);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanAddItems(const TArray<UItem*>& Items) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanAddItemRowHandles(const TArray<FDataTableRowHandle>& ItemRowHandles) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanAddItemRowHandle(FDataTableRowHandle ItemRowHandle) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool CanAddItem(UItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddItem(UItem* Item, bool bIsNewItem);
    
    
    // Fix for true pure virtual functions not being implemented
};

