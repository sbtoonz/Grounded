#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "AnimNotifyState_AttackRootMotion.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class MAINE_API UAnimNotifyState_AttackRootMotion : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxScale;
    
    UAnimNotifyState_AttackRootMotion();
};

