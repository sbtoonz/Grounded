#pragma once
#include "CoreMinimal.h"
#include "BaseLODActor.h"
#include "ItemContainerInterface.h"
#include "SpawnedItemLODActor.generated.h"

class UItem;

UCLASS(Blueprintable)
class MAINE_API USpawnedItemLODActor : public UBaseLODActor, public IItemContainerInterface {
    GENERATED_BODY()
public:
    USpawnedItemLODActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UItem* GetItem() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

