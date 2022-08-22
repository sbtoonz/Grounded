#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PlayerDistanceDebugComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UPlayerDistanceDebugComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPlayerDistanceDebugComponent();
};

