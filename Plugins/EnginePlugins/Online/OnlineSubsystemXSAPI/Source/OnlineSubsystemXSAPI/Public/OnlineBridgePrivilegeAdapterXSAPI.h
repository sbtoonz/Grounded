#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnlineBridgePrivilegeAdapter.h"
#include "OnlineBridgePrivilegeAdapterXSAPI.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOnlineBridgePrivilegeAdapterXSAPI : public UObject, public IOnlineBridgePrivilegeAdapter {
    GENERATED_BODY()
public:
    UOnlineBridgePrivilegeAdapterXSAPI();
    
    // Fix for true pure virtual functions not being implemented
};

