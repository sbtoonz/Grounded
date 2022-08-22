#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "AnimNotifyState_WiggleLerp.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class MAINE_API UAnimNotifyState_WiggleLerp : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 bLerpOut: 1;
    
public:
    UAnimNotifyState_WiggleLerp();
};

