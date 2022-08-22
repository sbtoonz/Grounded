#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PerkStatus.h"
#include "OnPerksChangedDelegateDelegate.h"
#include "PersistentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "OnPerkUnlockedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PerkComponent.generated.h"

class UPlayerStatConfig;
class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPerkComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnPerksChangedDelegate OnPerksChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnPerkUnlockedDelegate OnPerkUnlocked;
    
protected:
    UPROPERTY(EditAnywhere)
    int32 MaxEquippedPerks;
    
    UPROPERTY(ReplicatedUsing=OnRep_Perks)
    TArray<FPerkStatus> Perks;
    
    UPROPERTY(Transient)
    TMap<UPlayerStatConfig*, int32> StatPerks;
    
public:
    UPerkComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnlockPerkTier(FDataTableRowHandle PerkRowHandle, int32 Tier);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerUnequipPerk(FName PerkName);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerEquipPerk(FName PerkName);
    
protected:
    UFUNCTION()
    void OnRep_Perks();
    
    UFUNCTION()
    void OnPlayerStatChanged(UPlayerStatConfig* PlayerStat, int32 Value);
    
    UFUNCTION()
    void OnGlobalVariableChanged(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPerkEquipped(FDataTableRowHandle PerkRowHandle);
    
    UFUNCTION(BlueprintPure)
    bool HasAvailablePerkEquip() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FPerkStatus> GetPerks() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumEquippedPerks() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxEquippedPerks() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDefaultMaxEquippedPerks() const;
    
    UFUNCTION(Client, Unreliable)
    void ClientNotifyUnlockPerk(FPerkStatus Perk);
    
    
    // Fix for true pure virtual functions not being implemented
};

