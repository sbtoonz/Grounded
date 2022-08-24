#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_WiggleLerp.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class MAINE_API UAnimNotifyState_WiggleLerp : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLerpOut: 1;
    
public:
    UAnimNotifyState_WiggleLerp();
};

