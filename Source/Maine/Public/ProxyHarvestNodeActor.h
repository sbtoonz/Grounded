#pragma once
#include "CoreMinimal.h"
#include "ProxyActor.h"
#include "FoliageKey.h"
#include "ProxyHarvestNodeActor.generated.h"

UCLASS()
class MAINE_API UProxyHarvestNodeActor : public UProxyActor {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FFoliageKey SourceFoliage;
    
    UProxyHarvestNodeActor();
};

