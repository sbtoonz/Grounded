#pragma once
#include "CoreMinimal.h"
#include "ESoundDetectionState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTTaskNode -FallbackName=BTTaskNode
#include "BTTask_SetSoundDetectState.generated.h"

UCLASS()
class MAINE_API UBTTask_SetSoundDetectState : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ESoundDetectionState NewSoundDetectionState;
    
public:
    UBTTask_SetSoundDetectState();
};

