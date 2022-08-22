#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageEvent -FallbackName=DamageEvent
#include "MaineDamageEvent.generated.h"

USTRUCT()
struct FMaineDamageEvent : public FDamageEvent {
    GENERATED_BODY()
public:
    MAINE_API FMaineDamageEvent();
};

