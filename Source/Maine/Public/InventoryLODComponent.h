#pragma once
#include "CoreMinimal.h"
#include "ItemContainerInterface.h"
#include "BaseLODComponent.h"
#include "PersistentInterface.h"
#include "InventoryLODComponent.generated.h"

UCLASS(Blueprintable)
class MAINE_API UInventoryLODComponent : public UBaseLODComponent, public IItemContainerInterface, public IPersistentInterface {
    GENERATED_BODY()
public:
    UInventoryLODComponent();
    
    // Fix for true pure virtual functions not being implemented
};

