#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PersistentInterface.h"
#include "LODableComponentInterface.h"
#include "EggComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UEggComponent : public UActorComponent, public IPersistentInterface, public ILODableComponentInterface {
    GENERATED_BODY()
public:
    UEggComponent();
    
    // Fix for true pure virtual functions not being implemented
};

