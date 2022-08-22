#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "EHitFrameType.h"
#include "AnimNotifyState_MultiHitFrame.generated.h"

class UAttack;

UCLASS(CollapseCategories, EditInlineNew)
class MAINE_API UAnimNotifyState_MultiHitFrame : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    EHitFrameType HitFrameType;
    
    UPROPERTY(Transient)
    UAttack* ActualAttack;
    
    UPROPERTY(EditAnywhere)
    bool UseSecondaryDamageData;
    
    UPROPERTY(EditAnywhere)
    int32 SecondaryDamageDataIndex;
    
public:
    UAnimNotifyState_MultiHitFrame();
};

