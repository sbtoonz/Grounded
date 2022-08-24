#pragma once
#include "CoreMinimal.h"
#include "EBurrowState.h"
#include "BurrowStateChangedDelegateDelegate.h"
#include "Components/ActorComponent.h"
#include "StatusEffectOrigin.h"
#include "Engine/DataTable.h"
#include "DamageInfo.h"
#include "BurrowComponent.generated.h"

class UBaseLODActor;
class AController;
class ASurvivalCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBurrowComponent : public UActorComponent, public IStatusEffectOrigin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBurrowStateChangedDelegate OnBurrowStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> BurrowStatusEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurrowCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurrowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnburrowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableWhileUnburrowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCombatTogglesBurrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearThreatOnBurrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBurrowAtBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBurrowedTimeToStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurrowedTimeToStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyAfterBurrowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckMaterialWhenBurrowing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_BurrowState, meta=(AllowPrivateAccess=true))
    EBurrowState BurrowState;
    
public:
    UBurrowComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnBurrow();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_BurrowState();
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(const FDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnDamaged(float Damage, const FDamageInfo& DamageInfo, AController* InstigatedBy, UBaseLODActor* DamageCauser, bool IsKillingBlow);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatChange(ASurvivalCharacter* Character, bool InCombat);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBurrowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBurrowState GetBurrowState() const;
    
    UFUNCTION(BlueprintCallable)
    void Burrow();
    
    
    // Fix for true pure virtual functions not being implemented
};

