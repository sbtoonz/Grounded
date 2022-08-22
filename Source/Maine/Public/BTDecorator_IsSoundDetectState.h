#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "ESoundDetectionState.h"
#include "BTDecorator_IsSoundDetectState.generated.h"

UCLASS()
class MAINE_API UBTDecorator_IsSoundDetectState : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ESoundDetectionState SoundDetectionState;
    
public:
    UBTDecorator_IsSoundDetectState();
};

