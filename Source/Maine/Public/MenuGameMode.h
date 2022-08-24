#pragma once
#include "CoreMinimal.h"
#include "MaineGameModeBase.h"
#include "MenuGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class MAINE_API AMenuGameMode : public AMaineGameModeBase {
    GENERATED_BODY()
public:
    AMenuGameMode();
};

