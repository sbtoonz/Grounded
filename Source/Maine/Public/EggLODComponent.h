#pragma once
#include "CoreMinimal.h"
#include "BaseLODComponent.h"
#include "PersistentInterface.h"
#include "EggLODComponent.generated.h"

UCLASS(Blueprintable)
class MAINE_API UEggLODComponent : public UBaseLODComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UEggLODComponent();
    
    // Fix for true pure virtual functions not being implemented
};

