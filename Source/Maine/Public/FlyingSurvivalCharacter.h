#pragma once
#include "CoreMinimal.h"
#include "FlySwimSurvivalCharacter.h"
#include "FlyingSurvivalCharacter.generated.h"

UCLASS(Abstract, Blueprintable)
class MAINE_API AFlyingSurvivalCharacter : public AFlySwimSurvivalCharacter {
    GENERATED_BODY()
public:
    AFlyingSurvivalCharacter();
};

