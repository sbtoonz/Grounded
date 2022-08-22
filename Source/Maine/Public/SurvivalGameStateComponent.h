#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "SurvivalGameStateComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API USurvivalGameStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USurvivalGameStateComponent();
};

