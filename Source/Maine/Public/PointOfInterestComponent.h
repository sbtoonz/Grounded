#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "LookTriggeredParams.h"
#include "PointOfInterestComponent.generated.h"

class UPointOfInterestDataAsset;
class UBaseLookTriggerComponent;
class AActor;
class ASurvivalPlayerController;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPointOfInterestComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPointOfInterestDataAsset* PointOfInterestData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSubscribeAutomatically;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> ActorInstigator;
    
public:
    UPointOfInterestComponent();
protected:
    UFUNCTION()
    void PlayBanter();
    
    UFUNCTION()
    void OnLookTriggered(UBaseLookTriggerComponent* Sender, FLookTriggeredParams Params);
    
public:
    UFUNCTION(BlueprintPure)
    UPointOfInterestDataAsset* GetPointOfInterestData() const;
    
    UFUNCTION(BlueprintCallable)
    void Discover(ASurvivalPlayerController* Instigator);
    
};

