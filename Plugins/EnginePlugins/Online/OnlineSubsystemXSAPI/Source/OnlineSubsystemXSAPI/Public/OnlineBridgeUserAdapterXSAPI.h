#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnlineBridgeUserAdapter.h"
#include "OnlineBridgeUserAdapterXSAPI.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOnlineBridgeUserAdapterXSAPI : public UObject, public IOnlineBridgeUserAdapter {
    GENERATED_BODY()
public:
    UOnlineBridgeUserAdapterXSAPI();
    
    // Fix for true pure virtual functions not being implemented
};

