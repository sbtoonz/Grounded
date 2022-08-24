#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EncounterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UEncounterComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UEncounterComponent();
};

