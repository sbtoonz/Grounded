#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_DisableGravity.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class MAINE_API UAnimNotifyState_DisableGravity : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAnimNotifyState_DisableGravity();
};

