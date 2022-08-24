#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "MaineRadialDamageEvent.generated.h"

USTRUCT(BlueprintType)
struct FMaineRadialDamageEvent : public FRadialDamageEvent {
    GENERATED_BODY()
public:
    MAINE_API FMaineRadialDamageEvent();
};

