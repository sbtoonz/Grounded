#pragma once
#include "CoreMinimal.h"
#include "Building.h"
#include "LadderBuilding.generated.h"

class UClimbableSplineComponent;

UCLASS(Abstract)
class MAINE_API ALadderBuilding : public ABuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient, ReplicatedUsing=OnRep_CombinedSpline)
    UClimbableSplineComponent* CombinedSpline;
    
    UPROPERTY(EditDefaultsOnly)
    float InteractRangeCap;
    
public:
    ALadderBuilding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_CombinedSpline();
    
};

