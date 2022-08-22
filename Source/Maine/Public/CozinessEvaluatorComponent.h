#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CozinessValueChangedDelegateDelegate.h"
#include "CozinessLevelChangedDelegateDelegate.h"
#include "StatusEffectOrigin.h"
#include "CozinessEvaluatorComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UCozinessEvaluatorComponent : public UActorComponent, public IStatusEffectOrigin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCozinessLevelChangedDelegate OnCozinessLevelChanged;
    
    UPROPERTY(BlueprintAssignable)
    FCozinessValueChangedDelegate OnCozinessValueChanged;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CozinessValue)
    int32 CozinessValue;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_StructuralValue)
    int32 StructuralValue;
    
public:
    UCozinessEvaluatorComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_StructuralValue(int32 OldValue);
    
    UFUNCTION()
    void OnRep_CozinessValue(int32 OldValue);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetCozinessValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCozinessLevel() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

