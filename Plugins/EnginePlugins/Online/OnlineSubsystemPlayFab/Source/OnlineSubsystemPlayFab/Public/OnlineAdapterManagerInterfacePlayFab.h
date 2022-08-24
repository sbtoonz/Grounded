#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnlineBridgeAdapterManagerInterface.h"
#include "OnlineAdapterManagerInterfacePlayFab.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOnlineAdapterManagerInterfacePlayFab : public UObject, public IOnlineBridgeAdapterManagerInterface {
    GENERATED_BODY()
public:
    UOnlineAdapterManagerInterfacePlayFab();
    
    // Fix for true pure virtual functions not being implemented
};

