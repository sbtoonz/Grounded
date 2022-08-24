#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VisualStateManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UVisualStateManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UVisualStateManagerComponent();
};

