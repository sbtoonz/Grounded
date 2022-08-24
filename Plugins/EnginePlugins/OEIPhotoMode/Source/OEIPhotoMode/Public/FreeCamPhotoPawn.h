#pragma once
#include "CoreMinimal.h"
#include "PhotoPawn.h"
#include "FreeCamPhotoPawn.generated.h"

UCLASS(Blueprintable)
class OEIPHOTOMODE_API AFreeCamPhotoPawn : public APhotoPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedIncreaseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TetherDistance;
    
public:
    AFreeCamPhotoPawn();
};

