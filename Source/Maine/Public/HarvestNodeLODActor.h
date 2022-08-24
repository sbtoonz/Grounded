#pragma once
#include "CoreMinimal.h"
#include "BaseLODActor.h"
#include "SwappableFoliageInterface.h"
#include "HarvestNodeLODActor.generated.h"

UCLASS(Blueprintable)
class MAINE_API UHarvestNodeLODActor : public UBaseLODActor, public ISwappableFoliageInterface {
    GENERATED_BODY()
public:
    UHarvestNodeLODActor();
    
    // Fix for true pure virtual functions not being implemented
};

