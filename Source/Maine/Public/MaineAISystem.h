#pragma once
#include "CoreMinimal.h"
#include "AISystem.h"
#include "MaineAISystem.generated.h"

class UAITokenManager;

UCLASS(Blueprintable)
class MAINE_API UMaineAISystem : public UAISystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAITokenManager* TokenManager;
    
public:
    UMaineAISystem();
};

