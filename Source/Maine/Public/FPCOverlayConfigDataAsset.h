#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "FPCOverlayConfig.h"
#include "FPCOverlayConfigDataAsset.generated.h"

UCLASS(BlueprintType)
class MAINE_API UFPCOverlayConfigDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FFPCOverlayConfig> OverlayConfigs;
    
    UFPCOverlayConfigDataAsset();
};

