#pragma once
#include "CoreMinimal.h"
#include "Engine/NavigationObjectBase.h"
#include "PlayerStartFallback.generated.h"

UCLASS(Blueprintable)
class MAINE_API APlayerStartFallback : public ANavigationObjectBase {
    GENERATED_BODY()
public:
    APlayerStartFallback();
};

