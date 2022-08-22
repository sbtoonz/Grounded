#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "EBirdSpotType.h"
#include "BirdAnimInstance.generated.h"

UCLASS(NonTransient)
class MAINE_API UBirdAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bIsLanded: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBirdSpotType SpotType;
    
public:
    UBirdAnimInstance();
};

