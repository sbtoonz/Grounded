#pragma once
#include "CoreMinimal.h"
#include "Building.h"
#include "LadderBuilding.generated.h"

class UClimbableSplineComponent;

UCLASS(Abstract, Blueprintable)
class MAINE_API ALadderBuilding : public ABuilding {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, ReplicatedUsing=OnRep_CombinedSpline, meta=(AllowPrivateAccess=true))
    UClimbableSplineComponent* CombinedSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractRangeCap;
    
public:
    ALadderBuilding();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CombinedSpline();
    
};

