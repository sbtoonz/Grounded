#pragma once
#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "UObject/NoExportTypes.h"
#include "SurvivalWorldSettings.generated.h"

class UMusicSettings;

UCLASS(Blueprintable)
class MAINE_API ASurvivalWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMusicSettings* MusicSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElevationResolution;
    
public:
    ASurvivalWorldSettings();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float PerformSurfaceTrace(FVector WorldLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSurfaceElevation(FVector Location) const;
    
};

