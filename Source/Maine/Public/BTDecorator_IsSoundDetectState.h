#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESoundDetectionState.h"
#include "BTDecorator_IsSoundDetectState.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTDecorator_IsSoundDetectState : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundDetectionState SoundDetectionState;
    
public:
    UBTDecorator_IsSoundDetectState();
};

