#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnlineConstantInterface.h"
#include "OnlineConstantInterfacePlayFab.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOnlineConstantInterfacePlayFab : public UObject, public IOnlineConstantInterface {
    GENERATED_BODY()
public:
    UOnlineConstantInterfacePlayFab();
    
    // Fix for true pure virtual functions not being implemented
};

