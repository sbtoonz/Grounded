#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "AnimNotifyState_HitActive.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class MAINE_API UAnimNotifyState_HitActive : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FName AttackTag;
    
    UPROPERTY(EditAnywhere)
    bool bOnehitFromAllCollision;
    
public:
    UAnimNotifyState_HitActive();
};

