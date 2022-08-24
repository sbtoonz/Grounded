#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PersistentInterface.h"
#include "LODableComponentInterface.h"
#include "EggComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UEggComponent : public UActorComponent, public IPersistentInterface, public ILODableComponentInterface {
    GENERATED_BODY()
public:
    UEggComponent();
    
    // Fix for true pure virtual functions not being implemented
};

