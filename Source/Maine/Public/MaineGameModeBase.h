#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
#include "MaineGameModeBase.generated.h"

UCLASS(NonTransient)
class MAINE_API AMaineGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    AMaineGameModeBase();
};

