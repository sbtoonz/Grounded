#pragma once
#include "CoreMinimal.h"
#include "IpNetDriver.h"
#include "PlayFabPartyNetDriver.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPlayFabPartyNetDriver : public UIpNetDriver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugDelayAfterTravelHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugDelayAfterTravelClient;
    
    UPlayFabPartyNetDriver();
};

