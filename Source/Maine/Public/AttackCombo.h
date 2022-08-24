#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AttackCombo.generated.h"

class UAttack;

UCLASS(Blueprintable, EditInlineNew)
class MAINE_API UAttackCombo : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAttack*> Attacks;
    
public:
    UAttackCombo();
};

