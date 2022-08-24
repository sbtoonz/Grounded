#pragma once
#include "CoreMinimal.h"
#include "OnlineBridgeChatInterface.h"
#include "UObject/Object.h"
#include "OnlineBridgeChatInterfacePlayFab.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOnlineBridgeChatInterfacePlayFab : public UObject, public IOnlineBridgeChatInterface {
    GENERATED_BODY()
public:
    UOnlineBridgeChatInterfacePlayFab();
    
    // Fix for true pure virtual functions not being implemented
};

