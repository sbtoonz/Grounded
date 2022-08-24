#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EBirdSpotType.h"
#include "BirdAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class MAINE_API UBirdAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsLanded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBirdSpotType SpotType;
    
public:
    UBirdAnimInstance();
};

