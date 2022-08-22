#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "VisualStateManagerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UVisualStateManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UVisualStateManagerComponent();
};

