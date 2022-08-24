#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "MainePointDamageEvent.generated.h"

USTRUCT(BlueprintType)
struct FMainePointDamageEvent : public FPointDamageEvent {
    GENERATED_BODY()
public:
    MAINE_API FMainePointDamageEvent();
};

