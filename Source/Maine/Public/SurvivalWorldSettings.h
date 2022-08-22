#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSettings -FallbackName=WorldSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SurvivalWorldSettings.generated.h"

class UMusicSettings;

UCLASS()
class MAINE_API ASurvivalWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMusicSettings* MusicSettings;
    
    UPROPERTY(EditDefaultsOnly)
    float ElevationResolution;
    
public:
    ASurvivalWorldSettings();
    UFUNCTION(BlueprintPure)
    float PerformSurfaceTrace(FVector WorldLocation) const;
    
    UFUNCTION(BlueprintPure)
    float GetSurfaceElevation(FVector Location) const;
    
};

