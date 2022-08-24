#pragma once
#include "CoreMinimal.h"
#include "ECameraDisplayMode.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_ForceCameraMode.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class MAINE_API UAnimNotifyState_ForceCameraMode : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraDisplayMode ForcedMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UAnimNotifyState_ForceCameraMode();
};

