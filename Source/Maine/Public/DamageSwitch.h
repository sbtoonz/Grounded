#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PersistentInterface.h"
#include "OnSwitchStateChangedDelegate.h"
#include "DamageInfo.h"
#include "DamageSwitch.generated.h"

class AController;
class UHealthComponent;
class UPersistenceComponent;
class UObsidianIDComponent;
class UBaseLODActor;

UCLASS(Abstract, Blueprintable)
class MAINE_API ADamageSwitch : public AActor, public IPersistentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSwitchStateChanged OnSwitchStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSwitchStateChanged OnSwitchStateRestored;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    int32 CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPersistenceComponent* PersistenceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObsidianIDComponent* ObsidianIDComponent;
    
public:
    ADamageSwitch();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentState(int32 NewState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState();
    
    UFUNCTION(BlueprintCallable)
    void OnDamaged(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentState() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

