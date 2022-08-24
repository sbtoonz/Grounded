#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Engine/EngineTypes.h"
#include "AnimNotify_SetMovementMode.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class MAINE_API UAnimNotify_SetMovementMode : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovementMode> Mode;
    
    UAnimNotify_SetMovementMode();
};

