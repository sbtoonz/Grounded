#pragma once
#include "CoreMinimal.h"
#include "EHitFrameType.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_MultiHitFrame.generated.h"

class UAttack;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class MAINE_API UAnimNotifyState_MultiHitFrame : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHitFrameType HitFrameType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAttack* ActualAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseSecondaryDamageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SecondaryDamageDataIndex;
    
public:
    UAnimNotifyState_MultiHitFrame();
};

