#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "VitalChangedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "VitalVisualsComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UVitalVisualsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FVitalChangedDelegate OnVitalValueChanged;
    
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag VitalTag;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_VitalValue)
    float VitalValue;
    
public:
    UVitalVisualsComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_VitalValue();
    
public:
    UFUNCTION(BlueprintPure)
    bool HasVitalTag(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintPure)
    float GetVitalValue() const;
    
};

