#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_LockSplineRotation.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class MAINE_API UAnimNotifyState_LockSplineRotation : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAnimNotifyState_LockSplineRotation();
};

