#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameSession -FallbackName=GameSession
#include "SurvivalGameSession.generated.h"

UCLASS()
class MAINE_API ASurvivalGameSession : public AGameSession {
    GENERATED_BODY()
public:
    ASurvivalGameSession();
};

