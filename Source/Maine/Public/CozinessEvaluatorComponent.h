#pragma once
#include "CoreMinimal.h"
#include "CozinessValueChangedDelegateDelegate.h"
#include "CozinessLevelChangedDelegateDelegate.h"
#include "Components/ActorComponent.h"
#include "StatusEffectOrigin.h"
#include "CozinessEvaluatorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UCozinessEvaluatorComponent : public UActorComponent, public IStatusEffectOrigin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCozinessLevelChangedDelegate OnCozinessLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCozinessValueChangedDelegate OnCozinessValueChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CozinessValue, meta=(AllowPrivateAccess=true))
    int32 CozinessValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StructuralValue, meta=(AllowPrivateAccess=true))
    int32 StructuralValue;
    
public:
    UCozinessEvaluatorComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StructuralValue(int32 OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CozinessValue(int32 OldValue);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCozinessValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCozinessLevel() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

