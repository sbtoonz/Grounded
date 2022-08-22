#pragma once
#include "CoreMinimal.h"
#include "BaseLODComponent.h"
#include "ItemContainerInterface.h"
#include "PersistentInterface.h"
#include "HaulingLODComponent.generated.h"

UCLASS()
class MAINE_API UHaulingLODComponent : public UBaseLODComponent, public IItemContainerInterface, public IPersistentInterface {
    GENERATED_BODY()
public:
    UHaulingLODComponent();
    
    // Fix for true pure virtual functions not being implemented
};

