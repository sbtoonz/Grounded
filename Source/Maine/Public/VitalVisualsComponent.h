#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VitalChangedDelegateDelegate.h"
#include "GameplayTagContainer.h"
#include "VitalVisualsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UVitalVisualsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVitalChangedDelegate OnVitalValueChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VitalTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_VitalValue, meta=(AllowPrivateAccess=true))
    float VitalValue;
    
public:
    UVitalVisualsComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_VitalValue();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasVitalTag(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVitalValue() const;
    
};

