#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "StatusEffectOrigin.h"
#include "EBurrowState.h"
#include "BurrowStateChangedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "DamageInfo.h"
#include "BurrowComponent.generated.h"

class AController;
class UBaseLODActor;
class ASurvivalCharacter;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBurrowComponent : public UActorComponent, public IStatusEffectOrigin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBurrowStateChangedDelegate OnBurrowStateChanged;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FDataTableRowHandle> BurrowStatusEffects;
    
    UPROPERTY(EditDefaultsOnly)
    float BurrowCooldown;
    
    UPROPERTY(EditDefaultsOnly)
    float BurrowTime;
    
    UPROPERTY(EditDefaultsOnly)
    float UnburrowTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDisableWhileUnburrowed;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCombatTogglesBurrow;
    
    UPROPERTY(EditDefaultsOnly)
    bool bClearThreatOnBurrow;
    
    UPROPERTY(EditDefaultsOnly)
    bool bBurrowAtBeginPlay;
    
    UPROPERTY(EditDefaultsOnly)
    bool bHasBurrowedTimeToStop;
    
    UPROPERTY(EditDefaultsOnly)
    float BurrowedTimeToStop;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDestroyAfterBurrowing;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCheckMaterialWhenBurrowing;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_BurrowState)
    EBurrowState BurrowState;
    
public:
    UBurrowComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnBurrow();
    
protected:
    UFUNCTION()
    void OnRep_BurrowState();
    
    UFUNCTION()
    void OnDeath(const FDamageInfo& DamageInfo);
    
    UFUNCTION()
    void OnDamaged(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
    UFUNCTION()
    void OnCombatChange(ASurvivalCharacter* Character, bool InCombat);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsBurrowed() const;
    
    UFUNCTION(BlueprintPure)
    EBurrowState GetBurrowState() const;
    
    UFUNCTION(BlueprintCallable)
    void Burrow();
    
    
    // Fix for true pure virtual functions not being implemented
};

