#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTService_DefaultFocus -FallbackName=BTService_DefaultFocus
#include "BTService_GameplayFocus.generated.h"

UCLASS()
class MAINE_API UBTService_GameplayFocus : public UBTService_DefaultFocus {
    GENERATED_BODY()
public:
    UBTService_GameplayFocus();
};

