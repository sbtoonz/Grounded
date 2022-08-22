#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "SurvivalMemoryReportSettings.generated.h"

UCLASS(Config=ProfileTools)
class USurvivalMemoryReportSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> LightingLevels;
    
    USurvivalMemoryReportSettings();
};

