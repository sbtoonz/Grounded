#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RadialDamageEvent -FallbackName=RadialDamageEvent
#include "MaineRadialDamageEvent.generated.h"

USTRUCT()
struct FMaineRadialDamageEvent : public FRadialDamageEvent {
    GENERATED_BODY()
public:
    MAINE_API FMaineRadialDamageEvent();
};

