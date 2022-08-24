#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "OEILocalPlayerSplineEmitterSubsystem.generated.h"

UCLASS(Blueprintable)
class OEISPLINEEMITTER_API UOEILocalPlayerSplineEmitterSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UOEILocalPlayerSplineEmitterSubsystem();
};

