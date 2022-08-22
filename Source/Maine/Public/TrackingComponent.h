#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PossessableInterface.h"
#include "TrackingPart.h"
#include "TrackingComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UTrackingComponent : public UActorComponent, public IPossessableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FTrackingPart HeadTracking;
    
    UPROPERTY(EditAnywhere)
    FTrackingPart BodyTracking;
    
public:
    UTrackingComponent();
    
    // Fix for true pure virtual functions not being implemented
};

