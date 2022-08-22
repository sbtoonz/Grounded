#pragma once
#include "CoreMinimal.h"
#include "WalkDial.h"
#include "EFrankenlineAxis.h"
#include "FrankenlineDial.generated.h"

class AFrankenlineMaster;

UCLASS()
class MAINE_API AFrankenlineDial : public AWalkDial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EFrankenlineAxis Axis;
    
    UPROPERTY(EditAnywhere)
    float SpeedMultiplier;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    AFrankenlineMaster* FrankenlineMaster;
    
public:
    AFrankenlineDial();
};

