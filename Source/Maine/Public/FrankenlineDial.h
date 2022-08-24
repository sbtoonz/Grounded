#pragma once
#include "CoreMinimal.h"
#include "WalkDial.h"
#include "EFrankenlineAxis.h"
#include "FrankenlineDial.generated.h"

class AFrankenlineMaster;

UCLASS(Blueprintable)
class MAINE_API AFrankenlineDial : public AWalkDial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFrankenlineAxis Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedMultiplier;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFrankenlineMaster* FrankenlineMaster;
    
public:
    AFrankenlineDial();
};

