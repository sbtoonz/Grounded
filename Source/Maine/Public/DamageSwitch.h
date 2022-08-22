#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PersistentInterface.h"
#include "OnSwitchStateChangedDelegate.h"
#include "DamageInfo.h"
#include "DamageSwitch.generated.h"

class AController;
class UHealthComponent;
class UPersistenceComponent;
class UBaseLODActor;
class UObsidianIDComponent;

UCLASS(Abstract)
class MAINE_API ADamageSwitch : public AActor, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnSwitchStateChanged OnSwitchStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnSwitchStateChanged OnSwitchStateRestored;
    
protected:
    UPROPERTY(ReplicatedUsing=OnRep_CurrentState)
    int32 CurrentState;
    
    UPROPERTY(EditAnywhere)
    int32 NumStates;
    
    UPROPERTY(EditAnywhere)
    float HitCooldown;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UObsidianIDComponent* ObsidianIDComponent;
    
public:
    ADamageSwitch();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentState(int32 NewState);
    
protected:
    UFUNCTION()
    void OnRep_CurrentState();
    
    UFUNCTION()
    void OnDamaged(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetCurrentState() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

