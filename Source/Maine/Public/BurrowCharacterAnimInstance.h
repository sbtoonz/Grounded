#pragma once
#include "CoreMinimal.h"
#include "CharacterAnimInstance.h"
#include "EBurrowState.h"
#include "BurrowCharacterAnimInstance.generated.h"

UCLASS(NonTransient)
class MAINE_API UBurrowCharacterAnimInstance : public UCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsBurrowed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EBurrowState BurrowState;
    
public:
    UBurrowCharacterAnimInstance();
};

