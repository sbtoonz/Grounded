#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnlineBridgeSessionAdapter.h"
#include "OnlineBridgeSessionAdapterXSAPI.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOnlineBridgeSessionAdapterXSAPI : public UObject, public IOnlineBridgeSessionAdapter {
    GENERATED_BODY()
public:
    UOnlineBridgeSessionAdapterXSAPI();
    
    // Fix for true pure virtual functions not being implemented
};

