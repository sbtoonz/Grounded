#pragma once
#include "CoreMinimal.h"
#include "ProxyActor.h"
#include "FoliageKey.h"
#include "ProxyHarvestNodeActor.generated.h"

UCLASS(Blueprintable)
class MAINE_API UProxyHarvestNodeActor : public UProxyActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFoliageKey SourceFoliage;
    
    UProxyHarvestNodeActor();
};

