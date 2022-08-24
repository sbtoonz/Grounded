#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PersistentInterface.h"
#include "PerkStatus.h"
#include "OnPerksChangedDelegateDelegate.h"
#include "OnPerkUnlockedDelegateDelegate.h"
#include "Engine/DataTable.h"
#include "PerkComponent.generated.h"

class UPlayerStatConfig;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPerkComponent : public UActorComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPerksChangedDelegate OnPerksChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPerkUnlockedDelegate OnPerkUnlocked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxEquippedPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Perks, meta=(AllowPrivateAccess=true))
    TArray<FPerkStatus> Perks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    UFUNCTION(BlueprintCallable)
    void OnRep_Perks();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStatChanged(UPlayerStatConfig* PlayerStat, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnGlobalVariableChanged(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerkEquipped(FDataTableRowHandle PerkRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAvailablePerkEquip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPerkStatus> GetPerks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumEquippedPerks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxEquippedPerks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDefaultMaxEquippedPerks() const;
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientNotifyUnlockPerk(FPerkStatus Perk);
    
    
    // Fix for true pure virtual functions not being implemented
};

