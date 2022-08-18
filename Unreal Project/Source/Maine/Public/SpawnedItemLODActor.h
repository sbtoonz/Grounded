#pragma once
#include "CoreMinimal.h"
#include "ItemContainerInterface.h"
#include "BaseLODActor.h"
#include "SpawnedItemLODActor.generated.h"

class UItem;

UCLASS()
class MAINE_API USpawnedItemLODActor : public UBaseLODActor, public IItemContainerInterface {
    GENERATED_BODY()
public:
    USpawnedItemLODActor();
    UFUNCTION(BlueprintPure)
    UItem* GetItem() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

