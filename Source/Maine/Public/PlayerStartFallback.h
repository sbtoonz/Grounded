#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavigationObjectBase -FallbackName=NavigationObjectBase
#include "PlayerStartFallback.generated.h"

UCLASS()
class MAINE_API APlayerStartFallback : public ANavigationObjectBase {
    GENERATED_BODY()
public:
    APlayerStartFallback();
};

