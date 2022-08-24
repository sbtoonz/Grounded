#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PossessableInterface.h"
#include "TrackingPart.h"
#include "TrackingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UTrackingComponent : public UActorComponent, public IPossessableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrackingPart HeadTracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrackingPart BodyTracking;
    
public:
    UTrackingComponent();
    
    // Fix for true pure virtual functions not being implemented
};

