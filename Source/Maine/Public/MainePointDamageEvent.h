#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PointDamageEvent -FallbackName=PointDamageEvent
#include "MainePointDamageEvent.generated.h"

USTRUCT()
struct FMainePointDamageEvent : public FPointDamageEvent {
    GENERATED_BODY()
public:
    MAINE_API FMainePointDamageEvent();
};

