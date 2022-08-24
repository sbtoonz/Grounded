#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FootstepEntry.h"
#include "FootstepData.generated.h"

UCLASS(Blueprintable)
class MAINE_API UFootstepData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFootstepEntry DefaultEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFootstepEntry> OverrideEffects;
    
    UFootstepData();
};

