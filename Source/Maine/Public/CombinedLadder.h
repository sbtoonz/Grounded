#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplinePoint -FallbackName=SplinePoint
#include "CombinedLadder.generated.h"

class UClimbableSplineComponent;

UCLASS(NotPlaceable)
class MAINE_API ACombinedLadder : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SplinePoints)
    TArray<FSplinePoint> SplinePoints;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UClimbableSplineComponent* SplineComponent;
    
public:
    ACombinedLadder();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_SplinePoints();
    
};

