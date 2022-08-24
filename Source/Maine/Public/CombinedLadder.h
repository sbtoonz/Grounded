#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SplineComponent.h"
#include "CombinedLadder.generated.h"

class UClimbableSplineComponent;

UCLASS(Blueprintable, NotPlaceable)
class MAINE_API ACombinedLadder : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SplinePoints, meta=(AllowPrivateAccess=true))
    TArray<FSplinePoint> SplinePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UClimbableSplineComponent* SplineComponent;
    
public:
    ACombinedLadder();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SplinePoints();
    
};

