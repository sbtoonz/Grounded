#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_DisableGravity.h"
#include "AnimNotifyState_JumpRootMotion.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class MAINE_API UAnimNotifyState_JumpRootMotion : public UAnimNotifyState_DisableGravity {
    GENERATED_BODY()
public:
    UAnimNotifyState_JumpRootMotion();
};

