#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_IgnoreStagger.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class MAINE_API UAnimNotifyState_IgnoreStagger : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UAnimNotifyState_IgnoreStagger();
};

