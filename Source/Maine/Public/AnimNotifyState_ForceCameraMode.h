#pragma once
#include "CoreMinimal.h"
#include "ECameraDisplayMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "AnimNotifyState_ForceCameraMode.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class MAINE_API UAnimNotifyState_ForceCameraMode : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECameraDisplayMode ForcedMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlendTime;
    
    UAnimNotifyState_ForceCameraMode();
};

