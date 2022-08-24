#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FPCOverlayConfig.h"
#include "FPCOverlayConfigDataAsset.generated.h"

UCLASS(Blueprintable)
class MAINE_API UFPCOverlayConfigDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFPCOverlayConfig> OverlayConfigs;
    
    UFPCOverlayConfigDataAsset();
};

