#pragma once
#include "CoreMinimal.h"
#include "CharacterLODActor.h"
#include "PlayerCharacterLODActor.generated.h"

UCLASS(Blueprintable)
class MAINE_API UPlayerCharacterLODActor : public UCharacterLODActor {
    GENERATED_BODY()
public:
    UPlayerCharacterLODActor();
};

