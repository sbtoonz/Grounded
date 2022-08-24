#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurvivalGameStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API USurvivalGameStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USurvivalGameStateComponent();
};

