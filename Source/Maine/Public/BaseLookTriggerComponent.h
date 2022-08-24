#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "LookTriggeredDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "GlobalVariableReferenceConditional.h"
#include "EHealthState.h"
#include "BaseLookTriggerComponent.generated.h"

class UHealthComponent;
class AActor;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UBaseLookTriggerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookTriggeredDelegate OnLookTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookTriggeredDelegate OnLookEnded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGlobalVariableReferenceConditional> GlobalVariableConditionals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockedByAttachParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableIfDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UHealthComponent* OwnerHealthComponent;
    
public:
    UBaseLookTriggerComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnGlobalVariableChangedEvent(const FGuid& GlobalVariableID, int32 VariableValue, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void HandleHealthStateChanged(EHealthState NewHealthState);
    
};

