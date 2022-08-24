#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LookTriggeredParams.h"
#include "PointOfInterestComponent.generated.h"

class UPointOfInterestDataAsset;
class UBaseLookTriggerComponent;
class AActor;
class ASurvivalPlayerController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPointOfInterestComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPointOfInterestDataAsset* PointOfInterestData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubscribeAutomatically;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> ActorInstigator;
    
public:
    UPointOfInterestComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void PlayBanter();
    
    UFUNCTION(BlueprintCallable)
    void OnLookTriggered(UBaseLookTriggerComponent* Sender, FLookTriggeredParams Params);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPointOfInterestDataAsset* GetPointOfInterestData() const;
    
    UFUNCTION(BlueprintCallable)
    void Discover(ASurvivalPlayerController* Instigator);
    
};

