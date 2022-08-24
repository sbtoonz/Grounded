#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttractionManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UAttractionManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAttractionManagerComponent();
};

