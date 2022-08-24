#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_CustomVisuals.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class MAINE_API UAnimNotifyState_CustomVisuals : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VisualStateName;
    
public:
    UAnimNotifyState_CustomVisuals();
};

