#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "LookTriggeredDelegateDelegate.h"
#include "EHealthState.h"
#include "GlobalVariableReferenceConditional.h"
#include "BaseLookTriggerComponent.generated.h"

class UHealthComponent;
class AActor;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBaseLookTriggerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLookTriggeredDelegate OnLookTriggered;
    
    UPROPERTY(BlueprintAssignable)
    FLookTriggeredDelegate OnLookEnded;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<FGlobalVariableReferenceConditional> GlobalVariableConditionals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngleRange;
    
    UPROPERTY(EditAnywhere)
    bool bBlockedByAttachParent;
    
    UPROPERTY(EditAnywhere)
    bool bDisableIfDead;
    
    UPROPERTY(Export, Transient)
    UHealthComponent* OwnerHealthComponent;
    
public:
    UBaseLookTriggerComponent();
protected:
    UFUNCTION()
    void OnGlobalVariableChangedEvent(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator);
    
    UFUNCTION()
    void HandleHealthStateChanged(EHealthState NewHealthState);
    
};

