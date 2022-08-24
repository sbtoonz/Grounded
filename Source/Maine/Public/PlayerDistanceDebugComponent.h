#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerDistanceDebugComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPlayerDistanceDebugComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPlayerDistanceDebugComponent();
};

