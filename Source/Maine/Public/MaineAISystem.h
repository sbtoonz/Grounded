#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AISystem -FallbackName=AISystem
#include "MaineAISystem.generated.h"

class UAITokenManager;

UCLASS()
class MAINE_API UMaineAISystem : public UAISystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UAITokenManager* TokenManager;
    
public:
    UMaineAISystem();
};

