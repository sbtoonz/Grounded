#pragma once
#include "CoreMinimal.h"
#include "ESoundDetectionState.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetSoundDetectState.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBTTask_SetSoundDetectState : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundDetectionState NewSoundDetectionState;
    
public:
    UBTTask_SetSoundDetectState();
};

