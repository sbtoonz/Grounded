#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GoapActionProviderInterface.generated.h"

class UObject;
class UGoapAction;
class USurvivalGameInstance;

UINTERFACE(Blueprintable, MinimalAPI)
class UGoapActionProviderInterface : public UInterface {
    GENERATED_BODY()
};

class IGoapActionProviderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UGoapAction*> AllocateGOAPActions(USurvivalGameInstance* GameInstance, UObject* InOwner) const;
    
};

