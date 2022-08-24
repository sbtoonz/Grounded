#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnlineBridgePresenceAdapter.h"
#include "OnlineBridgePresenceAdapterXSAPI.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOnlineBridgePresenceAdapterXSAPI : public UObject, public IOnlineBridgePresenceAdapter {
    GENERATED_BODY()
public:
    UOnlineBridgePresenceAdapterXSAPI();
    
    // Fix for true pure virtual functions not being implemented
};

