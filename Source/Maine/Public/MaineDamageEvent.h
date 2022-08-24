#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "MaineDamageEvent.generated.h"

USTRUCT(BlueprintType)
struct FMaineDamageEvent : public FDamageEvent {
    GENERATED_BODY()
public:
    MAINE_API FMaineDamageEvent();
};

