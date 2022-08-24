#pragma once
#include "CoreMinimal.h"
#include "CharacterAnimInstance.h"
#include "EBurrowState.h"
#include "BurrowCharacterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class MAINE_API UBurrowCharacterAnimInstance : public UCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBurrowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBurrowState BurrowState;
    
public:
    UBurrowCharacterAnimInstance();
};

