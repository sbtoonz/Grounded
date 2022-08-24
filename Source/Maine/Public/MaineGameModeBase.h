#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MaineGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class MAINE_API AMaineGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    AMaineGameModeBase();
};

