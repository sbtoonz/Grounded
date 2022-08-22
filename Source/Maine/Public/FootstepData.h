#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "FootstepEntry.h"
#include "FootstepData.generated.h"

UCLASS()
class MAINE_API UFootstepData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFootstepEntry DefaultEffect;
    
    UPROPERTY(EditAnywhere)
    TArray<FFootstepEntry> OverrideEffects;
    
    UFootstepData();
};

