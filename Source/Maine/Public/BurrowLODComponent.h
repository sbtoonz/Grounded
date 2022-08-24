#pragma once
#include "CoreMinimal.h"
#include "BaseLODComponent.h"
#include "PersistentInterface.h"
#include "BurrowLODComponent.generated.h"

UCLASS(Blueprintable)
class MAINE_API UBurrowLODComponent : public UBaseLODComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
    UBurrowLODComponent();
    
    // Fix for true pure virtual functions not being implemented
};

