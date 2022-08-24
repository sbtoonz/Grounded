#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_IgnoreFlinch.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class MAINE_API UAnimNotifyState_IgnoreFlinch : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAnimNotifyState_IgnoreFlinch();
};

