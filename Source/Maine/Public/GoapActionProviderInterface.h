#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "GoapActionProviderInterface.generated.h"

class UGoapAction;
class USurvivalGameInstance;
class UObject;

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

